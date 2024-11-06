PARAMETER XHLOSS(IAAAE,IAAAI)  "Heat transmission loss between areas (calculated from exported quantity) (share)";  
                                                                                                                    
*Loss of High Temperature areas to Low Temperature areas is assumed to be 0 (they are in the same location)         
XHLOSS('BE_IND-HT','BE_IND-MT')=0;                                                                                  
XHLOSS('DE4-E_IND-HT','DE4-E_IND-MT')=0;                                                                            
XHLOSS('DE4-N_IND-HT','DE4-N_IND-MT')=0;                                                                            
XHLOSS('DE4-S_IND-HT','DE4-S_IND-MT')=0;                                                                            
XHLOSS('DE4-W_IND-HT','DE4-W_IND-MT')=0;                                                                            
XHLOSS('DK1_IND-HT','DK1_IND-MT')=0;                                                                                
XHLOSS('DK2_IND-HT','DK2_IND-MT')=0;                                                                                
XHLOSS('EE_IND-HT','EE_IND-MT')=0;                                                                                  
XHLOSS('FIN_IND-HT','FIN_IND-MT')=0;                                                                                
XHLOSS('FR_IND-HT','FR_IND-MT')=0;                                                                                  
XHLOSS('LT_IND-HT','LT_IND-MT')=0;                                                                                  
XHLOSS('LV_IND-HT','LV_IND-MT')=0;                                                                                  
XHLOSS('NL_IND-HT','NL_IND-MT')=0;                                                                                  
XHLOSS('NO1_IND-HT','NO1_IND-MT')=0;                                                                                
XHLOSS('NO2_IND-HT','NO2_IND-MT')=0;                                                                                
XHLOSS('NO3_IND-HT','NO3_IND-MT')=0;                                                                                
XHLOSS('NO4_IND-HT','NO4_IND-MT')=0;                                                                                
XHLOSS('NO5_IND-HT','NO5_IND-MT')=0;                                                                                
XHLOSS('PL_IND-HT','PL_IND-MT')=0;                                                                                  
XHLOSS('SE1_IND-HT','SE1_IND-MT')=0;                                                                                
XHLOSS('SE2_IND-HT','SE2_IND-MT')=0;                                                                                
XHLOSS('SE3_IND-HT','SE3_IND-MT')=0;                                                                                
XHLOSS('SE4_IND-HT','SE4_IND-MT')=0;                                                                                
XHLOSS('UK_IND-HT','UK_IND-MT')=0;                                                                                  
XHLOSS('BE_IND-MT','BE_IND-LT')=0;                                                                                  
XHLOSS('DE4-E_IND-MT','DE4-E_IND-LT')=0;                                                                            
XHLOSS('DE4-N_IND-MT','DE4-N_IND-LT')=0;                                                                            
XHLOSS('DE4-S_IND-MT','DE4-S_IND-LT')=0;                                                                            
XHLOSS('DE4-W_IND-MT','DE4-W_IND-LT')=0;                                                                            
XHLOSS('DK1_IND-MT','DK1_IND-LT')=0;                                                                                
XHLOSS('DK2_IND-MT','DK2_IND-LT')=0;                                                                                
XHLOSS('EE_IND-MT','EE_IND-LT')=0;                                                                                  
XHLOSS('FIN_IND-MT','FIN_IND-LT')=0;                                                                                
XHLOSS('FR_IND-MT','FR_IND-LT')=0;                                                                                  
XHLOSS('LT_IND-MT','LT_IND-LT')=0;                                                                                  
XHLOSS('LV_IND-MT','LV_IND-LT')=0;                                                                                  
XHLOSS('NL_IND-MT','NL_IND-LT')=0;                                                                                  
XHLOSS('NO1_IND-MT','NO1_IND-LT')=0;                                                                                
XHLOSS('NO2_IND-MT','NO2_IND-LT')=0;                                                                                
XHLOSS('NO3_IND-MT','NO3_IND-LT')=0;                                                                                
XHLOSS('NO4_IND-MT','NO4_IND-LT')=0;                                                                                
XHLOSS('NO5_IND-MT','NO5_IND-LT')=0;                                                                                
XHLOSS('PL_IND-MT','PL_IND-LT')=0;                                                                                  
XHLOSS('SE1_IND-MT','SE1_IND-LT')=0;                                                                                
XHLOSS('SE2_IND-MT','SE2_IND-LT')=0;                                                                                
XHLOSS('SE3_IND-MT','SE3_IND-LT')=0;                                                                                
XHLOSS('SE4_IND-MT','SE4_IND-LT')=0;                                                                                
XHLOSS('UK_IND-MT','UK_IND-LT')=0;                                                                                  
                                                                                                                    
