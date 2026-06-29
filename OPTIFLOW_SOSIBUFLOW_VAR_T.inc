PARAMETER SOSIBUFLOW_VAR_T(AAA,PROC,FLOW,SSS,TTT) "Variation in some Source, Sink or Buffer Flows over the year"  
/                                                                                                                 
                                                                                                                  
/;                                                                                                                
                                                                                                                  
SOSIBUFLOW_VAR_T(IA,'Wood_Source','BIOMASS_FLOW_WOOD',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
SOSIBUFLOW_VAR_T(IA,'Straw_Source','BIOMASS_FLOW_STRAW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;          
SOSIBUFLOW_VAR_T(IA,'Manure_Source','BIOMASS_FLOW_MANURE',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;        
                                                                                                                  
SOSIBUFLOW_VAR_T(IA,'Aviation_Buffer','AVIATION_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
SOSIBUFLOW_VAR_T(IA,'Road_Buffer','ROAD_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                    
SOSIBUFLOW_VAR_T(IA,'Shipping_Buffer','SHIPPING_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
                                                                                                                  
SOSIBUFLOW_VAR_T(IA,'Jet_Source','JET_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                      
SOSIBUFLOW_VAR_T(IA,'Road_Diesel_Source','DIESEL_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;           
SOSIBUFLOW_VAR_T(IA,'Marine_Diesel_Source','DIESEL_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;         
SOSIBUFLOW_VAR_T(IA,'LNG_Source','LNG_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                      
                                                                                                                  
SOSIBUFLOW_VAR_T(IA,'CO2_Seq_Buffer','CO2_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                  
SOSIBUFLOW_VAR_T(IA,'Gas_Buffer','SNG_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                      
                                                                                                                  
SOSIBUFLOW_VAR_T(IA,'CO2_Source_DAC','CO2_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                  
SOSIBUFLOW_VAR_T(IA,'CO2_Source_Biogen','CO2_FLOW_BIO',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;           
SOSIBUFLOW_VAR_T(IA,'CO2_Source_Fossil','CO2_FLOW_FOSSIL',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;        
                                                                                                                  
SOSIBUFLOW_VAR_T(IA,'Import_Hydrogen','HYDROGEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
SOSIBUFLOW_VAR_T(IA,'Import_Methanol','METHANOL_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
SOSIBUFLOW_VAR_T(IA,'Import_Ammonia','AMMONIA_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;              
SOSIBUFLOW_VAR_T(IA,'Import_FT','EDIESEL_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                   
