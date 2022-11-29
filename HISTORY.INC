RPTSCHED
	FIP WELLS /

-- RPTRST
--	BASIC=6 FLOWS /

GRUPTREE
'GROUP1'	FIELD /
/

WELSPECS
--'NA1A' is the simulation well name used to describe flow from 'NA1A;Tubing 1'
--'NA2' is the simulation well name used to describe flow from 'NA2;Tubing 1'
--'NA3D' is the simulation well name used to describe flow from 'NA3D;Tubing 1'
--'RJS19' is the simulation well name used to describe flow from 'RJS19;Tubing 1'

  NA1A 'GROUP1' 38 36 1* OIL /
  NA2 'GROUP1' 21 36 1* OIL /
  NA3D 'GROUP1' 44 43 1* OIL /
  RJS19 'GROUP1' 31 27 1* OIL /
/
 
COMPDAT
  NA1A 38 36 1 3 OPEN 2* 0.152 /
  NA1A 38 36 6 13 OPEN 2* 0.152 /
  NA1A 38 36 15 19 OPEN 2* 0.152 /
 
  NA2 21 36 1 3 OPEN 2* 0.152 /
  NA2 21 36 6 12 OPEN 2* 0.152 /

  NA3D 44 43 1 3 OPEN 2* 0.152 /
  NA3D 44 43 6 11 OPEN 2* 0.152 /

  RJS19 31 27 1 3 OPEN 2* 0.152 /  
  RJS19 31 27 6 13 OPEN 2* 0.152 /
  RJS19 31 27 15 16 OPEN 2* 0.152 /
  /

WCONPROD
  NA1A 1* LRAT 1* 1* 1* 3000.00 1* 35.3039 /
  NA2 1* LRAT 1* 1* 1* 3000.00 1* 35.3039 /
  NA3D 1* LRAT 1* 1* 1* 3000.00 1* 35.3039 /
  RJS19 1* LRAT 1* 1* 1* 3000.00 1* 35.3039 /
  /

WELOPEN
'*'  SHUT /
/

----------------------
WELOPEN
	NA1A OPEN /
/
WELTARG 
  NA1A  LRAT     0.0 /
 /
----------------------
DATES 
30 JUN 2013 /      -- 30 dias
/
WELTARG 
  NA1A  LRAT  1998.0 /
 /
----------------------
DATES 
31 JLY 2013 /      -- 61 dias
/
WELTARG 
  NA1A  LRAT  2015.0 /
 /
----------------------
DATES 
31 AUG 2013 /      -- 92 dias
/
WELTARG 
  NA1A  LRAT  1934.0 /
 /
----------------------
DATES 
30 SEP 2013 /      -- 122 dias
/
WELTARG 
  NA1A  LRAT  2014.0 /
 /
----------------------
DATES 
31 OCT 2013 /      -- 153 dias
/
WELTARG 
  NA1A  LRAT  1975.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
30 NOV 2013 /      -- 183 dias
/

WELOPEN
RJS19 OPEN /
/

WELTARG 
  NA1A  LRAT  1992.0 /
  RJS19  LRAT  1384.0 /
 /
----------------------
DATES 
31 DEC 2013 /      -- 214 dias
/
WELTARG 
  NA1A  LRAT  1954.0 /
  RJS19  LRAT  1269.0 /
 /
----------------------
DATES 
31 JAN 2014 /      -- 245 dias
/
WELTARG 
  NA1A  LRAT  2062.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT  1192.0 /
 /
----------------------
DATES 
28 FEB 2014 /      -- 273 dias
/

WELOPEN
NA3D OPEN /
/

WELTARG 
  NA1A  LRAT  1956.0 /
  NA3D  LRAT  1937.0 /
  RJS19  LRAT  1203.0 /
 /
----------------------
DATES 
31 MAR 2014 /      -- 304 dias
/
WELTARG 
  NA1A  LRAT  2039.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT  1215.0 /
 /
----------------------
DATES 
30 APR 2014 /      -- 334 dias
/
WELTARG 
  NA1A  LRAT  1944.0 /
  NA2  LRAT     0.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT  1080.0 /
 /
----------------------
DATES 
31 MAY 2014 /      -- 365 dias
/

WELOPEN
NA2 OPEN /
/

WELTARG 
  NA1A  LRAT  1988.0 /
  NA2  LRAT  2077.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT  1027.0 /
 /
----------------------
DATES 
30 JUN 2014 /      -- 395 dias
/
WELTARG 
  NA1A  LRAT  2071.0 /
  NA2  LRAT  1992.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT  1000.0 /
 /
