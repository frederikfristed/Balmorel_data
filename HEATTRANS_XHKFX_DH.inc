PARAMETER XHKFX_DH(YYY,IAAAI,IAAAE) "Exogenous heat transmission capacity for individual users connected to district heating (MW) (parameter calculated for output processing only, NOT USED IN OPTIMIZATIONS)"
*Estimated based on the peak demand of heat linked to the area and a security factor of 25%
/

2016     .       DK2_A       	 .       DK2_A 			 4659.01414659    
2016     .       DK1_A       	 .       DK1_A 			 7128.1802087     
2016     .       FIN_A       	 .       FIN_A 			 21520.3400595 
2016     .       NO1_A       	 .       NO1_A 			 1671.4163118 
2016     .       NO2_A           .       NO2_A           243.2422315
2016     .       NO3_A           .       NO3_A           466.0481104
2016     .       NO4_A           .       NO4_A           124.9954175
2016     .       NO5_A           .       NO5_A           170.6078003
2016     .       SE1_A           .       SE1_A           1599.5844764
2016     .       SE2_A           .       SE2_A           2371.7281099
2016     .       SE3_A           .       SE3_A           21653.98281
2016     .       SE4_A           .       SE4_A           5161.1253798
2016     .       DE4-N_A         .       DE4-N_A         4140.925242
2016     .       DE4-W_A         .       DE4-W_A         11887.83908
2016     .       DE4-E_A         .       DE4-E_A         12844.92453
2016     .       DE4-S_A         .       DE4-S_A         8378.525782
2016     .       PL_A            .       PL_A            31520.34283
2016     .       UK_A            .       UK_A            1138.835004
2016     .       EE_A            .       EE_A            2370.2244363
2016     .       LV_A            .       LV_A            6250.913028
2016     .       LT_A            .       LT_A            7154.6044256
2016     .       AT_A            .       AT_A            387.3930411
2016     .       CZ_A            .       CZ_A            1115.020639

/;

XHKFX_DH(Y,IAI,IAE)$XHKFX_DH('2016',IAI,IAE)=XHKFX_DH('2016',IAI,IAE);