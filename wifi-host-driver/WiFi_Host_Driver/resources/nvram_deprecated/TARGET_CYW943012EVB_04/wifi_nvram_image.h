/*
 * Copyright (c) 2019, Cypress Semiconductor Corporation, All Rights Reserved
 * SPDX-License-Identifier: LicenseRef-PBL
 *
 * This file and the related binary are licensed under the
 * Permissive Binary License, Version 1.0 (the "License");
 * you may not use these files except in compliance with the License.
 *
 * You may obtain a copy of the License here:
 * LICENSE-permissive-binary-license-1.0.txt and at
 * https://www.mbed.com/licenses/PBL-1.0
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INCLUDED_NVRAM_IMAGE_H_
#define INCLUDED_NVRAM_IMAGE_H_

#include <string.h>
#include <stdint.h>
#include "generated_mac_address.txt"

/*
 * CYW43012 Rev C0 WLCSP Murata module EVB
 * Rev History
 *  1. 6/22/2017 copied from bcm bcm943012mdcspad.txt
 *  2. 6/22/2017 updated boardtype, boardrev, macadd
 *  3. 7/10/2017 udpated swctrlmap*
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Character array of NVRAM image generated from
 * cyw943012csp_ty1LV.TXT
 */
static const char wifi_nvram_image[] =
    "NVRAMRev=$Rev: 351687 $"                                            "\x00"
    "sromrev=11"                                                         "\x00"
    "cckdigfilttype=4"                                                   "\x00"
    "cckpwroffset0=3"                                                    "\x00"
    "bphyscale=0x20"                                                     "\x00"
    "boardflags3=0x40000100"                                             "\x00"
    "vendid=0x14e4"                                                      "\x00"
    "devid=0xA804"                                                       "\x00"
    "manfid=0x2d0"                                                       "\x00"
    "prodid=0x052e"                                                      "\x00"
    "#macaddr=00:90:4c:2a:80:00"                                         "\x00"
    "macaddr=00:90:4c:2a:9${maclo12}"                                    "\x00"
    "#macaddr=00:90:4c:2a:80:80"                                         "\x00"
    "mac_clkgating=1"                                                    "\x00"
    "nocrc=1"                                                            "\x00"
    "boardtype=0x0842"                                                   "\x00"
    "boardrev=0x1100"                                                    "\x00"
    "xtalfreq=37400"                                                     "\x00"
    "boardflags2=0xc0000000"                                             "\x00"
    "boardflags=0x00000000"                                              "\x00"
    "etmode=0x11"                                                        "\x00"
    "extpagain2g=2"                                                      "\x00"
    "extpagain5g=2"                                                      "\x00"
    "ccode=0"                                                            "\x00"
    "regrev=0"                                                           "\x00"
    "antswitch = 0"                                                      "\x00"
    "rxgains2gelnagaina0=0"                                              "\x00"
    "rxgains2gtrisoa0=15"                                                "\x00"
    "rxgains2gtrelnabypa0=0"                                             "\x00"
    "rxgains5gelnagaina0=0"                                              "\x00"
    "rxgains5gtrisoa0=9"                                                 "\x00"
    "rxgains5gtrelnabypa0=0"                                             "\x00"
    "pdgain5g=0"                                                         "\x00"
    "pdgain2g=0"                                                         "\x00"
    "tworangetssi2g=0"                                                   "\x00"
    "tworangetssi5g=0"                                                   "\x00"
    "rxchain=1"                                                          "\x00"
    "txchain=1"                                                          "\x00"
    "aa2g=1"                                                             "\x00"
    "aa5g=1"                                                             "\x00"
    "tssipos5g=0"                                                        "\x00"
    "tssipos2g=0"                                                        "\x00"
    "femctrl=17"                                                         "\x00"
    "subband5gver=4"                                                     "\x00"
    "pa2ga0=-108,5627,-638"                                              "\x00"
    "# pa5ga0=-23,5933,-815,-29,5959,-814,-60,6093,-813,-50,6414,-836"   "\x00"
    "pa5ga0=-41,6533,-726,-29,6654,-746,9,6914,-772,12,7008,-806"        "\x00"
    "pdoffset40ma0=0"                                                    "\x00"
    "pdoffset80ma0=0"                                                    "\x00"
    "lowpowerrange2g=0"                                                  "\x00"
    "lowpowerrange5g=0"                                                  "\x00"
    "ed_thresh2g=-63"                                                    "\x00"
    "ed_thresh5g=-63"                                                    "\x00"
    "swctrlmap_2g=0x10101010,0x20202020,0x10101010,0x414040,0x3ff"       "\x00"
    "swctrlmapext_2g=0x00000100,0x01000100,0x01000100,0x010000,0x301"    "\x00"
    "swctrlmap_5g=0x80808080,0x00000000,0x80808080,0x404040,0x3ff"       "\x00"
    "swctrlmapext_5g=0x01000100,0x01000100,0x00000000,0x000100,0x303"    "\x00"
    "ulpnap=0"                                                           "\x00"
    "ulpadc=1"                                                           "\x00"
    "ssagc_en=0"                                                         "\x00"
    "ds1_nap=0"                                                          "\x00"
    "spurcan_ch_list_MHz=2422,2427,2432,2437,2462,2467,2472"             "\x00"
    "spurcan_sp_freq_KHz=9000,4000,-1000,-6000,6400,1400,-3600"          "\x00"
    "spurcan_NumSpur=7"                                                  "\x00"
    "epacal2g=0"                                                         "\x00"
    "epacal5g=0"                                                         "\x00"
    "papdcck=0"                                                          "\x00"
    "epacal2g_mask=0x3fff"                                               "\x00"
    "maxp2ga0=82"                                                        "\x00"
    "ofdmlrbw202gpo=0x0077"                                              "\x00"
    "dot11agofdmhrbw202gpo=0x8888"                                       "\x00"
    "mcsbw202gpo=0x99999999"                                             "\x00"
    "#mcsbw402gpo=0x99555533"                                            "\x00"
    "maxp5ga0=82,82,82,82"                                               "\x00"
    "mcsbw205glpo=0x99999999"                                            "\x00"
    "mcsbw205gmpo=0x99999999"                                            "\x00"
    "mcsbw205ghpo=0x99999999"                                            "\x00"
    "femctrlwar=0"                                                       "\x00"
    "use5gpllfor2g=1"                                                    "\x00"
    "pt5db_gaintbl=0"                                                    "\x00"

    "txwbpapden=1"                                                       "\x00"
    "wb_rxattn=0x0303"                                                   "\x00"
    "wb_txattn=0x0203"                                                   "\x00"
    "wb_papdcalidx=0x0808"                                               "\x00"
    "wb_papdcalidx_5g=0x00101010"                                        "\x00"
    "wb_eps_offset=0x01ba01a8"                                           "\x00"
    "wb_eps_offset_5g=0x01ba01bc"                                        "\x00"
    "wb_bbmult=0x2040"                                                   "\x00"
    "wb_bbmult_5g=0x00303030"                                            "\x00"
    "wb_calref_db=0x1c2e"                                                "\x00"
    "wb_tia_gain_mode=0x0606"                                            "\x00"
    "wb_txbuf_offset=0x1e1e"                                             "\x00"
    "wb_frac_del=0x6991"                                                 "\x00"
    "wb_g_frac_bits=0xab"                                                "\x00"


    "nb_rxattn=0x0404"                                                   "\x00"
    "nb_txattn=0x0404"                                                   "\x00"
    "nb_papdcalidx=0x1414"                                               "\x00"
    "nb_eps_offset=0x01d701d7"                                           "\x00"
    "nb_bbmult=0x5A5A"                                                   "\x00"
    "nb_tia_gain_mode=0x0000"                                            "\x00"
    "# AvVmid_c0=6,100,3,141,3,141,3,141,3,141"                          "\x00"
    "AvVmid_c0=6,100,7,70,7,70,7,70,7,70"                                "\x00"

    "tssisleep_en=0x5"                                                   "\x00"
    "lpflags=0x28"                                                       "\x00"
    "lpo_select=4"                                                       "\x00"

    "paprrmcsgamma2g=450,500,550,600,675,950,950,950,950,950,950,950"    "\x00"
    "paprrmcsgamma5g20=450,500,550,600,800,950,1100,1100,1100,1100,1100,1100"  "\x00"
    "#paprdis=1"                                                         "\x00"

    "#SW-Diversity Related parameters"                                   "\x00"
    "swdiv_en=1 #To enable SW-DIV feature"                               "\x00"
    "swdiv_gpio=0"                                                       "\x00"
    "swdiv_swctrl_en=2"                                                  "\x00"
    "swdiv_swctrl_ant0=0"                                                "\x00"
    "swdiv_swctrl_ant1=1"                                                "\x00"
    "swdiv_antmap2g_main=1"                                              "\x00"
    "swdiv_antmap5g_main=1"                                              "\x00"

    "swdiv_snrlim=10000 #Only enable sw_div if the snr on present antenna is less than 10000/8=1250"
    "swdiv_thresh=3000 #No.of rxpkts threshold"                          "\x00"
    "swdiv_snrthresh=24 #Difference between antenna's snr is greater than 24/8=3dB, then shift the antennas"
    "\x00\x00";

#ifdef __cplusplus
} /*extern "C" */
#endif

#else /* ifndef INCLUDED_NVRAM_IMAGE_H_ */
#error Wi-Fi NVRAM image included twice
#endif /* ifndef INCLUDED_NVRAM_IMAGE_H_ */
