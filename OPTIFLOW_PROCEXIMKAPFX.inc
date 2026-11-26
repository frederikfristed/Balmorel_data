* Existing shore-to-storage CO2 pipeline capacity, deferred arm (tCO2/h).
* Equal to the injection capacity of the offshore storage area, both directions.

PARAMETER PROCEXIMKAPFX(YYY,IAAAE,IAAAI,PROC) "Existing Capacity of PROCEXIM (U/h)"
/
2035   . DK1_Large      . DK1_Offshore   . Transport_Pipeline_CO2 45.6621
2035   . DK1_Offshore   . DK1_Large      . Transport_Pipeline_CO2 45.6621
2035   . NL_A           . NL_Offshore    . Transport_Pipeline_CO2 285.3881
2035   . NL_Offshore    . NL_A           . Transport_Pipeline_CO2 285.3881
2035   . NO5_A1         . NO5_Offshore   . Transport_Pipeline_CO2 593.6073
2035   . NO5_Offshore   . NO5_A1         . Transport_Pipeline_CO2 593.6073
2035   . UK_A           . UK_Offshore    . Transport_Pipeline_CO2 970.3196
2035   . UK_Offshore    . UK_A           . Transport_Pipeline_CO2 970.3196
/;

* Existing capacity is read per year: the 2035 level holds in every later year.
PROCEXIMKAPFX(YYY,IAAAE,IAAAI,PROC)$(YYY.VAL GT 2035) = PROCEXIMKAPFX('2035',IAAAE,IAAAI,PROC);
