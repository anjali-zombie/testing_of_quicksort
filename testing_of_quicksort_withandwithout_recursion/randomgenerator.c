#include <stdio.h>
#include <stdlib.h>

           
int main(int argc, char *argv[])
{
	FILE* ptr1 = fopen("random.txt","w");
	int r;
        unsigned int  seed, nloops;

        if (argc != 3) {
	    	fprintf(stderr, "Usage: %s <seed> <nloops>\n", argv[0]);
      		exit(EXIT_FAILURE);
        }
        seed = atoi(argv[1]);
        nloops = atoi(argv[2]);
        if (seed == -1) {
		seed = arc4random();
                printf("seed: %u\n", seed);
        }
        srand(seed);
        for (unsigned int j = 0; j < nloops; j++) {
                r =  rand() %100;
		fprintf(ptr1,"%d\n",r);

          //      printf("%d\n", r);
        }

        exit(EXIT_SUCCESS);
}

