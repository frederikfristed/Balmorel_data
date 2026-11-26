* Europe-wide budget on new CO2 storage injection capacity (all vintages of CO2_Seq_On / CO2_Seq_Off),
* central case. One linear allowance per year after the commitment year, identical in both arms;
* no growth term on installed capacity. No allowance in 2035 (no new storage in the commitment year).
*
* Source: IEA CCUS Projects Database 2026, Storage and T&S projects in the model countries,
* single announced capacity.
* Slow: final investment decisions 2023-2025, 15.1 Mt/yr over 3 years = 5.03 MtCO2/yr per year.
* Fast: announced schedule 2025-2035, (163.3 - 1.5) / 10 = 16.18 MtCO2/yr per year.
* Central: geometric mean, 9.02 MtCO2/yr per year.
* Capacity unit tCO2/h per year (CO2_FLOW out). 1 MtCO2/yr = 114.16 tCO2/h.

PARAMETER EXPANSION_CO2STORAGE(YYY,GROWTHMODE) "Europe-wide budget on new CO2 storage injection capacity (tCO2/h per year)"

/
2040   . Y_LIN_ADD     1030.1797
2045   . Y_LIN_ADD     1030.1797
2050   . Y_LIN_ADD     1030.1797
/;
