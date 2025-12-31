import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ADDRESS, CONF_ID

smart_evse_crc_ns = cg.esphome_ns.namespace("smartevse_crc")
SmartEVSECrcDeviceComponent = smart_evse_crc_ns.class_("SmartEVSECrc", cg.Component)

CONFIG_SCHEMA = (
    cv.Schema(
        {
            cv.GenerateID(): cv.declare_id(SmartEVSECrcDeviceComponent)
        }
    )
    .extend(cv.COMPONENT_SCHEMA)
)

MULTI_CONF = False
CODEOWNERS = ["@aiolos"]


async def to_code(config):
    id = config[CONF_ID]
    sensorbox = cg.new_Pvariable(id)

    await cg.register_component(sensorbox, config)

    return
