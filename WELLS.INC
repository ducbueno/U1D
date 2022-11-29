RPTSCHED
	FIP WELLS /

-- RPTRST
-- 	BASIC=6 FLOWS /

GRUPTREE
	'PRODUCAO'	'PLATAFORMA' /
	'INJECAO'	'PLATAFORMA' /
/

WELSPECS
--'NA1A' is the simulation well name used to describe flow from 'NA1A;Tubing 1'
--'NA2' is the simulation well name used to describe flow from 'NA2;Tubing 1'
--'NA3D' is the simulation well name used to describe flow from 'NA3D;Tubing 1'
--'RJS19' is the simulation well name used to describe flow from 'RJS19;Tubing 1'

  NA1A 'PRODUCAO' 38 36 1* OIL /
  NA2 'PRODUCAO' 21 36 1* OIL /
  NA3D 'PRODUCAO' 44 43 1* OIL /
  RJS19 'PRODUCAO' 31 27 1* OIL /
/

-- LISTA DE POCOS
WLIST
	'*PROD_L'	'NEW'	'NA1A' 'NA2' 'NA3D' 'RJS19'	/
	'*INJ_L'	'NEW'	/ -- Habilitar quando houver poços injetores
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
