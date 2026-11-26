SET APROCEXIMKAPNEW(YYY,IAAAE,IAAAI,PROC)     'Areas for possible location of new ProcExim or capacity expansion of existing ProcExim'                                                          
                                                                                                                                                                                                
/                                                                                                                                                                                               
*OBS FF                                                                                                                                                                                         
***CO2 pipelines                                                                                                                                                                                
2020                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
2025                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
2030                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
2035                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
2040                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
2045                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
2050                                                                                                                                   .    DK1_Large .    DK2_Large .    Transport_Pipeline_CO2
/                                                                                                                                                                                               
;                                                                                                                                                                                               
APROCEXIMKAPNEW(Y,IAAAE,IAAAI,PROC)$(ITRANSFROMTOPROC(PROC,IAAAE,IAAAI))=APROCEXIMKAPNEW(Y,'DK1_Large','DK2_Large',PROC);                                                                       
* No new pipeline to an offshore storage area in 2035: the shore-to-storage trunk is existing capacity in OPTIFLOW_PROCEXIMKAPFX.
APROCEXIMKAPNEW('2035',IAAAE,IAAAI,'Transport_Pipeline_CO2')$(AAAOPTIFLOW_Offshore(IAAAE) OR AAAOPTIFLOW_Offshore(IAAAI)) = NO;
