program:random qswr qswor random.txt qswr.txt qswor.txt 
	diff qswr.txt qswor.txt 

random:randomgenerator.c
	gcc randomgenerator.c -o random

qswr:quicksortwithrecursion.c	
	gcc quicksortwithrecursion.c -o qswr

qswor:quicksortwithoutrecursion.c
	gcc quicksortwithoutrecursion.c -o qswor

random.txt:random
	./random 3 20

qswr.txt:qswr
	./qswr

qswor.txt:qswor
	./qswor





