SET APROCKAPNEW(YYY,AAA,PROC)     'Areas for possible location of new Proc or capacity expansion of existing Proc'                                         
*This is stablished according to economy of scale, where large plants can only be located when heat demand is high                                         
                                                                                                                                                           
/                                                                                                                                                          
***CO2                                                                                                                                                     
2020                                                                                                               .    DK1_A .    CO2_DAC_20              
2025                                                                                                               .    DK1_A .    CO2_DAC_25              
2030                                                                                                               .    DK1_A .    CO2_DAC_30              
2035                                                                                                               .    DK1_A .    CO2_DAC_35              
2040                                                                                                               .    DK1_A .    CO2_DAC_40              
2045                                                                                                               .    DK1_A .    CO2_DAC_45              
2050                                                                                                               .    DK1_A .    CO2_DAC_50              
*                                                                                                                                                          
2020                                                                                                               .    DK1_A .    CO2_STO                 
2025                                                                                                               .    DK1_A .    CO2_STO                 
2030                                                                                                               .    DK1_A .    CO2_STO                 
2035                                                                                                               .    DK1_A .    CO2_STO                 
2040                                                                                                               .    DK1_A .    CO2_STO                 
2045                                                                                                               .    DK1_A .    CO2_STO                 
2050                                                                                                               .    DK1_A .    CO2_STO                 
                                                                                                                                                           
* OBS FF                                                                                                                                                   
$ifi not %baloptCCS%==yes $goto NO_CCS                                                                                                                     
2020                                                                                                               .    DK1_A .    CO2_Seq_20              
2025                                                                                                               .    DK1_A .    CO2_Seq_25              
2030                                                                                                               .    DK1_A .    CO2_Seq_30              
2035                                                                                                               .    DK1_A .    CO2_Seq_35              
2040                                                                                                               .    DK1_A .    CO2_Seq_40              
2045                                                                                                               .    DK1_A .    CO2_Seq_45              
2050                                                                                                               .    DK1_A .    CO2_Seq_50              
$label NO_CCS                                                                                                                                              
                                                                                                                                                           
***TG                                                                                                                                                      
2020                                                                                                               .    DK1_A .    TG_20                   
2025                                                                                                               .    DK1_A .    TG_25                   
2030                                                                                                               .    DK1_A .    TG_30                   
2035                                                                                                               .    DK1_A .    TG_35                   
2040                                                                                                               .    DK1_A .    TG_40                   
2045                                                                                                               .    DK1_A .    TG_45                   
2050                                                                                                               .    DK1_A .    TG_50                   
***Methanol                                                                                                                                                
2020                                                                                                               .    DK1_A .    Methanol_synthesis_TG_20
2025                                                                                                               .    DK1_A .    Methanol_synthesis_TG_25
2030                                                                                                               .    DK1_A .    Methanol_synthesis_TG_30
2035                                                                                                               .    DK1_A .    Methanol_synthesis_TG_35
2040                                                                                                               .    DK1_A .    Methanol_synthesis_TG_40
2045                                                                                                               .    DK1_A .    Methanol_synthesis_TG_45
2050                                                                                                               .    DK1_A .    Methanol_synthesis_TG_50
*                                                                                                                                                          
2020                                                                                                               .    DK1_A .    EMethanol_synthesis_20  
2025                                                                                                               .    DK1_A .    EMethanol_synthesis_25  
2030                                                                                                               .    DK1_A .    EMethanol_synthesis_30  
2035                                                                                                               .    DK1_A .    EMethanol_synthesis_35  
2040                                                                                                               .    DK1_A .    EMethanol_synthesis_40  
2045                                                                                                               .    DK1_A .    EMethanol_synthesis_45  
2050                                                                                                               .    DK1_A .    EMethanol_synthesis_50  
*                                                                                                                                                          
*2020                                                                                                              .    DK1_A .    EMethanol_Upgrade_20    
*2025                                                                                                              .    DK1_A .    EMethanol_Upgrade_25    
*2030                                                                                                              .    DK1_A .    EMethanol_Upgrade_30    
*2035                                                                                                              .    DK1_A .    EMethanol_Upgrade_35    
*2040                                                                                                              .    DK1_A .    EMethanol_Upgrade_40    
*2045                                                                                                              .    DK1_A .    EMethanol_Upgrade_45    
*2050                                                                                                              .    DK1_A .    EMethanol_Upgrade_50    
***Ammonia                                                                                                                                                 
2020                                                                                                               .    DK1_A .    Ammonia_Synthesis_20    
2025                                                                                                               .    DK1_A .    Ammonia_Synthesis_25    
2030                                                                                                               .    DK1_A .    Ammonia_Synthesis_30    
2035                                                                                                               .    DK1_A .    Ammonia_Synthesis_35    
2040                                                                                                               .    DK1_A .    Ammonia_Synthesis_40    
2045                                                                                                               .    DK1_A .    Ammonia_Synthesis_45    
2050                                                                                                               .    DK1_A .    Ammonia_Synthesis_50    
***Jet and oil products                                                                                                                                    
*2020                                                                                                              .    DK1_A .    BioJet_20               
*2025                                                                                                              .    DK1_A .    BioJet_25               
*2030                                                                                                              .    DK1_A .    BioJet_30               
*2035                                                                                                              .    DK1_A .    BioJet_35               
*2040                                                                                                              .    DK1_A .    BioJet_40               
*2045                                                                                                              .    DK1_A .    BioJet_45               
*2050                                                                                                              .    DK1_A .    BioJet_50               
*                                                                                                                                                          
*2020                                                                                                              .    DK1_A .    BioJet_H2_20            
*2025                                                                                                              .    DK1_A .    BioJet_H2_25            
*2030                                                                                                              .    DK1_A .    BioJet_H2_30            
*2035                                                                                                              .    DK1_A .    BioJet_H2_35            
*2040                                                                                                              .    DK1_A .    BioJet_H2_40            
*2045                                                                                                              .    DK1_A .    BioJet_H2_45            
*2050                                                                                                              .    DK1_A .    BioJet_H2_50            
*                                                                                                                                                          
*2020                                                                                                              .    DK1_A .    E_FT_20                 
*2025                                                                                                              .    DK1_A .    E_FT_25                 
*2030                                                                                                              .    DK1_A .    E_FT_30                 
*2035                                                                                                              .    DK1_A .    E_FT_35                 
*2040                                                                                                              .    DK1_A .    E_FT_40                 
*2045                                                                                                              .    DK1_A .    E_FT_45                 
*2050                                                                                                              .    DK1_A .    E_FT_50                 
/                                                                                                                                                          
;                                                                                                                                                          
APROCKAPNEW(Y,AAA,PROC)$AAAOPTIFLOW(AAA)=APROCKAPNEW(Y,'DK1_A',PROC);                                                                                      