*Loss from industry areas to other areas is 0 not do double count losses in distribution network                    
XHLOSS('BE_IND-LT','BE_A')=0;                                                                                       
XHLOSS('DE4-E_IND-LT','DE4-E_A')=0;                                                                                 
XHLOSS('DE4-N_IND-LT','DE4-N_A')=0;                                                                                 
XHLOSS('DE4-S_IND-LT','DE4-S_A')=0;                                                                                 
XHLOSS('DE4-W_IND-LT','DE4-W_A')=0;                                                                                 
XHLOSS('DK1_IND-LT','DK1_A')=0;                                                                                     
XHLOSS('DK2_IND-LT','DK2_A')=0;                                                                                     
XHLOSS('EE_IND-LT','EE_A')=0;                                                                                       
XHLOSS('FIN_IND-LT','FIN_A')=0;                                                                                     
XHLOSS('FR_IND-LT','FR_A')=0;                                                                                       
XHLOSS('LT_IND-LT','LT_A')=0;                                                                                       
XHLOSS('LV_IND-LT','LV_A')=0;                                                                                       
XHLOSS('NL_IND-LT','NL_A')=0;                                                                                       
XHLOSS('NO1_IND-LT','NO1_A')=0;                                                                                     
XHLOSS('NO2_IND-LT','NO2_A')=0;                                                                                     
XHLOSS('NO3_IND-LT','NO3_A')=0;                                                                                     
XHLOSS('NO4_IND-LT','NO4_A')=0;                                                                                     
XHLOSS('NO5_IND-LT','NO5_A')=0;                                                                                     
XHLOSS('PL_IND-LT','PL_A')=0;                                                                                       
XHLOSS('SE1_IND-LT','SE1_A')=0;                                                                                     
XHLOSS('SE2_IND-LT','SE2_A')=0;                                                                                     
XHLOSS('SE3_IND-LT','SE3_A')=0;                                                                                     
XHLOSS('SE4_IND-LT','SE4_A')=0;                                                                                     
XHLOSS('UK_IND-LT','UK_A')=0;                                                                                       
                                                                                                                    
