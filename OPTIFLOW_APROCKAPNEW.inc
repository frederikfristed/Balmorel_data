SET APROCKAPNEW(YYY,AAA,PROC)     'Areas for possible location of new Proc or capacity expansion of existing Proc'                                                                
*This is stablished according to economy of scale, where large plants can only be located when heat demand is high                                                                
                                                                                                                                                                                  
/                                                                                                                                                                                 
***CO2                                                                                                                                                                            
2020                                                                                                                                .    DK011_A .    CO2_DAC_20                  
2025                                                                                                                                .    DK011_A .    CO2_DAC_25                  
2030                                                                                                                                .    DK011_A .    CO2_DAC_30                  
2035                                                                                                                                .    DK011_A .    CO2_DAC_35                  
2040                                                                                                                                .    DK011_A .    CO2_DAC_40                  
2045                                                                                                                                .    DK011_A .    CO2_DAC_45                  
2050                                                                                                                                .    DK011_A .    CO2_DAC_50                  
                                                                                                                                                                                  
$ifi not %baloptCCS%==yes $goto NO_CCS                                                                                                                                            
2020                                                                                                                                .    DK011_A .    CO2_Seq_On_20               
2025                                                                                                                                .    DK011_A .    CO2_Seq_On_25               
2030                                                                                                                                .    DK011_A .    CO2_Seq_On_30               
2035                                                                                                                                .    DK011_A .    CO2_Seq_On_35               
2040                                                                                                                                .    DK011_A .    CO2_Seq_On_40               
2045                                                                                                                                .    DK011_A .    CO2_Seq_On_45               
2050                                                                                                                                .    DK011_A .    CO2_Seq_On_50               
                                                                                                                                                                                  
2020                                                                                                                                .    DK011_A .    CO2_Seq_Off_20              
2025                                                                                                                                .    DK011_A .    CO2_Seq_Off_25              
2030                                                                                                                                .    DK011_A .    CO2_Seq_Off_30              
2035                                                                                                                                .    DK011_A .    CO2_Seq_Off_35              
2040                                                                                                                                .    DK011_A .    CO2_Seq_Off_40              
2045                                                                                                                                .    DK011_A .    CO2_Seq_Off_45              
2050                                                                                                                                .    DK011_A .    CO2_Seq_Off_50              
$label NO_CCS                                                                                                                                                                     
                                                                                                                                                                                  
* OBS FF                                                                                                                                                                          
$ifi not %optiOCC%==yes $goto NO_OCC_MDO                                                                                                                                          
2030                                                                                                                                .    DK011_A .    OCC_30                      
2035                                                                                                                                .    DK011_A .    OCC_35                      
2040                                                                                                                                .    DK011_A .    OCC_40                      
2045                                                                                                                                .    DK011_A .    OCC_45                      
2050                                                                                                                                .    DK011_A .    OCC_50                      
$label NO_OCC_MDO                                                                                                                                                                 
                                                                                                                                                                                  
                                                                                                                                                                                  
                                                                                                                                                                                  
*OBS FF                                                                                                                                                                           
$ifi not %baloptgasbridge%==yes $goto NO_BIOGAS                                                                                                                                   
2020                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_20    
2025                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_25    
2030                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_30    
2035                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_35    
2040                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_40    
2045                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_45    
2050                                                                                                                                .    DK011_A .    Digestion_Tank_Manure_50    
                                                                                                                                                                                  
2020                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_20     
2025                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_25     
2030                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_30     
2035                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_35     
2040                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_40     
2045                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_45     
2050                                                                                                                                .    DK011_A .    Digestion_Tank_Straw_50     
                                                                                                                                                                                  
