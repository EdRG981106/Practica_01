#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c;
    int opt;

    printf("1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Division");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&opt);
    printf("\nIngrese el primer operando: ");
    scanf("%f",&a);
    printf("Ingrese el segundo operando: ");
    scanf("%f",&b);

    if(opt==1){
        c=a+b;
    }
    else if(opt==2){
        c=a-b;
    }
    else if(opt==3){
        c=a*b;
    }
    else if(opt==4){
        while(b==0){
            printf("\nError, b debe ser distinto de cero");
            printf("\nIngrese el valor del segundo operando: ");
            scanf("%f",&b);
        }
        c=a/b;
    }
    else{
        printf("\nOpcion invalida");
        c=0;
    }
    printf("\nEl resultado es:%f\n\n",c);
}

