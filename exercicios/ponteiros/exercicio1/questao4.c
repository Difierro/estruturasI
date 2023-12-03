#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono();

int main(){
    double l, area, perimetro;
    printf("Informe o lado do hexagono: ");
    scanf("%lf", &l);

    area = (3 * pow(l, 2) * sqrt(3)) / 2;
    perimetro = 6 * l;

    calcula_hexagono(l, &area, &perimetro); 

    return 0; 
}

void calcula_hexagono(double l, double *area, double *perimetro){
    printf("lado: %lf  |  area: %lf | perimetro: %lf", l, *area, *perimetro);
} 

//só consegui compilar usando o double, ao invés do float.