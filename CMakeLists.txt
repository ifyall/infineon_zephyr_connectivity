# Copyright (c) 2022 Cypress Semiconductor Corporation.
#
# SPDX-License-Identifier: Apache-2.0

zephyr_library_named(modules_infineon_connectivity)

#########################################################################################
# BT firmware
#########################################################################################
# CYW43012
if(CONFIG_CYW43012)
zephyr_library_sources_ifdef(CONFIG_CYW43012_CYSBSYS_RP01 
      bluetooth-freertos/firmware/COMPONENT_43012/COMPONENT_CYSBSYS-RP01/COMPONENT_HCI-UART/w_bt_firmware_controller.c)

zephyr_library_sources_ifdef(CONFIG_CYW43012_MURATA_1LV 
      bluetooth-freertos/firmware/COMPONENT_43012/COMPONENT_MURATA-1LV/COMPONENT_HCI-UART/w_bt_firmware_controller.c)

zephyr_library_sources_ifdef(CONFIG_CYW43012_WM_BAC_CYW_50 
      bluetooth-freertos/firmware/COMPONENT_43012/COMPONENT_WM-BAC-CYW-50/COMPONENT_HCI-UART/w_bt_firmware_controller.c)
endif()

# CYW4343W
if(CONFIG_CYW4343W)
zephyr_library_sources_ifdef(CONFIG_CYW4343W_MURATA_1DX 
      bluetooth-freertos/firmware/COMPONENT_4343W/COMPONENT_MURATA-1DX/COMPONENT_HCI-UART/w_bt_firmware_controller.c)
endif()

# CYW43438
if(CONFIG_CYW43438)
zephyr_library_sources_ifdef(CONFIG_CYW43438_AW_CU427_P 
      bluetooth-freertos/firmware/COMPONENT_43438/COMPONENT_AW-CU427-P/COMPONENT_HCI-UART/w_bt_firmware_controller.c)
endif()

# CYW43439
if(CONFIG_CYW43439)
zephyr_library_sources_ifdef(CONFIG_CYW43439_CYW943439M2IPA1 
      bluetooth-freertos/firmware/COMPONENT_43439/COMPONENT_CYW943439M2IPA1/COMPONENT_HCI-UART/w_bt_firmware_controller.c)

zephyr_library_sources_ifdef(CONFIG_CYW43439_MURATA_1YN 
      bluetooth-freertos/firmware/COMPONENT_43439/COMPONENT_MURATA-1YN/COMPONENT_HCI-UART/w_bt_firmware_controller.c)
endif()

# CYW4373
if(CONFIG_CYW4373)
zephyr_library_sources_ifdef(CONFIG_CYW4373_STERLING_LWB5PLUS 
      bluetooth-freertos/firmware/COMPONENT_4373/COMPONENT_STERLING-LWB5plus/COMPONENT_HCI-UART/w_bt_firmware_controller.c)
endif()

######################################################################################### 
# PSoC 6 Cortex M0+ image
#########################################################################################
if(CONFIG_SOC_FAMILY_INFINEON_CAT1A)
  # PSoC 6 Cortex M0+ DeepSleep prebuilt image
  if(CONFIG_SOC_PSOC6_CM0P_SLEEP)
      zephyr_library_sources_ifdef(CONFIG_SOC_DIE_PSOC6_01 psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_01_cm0p_sleep.c)
      zephyr_library_sources_ifdef(CONFIG_SOC_DIE_PSOC6_02 psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_02_cm0p_sleep.c)
      zephyr_library_sources_ifdef(CONFIG_SOC_DIE_PSOC6_03 psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_03_cm0p_sleep.c)
      zephyr_library_sources_ifdef(CONFIG_SOC_DIE_PSOC6_04 psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_04_cm0p_sleep.c)
  endif()
endif()