2020                                                                                                                                .    DK011_A .    Methanation_20              
2025                                                                                                                                .    DK011_A .    Methanation_25              
2030                                                                                                                                .    DK011_A .    Methanation_30              
2035                                                                                                                                .    DK011_A .    Methanation_35              
2040                                                                                                                                .    DK011_A .    Methanation_40              
2045                                                                                                                                .    DK011_A .    Methanation_45              
2050                                                                                                                                .    DK011_A .    Methanation_50              
                                                                                                                                                                                  
2020                                                                                                                                .    DK011_A .    Biogas_Upgrading_20         
2025                                                                                                                                .    DK011_A .    Biogas_Upgrading_25         
2030                                                                                                                                .    DK011_A .    Biogas_Upgrading_30         
2035                                                                                                                                .    DK011_A .    Biogas_Upgrading_35         
2040                                                                                                                                .    DK011_A .    Biogas_Upgrading_40         
2045                                                                                                                                .    DK011_A .    Biogas_Upgrading_45         
2050                                                                                                                                .    DK011_A .    Biogas_Upgrading_50         
                                                                                                                                                                                  
2020                                                                                                                                .    DK011_A .    Biogas_Liquefaction_20      
2025                                                                                                                                .    DK011_A .    Biogas_Liquefaction_25      
2030                                                                                                                                .    DK011_A .    Biogas_Liquefaction_30      
2035                                                                                                                                .    DK011_A .    Biogas_Liquefaction_35      
2040                                                                                                                                .    DK011_A .    Biogas_Liquefaction_40      
2045                                                                                                                                .    DK011_A .    Biogas_Liquefaction_45      
2050                                                                                                                                .    DK011_A .    Biogas_Liquefaction_50      
                                                                                                                                                                                  
2025                                                                                                                                .    DK011_A .    Pyrolysis_Straw_25          
2030                                                                                                                                .    DK011_A .    Pyrolysis_Straw_30          
2035                                                                                                                                .    DK011_A .    Pyrolysis_Straw_35          
2040                                                                                                                                .    DK011_A .    Pyrolysis_Straw_40          
2045                                                                                                                                .    DK011_A .    Pyrolysis_Straw_45          
2050                                                                                                                                .    DK011_A .    Pyrolysis_Straw_50          
$label NO_BIOGAS                                                                                                                                                                  
                                                                                                                                                                                  
***TG                                                                                                                                                                             
2020                                                                                                                                .    DK011_A .    TG_20                       
2025                                                                                                                                .    DK011_A .    TG_25                       
2030                                                                                                                                .    DK011_A .    TG_30                       
2035                                                                                                                                .    DK011_A .    TG_35                       
2040                                                                                                                                .    DK011_A .    TG_40                       
2045                                                                                                                                .    DK011_A .    TG_45                       
2050                                                                                                                                .    DK011_A .    TG_50                       
***Methanol                                                                                                                                                                       
2020                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_20    
2025                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_25    
2030                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_30    
2035                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_35    
2040                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_40    
2045                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_45    
2050                                                                                                                                .    DK011_A .    Methanol_synthesis_TG_50    
*                                                                                                                                                                                 
2020                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_20
2025                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_25
2030                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_30
2035                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_35
2040                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_40
2045                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_45
2050                                                                                                                                .    DK011_A .    Methanol_synthesis_biogas_50
                                                                                                                                                                                  