XHLOSS('AT_IND-HT','AT_IND-MT')=0;                                                                                  
XHLOSS('AT_IND-MT','AT_IND-LT')=0;                                                                                  
XHLOSS('AT_IND-LT','AT_A')=0;                                                                                       
XHLOSS('CZ_IND-HT','CZ_IND-MT')=0;                                                                                  
XHLOSS('CZ_IND-MT','CZ_IND-LT')=0;                                                                                  
XHLOSS('CZ_IND-LT','CZ_A')=0;                                                                                       
XHLOSS('IT_IND-HT','IT_IND-MT')=0;                                                                                  
XHLOSS('IT_IND-MT','IT_IND-LT')=0;                                                                                  
XHLOSS('IT_IND-LT','IT_A')=0;                                                                                       
XHLOSS('CH_IND-HT','CH_IND-MT')=0;                                                                                  
XHLOSS('CH_IND-MT','CH_IND-LT')=0;                                                                                  
XHLOSS('CH_IND-LT','CH_A')=0;                                                                                       
XHLOSS('ES_IND-HT','ES_IND-MT')=0;                                                                                  
XHLOSS('ES_IND-MT','ES_IND-LT')=0;                                                                                  
XHLOSS('ES_IND-LT','ES_A')=0;                                                                                       
XHLOSS('PT_IND-HT','PT_IND-MT')=0;                                                                                  
XHLOSS('PT_IND-MT','PT_IND-LT')=0;                                                                                  
XHLOSS('PT_IND-LT','PT_A')=0;                                                                                       
XHLOSS('SK_IND-HT','SK_IND-MT')=0;                                                                                  
XHLOSS('SK_IND-MT','SK_IND-LT')=0;                                                                                  
XHLOSS('SK_IND-LT','SK_A')=0;                                                                                       
XHLOSS('HU_IND-HT','HU_IND-MT')=0;                                                                                  
XHLOSS('HU_IND-MT','HU_IND-LT')=0;                                                                                  
XHLOSS('HU_IND-LT','HU_A')=0;                                                                                       
XHLOSS('SI_IND-HT','SI_IND-MT')=0;                                                                                  
XHLOSS('SI_IND-MT','SI_IND-LT')=0;                                                                                  
XHLOSS('SI_IND-LT','SI_A')=0;                                                                                       
XHLOSS('HR_IND-HT','HR_IND-MT')=0;                                                                                  
XHLOSS('HR_IND-MT','HR_IND-LT')=0;                                                                                  
XHLOSS('HR_IND-LT','HR_A')=0;                                                                                       
XHLOSS('RO_IND-HT','RO_IND-MT')=0;                                                                                  
XHLOSS('RO_IND-MT','RO_IND-LT')=0;                                                                                  
XHLOSS('RO_IND-LT','RO_A')=0;                                                                                       
XHLOSS('BG_IND-HT','BG_IND-MT')=0;                                                                                  
XHLOSS('BG_IND-MT','BG_IND-LT')=0;                                                                                  
XHLOSS('BG_IND-LT','BG_A')=0;                                                                                       
XHLOSS('GR_IND-HT','GR_IND-MT')=0;                                                                                  
XHLOSS('GR_IND-MT','GR_IND-LT')=0;                                                                                  
XHLOSS('GR_IND-LT','GR_A')=0;                                                                                       
XHLOSS('IE_IND-HT','IE_IND-MT')=0;                                                                                  
XHLOSS('IE_IND-MT','IE_IND-LT')=0;                                                                                  
XHLOSS('IE_IND-LT','IE_A')=0;                                                                                       
XHLOSS('LU_IND-HT','LU_IND-MT')=0;                                                                                  
XHLOSS('LU_IND-MT','LU_IND-LT')=0;                                                                                  
XHLOSS('LU_IND-LT','LU_A')=0;                                                                                       
XHLOSS('AL_IND-HT','AL_IND-MT')=0;                                                                                  
XHLOSS('AL_IND-MT','AL_IND-LT')=0;                                                                                  
XHLOSS('AL_IND-LT','AL_A')=0;                                                                                       
XHLOSS('ME_IND-HT','ME_IND-MT')=0;                                                                                  
XHLOSS('ME_IND-MT','ME_IND-LT')=0;                                                                                  
XHLOSS('ME_IND-LT','ME_A')=0;                                                                                       
XHLOSS('MK_IND-HT','MK_IND-MT')=0;                                                                                  
XHLOSS('MK_IND-MT','MK_IND-LT')=0;                                                                                  
XHLOSS('MK_IND-LT','MK_A')=0;                                                                                       
XHLOSS('BA_IND-HT','BA_IND-MT')=0;                                                                                  
XHLOSS('BA_IND-MT','BA_IND-LT')=0;                                                                                  
XHLOSS('BA_IND-LT','BA_A')=0;                                                                                       
XHLOSS('RS_IND-HT','RS_IND-MT')=0;                                                                                  
XHLOSS('RS_IND-MT','RS_IND-LT')=0;                                                                                  
XHLOSS('RS_IND-LT','RS_A')=0;                                                                                       
XHLOSS('TR_IND-HT','TR_IND-MT')=0;                                                                                  
XHLOSS('TR_IND-MT','TR_IND-LT')=0;                                                                                  
XHLOSS('TR_IND-LT','TR_A')=0;                                                                                       
XHLOSS('MT_IND-HT','MT_IND-MT')=0;                                                                                  
XHLOSS('MT_IND-MT','MT_IND-LT')=0;                                                                                  
XHLOSS('MT_IND-LT','MT_A')=0;                                                                                       
XHLOSS('CY_IND-HT','CY_IND-MT')=0;                                                                                  
XHLOSS('CY_IND-MT','CY_IND-LT')=0;                                                                                  
XHLOSS('CY_IND-LT','CY_A')=0;                                                                                       
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
                                                                                                                    