----------------------
DATES 
31 JLY 2014 /      -- 426 dias
/

WELOPEN
NA3D OPEN /
/

WELTARG 
  NA1A  LRAT  1991.0 /
  NA2  LRAT  2065.0 /
  NA3D  LRAT  1973.0 /
  RJS19  LRAT   919.0 /
 /
----------------------
DATES 
31 AUG 2014 /      -- 457 dias
/
WELTARG 
  NA1A  LRAT  2035.0 /
  NA2  LRAT  2074.0 /
  NA3D  LRAT  1732.0 /
  RJS19  LRAT   845.0 /
 /
----------------------
DATES 
30 SEP 2014 /      -- 487 dias
/
WELTARG 
  NA1A  LRAT  2059.0 /
  NA2  LRAT  1987.0 /
  NA3D  LRAT  1526.0 /
  RJS19  LRAT   816.0 /
 /
----------------------
DATES 
31 OCT 2014 /      -- 518 dias
/
WELTARG 
  NA1A  LRAT     0.0 /
  NA2  LRAT     0.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
30 NOV 2014 /      -- 548 dias
/
WELTARG 
  NA1A  LRAT     0.0 /
  NA2  LRAT     0.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
31 DEC 2014 /      -- 579 dias
/
WELTARG 
  NA1A  LRAT     0.0 /
  NA2  LRAT     0.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
31 JAN 2015 /      -- 610 dias
/
WELTARG 
  NA1A  LRAT     0.0 /
  NA2  LRAT     0.0 /
  NA3D  LRAT     0.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
28 FEB 2015 /      -- 638 dias
/

WELOPEN
NA3D OPEN /
/

WELOPEN
RJS19 OPEN /
/

WELTARG 
  NA1A  LRAT  1989.0 /
  NA2  LRAT  2052.0 /
  NA3D  LRAT  1408.0 /
  RJS19  LRAT   872.0 /
 /
----------------------
WELOPEN
NA1A OPEN /
/

WELOPEN
NA2 OPEN /
/

DATES 
31 MAR 2015 /      -- 669 dias
/
WELTARG 
  NA1A  LRAT  2056.0 /
  NA2  LRAT  2007.0 /
  NA3D  LRAT  1167.0 /
  RJS19  LRAT   670.0 /
 /
----------------------
DATES 
30 APR 2015 /      -- 699 dias
/
WELTARG 
  NA1A  LRAT  1722.0 /
  NA2  LRAT  2019.0 /
  NA3D  LRAT  1090.0 /
  RJS19  LRAT   604.0 /
 /
----------------------
DATES 
31 MAY 2015 /      -- 730 dias
/
WELTARG 
  NA1A  LRAT  1608.0 /
  NA2  LRAT  2038.0 /
  NA3D  LRAT   914.0 /
  RJS19  LRAT   571.0 /
 /
----------------------
DATES 
30 JUN 2015 /      -- 760 dias
/
WELTARG 
  NA1A  LRAT  1401.0 /
  NA2  LRAT  2018.0 /
  NA3D  LRAT   817.0 /
  RJS19  LRAT   458.0 /
 /
----------------------
DATES 
31 JLY 2015 /      -- 791 dias
/
WELTARG 
  NA1A  LRAT  1251.0 /
  NA2  LRAT  1753.0 /
  NA3D  LRAT   794.0 /
  RJS19  LRAT   415.0 /
 /
----------------------
DATES 
31 AUG 2015 /      -- 822 dias
/
WELTARG 
  NA1A  LRAT  1134.0 /
  NA2  LRAT  1629.0 /
  NA3D  LRAT   707.0 /
  RJS19  LRAT   357.0 /
 /
----------------------
DATES 
30 SEP 2015 /      -- 852 dias
/
WELTARG 
  NA1A  LRAT  1059.0 /
  NA2  LRAT  1416.0 /
  NA3D  LRAT   645.0 /
  RJS19  LRAT   352.0 /
 /
----------------------
DATES 
31 OCT 2015 /      -- 883 dias
/
WELTARG 
  NA1A  LRAT   868.0 /
  NA2  LRAT  1270.0 /
  NA3D  LRAT   616.0 /
  RJS19  LRAT   285.0 /
 /
----------------------
DATES 
30 NOV 2015 /      -- 913 dias
/
WELTARG 
  NA1A  LRAT   880.0 /
  NA2  LRAT  1197.0 /
  NA3D  LRAT   575.0 /
  RJS19  LRAT   305.0 /
 /
