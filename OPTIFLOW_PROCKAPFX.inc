* Existing CO2 storage injection capacity, deferred arm (operational or under construction) (tCO2/h).

PARAMETER PROCKAPFX(YYY,AAA,PROC,FLOW,IFLOWINOUT) "Capacity of Process (U/h)"
/
2035   . DK1_Offshore   . CO2_Seq_Off_35   . CO2_FLOW . IFLOWINOUT_OUT 45.6621
2035   . NL_Offshore    . CO2_Seq_Off_35   . CO2_FLOW . IFLOWINOUT_OUT 285.3881
2035   . NO5_Offshore   . CO2_Seq_Off_35   . CO2_FLOW . IFLOWINOUT_OUT 593.6073
2035   . UK_Offshore    . CO2_Seq_Off_35   . CO2_FLOW . IFLOWINOUT_OUT 970.3196
/;

* Existing capacity is read per year: the 2035 level holds in every later year.
PROCKAPFX(YYY,AAA,PROC,FLOW,IFLOWINOUT)$(YYY.VAL GT 2035) = PROCKAPFX('2035',AAA,PROC,FLOW,IFLOWINOUT);
