SET ALLOWEDTRANS(PROC, FLOW)                        
/                                                   
                                                    
*CO2                                                
                                                    
Transport_Pipeline_CO2       .    CO2_FLOW_FOSSIL   
Transport_Pipeline_CO2       .    CO2_FLOW_BIO      
Transport_Pipeline_CO2       .    CO2_FLOW          
                                                    
Transport_Truck_CO2          .    CO2_FLOW_FOSSIL   
Transport_Truck_CO2          .    CO2_FLOW_BIO      
Transport_Truck_CO2          .    CO2_FLOW          
                                                    
Transport_Ship_CO2           .    CO2_FLOW_FOSSIL   
Transport_Ship_CO2           .    CO2_FLOW_BIO      
Transport_Ship_CO2           .    CO2_FLOW          
                                                    
*Fuels                                              
                                                    
Transport_Truck_LHC          .    EJET_FLOW         
Transport_Truck_LHC          .    BIOJET_FLOW       
Transport_Truck_Methanol     .    METHANOL_FLOW     
Transport_Truck_Ammonia      .    AMMONIA_FLOW      
                                                    
Transport_Ship_LHC           .    EJET_FLOW         
Transport_Ship_LHC           .    BIOJET_FLOW       
Transport_Ship_Methanol      .    METHANOL_FLOW     
Transport_Ship_Ammonia       .    AMMONIA_FLOW      
                                                    
*Biomass                                            
                                                    
Transport_Truck_Straw        .    BIOMASS_FLOW_STRAW
Transport_Truck_Wood         .    BIOMASS_FLOW_WOOD 
                                                    
/;                                                  