*                                                                                                                                                                                 
2020                                                                                                                                .    DK011_A .    EMethanol_synthesis_20      
2025                                                                                                                                .    DK011_A .    EMethanol_synthesis_25      
2030                                                                                                                                .    DK011_A .    EMethanol_synthesis_30      
2035                                                                                                                                .    DK011_A .    EMethanol_synthesis_35      
2040                                                                                                                                .    DK011_A .    EMethanol_synthesis_40      
2045                                                                                                                                .    DK011_A .    EMethanol_synthesis_45      
2050                                                                                                                                .    DK011_A .    EMethanol_synthesis_50      
*                                                                                                                                                                                 
*2020                                                                                                                               .    DK011_A .    Methanol_Upgrade_20         
*2025                                                                                                                               .    DK011_A .    Methanol_Upgrade_25         
*2030                                                                                                                               .    DK011_A .    Methanol_Upgrade_30         
*2035                                                                                                                               .    DK011_A .    Methanol_Upgrade_35         
*2040                                                                                                                               .    DK011_A .    Methanol_Upgrade_40         
*2045                                                                                                                               .    DK011_A .    Methanol_Upgrade_45         
*2050                                                                                                                               .    DK011_A .    Methanol_Upgrade_50         
***Ammonia                                                                                                                                                                        
2020                                                                                                                                .    DK011_A .    Ammonia_Synthesis_20        
2025                                                                                                                                .    DK011_A .    Ammonia_Synthesis_25        
2030                                                                                                                                .    DK011_A .    Ammonia_Synthesis_30        
2035                                                                                                                                .    DK011_A .    Ammonia_Synthesis_35        
2040                                                                                                                                .    DK011_A .    Ammonia_Synthesis_40        
2045                                                                                                                                .    DK011_A .    Ammonia_Synthesis_45        
2050                                                                                                                                .    DK011_A .    Ammonia_Synthesis_50        
***Jet and oil products                                                                                                                                                           
2020                                                                                                                                .    DK011_A .    BioFT_20                    
2025                                                                                                                                .    DK011_A .    BioFT_25                    
2030                                                                                                                                .    DK011_A .    BioFT_30                    
2035                                                                                                                                .    DK011_A .    BioFT_35                    
2040                                                                                                                                .    DK011_A .    BioFT_40                    
2045                                                                                                                                .    DK011_A .    BioFT_45                    
2050                                                                                                                                .    DK011_A .    BioFT_50                    
*                                                                                                                                                                                 
2020                                                                                                                                .    DK011_A .    BioFT_H2_20                 
2025                                                                                                                                .    DK011_A .    BioFT_H2_25                 
2030                                                                                                                                .    DK011_A .    BioFT_H2_30                 
2035                                                                                                                                .    DK011_A .    BioFT_H2_35                 
2040                                                                                                                                .    DK011_A .    BioFT_H2_40                 
2045                                                                                                                                .    DK011_A .    BioFT_H2_45                 
2050                                                                                                                                .    DK011_A .    BioFT_H2_50                 
*                                                                                                                                                                                 
2020                                                                                                                                .    DK011_A .    EFT_20                      
2025                                                                                                                                .    DK011_A .    EFT_25                      
2030                                                                                                                                .    DK011_A .    EFT_30                      
2035                                                                                                                                .    DK011_A .    EFT_35                      
2040                                                                                                                                .    DK011_A .    EFT_40                      
2045                                                                                                                                .    DK011_A .    EFT_45                      
2050                                                                                                                                .    DK011_A .    EFT_50                      
                                                                                                                                                                                  
***Ship capacities                                                                                                                                                                
                                                                                                                                                                                  
*Existing capacities                                                                                                                                                              
2025                                                                                                                                .    DK011_A .    Diesel_Legacy_Existing      
2025                                                                                                                                .    DK011_A .    Diesel_Tanker_Existing      
2025                                                                                                                                .    DK011_A .    LNG_Tanker_Existing         
                                                                                                                                                                                  
