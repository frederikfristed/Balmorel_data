TABLE PROCDATA(PROC,PROCDATASET)    "Process data"                                                                                          
                                                                                                                                            
*                                                          MEuro/unit/h                                                  Euro/GJ/h          
                                                           PROCINVCOST         PROCKAPVARIABLE PROCFROMYEAR PROCLIFETIME PROCFIXCOST        
                                                                                                                                            
* OBS FF                                                                                                                                    
Transport_Pipeline_CO2                                     0.143               1               2020         50           20                 
                                                                                                                                            
***CO2 DAC                                                                                                                                  
CO2_DAC_20                                                 5.84                1               2020         30           233600             
CO2_DAC_25                                                 4.4525              1               2025         30           178100             
CO2_DAC_30                                                 3.065               1               2030         30           122600             
CO2_DAC_35                                                 2.881               1               2035         30           115240             
CO2_DAC_40                                                 2.697               1               2040         30           107880             
CO2_DAC_45                                                 2.5975              1               2045         30           103900             
CO2_DAC_50                                                 2.498               1               2050         30           99920              
                                                                                                                                            
***OCC                                                                                                                                      
$ifi not %optiOCC%==yes $goto NO_OCC_MDO                                                                                                    
OCC_30                                                     0.0605              1               2030         25           2420               
OCC_35                                                     0.0605              1               2035         25           2420               
OCC_40                                                     0.0605              1               2040         25           2420               
OCC_45                                                     0.0605              1               2045         25           2420               
OCC_50                                                     0.0605              1               2050         25           2420               
$label NO_OCC_MDO                                                                                                                           
                                                                                                                                            
***CO2 Sequestration Onshore                                                                                                                
CO2_Seq_On_20                                              1.24524727272727    1               2020         30           12800              
CO2_Seq_On_25                                              1.18421776602875    1               2025         30           12200              
CO2_Seq_On_30                                              1.12617931240815    1               2030         30           11600              
CO2_Seq_On_35                                              1.07233784789791    1               2035         30           11050              
CO2_Seq_On_40                                              1.01849638338767    1               2040         30           10500              
CO2_Seq_On_45                                              1.01849638338767    1               2045         30           10500              
CO2_Seq_On_50                                              1.01849638338767    1               2050         30           10500              
                                                                                                                                            
***CO2 Sequestration Offshore                                                                                                               
CO2_Seq_Off_20                                             1.24524727272727    1               2020         30           12800              
CO2_Seq_Off_25                                             1.18421776602875    1               2025         30           12200              
CO2_Seq_Off_30                                             1.12617931240815    1               2030         30           11600              
CO2_Seq_Off_35                                             1.07233784789791    1               2035         30           11050              
CO2_Seq_Off_40                                             1.01849638338767    1               2040         30           10500              
CO2_Seq_Off_45                                             1.01849638338767    1               2045         30           10500              
CO2_Seq_Off_50                                             1.01849638338767    1               2050         30           10500              
                                                                                                                                            
***Biogas supply                                                                                                                            
Digestion_Tank_Manure_20                                   1.569198587517E-005 1               2020         20           0.001              
Digestion_Tank_Manure_25                                   1.490738658141E-005 1               2025         20           0.001              
Digestion_Tank_Manure_30                                   1.412278728765E-005 1               2030         20           0.001              
Digestion_Tank_Manure_35                                   1.376971760546E-005 1               2035         20           0.001              
Digestion_Tank_Manure_40                                   1.341664792327E-005 1               2040         20           0.001              
Digestion_Tank_Manure_45                                   1.306357824108E-005 1               2045         20           0.001              
Digestion_Tank_Manure_50                                   1.271050855888E-005 1               2050         20           0.001              
Digestion_Tank_Straw_20                                    5.19042609717E-005  1               2020         20           0.001              
Digestion_Tank_Straw_25                                    4.930904792312E-005 1               2025         20           0.001              
Digestion_Tank_Straw_30                                    4.671383487453E-005 1               2030         20           0.001              
Digestion_Tank_Straw_35                                    4.554598900267E-005 1               2035         20           0.001              
Digestion_Tank_Straw_40                                    4.437814313081E-005 1               2040         20           0.001              
Digestion_Tank_Straw_45                                    4.321029725894E-005 1               2045         20           0.001              
Digestion_Tank_Straw_50                                    4.204245138708E-005 1               2050         20           0.001              
                                                                                                                                            
