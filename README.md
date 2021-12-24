# ESPHome-config

This repository has various ESPHome configs for my own made PCBs. Check https://enri.nl/?page=pcb for info about the PCBs.

## P1 - Smart Meter
### DSMR2/3/4/5 Wemos version
The [`p1.yaml`](p1.yaml) and [`p1-with-gas.yaml`](p1-with-gas.yaml) files have the basic configuration for my P1 PCB. The config only differs on the gas_delivered-sensor. ESPHome docs can be found [here](https://esphome.io/components/sensor/dsmr.html).

### DSMR5 ESP-01 version
The [`miniP1.yaml`](miniP1.yaml) file is for the mini version, used with an ESP-01.

### P1 - Heat (Stadsverwarming / Warmtelink)
If you have a 'warmtelink' P1 port for measuring heating (stadsverwarming / stadswarmte) the [`p1-heat/p1-heat.yaml`](p1-heat/p1-heat.yaml) can be used.
The [`uart_read_line_sensor.h`](uart_read_line_sensor.h) is also required while building the firmware.

## Modbus 

### Goodwe Solar (PV) inverters
The [`modbus-goodwe.yaml`](modbus-goodwe.yaml) file has the configuration for the [ESPHome Modbus component](https://esphome.io/components/modbus_controller.html) in combination with the Modbus readout of Goodwe Solar inverters (in my case a XS2500 and XS2000, but others should also work). 

### Eastron SDM
In [`eastron.yaml`](eastron.yaml) is the configuration for Eastron SDM modbus devices. More for this modbus device can be found [in the documentation of ESPHome](https://esphome.io/components/sensor/sdm_meter.html)

### HomEvap Humidifiers and coolers
In [`homevap.yaml`](homevap.yaml) is the configuration for [HomEvap](https://www.homevap.nl) devices. Currently only for reading values, but expected to have setting values soon (hardware already supports it, only the lambda functions in the yaml have to be written)

### Other modbus devices
Other modbus devices should also work, as long as the registers are known. A lot of information can be found [in the esphome docs](https://esphome.io/components/modbus_controller.html)

For example:
 - Nibe heatpumps
 - kWh-metering devices

## CC1101 Ventilation remotes (Itho/Duco)

### Itho ventilation remote
In [`itho.yaml`](itho.yaml) the configuration can be found for my CC1101 PCB. The repository for that can be found at [github](https://github.com/jodur/ESPHOME-ITHO)



## MH-z19 CO2
The [`mhz19b.yaml`](mhz19b.yaml) file has the basic configuration for my CO2-sensor shield for a MH-z19 co2 sensor. ESPHome docs are [here](https://esphome.io/components/sensor/mhz19.html).

## More information:
All documentation (installation, setup, updates, etc.) about ESPHome can be found at https://esphome.io