*New capacities                                                                                                                                                                   
2030                                                                                                                                .    DK011_A .    Diesel_ICE_Legacy           
2030                                                                                                                                .    DK011_A .    Diesel_ICE_Tanker           
2030                                                                                                                                .    DK011_A .    Diesel_ICE_Long             
2030                                                                                                                                .    DK011_A .    Diesel_ICE_Medium           
2030                                                                                                                                .    DK011_A .    Diesel_ICE_Short            
2030                                                                                                                                .    DK011_A .    Diesel_OCC_Legacy           
2030                                                                                                                                .    DK011_A .    Diesel_OCC_Tanker           
2030                                                                                                                                .    DK011_A .    Diesel_OCC_Long             
2030                                                                                                                                .    DK011_A .    Diesel_OCC_Medium           
2030                                                                                                                                .    DK011_A .    Diesel_OCC_Short            
2030                                                                                                                                .    DK011_A .    LNG_ICE_Tanker              
2030                                                                                                                                .    DK011_A .    LNG_ICE_Long                
2030                                                                                                                                .    DK011_A .    LNG_ICE_Medium              
2030                                                                                                                                .    DK011_A .    LNG_ICE_Short               
2030                                                                                                                                .    DK011_A .    LNG_OCC_Tanker              
2030                                                                                                                                .    DK011_A .    LNG_OCC_Long                
2030                                                                                                                                .    DK011_A .    LNG_OCC_Medium              
2030                                                                                                                                .    DK011_A .    LNG_OCC_Short               
2030                                                                                                                                .    DK011_A .    Methanol_ICE_Long           
2030                                                                                                                                .    DK011_A .    Methanol_ICE_Medium         
2030                                                                                                                                .    DK011_A .    Methanol_ICE_Short          
2030                                                                                                                                .    DK011_A .    Methanol_FC_Long            
2030                                                                                                                                .    DK011_A .    Methanol_FC_Medium          
2030                                                                                                                                .    DK011_A .    Methanol_FC_Short           
2030                                                                                                                                .    DK011_A .    Methanol_Retrofit_Legacy    
2030                                                                                                                                .    DK011_A .    Methanol_Retrofit_Tanker    
2030                                                                                                                                .    DK011_A .    Ammonia_ICE_Long            
2030                                                                                                                                .    DK011_A .    Ammonia_ICE_Medium          
2030                                                                                                                                .    DK011_A .    Ammonia_ICE_Short           
2030                                                                                                                                .    DK011_A .    Ammonia_FC_Long             
2030                                                                                                                                .    DK011_A .    Ammonia_FC_Medium           
2030                                                                                                                                .    DK011_A .    Ammonia_FC_Short            
2030                                                                                                                                .    DK011_A .    Ammonia_Retrofit_Tanker     
2030                                                                                                                                .    DK011_A .    Hydrogen_ICE_Medium         
2030                                                                                                                                .    DK011_A .    Hydrogen_ICE_Short          
2030                                                                                                                                .    DK011_A .    Hydrogen_FC_Medium          
2030                                                                                                                                .    DK011_A .    Hydrogen_FC_Short           
2030                                                                                                                                .    DK011_A .    Electricity_Short           
                                                                                                                                                                                  
/;                                                                                                                                                                                
                                                                                                                                                                                  
* Diesel ICE                                                                                                                                                                      
APROCKAPNEW(Y, 'DK011_A', 'Diesel_ICE_Legacy')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_ICE_Legacy');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Diesel_ICE_Tanker')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_ICE_Tanker');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Diesel_ICE_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_ICE_Long');                                                                 
APROCKAPNEW(Y, 'DK011_A', 'Diesel_ICE_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_ICE_Medium');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Diesel_ICE_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_ICE_Short');                                                               
                                                                                                                                                                                  
* Diesel ICE OCC                                                                                                                                                                  
APROCKAPNEW(Y, 'DK011_A', 'Diesel_OCC_Legacy')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_OCC_Legacy');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Diesel_OCC_Tanker')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_OCC_Tanker');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Diesel_OCC_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_OCC_Long');                                                                 
APROCKAPNEW(Y, 'DK011_A', 'Diesel_OCC_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_OCC_Medium');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Diesel_OCC_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Diesel_OCC_Short');                                                               
                                                                                                                                                                                  
* LNG ICE                                                                                                                                                                         
APROCKAPNEW(Y, 'DK011_A', 'LNG_ICE_Tanker')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_ICE_Tanker');                                                                   
APROCKAPNEW(Y, 'DK011_A', 'LNG_ICE_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_ICE_Long');                                                                       
APROCKAPNEW(Y, 'DK011_A', 'LNG_ICE_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_ICE_Medium');                                                                   
APROCKAPNEW(Y, 'DK011_A', 'LNG_ICE_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_ICE_Short');                                                                     
                                                                                                                                                                                  
