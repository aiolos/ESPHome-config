# ESPHome-config

This repository has various ESPHome configs for my own made PCBs. Check https://enri.nl/?page=pcb for info about the PCBs.

## Modbus 

### Goodwe Solar (PV) inverters
The `modbus-goodwe.yaml` file has the configuration for the [ESPHome Modbus component](https://esphome.io/components/modbus_controller.html) in combination with the Modbus readout of Goodwe Solar inverters (in my case a XS2500 and XS2000, but others should also work). 

### Eastron SDM
In `eastron.yaml` is the configuration for Eastron SDM modbus devices. More for this modbus device can be found [here](https://esphome.io/components/sensor/sdm_meter.html)

### Other modbus devices
Other modbus devices should also work, as long as the registers are known. A lot of information can be found [in the esphome docs](https://esphome.io/components/modbus_controller.html)

## P1 - Smart Meter
### Wemos version
The `p1.yaml` file has the basic configuration for my P1 PCB. Adapt the config for the required sensor. ESPHome docs can be found [here](https://esphome.io/components/sensor/dsmr.html).

### ESP-01 version
The `miniP1.yaml` file is for the mini version, used with a ESP-01.

### P1 - Heat (Stadsverwarming / Warmtelink)
If you have a 'warmtelink' P1 port for measuring heating (stadsverwarming / stadswarmte) the `p1-heat/p1-heat.yaml` can be used.
The `uart_read_line_sensor.h` is also required while building the .

## CC1101 Ventilation remotes (Itho/Duco)

### Itho ventilation remote
In `itho.yaml` the configuration can be found for my CC1101 PCB. The repository for that can be found at [github](https://github.com/jodur/ESPHOME-ITHO)

## MH-z19 CO2
The `mhz19b.yaml` file has the basic configuration for my CO2-sensor shield for a MH-z19 co2 sensor. ESPHome docs are [here](https://esphome.io/components/sensor/mhz19.html).

## More information:
All documentation (installation, setup, updates, etc.) about ESPHome can be found at https://esphome.io