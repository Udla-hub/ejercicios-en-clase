/******************************************************************************

realizar programa c que calcula el area del circulo

trabajo en clase: contar grupo de numeros si son pares e impares

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float areacirculo(float);
//float areacirculo(float radio)
int factorial(int);
int tablamult(int,int);
void parimpar(int);
void parimpari(int);

void main(){
   
    float radio;
    int num,tabla,lim,menu;
    do{
        printf("menu\n 1 radio del circulo\n 2 factorial\n 3 tabla de multiplicar \n 4 par o impar \n 5 cuantos pares e impares\n 6 par e impar");
        scanf("%d",&menu);
        switch(menu){
            case 1:
                printf("ingrerse el radio\n");
                scanf("%f",&radio);
                printf("el area del circulo %.2f\n",areacirculo(radio));
                system("pause");        
                system("cls");          
            break;
            case 2:
                printf("ingrerse un numero\n");
                scanf("%d",&num);
                printf("el factorial del numero %d\n",factorial(num));
                system("pause");        
                system("cls");      
            break;
            case 3:
                printf("tabla de multiplicar\n");
                printf("ingrerse numero para tabla\n");
                scanf("%d",&tabla);
                printf("ingrerse limite\n");
                scanf("%d",&lim);
                tablamult(tabla,lim);
                system("pause");        
                system("cls");          
           break;
           case 4:
                printf("ingrerse un numero\n");
                scanf("%d",&num);
                parimpar(num);
                system("pause");        
                system("cls");          
            break;
            case 5:
                exit(0);
            break;
            case 6:
                printf("par o impar\n");
                printf("ingrese un numero\n");
                scanf("%d",&num);
                parimpari(num);
            break;
        }
    }while(menu>0);    
}

float areacirculo(float radio)
{
    float area=0, pi=3.1416;
    area=pi*pow(radio,2);
    return area;
   
}
int factorial(int num)
{
    int fact=1,cont=1;
    while(cont<=num){
    fact=fact*cont;
    cont++;
    }
    return fact;
}

int tablamult(int tabla,int lim){
    int mult=1,cont=1;
    while(cont<=lim){
        mult=tabla*cont;
        printf("%d * %d = %d\n",tabla,cont,mult);
        cont++;
    }
   return mult;
}

void parimpar(int num){
    if(num%2==0)
        printf("es par\n");
    else
        printf("es inpar\n");
}
void parimpari(int num){
    do{
    if(num%2==0)
        printf("es par\n");
    else
        printf("es inpar\n");
    }while(num=!0);
}