* LNG ICE OCC                                                                                                                                                                     
APROCKAPNEW(Y, 'DK011_A', 'LNG_OCC_Tanker')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_OCC_Tanker');                                                                   
APROCKAPNEW(Y, 'DK011_A', 'LNG_OCC_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_OCC_Long');                                                                       
APROCKAPNEW(Y, 'DK011_A', 'LNG_OCC_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_OCC_Medium');                                                                   
APROCKAPNEW(Y, 'DK011_A', 'LNG_OCC_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'LNG_OCC_Short');                                                                     
                                                                                                                                                                                  
* Methanol ICE                                                                                                                                                                    
APROCKAPNEW(Y, 'DK011_A', 'Methanol_ICE_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_ICE_Long');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Methanol_ICE_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_ICE_Medium');                                                         
APROCKAPNEW(Y, 'DK011_A', 'Methanol_ICE_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_ICE_Short');                                                           
                                                                                                                                                                                  
* Methanol FC                                                                                                                                                                     
APROCKAPNEW(Y, 'DK011_A', 'Methanol_FC_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_FC_Long');                                                               
APROCKAPNEW(Y, 'DK011_A', 'Methanol_FC_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_FC_Medium');                                                           
APROCKAPNEW(Y, 'DK011_A', 'Methanol_FC_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_FC_Short');                                                             
                                                                                                                                                                                  
* Methanol retrofit                                                                                                                                                               
APROCKAPNEW(Y, 'DK011_A', 'Methanol_Retrofit_Legacy')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_Retrofit_Legacy');                                               
APROCKAPNEW(Y, 'DK011_A', 'Methanol_Retrofit_Tanker')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Methanol_Retrofit_Tanker');                                               
                                                                                                                                                                                  
* Ammonia ICE                                                                                                                                                                     
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_ICE_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_ICE_Long');                                                               
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_ICE_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_ICE_Medium');                                                           
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_ICE_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_ICE_Short');                                                             
                                                                                                                                                                                  
* Ammonia FC                                                                                                                                                                      
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_FC_Long')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_FC_Long');                                                                 
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_FC_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_FC_Medium');                                                             
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_FC_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_FC_Short');                                                               
                                                                                                                                                                                  
* Ammonia retrofit                                                                                                                                                                
APROCKAPNEW(Y, 'DK011_A', 'Ammonia_Retrofit_Tanker')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Ammonia_Retrofit_Tanker');                                                 
                                                                                                                                                                                  
* Hydrogen ICE                                                                                                                                                                    
APROCKAPNEW(Y, 'DK011_A', 'Hydrogen_ICE_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Hydrogen_ICE_Medium');                                                         
APROCKAPNEW(Y, 'DK011_A', 'Hydrogen_ICE_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Hydrogen_ICE_Short');                                                           
                                                                                                                                                                                  
* Hydrogen FC                                                                                                                                                                     
APROCKAPNEW(Y, 'DK011_A', 'Hydrogen_FC_Medium')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Hydrogen_FC_Medium');                                                           
APROCKAPNEW(Y, 'DK011_A', 'Hydrogen_FC_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Hydrogen_FC_Short');                                                             
                                                                                                                                                                                  
* Electricity                                                                                                                                                                     
APROCKAPNEW(Y, 'DK011_A', 'Electricity_Short')$(Y.val >= 2030) = APROCKAPNEW('2030', 'DK011_A', 'Electricity_Short');                                                             
                                                                                                                                                                                  
APROCKAPNEW(Y,AAA,PROC)$AAAOPTIFLOW(AAA)=APROCKAPNEW(Y,'DK011_A',PROC);                                                                                                           