***Biogas technologies                                                                                                                      
Methanation_20                                             0.423               1               2020         20           16920              
Methanation_25                                             0.388               1               2025         20           15520              
Methanation_30                                             0.353               1               2030         20           14120              
Methanation_35                                             0.317               1               2035         20           12680              
Methanation_40                                             0.282               1               2040         20           11280              
Methanation_45                                             0.247               1               2045         20           9880               
Methanation_50                                             0.212               1               2050         20           8480               
                                                                                                                                            
Biogas_Upgrading_20                                        0.0908249056941763  1               2020         20           2556.94862404588   
Biogas_Upgrading_25                                        0.0906122047151871  1               2025         20           2719.05916681038   
Biogas_Upgrading_30                                        0.0775574488698658  1               2030         20           2255.32906402921   
Biogas_Upgrading_35                                        0.0713369329822316  1               2035         20           2072.53759248121   
Biogas_Upgrading_40                                        0.0651164170945975  1               2040         20           1889.74612093322   
Biogas_Upgrading_45                                        0.064804653207653   1               2045         20           1774.18610634378   
Biogas_Upgrading_50                                        0.0644928893207086  1               2050         20           1658.62609175433   
                                                                                                                                            
***Pyrolysis Straw                                                                                                                          
Pyrolysis_Straw_25                                         0.343693361111111   1               2025         25           16000              
Pyrolysis_Straw_30                                         0.319176083333333   1               2030         25           15000              
Pyrolysis_Straw_35                                         0.306917444444444   1               2035         25           14600              
Pyrolysis_Straw_40                                         0.294658805555556   1               2040         25           14100              
Pyrolysis_Straw_45                                         0.282400166666667   1               2045         25           13700              
Pyrolysis_Straw_50                                         0.270141527777778   1               2050         25           13300              
                                                                                                                                            
*****TG                                                                                                                                     
TG_20                                                      0.234516737109375   1               2020         30           9394.07044078125   
TG_25                                                      0.2233492734375     1               2025         30           8946.733753125     
TG_30                                                      0.21271359375       1               2030         30           8520.6988125       
TG_35                                                      0.202584375         1               2035         30           8114.95125         
TG_40                                                      0.1929375           1               2040         30           7728.525           
TG_45                                                      0.18375             1               2045         30           7360.5             
TG_50                                                      0.175               1               2050         30           7010               
                                                                                                                                            
                                                                                                                                            
***Methanol                                                                                                                                 
Methanol_synthesis_TG_20                                   1.55316455696203    1               2020         30           17257.3839662447   
Methanol_synthesis_TG_25                                   1.55316455696203    1               2025         30           17257.3839662447   
Methanol_synthesis_TG_30                                   0.862869198312236   1               2030         30           11504.9226441632   
Methanol_synthesis_TG_35                                   0.744725844947364   1               2035         30           11417.7641392831   
Methanol_synthesis_TG_40                                   0.626582491582491   1               2040         30           11330.6056344031   
Methanol_synthesis_TG_45                                   0.529008545369305   1               2045         30           11417.7641392831   
Methanol_synthesis_TG_50                                   0.431434599156118   1               2050         30           11504.9226441631   
                                                                                                                                            
