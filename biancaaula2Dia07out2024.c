#include <stdio.h>

int main (){

    float peso;
    float altura; 
    float imc;

    printf ("informe seu peso: ");
    scanf ("%f", &peso);

    printf ("informe sua altura: ");
    scanf ("%f", &altura);


    imc =  peso/(altura*altura);
    printf("%f", imc);

}