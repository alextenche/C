#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define N 100

typedef struct{
	int zi;
	int luna;
}data;


typedef struct{
	char melodia1[100];
	char melodia2[100];
	char melodia3[100];
}melodie;


typedef struct{
	char interpret[40];
	char titlu[50];
	data aparitie;
	melodie melodii;
}cd;


int afisaremeniu(void){
	int opt;

	printf("\n1.Introduceti CD");
	printf("\n2.Afisare stoc CD-uri");
	printf("\n3.xxx");
	printf("\n4.xxx");
	printf("\n5.Iesire\n");
	printf("\nIntroduceti optiunea: ");
	scanf("%d", &opt);
	return opt;
}


void introducere(cd *tedeu){
	cd informatii;

	printf("\nInterpret:");
    scanf("%s", &informatii.interpret);
	printf("\nTitlu:");
    scanf("%s", &informatii.titlu);
	printf("\nZiua aparitiei:");
    scanf("%d", &informatii.aparitie.zi);
	printf("\nLuna aparitiei:");
    scanf("%d", &informatii.aparitie.luna);
	printf("\nNumele primei melodii:");
    scanf("%s", &informatii.melodii.melodia1);
	printf("\nNumele celei de-a 2a melodie:");
    scanf("%s", &informatii.melodii.melodia2);
	printf("\nNumele celei de-a 3a melodie:");
    scanf("%s", &informatii.melodii.melodia3);
    *tedeu = informatii;
}


void afisarecduri(cd lista[], int n)
{
	int i;
	for (i = 0; i < n; i++){
        printf("\nInterpret: %s  Titlu: %s  Ziua: %d  Luna: %d  Melodia1: %s  Melodia2: %s  Melodia3: %s", lista[i].interpret, lista[i].titlu, lista[i].aparitie.zi, lista[i].aparitie.luna, lista[i].melodii.melodia1, lista[i].melodii.melodia2, lista[i].melodii.melodia3);
    }
}


void main()
{
	int opt, n;
    cd p;
	cd *lista;
	cd *informatii;
	n=0;
	lista=(cd*)malloc(N*sizeof(cd));
	//lista[n]=tedeu;

	do{
        //clrscr();
		opt=afisaremeniu();

		switch(opt){
			case 1:
                introducere(&p);
                lista[n] = p;
                n++;
                break;
            case 2:
                afisarecduri(lista, n);
                break;
			case 5:
                printf("La revedere!");
                break;
			default:
				printf("Optiune inexistenta!");
				break;
        }
    }while (opt != 5);
}
