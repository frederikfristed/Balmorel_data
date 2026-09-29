PARAMETER CCS_DECO2COMP_G(GGG)  "Capture energy use as electricity (MWh_el per tCO2 captured), excl. CO2 compression"
* ------------------------------------------------------------------------------------------------
* Revision 2026-09-29. Compression is a separate technology and is excluded here.
* Basis: DEA (2021) Technology Data for Carbon Capture, Transport and Storage, 401.a/401.b:
*   regeneration heat 0.66-0.72 MWh/tCO2 (2030-2050), direct electricity 0.02-0.025 MWh/tCO2.
* A  0.10  steam-cycle CHP (ST/CC, BP and EXT): LP steam (~3 bar) extracted instead of expanding
*          to DH condenser pressure (~0.6 bar), ~0.1 MWh_el per MWh steam; capture heat recovered
*          to district heating as in DEA 401.
* B  0.18  steam-cycle condensing (ST/CC, CND): LP steam extracted instead of expanding to
*          condenser pressure (~0.05 bar), ~0.23 MWh_el per MWh steam; no DH recovery.
* C  0.28  no steam cycle (boilers, direct-fired, gas turbines, engines, SMR): regeneration heat
*          from high-temperature heat pump, COP 2.5 (Arpagaus et al. 2018, Energy 152:985).
* _CT-BIOMETH rows take the value of their parent unit.
* ------------------------------------------------------------------------------------------------
/
GNR_BO_NGASCCS_E-105_MS-5-MW_Y-2020                                                                                                                                               0.28
GNR_BO_NGASCCS_E-105_MS-5-MW_Y-2020_CT-BIOMETH                                                                                                                                    0.28
GNR_BO_NGASCCS_E-106_MS-5-MW_Y-2030                                                                                                                                               0.28
GNR_BO_NGASCCS_E-106_MS-5-MW_Y-2030_CT-BIOMETH                                                                                                                                    0.28
GNR_BO_NGASCCS_E-106_MS-5-MW_Y-2040                                                                                                                                               0.28
GNR_BO_NGASCCS_E-106_MS-5-MW_Y-2040_CT-BIOMETH                                                                                                                                    0.28
GNR_BO_NGASCCS_E-106_MS-5-MW_Y-2050                                                                                                                                               0.28
GNR_BO_NGASCCS_E-106_MS-5-MW_Y-2050_CT-BIOMETH                                                                                                                                    0.28
GNR_CC_NGASCCS_BP_E-51_SS-10-MW_Y-2020                                                                                                                                            0.10
GNR_CC_NGASCCS_BP_E-51_SS-10-MW_Y-2020_CT-BIOMETH                                                                                                                                 0.10
GNR_CC_NGASCCS_BP_E-53_SS-10-MW_Y-2030                                                                                                                                            0.10
GNR_CC_NGASCCS_BP_E-53_SS-10-MW_Y-2030_CT-BIOMETH                                                                                                                                 0.10
GNR_CC_NGASCCS_BP_E-54_SS-10-MW_Y-2040                                                                                                                                            0.10
GNR_CC_NGASCCS_BP_E-54_SS-10-MW_Y-2040_CT-BIOMETH                                                                                                                                 0.10
GNR_CC_NGASCCS_BP_E-55_SS-10-MW_Y-2050                                                                                                                                            0.10
GNR_CC_NGASCCS_BP_E-55_SS-10-MW_Y-2050_CT-BIOMETH                                                                                                                                 0.10
GNR_CC_NGASCCS_CND_E-51_SS-10-MW_Y-2020                                                                                                                                           0.18
GNR_CC_NGASCCS_CND_E-51_SS-10-MW_Y-2020_CT-BIOMETH                                                                                                                                0.18
GNR_CC_NGASCCS_CND_E-53_SS-10-MW_Y-2030                                                                                                                                           0.18
GNR_CC_NGASCCS_CND_E-53_SS-10-MW_Y-2030_CT-BIOMETH                                                                                                                                0.18
GNR_CC_NGASCCS_CND_E-54_SS-10-MW_Y-2040                                                                                                                                           0.18
GNR_CC_NGASCCS_CND_E-54_SS-10-MW_Y-2040_CT-BIOMETH                                                                                                                                0.18
GNR_CC_NGASCCS_CND_E-55_SS-10-MW_Y-2050                                                                                                                                           0.18
GNR_CC_NGASCCS_CND_E-55_SS-10-MW_Y-2050_CT-BIOMETH                                                                                                                                0.18
GNR_CC_NGASCCS_CND_E-59_LS-100-MW_Y-2020                                                                                                                                          0.18
GNR_CC_NGASCCS_CND_E-59_LS-100-MW_Y-2020_CT-BIOMETH                                                                                                                               0.18
GNR_CC_NGASCCS_CND_E-61_LS-100-MW_Y-2030                                                                                                                                          0.18
GNR_CC_NGASCCS_CND_E-61_LS-100-MW_Y-2030_CT-BIOMETH                                                                                                                               0.18
GNR_CC_NGASCCS_CND_E-62_LS-100-MW_Y-2040                                                                                                                                          0.18
GNR_CC_NGASCCS_CND_E-62_LS-100-MW_Y-2040_CT-BIOMETH                                                                                                                               0.18
GNR_CC_NGASCCS_CND_E-63_LS-100-MW_Y-2050                                                                                                                                          0.18
GNR_CC_NGASCCS_CND_E-63_LS-100-MW_Y-2050_CT-BIOMETH                                                                                                                               0.18
GNR_CC_NGASCCS_EXT_E-59_LS-100-MW_Y-2020                                                                                                                                          0.10
GNR_CC_NGASCCS_EXT_E-59_LS-100-MW_Y-2020_CT-BIOMETH                                                                                                                               0.10
GNR_CC_NGASCCS_EXT_E-61_LS-100-MW_Y-2030                                                                                                                                          0.10
GNR_CC_NGASCCS_EXT_E-61_LS-100-MW_Y-2030_CT-BIOMETH                                                                                                                               0.10
GNR_CC_NGASCCS_EXT_E-62_LS-100-MW_Y-2040                                                                                                                                          0.10
GNR_CC_NGASCCS_EXT_E-62_LS-100-MW_Y-2040_CT-BIOMETH                                                                                                                               0.10
GNR_CC_NGASCCS_EXT_E-63_LS-100-MW_Y-2050                                                                                                                                          0.10
GNR_CC_NGASCCS_EXT_E-63_LS-100-MW_Y-2050_CT-BIOMETH                                                                                                                               0.10
GNR_ENG_NGASCCS_BP_E-47_Y-2020                                                                                                                                                    0.28
GNR_ENG_NGASCCS_BP_E-47_Y-2020_CT-BIOMETH                                                                                                                                         0.28
GNR_ENG_NGASCCS_BP_E-48_Y-2030                                                                                                                                                    0.28
GNR_ENG_NGASCCS_BP_E-48_Y-2030_CT-BIOMETH                                                                                                                                         0.28
GNR_ENG_NGASCCS_BP_E-49_Y-2040                                                                                                                                                    0.28
GNR_ENG_NGASCCS_BP_E-49_Y-2040_CT-BIOMETH                                                                                                                                         0.28
GNR_ENG_NGASCCS_BP_E-50_Y-2050                                                                                                                                                    0.28
GNR_ENG_NGASCCS_BP_E-50_Y-2050_CT-BIOMETH                                                                                                                                         0.28
GNR_ENG_NGASCCS_CND_E-47_Y-2020                                                                                                                                                   0.28
GNR_ENG_NGASCCS_CND_E-47_Y-2020_CT-BIOMETH                                                                                                                                        0.28
GNR_ENG_NGASCCS_CND_E-48_Y-2030                                                                                                                                                   0.28
GNR_ENG_NGASCCS_CND_E-48_Y-2030_CT-BIOMETH                                                                                                                                        0.28
GNR_ENG_NGASCCS_CND_E-49_Y-2040                                                                                                                                                   0.28
GNR_ENG_NGASCCS_CND_E-49_Y-2040_CT-BIOMETH                                                                                                                                        0.28
GNR_ENG_NGASCCS_CND_E-50_Y-2050                                                                                                                                                   0.28
GNR_ENG_NGASCCS_CND_E-50_Y-2050_CT-BIOMETH                                                                                                                                        0.28
GNR_GT_NGASCCS_BP_E-37_SS-5-MW_Y-2020                                                                                                                                             0.28
GNR_GT_NGASCCS_BP_E-37_SS-5-MW_Y-2020_CT-BIOMETH                                                                                                                                  0.28
GNR_GT_NGASCCS_BP_E-39_SS-5-MW_Y-2030                                                                                                                                             0.28
GNR_GT_NGASCCS_BP_E-39_SS-5-MW_Y-2030_CT-BIOMETH                                                                                                                                  0.28
GNR_GT_NGASCCS_BP_E-40_SS-5-MW_Y-2040                                                                                                                                             0.28
GNR_GT_NGASCCS_BP_E-40_SS-5-MW_Y-2040_CT-BIOMETH                                                                                                                                  0.28
GNR_GT_NGASCCS_BP_E-40_SS-5-MW_Y-2050                                                                                                                                             0.28
GNR_GT_NGASCCS_BP_E-40_SS-5-MW_Y-2050_CT-BIOMETH                                                                                                                                  0.28
GNR_GT_NGASCCS_BP_E-42_LS-40-MW_Y-2020                                                                                                                                            0.28
GNR_GT_NGASCCS_BP_E-42_LS-40-MW_Y-2020_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_BP_E-43_LS-40-MW_Y-2030                                                                                                                                            0.28
GNR_GT_NGASCCS_BP_E-43_LS-40-MW_Y-2030_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_BP_E-44_LS-40-MW_Y-2040                                                                                                                                            0.28
GNR_GT_NGASCCS_BP_E-44_LS-40-MW_Y-2040_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_BP_E-44_LS-40-MW_Y-2050                                                                                                                                            0.28
GNR_GT_NGASCCS_BP_E-44_LS-40-MW_Y-2050_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_CND_E-37_SS-5-MW_Y-2020                                                                                                                                            0.28
GNR_GT_NGASCCS_CND_E-37_SS-5-MW_Y-2020_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_CND_E-39_SS-5-MW_Y-2030                                                                                                                                            0.28
GNR_GT_NGASCCS_CND_E-39_SS-5-MW_Y-2030_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_CND_E-40_SS-5-MW_Y-2040                                                                                                                                            0.28
GNR_GT_NGASCCS_CND_E-40_SS-5-MW_Y-2040_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_CND_E-40_SS-5-MW_Y-2050                                                                                                                                            0.28
GNR_GT_NGASCCS_CND_E-40_SS-5-MW_Y-2050_CT-BIOMETH                                                                                                                                 0.28
GNR_GT_NGASCCS_CND_E-42_LS-40-MW_Y-2020                                                                                                                                           0.28
GNR_GT_NGASCCS_CND_E-42_LS-40-MW_Y-2020_CT-BIOMETH                                                                                                                                0.28
GNR_GT_NGASCCS_CND_E-43_LS-40-MW_Y-2030                                                                                                                                           0.28
GNR_GT_NGASCCS_CND_E-43_LS-40-MW_Y-2030_CT-BIOMETH                                                                                                                                0.28
GNR_GT_NGASCCS_CND_E-44_LS-40-MW_Y-2040                                                                                                                                           0.28
GNR_GT_NGASCCS_CND_E-44_LS-40-MW_Y-2040_CT-BIOMETH                                                                                                                                0.28
GNR_GT_NGASCCS_CND_E-44_LS-40-MW_Y-2050                                                                                                                                           0.28
GNR_GT_NGASCCS_CND_E-44_LS-40-MW_Y-2050_CT-BIOMETH                                                                                                                                0.28
GNR_IND-BO_BGASCCS_E-93_MS-20-MW_Y-2020                                                                                                                                           0.28
GNR_IND-BO_BGASCCS_E-94_MS-20-MW_Y-2030                                                                                                                                           0.28
GNR_IND-BO_BGASCCS_E-95_MS-20-MW_Y-2040                                                                                                                                           0.28
GNR_IND-BO_BGASCCS_E-96_MS-20-MW_Y-2050                                                                                                                                           0.28
GNR_IND-BO_NGASCCS_E-93_MS-20-MW_Y-2020                                                                                                                                           0.28
GNR_IND-BO_NGASCCS_E-93_MS-20-MW_Y-2020_CT-BIOMETH                                                                                                                                0.28
GNR_IND-BO_NGASCCS_E-94_MS-20-MW_Y-2030                                                                                                                                           0.28
GNR_IND-BO_NGASCCS_E-94_MS-20-MW_Y-2030_CT-BIOMETH                                                                                                                                0.28
GNR_IND-BO_NGASCCS_E-95_MS-20-MW_Y-2040                                                                                                                                           0.28
GNR_IND-BO_NGASCCS_E-95_MS-20-MW_Y-2040_CT-BIOMETH                                                                                                                                0.28
GNR_IND-BO_NGASCCS_E-96_MS-20-MW_Y-2050                                                                                                                                           0.28
GNR_IND-BO_NGASCCS_E-96_MS-20-MW_Y-2050_CT-BIOMETH                                                                                                                                0.28
GNR_IND-BO_WOODCHICCS_E-90_MS-20-MW_Y-2020                                                                                                                                        0.28
GNR_IND-BO_WOODCHICCS_E-90_MS-20-MW_Y-2030                                                                                                                                        0.28
GNR_IND-BO_WOODCHICCS_E-90_MS-20-MW_Y-2040                                                                                                                                        0.28
GNR_IND-BO_WOODCHICCS_E-90_MS-20-MW_Y-2050                                                                                                                                        0.28
GNR_IND-DF_BGASCCS_E-100_MS-3-MW_Y-2020                                                                                                                                           0.28
GNR_IND-DF_NGASCCS_E-100_MS-3-MW_Y-2020                                                                                                                                           0.28
GNR_IND-DF_NGASCCS_E-100_MS-3-MW_Y-2020_CT-BIOMETH                                                                                                                                0.28
GNR_IND-DF_WOODCHICCS_E-100_MS-10-MW_Y-2020                                                                                                                                       0.28
$ifi %HYDROGEN%==yes GNR_STEAM-REFORMING-CCS_E-70_Y-2020                                                                                                                          0.28
GNR_ST_NGASCCS_BP_E-7_MS-15-MW_Y-2020                                                                                                                                             0.10
GNR_ST_NGASCCS_BP_E-7_MS-15-MW_Y-2020_CT-BIOMETH                                                                                                                                  0.10
GNR_ST_NGASCCS_CND_E-47_LS-400-MW_Y-2020                                                                                                                                          0.18
GNR_ST_NGASCCS_CND_E-47_LS-400-MW_Y-2020_CT-BIOMETH                                                                                                                               0.18
GNR_ST_NGASCCS_EXT_E-47_LS-400-MW_Y-2020                                                                                                                                          0.10
GNR_ST_NGASCCS_EXT_E-47_LS-400-MW_Y-2020_CT-BIOMETH                                                                                                                               0.10
GNR_ST_STRWCCS_BP_E-31_LS-132-MW-FEED_Y-2020                                                                                                                                      0.10
GNR_ST_STRWCCS_BP_E-31_LS-132-MW-FEED_Y-2030                                                                                                                                      0.10
GNR_ST_STRWCCS_BP_E-31_LS-132-MW-FEED_Y-2040                                                                                                                                      0.10
GNR_ST_STRWCCS_BP_E-31_LS-132-MW-FEED_Y-2050                                                                                                                                      0.10
GNR_ST_STRWCCS_CND_E-31_LS-132-MW-FEED_Y-2020                                                                                                                                     0.18
GNR_ST_STRWCCS_CND_E-31_LS-132-MW-FEED_Y-2030                                                                                                                                     0.18
GNR_ST_STRWCCS_CND_E-31_LS-132-MW-FEED_Y-2040                                                                                                                                     0.18
GNR_ST_STRWCCS_CND_E-31_LS-132-MW-FEED_Y-2050                                                                                                                                     0.18
GNR_ST_WOODCHICCS_BP_E-29_LS-600-MW-FEED_Y-2020                                                                                                                                   0.10
GNR_ST_WOODCHICCS_BP_E-29_LS-600-MW-FEED_Y-2030                                                                                                                                   0.10
GNR_ST_WOODCHICCS_BP_E-29_LS-600-MW-FEED_Y-2040                                                                                                                                   0.10
GNR_ST_WOODCHICCS_BP_E-29_LS-600-MW-FEED_Y-2050                                                                                                                                   0.10
GNR_ST_WOODCHICCS_CND_E-29_LS-600-MW-FEED_Y-2020                                                                                                                                  0.18
GNR_ST_WOODCHICCS_CND_E-29_LS-600-MW-FEED_Y-2030                                                                                                                                  0.18
GNR_ST_WOODCHICCS_CND_E-29_LS-600-MW-FEED_Y-2040                                                                                                                                  0.18
GNR_ST_WOODCHICCS_CND_E-29_LS-600-MW-FEED_Y-2050                                                                                                                                  0.18
GNR_ST_WOODPELCCS_BP_E-33_LS-800-MW-FEED_Y-2020                                                                                                                                   0.10
GNR_ST_WOODPELCCS_BP_E-33_LS-800-MW-FEED_Y-2030                                                                                                                                   0.10
GNR_ST_WOODPELCCS_BP_E-33_LS-800-MW-FEED_Y-2040                                                                                                                                   0.10
GNR_ST_WOODPELCCS_BP_E-33_LS-800-MW-FEED_Y-2050                                                                                                                                   0.10
GNR_ST_WOODPELCCS_CND_E-33_LS-800-MW-FEED_Y-2020                                                                                                                                  0.18
GNR_ST_WOODPELCCS_CND_E-33_LS-800-MW-FEED_Y-2030                                                                                                                                  0.18
GNR_ST_WOODPELCCS_CND_E-33_LS-800-MW-FEED_Y-2040                                                                                                                                  0.18
GNR_ST_WOODPELCCS_CND_E-33_LS-800-MW-FEED_Y-2050                                                                                                                                  0.18
/;

* Fallback for any CCS unit not listed above (non-steam-cycle value)
CCS_DECO2COMP_G(G)$(CCS_G(G) and not CCS_DECO2COMP_G(G)) = 0.28;
