TABLE GMINF(YYY,CCCRRRAAA,FFF) 'Minimum fuel use (GJ) per year'
;

*Opsætning
*                                                                        STRAW     WOOD WOODWASTE BIOGAS    OTHERGAS RETORTGAS SHALE COAL PEAT NATGAS WOODCHIPS WOODPELLETS
*2016.DENMARK                                                            34600                    43700                                               24400     24000    
*2016.NORWAY                                                             77000                    1000                                                10800     54000    
*;                                                               

*$ifi not %baloptgasbridge%==yes $goto NO_OPTI_BIOGAS                                                                                                                      
*GMINF('2016',CCCRRRAAA,'BIOGAS')=EPS                                                                                                                                     
*$label NO_OPTI_BIOGAS
*;                                                                                                                                                     

*GMINF(Y,CCCRRRAAA,'STRAW')=GMINF('2016',CCCRRRAAA,'STRAW');                                                                                                                
*GMINF(Y,CCCRRRAAA,'BIOGAS')=GMINF('2016',CCCRRRAAA,'BIOGAS');                                                                                                                                                                                                                                                                                                                                      
*GMINF(Y,CCCRRRAAA,'WOODCHIPS')=GMINF('2016',CCCRRRAAA,'WOODCHIPS');                                                                                                       
*GMINF(Y,CCCRRRAAA,'WOODPELLETS')=GMINF('2016',CCCRRRAAA,'WOODPELLETS');

*Removing not needed data if stepwiseprice addon is activated                                                                                                             
*$ifi %STEPWISEPRICE%==yes GMAXF(Y,CCCRRRAAA,STEPWISEPRICE_FFF)=0; 