######################################################################################### 
# WI-FI Host driver 
#########################################################################################
if(CONFIG_WIFI_CYW43XXX)
  # Add WHD includes
  zephyr_include_directories(wifi-host-driver)
  zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/inc)
  zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/src)
  zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/src/include)
  zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/resource_imp)
  
  # src
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_ap.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_buffer_api.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_cdc_bdc.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_chip.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_chip_constants.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_clm.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_debug.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_events.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_logging.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_management.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_network_if.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_resource_if.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_sdpcm.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_thread.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_utils.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_wifi.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_wifi_api.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/whd_wifi_p2p.c)

  # src/bus_protocols
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/bus_protocols/whd_bus.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/bus_protocols/whd_bus_common.c)
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/src/bus_protocols/whd_bus_sdio_protocol.c)
  
  # resources/resource_imp
  zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/resource_imp/whd_resources.c)
  
  # firmware/clm/nvram
  # CYW43012
  if(CONFIG_CYW43012)
    # firmware
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43012)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43012/43012C0_bin.c)
    
    # clm
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43012)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43012/43012C0_clm_blob.c)
    
    # nvram
    zephyr_include_directories_ifdef(CONFIG_CYW43012_CYSBSYS_RP01 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43012/COMPONENT_CYSBSYS-RP01)
    zephyr_include_directories_ifdef(CONFIG_CYW43012_MURATA_1LV 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43012/COMPONENT_MURATA-1LV)
    zephyr_include_directories_ifdef(CONFIG_CYW43012_WM_BAC_CYW_50 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43012/COMPONENT_WM-BAC-CYW-50)
  endif()
  
  # CYW4343W
  if(CONFIG_CYW4343W)
    # firmware
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_4343W)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_4343W/4343WA1_bin.c)
    
    # clm
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_4343W)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_4343W/4343WA1_clm_blob.c)
    
    # nvram
    zephyr_include_directories_ifdef(CONFIG_CYW4343W_MURATA_1DX 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_4343W/COMPONENT_MURATA-1DX)
  endif()
  
  # CYW43438
  if(CONFIG_CYW43438)
    # firmware
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43438)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43438/43438A1_bin.c)
    
    # clm
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43438)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43438/43438A1_clm_blob.c)
    
    # nvram
    zephyr_include_directories_ifdef(CONFIG_CYW43438_AW_CU427_P 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43438/COMPONENT_AW-CU427-P)
  endif()
  
  # CYW43439
  if(CONFIG_CYW43439)
    # firmware
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43439)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43439/43439A0_bin.c)
    
    # clm
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43439)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43439/43439A0_clm_blob.c)
    
    # nvram
    zephyr_include_directories_ifdef(CONFIG_CYW43439_CYW943439M2IPA1 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43439/COMPONENT_CYW943439M2IPA1)
    zephyr_include_directories_ifdef(CONFIG_CYW43439_CYW943439WLPTH_1 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43439/COMPONENT_CYW943439WLPTH_1)
    zephyr_include_directories_ifdef(CONFIG_CYW43439_MURATA_1YN 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43439/COMPONENT_MURATA-1YN)
  endif()

  # CYW4373
  if(CONFIG_CYW4373)
    # firmware
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_4373)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_4373/4373A0_bin.c)
    
    # clm
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_4373)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_4373/4373A0_clm_blob.c)
    
    # nvram
    zephyr_include_directories_ifdef(CONFIG_CYW4373_STERLING_LWB5PLUS 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_4373/COMPONENT_STERLING-LWB5plus)
  endif()
  
  # CYW43907
  if(CONFIG_CYW43907)
    # firmware
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43907)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/firmware/COMPONENT_43907/43909B0_bin.c)
    
    # clm
    zephyr_include_directories(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43907)
    zephyr_library_sources(wifi-host-driver/WiFi_Host_Driver/resources/clm/COMPONENT_43907/43909B0_clm_blob.c)
    
    # nvram
    zephyr_include_directories_ifdef(CONFIG_CYW43907_CYW943907AEVAL1F 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43907/COMPONENT_CYW943907AEVAL1F)
    zephyr_include_directories_ifdef(CONFIG_CYW43907_CYW954907AEVAL1F 
      wifi-host-driver/WiFi_Host_Driver/resources/nvram/COMPONENT_43907/COMPONENT_CYW954907AEVAL1F)
  endif() 
endif()
