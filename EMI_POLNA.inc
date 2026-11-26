* Europe-wide CO2 cap for the modelled energy sectors (t CO2) = 1990 CO2 of these sectors in the
* 19 model countries x the EU Climate Law trajectory versus 1990.
* Base 2,708.0 Mt CO2 (UNFCCC inventory, EEA 2022): public electricity and heat, manufacturing
* combustion, commercial and residential combustion, and domestic and international aviation and
* navigation at 67% (the modelled share of their 2050 demand).
* Multipliers: 2030 0.45 (-55 %), 2035 0.275, 2040 0.10 (-90 % net), 2045 0.05, 2050 0 (net zero);
* 2035 and 2045 are midpoints.
* Other sectors and LULUCF are outside the cap; the cap is never negative.

TABLE EMI_POLNA(YYY,GROUP,EMIPOLSET) 'Emission policy data; default for the LIM_ entries: 0 implies irrelevant, EPS implies no emission permitted (aggregated countries)'

      ALL_SECTORS . LIM_CO2

2025           1.404768e+09
2030           1.218594e+09
2035           7.446961e+08
2040           2.707986e+08
2045           1.353993e+08
2050                    EPS
;
