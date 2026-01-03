#pragma once

#include "esp_chip_info.h"

#include "esphome/core/component.h"

namespace esphome {
    namespace smartevse_crc {
        using namespace std;

        class SmartEVSECrc : public Component {
         public:
          explicit SmartEVSECrc();

          unsigned int CRC16(char* start, int len);
        };

    }  // namespace smartevse_crc
}  // namespace esphome
