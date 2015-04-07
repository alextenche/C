#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<iostream>

#define NX 50

typedef struct {
		char model[20];
		char culoare[20];
		int an;
}masina;

void citire_sir(char *car)
{
		do{
		  gets(car);
		}while(strlen(car)==0);
}
int meniu(void)
{
		int opt;
		printf("1.Adauga\n");
		printf("2.Afiseaza\n");
		printf("3.Cauta model\n");
		printf("4.Stergere model\n");
		printf("5.EXIT\n");

		printf("Ce optiune doriti?: ");
		scanf("%d",&opt);

		return opt;
}
void citire_date(masina *p)
{
		printf("Model=");
		scanf("%s",p->model);
		printf("Culoare=");
		scanf("%s",p->culoare);
		printf("An=");
		scanf("%d",&(p->an));
}
int adauga(masina lista[NX],masina p,int nr)
{
		lista[nr]=p;
		nr++;
		return nr;
}
int stergere(masina lista[NX],int nr,int poz)
{
		int i;
		for(i=poz;i<nr;i++)
			lista[i]=lista[i+1];
		nr--;
		return nr;
}
int cautare(masina lista[NX],int nr,char *caut)
{
		int i=0;
		while(i<nr){
			if(strcmp(caut,lista[i].model)==0)
					return i;

			i++;
		}
		return -1;
}
void afisare(masina p)
{
		printf("Model=%s , Culoare=%s, An=%d\n",p.model,p.culoare,p.an);
}
void afisare_lista(masina lista[NX],int nr)
{
		int i;
		for (i=0;i<nr;i++)
			afisare(lista[i]);
}

int main()
{
		int i,opt,nr=0;
		char temp;
		masina lista[NX];
		masina p;
		do{

			opt=meniu();
			switch(opt){
				case 1:citire_date(&p);
						 nr=adauga(lista,p,nr);
						 break;
				case 2:afisare_lista(lista,nr);
						 break;
				case 3:system ("cls");
						 printf("Model cautat=");
						 citire_sir(&temp);
						 i=cautare(lista,nr,&temp);
						 if(i>=0){
							 printf("modelul exista si este:\n");
							 afisare(lista[i]);
						 }
						 break;
				case 4:system ("cls");
						 printf("Modelul cautat=");
						 citire_sir(&temp);
						 i=cautare(lista,nr,&temp);
						 if(i>=0)
							  nr=stergere(lista,nr,i);
						 break;
				case 5:printf("away\n");
						 break;
				default:printf("Opt incorecta!!\n");
			}
		}while(opt!=5);
}
