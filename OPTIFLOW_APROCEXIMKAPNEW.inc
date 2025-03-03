SET APROCEXIMKAPNEW(YYY,IAAAE,IAAAI,PROC)     'Areas for possible location of new ProcExim or capacity expansion of existing ProcExim'                                        
                                                                                                                                                                              
/                                                                                                                                                                             
*OBS FF                                                                                                                                                                       
***CO2 pipelines                                                                                                                                                              
2020                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
2025                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
2030                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
2035                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
2040                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
2045                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
2050                                                                                                                                   .    DK1_A .    DK2_A .    CO2_Pipeline
/                                                                                                                                                                             
;                                                                                                                                                                             
APROCEXIMKAPNEW(Y,IAAAE,IAAAI,PROC)$(ITRANSFROMTOPROC(PROC,IAAAE,IAAAI))=APROCEXIMKAPNEW(Y,'DK1_A','DK2_A',PROC);                                                             
