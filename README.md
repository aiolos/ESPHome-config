# ESPHome-config

This repository has various ESPHome configs for my own made PCBs. Check https://enri.nl/?page=pcb for info about the PCBs.

## Modbus Goodwe Solar (PV) inverters
The `modbus-goodwe.yaml` file has the configuration for the [ESPHome Modbus component](https://esphome.io/components/modbus_controller.html) in combination with the Modbus readout of Goodwe Solar inverters (in my case a XS2500 and XS2000, but others should also work). 

Other modbus devices should also work, as long as the registers are known.

## P1 - Smart Meter
The `p1.yaml` file has the basic configuration for my P1 PCB. Adapt the config for the required sensor. ESPHome docs can be found [here](https://esphome.io/components/sensor/dsmr.html).

## MH-z19
The `mhz19b.yaml` file has the basic configuration for my CO2-sensor shield for a MH-z19 co2 sensor. ESPHome docs are [here](https://esphome.io/components/sensor/mhz19.html).

## More information:
All documentation (installation, setup, updates, etc.) about ESPHome can be found at https://esphome.io