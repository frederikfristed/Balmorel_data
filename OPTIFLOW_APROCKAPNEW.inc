SET APROCKAPNEW(YYY,AAA,PROC)     'Areas for possible location of new Proc or capacity expansion of existing Proc'                                                 
*This is stablished according to economy of scale, where large plants can only be located when heat demand is high                                                 
                                                                                                                                                                   
/                                                                                                                                                                  
***CO2                                                                                                                                                             
2020                                                                                                               .    DK1_Large .    CO2_DAC_20                  
2025                                                                                                               .    DK1_Large .    CO2_DAC_25                  
2030                                                                                                               .    DK1_Large .    CO2_DAC_30                  
2035                                                                                                               .    DK1_Large .    CO2_DAC_35                  
2040                                                                                                               .    DK1_Large .    CO2_DAC_40                  
2045                                                                                                               .    DK1_Large .    CO2_DAC_45                  
2050                                                                                                               .    DK1_Large .    CO2_DAC_50                  
                                                                                                                                                                   
$ifi not %baloptCCS%==yes $goto NO_CCS                                                                                                                             
2020                                                                                                               .    DK1_Large .    CO2_Seq_On_20               
2025                                                                                                               .    DK1_Large .    CO2_Seq_On_25               
2030                                                                                                               .    DK1_Large .    CO2_Seq_On_30               
2035                                                                                                               .    DK1_Large .    CO2_Seq_On_35               
2040                                                                                                               .    DK1_Large .    CO2_Seq_On_40               
2045                                                                                                               .    DK1_Large .    CO2_Seq_On_45               
2050                                                                                                               .    DK1_Large .    CO2_Seq_On_50               
                                                                                                                                                                   
2020                                                                                                               .    DK1_Large .    CO2_Seq_Off_20              
2025                                                                                                               .    DK1_Large .    CO2_Seq_Off_25              
2030                                                                                                               .    DK1_Large .    CO2_Seq_Off_30              
2035                                                                                                               .    DK1_Large .    CO2_Seq_Off_35              
2040                                                                                                               .    DK1_Large .    CO2_Seq_Off_40              
2045                                                                                                               .    DK1_Large .    CO2_Seq_Off_45              
2050                                                                                                               .    DK1_Large .    CO2_Seq_Off_50              
$label NO_CCS                                                                                                                                                      
                                                                                                                                                                   
* OBS FF                                                                                                                                                           
$ifi not %optiOCC%==yes $goto NO_OCC_MDO                                                                                                                           
2030                                                                                                               .    DK1_Large .    OCC_30                      
2035                                                                                                               .    DK1_Large .    OCC_35                      
2040                                                                                                               .    DK1_Large .    OCC_40                      
2045                                                                                                               .    DK1_Large .    OCC_45                      
2050                                                                                                               .    DK1_Large .    OCC_50                      
$label NO_OCC_MDO                                                                                                                                                  
                                                                                                                                                                   
                                                                                                                                                                   
                                                                                                                                                                   
*OBS FF                                                                                                                                                            
$ifi not %baloptgasbridge%==yes $goto NO_BIOGAS                                                                                                                    
2020                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_20    
2025                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_25    
2030                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_30    
2035                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_35    
2040                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_40    
2045                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_45    
2050                                                                                                               .    DK1_Large .    Digestion_Tank_Manure_50    
                                                                                                                                                                   
2020                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_20     
2025                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_25     
2030                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_30     
2035                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_35     
2040                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_40     
2045                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_45     
2050                                                                                                               .    DK1_Large .    Digestion_Tank_Straw_50     
                                                                                                                                                                   
2020                                                                                                               .    DK1_Large .    Methanation_20              
2025                                                                                                               .    DK1_Large .    Methanation_25              
2030                                                                                                               .    DK1_Large .    Methanation_30              
2035                                                                                                               .    DK1_Large .    Methanation_35              
2040                                                                                                               .    DK1_Large .    Methanation_40              
2045                                                                                                               .    DK1_Large .    Methanation_45              
2050                                                                                                               .    DK1_Large .    Methanation_50              
                                                                                                                                                                   
2020                                                                                                               .    DK1_Large .    Biogas_Upgrading_20         
2025                                                                                                               .    DK1_Large .    Biogas_Upgrading_25         
2030                                                                                                               .    DK1_Large .    Biogas_Upgrading_30         
2035                                                                                                               .    DK1_Large .    Biogas_Upgrading_35         
2040                                                                                                               .    DK1_Large .    Biogas_Upgrading_40         
2045                                                                                                               .    DK1_Large .    Biogas_Upgrading_45         
2050                                                                                                               .    DK1_Large .    Biogas_Upgrading_50         
                                                                                                                                                                   
2025                                                                                                               .    DK1_Large .    Pyrolysis_Straw_25          
2030                                                                                                               .    DK1_Large .    Pyrolysis_Straw_30          
2035                                                                                                               .    DK1_Large .    Pyrolysis_Straw_35          
2040                                                                                                               .    DK1_Large .    Pyrolysis_Straw_40          
2045                                                                                                               .    DK1_Large .    Pyrolysis_Straw_45          
2050                                                                                                               .    DK1_Large .    Pyrolysis_Straw_50          
$label NO_BIOGAS                                                                                                                                                   
                                                                                                                                                                   