Methanol_synthesis_biogas_20                               0.79587925556638    1               2020         30           31835              
Methanol_synthesis_biogas_25                               0.79587925556638    1               2025         30           31835              
Methanol_synthesis_biogas_30                               0.636703404453104   1               2030         30           25470              
Methanol_synthesis_biogas_35                               0.622775517480692   1               2035         30           24910              
Methanol_synthesis_biogas_40                               0.60884763050828    1               2040         30           24355              
Methanol_synthesis_biogas_45                               0.60884763050828    1               2045         30           24355              
Methanol_synthesis_biogas_50                               0.60884763050828    1               2050         30           24355              
                                                                                                                                            
EMethanol_synthesis_20                                     0.373869346733668   1               2020         30           11215              
EMethanol_synthesis_25                                     0.373869346733668   1               2025         30           11215              
EMethanol_synthesis_30                                     0.301507537688442   1               2030         30           9045               
EMethanol_synthesis_35                                     0.283417085427136   1               2035         30           8505               
EMethanol_synthesis_40                                     0.265326633165829   1               2040         30           7960               
EMethanol_synthesis_45                                     0.253266331658291   1               2045         30           7600               
EMethanol_synthesis_50                                     0.241206030150754   1               2050         30           7235               
                                                                                                                                            
Methanol_Upgrade_20                                        0.0915570046861632  1               2020         30           3252               
Methanol_Upgrade_25                                        0.08976176930016    1               2025         30           3252               
Methanol_Upgrade_30                                        0.088001734608      1               2030         30           3252               
Methanol_Upgrade_35                                        0.0862762104        1               2035         30           3252               
Methanol_Upgrade_40                                        0.08458452          1               2040         30           3252               
Methanol_Upgrade_45                                        0.082926            1               2045         30           3252               
Methanol_Upgrade_50                                        0.0813              1               2050         30           3252               
                                                                                                                                            
***Ammonia                                                                                                                                  
Ammonia_Synthesis_20                                       0.468572107626325   1               2020         30           14055              
Ammonia_Synthesis_25                                       0.425909099518328   1               2025         30           12775              
Ammonia_Synthesis_30                                       0.38324609141033    1               2030         30           11495              
Ammonia_Synthesis_35                                       0.348351929254531   1               2035         30           10450              
Ammonia_Synthesis_40                                       0.313457767098732   1               2040         30           9405               
Ammonia_Synthesis_45                                       0.27688515335786    1               2045         30           8305               
Ammonia_Synthesis_50                                       0.240312539616988   1               2050         30           7210               
                                                                                                                                            
***Jet and oil products                                                                                                                     
BioFT_20                                                   0.351               1               2020         30           10483              
BioFT_25                                                   0.334               1               2025         30           9959               
BioFT_30                                                   0.317               1               2030         30           9461               
BioFT_35                                                   0.301               1               2035         30           8988               
BioFT_40                                                   0.286               1               2040         30           8539               
BioFT_45                                                   0.272               1               2045         30           8112               
BioFT_50                                                   0.258               1               2050         30           7706               
                                                                                                                                            
BioFT_H2_20                                                0.3861              1               2020         30           11531.3            
BioFT_H2_25                                                0.3674              1               2025         30           10954.9            
BioFT_H2_30                                                0.3487              1               2030         30           10407.1            
BioFT_H2_35                                                0.3311              1               2035         30           9886.8             
BioFT_H2_40                                                0.3146              1               2040         30           9392.9             
BioFT_H2_45                                                0.2992              1               2045         30           8923.2             
BioFT_H2_50                                                0.2838              1               2050         30           8476.6             
                                                                                                                                            
EFT_20                                                     0.620316666666667   1               2020         30           31015              
EFT_25                                                     0.546469444444444   1               2025         30           27325              
EFT_30                                                     0.472622222222222   1               2030         30           23630              
EFT_35                                                     0.398775            1               2035         30           19940              
EFT_40                                                     0.324927777777778   1               2040         30           16245              
EFT_45                                                     0.295388888888889   1               2045         30           14770              
EFT_50                                                     0.26585             1               2050         30           13295              
;                                                                                                                                           
                                                                                                                                            
PROCDATA(PROC,'PROCINVCOST')=PROCDATA(PROC,'PROCINVCOST');                                                                                  
