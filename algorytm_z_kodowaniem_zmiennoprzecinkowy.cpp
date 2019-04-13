#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define COUNT_CHROMOSOM 2
#define KSI() (float)rand()/RAND_MAX
#define M 4
#define PK 0.3

void showChromosoms(float chomosomy[COUNT_CHROMOSOM][M]);
void crossOver(float chomosomy[COUNT_CHROMOSOM][M]);

int main(void)
{
	srand(time(0));
	float chomosomy[COUNT_CHROMOSOM][M] = {{1.234,0.432,2.452,3.123},{0.234,0.42,1.4342,2.123}}; // inicalizacja tabeli chromosomu

	printf("Defoult:\n");
	showChromosoms(chomosomy); // drukowania poczatkowej 
	crossOver(chomosomy);     // 
	printf("\n\n");
	showChromosoms(chomosomy);
	

	return 0;
}

void showChromosoms(float chomosomy[COUNT_CHROMOSOM][M]) // zwykle drukowanie za pomoca petli for
{
	for(int j = 0; j < COUNT_CHROMOSOM; j++) // rozmiar chromosomu
	{
		for(int i = 0; i < M; i++)       // ilosc chromosomow M
		printf(" %f ",chomosomy[j][i]); // drukowanie
		printf("\n");
	}
}

void crossOver(float chomosomy[COUNT_CHROMOSOM][M])  
{
	

	for(int i = 0; i < COUNT_CHROMOSOM - 1; i++)
	{
		int chrOneIndex = i;      // piewszy chromosom dla zmiany 
		int chrTwoIndex = i + 1; // drugi dla zmiany
		int k = rand()%M;       //zmieniamy losowo szansa 0-4 (losowo)
		printf("Point of crossOvering:%d",k);

		for(int j = k; j < M; j++) // losowo zmieniony chromosomy od 0-4 k = start 
		{
			float chomosomBuffer = chomosomy[chrOneIndex][j];       // bufer dla pszenieszienia pierwszego chromosomu 
			chomosomy[chrOneIndex][j] = chomosomy[chrTwoIndex][j]; // zmieniamy pierwszzy na drugi
			chomosomy[chrTwoIndex][j] = chomosomBuffer;           // drugi na pierwszy z buferza

		}
	}
	

}
