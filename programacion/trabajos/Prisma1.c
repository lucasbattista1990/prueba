/*Realizar un programa que lea desde el teclado el ancho, 
alto y profundidad de un  prisma rectangular (cuerpo geométrico de 6 caras rectangulares, como una caja) e 
 informe su volumen y área de la superficie formada por sus caras.  */

 #include <stdio.h>

int main(){
    float ancho = 0; 
    float alto = 0;
    float profundidad = 0;
    float volumen = 0;
    float area = 0;

    printf("Ingrese el ancho del prisma: ");
    fflush(stdin);
    scanf("%f",&ancho);
   
    printf("\nIngrese la altura: ");
    fflush(stdin);
    scanf("%f",&alto);
    
    printf("\nIngrese la profundidad: ");
    fflush(stdin);
    scanf("%f",&profundidad);

    volumen = (alto * ancho * profundidad);

    printf("\nEl volumen del prisma es: %.2f", volumen);

    area = (2*(ancho * alto))+(2*(ancho * profundidad))+(2*(alto * profundidad));

    printf("\nEl area del prisma es: %.2f",area);



    return 0;
}