----------------------
DATES 
31 DEC 2015 /      -- 944 dias
/
WELTARG 
  NA1A  LRAT   785.0 /
  NA2  LRAT  1043.0 /
  NA3D  LRAT   511.0 /
  RJS19  LRAT   260.0 /
 /
----------------------
DATES 
31 JAN 2016 /      -- 975 dias
/
WELTARG 
  NA1A  LRAT   693.0 /
  NA2  LRAT   940.0 /
  NA3D  LRAT   474.0 /
  RJS19  LRAT   247.0 /
 /
----------------------
DATES 
29 FEB 2016 /      -- 1004 dias
/
WELTARG 
  NA1A  LRAT   616.0 /
  NA2  LRAT   894.0 /
  NA3D  LRAT   467.0 /
  RJS19  LRAT   216.0 /
 /
----------------------
DATES 
31 MAR 2016 /      -- 1035 dias
/
WELTARG 
  NA1A  LRAT   643.0 /
  NA2  LRAT   936.0 /
  NA3D  LRAT   408.0 /
  RJS19  LRAT   200.0 /
 /
----------------------
DATES 
30 APR 2016 /      -- 1065 dias
/
WELTARG 
  NA1A  LRAT   550.0 /
  NA2  LRAT   849.0 /
  NA3D  LRAT   391.0 /
  RJS19  LRAT   208.0 /
 /
----------------------
DATES 
31 MAY 2016 /      -- 1096 dias
/
WELTARG 
  NA1A  LRAT   566.0 /
  NA2  LRAT   832.0 /
  NA3D  LRAT   357.0 /
  RJS19  LRAT   171.0 /
 /
----------------------
DATES 
30 JUN 2016 /      -- 1126 dias
/
WELTARG 
  NA1A  LRAT   475.0 /
  NA2  LRAT   812.0 /
  NA3D  LRAT   337.0 /
  RJS19  LRAT   163.0 /
 /
----------------------
DATES 
31 JLY 2016 /      -- 1157 dias
/
WELTARG 
  NA1A  LRAT   504.0 /
  NA2  LRAT   770.0 /
  NA3D  LRAT   368.0 /
  RJS19  LRAT   174.0 /
 /
----------------------
DATES 
31 AUG 2016 /      -- 1188 dias
/
WELTARG 
  NA1A  LRAT   459.0 /
  NA2  LRAT   721.0 /
  NA3D  LRAT   349.0 /
  RJS19  LRAT   153.0 /
 /
----------------------
DATES 
30 SEP 2016 /      -- 1218 dias
/
WELTARG 
  NA1A  LRAT   432.0 /
  NA2  LRAT   695.0 /
  NA3D  LRAT   331.0 /
  RJS19  LRAT   162.0 /
 /
----------------------
DATES 
31 OCT 2016 /      -- 1249 dias
/
WELTARG 
  NA1A  LRAT   468.0 /
  NA2  LRAT   635.0 /
  NA3D  LRAT   327.0 /
  RJS19  LRAT   139.0 /
 /
----------------------
DATES 
30 NOV 2016 /      -- 1279 dias
/
WELTARG 
  NA1A  LRAT   442.0 /
  NA2  LRAT   627.0 /
  NA3D  LRAT   321.0 /
  RJS19  LRAT   140.0 /
 /
----------------------
DATES 
31 DEC 2016 /      -- 1310 dias
/
WELTARG 
  NA1A  LRAT   413.0 /
  NA2  LRAT   614.0 /
  NA3D  LRAT   319.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
31 JAN 2017 /      -- 1341 dias
/
WELTARG 
  NA1A  LRAT   422.0 /
  NA2  LRAT   595.0 /
  NA3D  LRAT   272.0 /
  RJS19  LRAT     0.0 /
 /
----------------------
DATES 
28 FEB 2017 /      -- 1369 dias
/

WELOPEN
RJS19 OPEN /
/

WELTARG 
  NA1A  LRAT   354.0 /
  NA2  LRAT   609.0 /
  NA3D  LRAT   299.0 /
  RJS19  LRAT   138.0 /
 /
----------------------
DATES 
31 MAR 2017 /      -- 1400 dias
/
WELTARG 
  NA1A  LRAT   358.0 /
  NA2  LRAT   603.0 /
  NA3D  LRAT   298.0 /
  RJS19  LRAT   136.0 /
 /
----------------------
DATES 
30 APR 2017 /      -- 1430 dias
/
WELTARG 
  NA1A  LRAT   358.0 /
  NA2  LRAT   574.0 /
  NA3D  LRAT   291.0 /
  RJS19  LRAT   121.0 /
 /
----------------------
DATES 
31 MAY 2017 /      -- 1461 dias
/
