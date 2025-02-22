NAME:ANJALI
ROLL NO: 23111004

Testing the equivalence of quick sort with recursion vs quick sort without recursion:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

suppose P' is quicksort with recusrion and P" is quicksort without recursion. our problem was to see if P' equivalent to P" or not , so to check  this i created file file which produces random numbers (took help from man 3 random).these randomly created numbers are given as input to P' and P" . then output of P' and P" is compared by using "diff" command to check if therse is any diffrence or not ,if there are any diffrence diff command will show it by specifying line numbers and words which are diffrent then other file provided by me. 

randomgenerator.c: this program generates random numbers between 1 to 100 and writes then in text file named random.txt 

quicksorwithrecursion.c[P']:take random.txt as input file and apply quick sort recursivelt to sort the numbers in ascending order and writes in qswr.txt file for comparison.

quicksorwithoutrecursion.c[P"]:take random.txt as input file and apply quick sort iteratively to sort generated numbers of random.txt file in ascending order and writes in qswor.txt file for comaprison.

qswor.txt and qswr.txt : diff command apllied on both files to check equivalence.

conclusion: obviously iteration is better than recursion for larger and complex program ,we can choose any of both based on complexity of program for larger program iteration will perform better and for smaller programs recursion will be better choice.