***TG                                                                                                                                                              
2020                                                                                                               .    DK1_Large .    TG_20                       
2025                                                                                                               .    DK1_Large .    TG_25                       
2030                                                                                                               .    DK1_Large .    TG_30                       
2035                                                                                                               .    DK1_Large .    TG_35                       
2040                                                                                                               .    DK1_Large .    TG_40                       
2045                                                                                                               .    DK1_Large .    TG_45                       
2050                                                                                                               .    DK1_Large .    TG_50                       
***Methanol                                                                                                                                                        
2020                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_20    
2025                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_25    
2030                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_30    
2035                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_35    
2040                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_40    
2045                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_45    
2050                                                                                                               .    DK1_Large .    Methanol_synthesis_TG_50    
*                                                                                                                                                                  
2020                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_20
2025                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_25
2030                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_30
2035                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_35
2040                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_40
2045                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_45
2050                                                                                                               .    DK1_Large .    Methanol_synthesis_biogas_50
                                                                                                                                                                   
*                                                                                                                                                                  
2020                                                                                                               .    DK1_Large .    EMethanol_synthesis_20      
2025                                                                                                               .    DK1_Large .    EMethanol_synthesis_25      
2030                                                                                                               .    DK1_Large .    EMethanol_synthesis_30      
2035                                                                                                               .    DK1_Large .    EMethanol_synthesis_35      
2040                                                                                                               .    DK1_Large .    EMethanol_synthesis_40      
2045                                                                                                               .    DK1_Large .    EMethanol_synthesis_45      
2050                                                                                                               .    DK1_Large .    EMethanol_synthesis_50      
*                                                                                                                                                                  
*2020                                                                                                              .    DK1_Large .    Methanol_Upgrade_20         
*2025                                                                                                              .    DK1_Large .    Methanol_Upgrade_25         
*2030                                                                                                              .    DK1_Large .    Methanol_Upgrade_30         
*2035                                                                                                              .    DK1_Large .    Methanol_Upgrade_35         
*2040                                                                                                              .    DK1_Large .    Methanol_Upgrade_40         
*2045                                                                                                              .    DK1_Large .    Methanol_Upgrade_45         
*2050                                                                                                              .    DK1_Large .    Methanol_Upgrade_50         
***Ammonia                                                                                                                                                         
2020                                                                                                               .    DK1_Large .    Ammonia_Synthesis_20        
2025                                                                                                               .    DK1_Large .    Ammonia_Synthesis_25        
2030                                                                                                               .    DK1_Large .    Ammonia_Synthesis_30        
2035                                                                                                               .    DK1_Large .    Ammonia_Synthesis_35        
2040                                                                                                               .    DK1_Large .    Ammonia_Synthesis_40        
2045                                                                                                               .    DK1_Large .    Ammonia_Synthesis_45        
2050                                                                                                               .    DK1_Large .    Ammonia_Synthesis_50        
***Jet and oil products                                                                                                                                            
2020                                                                                                               .    DK1_Large .    BioFT_20                    
2025                                                                                                               .    DK1_Large .    BioFT_25                    
2030                                                                                                               .    DK1_Large .    BioFT_30                    
2035                                                                                                               .    DK1_Large .    BioFT_35                    
2040                                                                                                               .    DK1_Large .    BioFT_40                    
2045                                                                                                               .    DK1_Large .    BioFT_45                    
2050                                                                                                               .    DK1_Large .    BioFT_50                    
*                                                                                                                                                                  
2020                                                                                                               .    DK1_Large .    BioFT_H2_20                 
2025                                                                                                               .    DK1_Large .    BioFT_H2_25                 
2030                                                                                                               .    DK1_Large .    BioFT_H2_30                 
2035                                                                                                               .    DK1_Large .    BioFT_H2_35                 
2040                                                                                                               .    DK1_Large .    BioFT_H2_40                 
2045                                                                                                               .    DK1_Large .    BioFT_H2_45                 
2050                                                                                                               .    DK1_Large .    BioFT_H2_50                 
*                                                                                                                                                                  
2020                                                                                                               .    DK1_Large .    EFT_20                      
2025                                                                                                               .    DK1_Large .    EFT_25                      
2030                                                                                                               .    DK1_Large .    EFT_30                      
2035                                                                                                               .    DK1_Large .    EFT_35                      
2040                                                                                                               .    DK1_Large .    EFT_40                      
2045                                                                                                               .    DK1_Large .    EFT_45                      
2050                                                                                                               .    DK1_Large .    EFT_50                      
                                                                                                                                                                   
/                                                                                                                                                                  
;                                                                                                                                                                  
                                                                                                                                                                   
APROCKAPNEW(Y,AAA,PROC)$AAAOPTIFLOW(AAA)=APROCKAPNEW(Y,'DK1_Large',PROC);                                                                                          
