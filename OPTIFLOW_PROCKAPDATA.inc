SET  PROCKAPDATA(YYY,PROC,FLOW,IFLOWINOUT)    "Process data: capacity relative to FLOW and in/out direction ()"                                                                                   
/                                                                                                                                                                                                 
                                                                                                                                                                                                  
                                                                                                                                                                                                  
                                                                                                                                                                                                  
***CO2                                                                                                                                                                                            
2020                                                                                                            .    CO2_DAC_20                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_25                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_30                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_35                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_40                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_45                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_50                   .    CO2_FLOW            .    IFLOWINOUT_OUT    
***OBS FF                                                                                                                                                                                         
2020                                                                                                            .    Transport_Pipeline_CO2       .    CO2_FLOW            .    IFLOWINOUT_SYM_INV
                                                                                                                                                                                                  
$ifi not %optiOCC%==yes $goto NO_OCC_MDO                                                                                                                                                          
2020                                                                                                            .    OCC_30                       .    OCC_FLOW            .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_35                       .    OCC_FLOW            .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_40                       .    OCC_FLOW            .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_45                       .    OCC_FLOW            .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_50                       .    OCC_FLOW            .    IFLOWINOUT_IN     
$label NO_OCC_MDO                                                                                                                                                                                 
                                                                                                                                                                                                  
                                                                                                                                                                                                  
*------------------Sequestration------------------(OBS)                                                                                                                                           
2020                                                                                                            .    CO2_Seq_On_20                .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_25                .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_30                .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_35                .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_40                .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_45                .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_50                .    CO2_FLOW            .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    CO2_Seq_Off_20               .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_25               .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_30               .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_35               .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_40               .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_45               .    CO2_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_50               .    CO2_FLOW            .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Biogas supply                                                                                                                                                                                  
2020                                                                                                            .    Digestion_Tank_Manure_20     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Manure_25     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Manure_30     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Manure_35     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Manure_40     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Manure_45     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Manure_50     .    BIOMASS_FLOW_MANURE .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    Digestion_Tank_Straw_20      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Straw_25      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Straw_30      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Straw_35      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Straw_40      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Straw_45      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Digestion_Tank_Straw_50      .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***Biogas technologies                                                                                                                                                                            
2020                                                                                                            .    Methanation_20               .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_25               .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_30               .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_35               .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_40               .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_45               .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_50               .    SNG_FLOW            .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    Biogas_Upgrading_20          .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_25          .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_30          .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_35          .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_40          .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_45          .    SNG_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_50          .    SNG_FLOW            .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Pyrolysis Straw                                                                                                                                                                                
2020                                                                                                            .    Pyrolysis_Straw_25           .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_30           .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_35           .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_40           .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_45           .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_50           .    BIOMASS_FLOW_STRAW  .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***TG                                                                                                                                                                                             
2020                                                                                                            .    TG_20                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_25                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_30                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_35                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_40                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_45                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_50                        .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***Methanol                                                                                                                                                                                       
2020                                                                                                            .    Methanol_synthesis_TG_20     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_25     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_30     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_35     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_40     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_45     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_50     .    BIOSYNGAS_FLOW      .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    Methanol_synthesis_biogas_20 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_synthesis_biogas_25 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_synthesis_biogas_30 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_synthesis_biogas_35 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_synthesis_biogas_40 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_synthesis_biogas_45 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_synthesis_biogas_50 .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    EMethanol_synthesis_20       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_25       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_30       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_35       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_40       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_45       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_50       .    METHANOL_FLOW       .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    Methanol_Upgrade_20          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_Upgrade_25          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_Upgrade_30          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_Upgrade_35          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_Upgrade_40          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_Upgrade_45          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanol_Upgrade_50          .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Ammonia                                                                                                                                                                                        
2020                                                                                                            .    Ammonia_Synthesis_20         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_25         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_30         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_35         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_40         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_45         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_50         .    AMMONIA_FLOW        .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Jet and oil products                                                                                                                                                                           
2020                                                                                                            .    BioFT_20                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_25                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_30                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_35                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_40                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_45                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_50                     .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    BioFT_H2_20                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_H2_25                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_H2_30                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_H2_35                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_H2_40                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_H2_45                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
2020                                                                                                            .    BioFT_H2_50                  .    BIOMASS_FLOW        .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    EFT_20                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EFT_25                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EFT_30                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EFT_35                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EFT_40                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EFT_45                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EFT_50                       .    DROPIN_FLOW         .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
/;                                                                                                                                                                                                
                                                                                                                                                                                                  
PROCKAPDATA(Y,PROC,FLOW,IFLOWINOUT)=PROCKAPDATA('2020',PROC,FLOW,IFLOWINOUT);                                                                                                                     
