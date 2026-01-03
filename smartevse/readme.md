# ESPHome SmartEVSEv1 Sensorbox simulator

This ESPHome configuration simulates a SmartEVSE Sensorbox V1 over the RS485 connection.

The sensorbox simulator sends the same value for all 3 phases on a 3-second interval. 

## How to use:
1. The ESPHome instance listens to an input number helper entity from Home Assistant: `input_number.evse_sensorbox_current`
2. Update this evse_sensorbox_current value with the current you want to simulate. 
   - I send the maximum current of my 3 phases.
3. ESPHome reports back over the `sensor.smartevse_evse_sensorbox_current_received` value. This should be the value you just send. 

## Hardware
I used a Wemos ESP32S2 (https://www.wemos.cc/en/latest/s2/s2_mini.html) and a MAX485 RS485 module.

## References
This simulator was made with the use of the original SmartEVSE source, which can be found here: https://github.com/SmartEVSE
