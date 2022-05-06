### Infineon Connectivity Zephyr module
Zephyr module for Infineon Connectivity. This modules includes assets which has any binary files (e.g Bluetooth chip firmwares, CM0p prebuilt images, etc).


### What's Included?

- bluetooth-freertos - WICED Bluetooth host stack solution includes bluetooth stack library, bluetooth controller firmware and platform/os porting layer. Bluetooth stack library is designed for embedded device, it consumes less RAM/ROM usage but still keeps high performance. Zephyr CY43xxx HCI extension driver uses Bluetooth controller firmware from bluetooth-freertos asset.


- wifi-host-driver - The WHD is an independent, embedded Wi-Fi Host Driver that provides a set of APIs to interact with Infineon WLAN chips. The WHD is an independent firmware product that is easily portable to any embedded software environment, including popular IoT frameworks such as Mbed OS and Amazon FreeRTOS. Therefore, the WHD includes hooks for RTOS and TCP/IP network abstraction layers.


- psoc6cm0p - Prebuilt application images are executed on the Cortex M0+ core of the PSoC 6 dual-core MCU. The images are provided as C arrays ready to be compiled as part of the Cortex M4 application. The Cortex M0+ application code is placed to internal flash by the Cortex M4 linker script.

### How to install Infineon Connectivity Zephyr module?

1. Get the Zephyr source code
```
    west init
```

2. Add infineon_connectivity.yaml manifest in to zephyr/submanifests folder. The snipped of infineon_connectivity.yaml below:
```
    manifest:
    projects:
      - name: infineon_zephyr_connectivity
        url: http://devops-git.aus.cypress.com/zephyrproject-rtos/infineon_zephyr_connectivity.git
        submodules: true
        revision: develop
        path: modules/hal/infineon_connectivity
        groups:
          - hal
```

3. Update Zephyr modules
```
   west update
```
---
© Cypress Semiconductor Corporation, 2022.