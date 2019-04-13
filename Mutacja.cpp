#include<stdio.h>
#include <stdlib.h>
#define COUNT_CHROMOSOM 5
#define KSI() (float)rand()/RAND_MAX
#define N 4
#define M 2
#define PM 0.3

void showChromosoms(int chomosomy[COUNT_CHROMOSOM][N*M]);
void mutacja(int chomosomy[COUNT_CHROMOSOM][N*M]);

int main(void)
{
	int chomosomy[COUNT_CHROMOSOM][N*M] = {{1,0,1,1,0,1,1,0,},{0,0,1,0,0,1,0,1,},{0,0,1,1,1,1,0,0,},{1,0,1,1,1,1,1,0,},{1,1,1,1,0,0,0,0,}};

	printf("Defoult:\n");
	showChromosoms(chomosomy); // druk
	mutacja(chomosomy); // sama mutacja
	printf("\nAfter Mutation:\n");
	showChromosoms(chomosomy);

	return 0;
}

void showChromosoms(int chomosomy[COUNT_CHROMOSOM][N*M]) // drukowanie
{
	for(int j = 0; j < COUNT_CHROMOSOM; j++)
	{
		for(int i = 0; i < N*M; i++)
			printf("%d",chomosomy[j][i]);
		    printf("\n");
	}
}

void mutacja(int chomosomy[COUNT_CHROMOSOM][N*M])
{
	for(int i = 0; i < COUNT_CHROMOSOM; i++)
		for(int j = 0; j < N*M; j++)
		{
			float p = KSI(); // 0-1
			if(p < PM) // 0.3 0.1-0.3 (PM jest procentem zmiany chromosomow)
				chomosomy[i][j] = chomosomy[i][j] == 1?0:1; //jezeli wybrany chromosom = 1 zmieniamy na 0 inaczej na 1
		}
}
