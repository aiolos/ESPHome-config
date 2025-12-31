#include "smartevse_crc.h"

#define TAG "smartevse_crc"

namespace esphome {
namespace smartevse_crc {
    SmartEVSECrc::SmartEVSECrc() {}

    // From SmartEVSEv1 source code
    // Poly used is x^16+x^12+x^5+x
    // GOODCRC: 0x0f47 (CRC from message incl CRC)
    unsigned int SmartEVSECrc::CRC16(char* buf, int len)
    {
        unsigned int crc = 0xffff;

        unsigned int c;
        int i;
        while (len--) {
            c = *buf;
            for (i = 0; i < 8; i++) {
                if ((crc ^ c) & 1) crc = (crc >> 1)^0x8408;
                else crc >>= 1;
                c >>= 1;
            }
            buf++;
        }
        crc = (unsigned int) (crc ^ 0xFFFF);

        return crc;
    }
}
}
