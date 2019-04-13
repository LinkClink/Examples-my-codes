#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define COUNT_CHROMOSOM 2
#define KSI() (float)rand()/RAND_MAX
#define MAX_FP 300
#define M 4

void generacjaPopulacji(float * FP_chromosom);
void showChromosoms(float chomosomy[COUNT_CHROMOSOM][M]);
void printFitnessFunctionOfChromosoms(float * FP_chromosom);
float summaFP(float * FP_chromosom);
void  obliceniaWycinkowKola(float * FP_chromosom, float wycinekKola[M][2], float * summa);
void showWyczinkiKola(float wycinekKola[M][2]);
void procesSelection(int * indexOfSelectedChromosoms, float wycinekKola[M][2]);

int main(void)
{
	srand(time(0));
	float FP_chromosom[M]={0};
	float wycinekKola[M][2];
	float summa = 0;
	int indexOfSelectedChromosoms[M]={0};

	generacjaPopulacji(FP_chromosom);                 //pierwsza generacja
	printFitnessFunctionOfChromosoms(FP_chromosom);  //drukowanie pierwszej populacji
	summa = summaFP(FP_chromosom);                  //suma chromosomow
	obliceniaWycinkowKola(FP_chromosom,wycinekKola,&summa); // obliczenia wycinka
	showWyczinkiKola(wycinekKola); // drukowanie wyczinku
	printf("Summa FP:%.1f\n",summa);  // drukowanie sumy chromos.
	procesSelection(indexOfSelectedChromosoms,wycinekKola);
	

	printf("\nWybrane chromosomy:\n");
	for(int i = 0; i < M; i++)
		printf("Chr%d ",indexOfSelectedChromosoms[i]); // drukowanie wybranych chromosomow pszez selekcje 
	printf("\n");
	

	return 0;
}

void generacjaPopulacji(float * FP_chromosom) // generacja pierwszej populacji 0-300 (losowo)
{
	for(int i = 0; i < M; i++)
	{
		float fp = rand()%MAX_FP; // losowanie do 300
		FP_chromosom[i] = fp;
	}
}

void procesSelection(int * indexOfSelectedChromosoms,float wycinekKola[M][2]) //sel
{
	for(int i = 0; i < M; i++)
	{
		int a = rand()%100; // 0-100 (validator selekcji losowy)
	
		for(int j = 0; j < M; j++)
			if(wycinekKola[j][0] < a && a <= wycinekKola[j][1]) // jezeli 
				indexOfSelectedChromosoms[i] = j;
	}
}

void showWyczinkiKola(float wycinekKola[M][2]) // drukowanie wynikow wyc.kola 
{
	printf("\n[*] Wycinki Kola ruletki:\n");
	for(int i = 0; i < M; i++)
		if(i==0)
			printf("| 0<=p<=%.1f\n",wycinekKola[i][1]); // druk. pierwszego elementu
		else
			printf("| %.1f<p<=%.1f\n",wycinekKola[i][0],wycinekKola[i][1]); // druk. nastepnych elementy 
	printf("---------------------------\n");	
}

void  obliceniaWycinkowKola(float * FP_chromosom, float wycinekKola[M][2], float * summa)
{
	for(int i = 0; i < M; i++)
	{
		float wycinek = (100 * FP_chromosom[i])/(*summa); // liczymi wyczinek <=100
		wycinekKola[i][0] = i==0?0:wycinekKola[i-1][1]; // jezeli i == 0 to rownami do 0 (tylko za pierwszym razem) inaczej zamieniamy na nastepny
		wycinekKola[i][1] = i==0?wycinek:wycinekKola[i-1][1]+wycinek; // za pierszym razem ustawiamy wycinek potem . pszyszly wycinek plus nastepny
	}
}

float summaFP(float * FP_chromosom) //sum
{
	float summa = 0;
	for(int i = 0; i < M; i++)
		summa += FP_chromosom[i]; // sumowanie
	return summa;
}

void printFitnessFunctionOfChromosoms(float * FP_chromosom) // drukowanie pierszej populacji
{
	printf("[*] Fitness Function:\n");
	for(int i = 0; i < M; i++)
		printf("  FP(chr%d)=%f\n",i,FP_chromosom[i]);
}
