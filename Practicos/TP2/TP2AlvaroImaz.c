#include<stdio.h>

int main()
{
    //Declaracion de variables
    float height = 0;
    float weight = 0;
    float bmi = 0;

    //Toma de datos
    printf("Introduzca su peso en kilogramos: ");
    scanf("%f", &weight);
    
    printf("Introduzca su altura en metros: ");
    scanf("%f", &height);

    //Calculo IMC
    bmi = weight/(height*height);

    //Resultado en pantalla
    if(bmi >= 25)
    {
        printf("Sobre peso || IMC = %f\n", bmi);
    }
    else if (bmi >= 18.5)
    {
        printf("Normal || IMC = %f\n", bmi);
    }
    else 
    {
        printf("Bajo peso || IMC = %f\n", bmi);
    }
       
    
    return 0;
}