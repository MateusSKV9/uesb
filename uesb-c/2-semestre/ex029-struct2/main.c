#include <stdio.h> 
#include <math.h>

typedef struct {
    int x1, y1, x2, y2, x3, y3;
} Triangulo;

float calcular_area(Triangulo *triangulo);
float calcular_perimetro(Triangulo *triangulo);

int main() {
    float area, perimetro;
    Triangulo triangulo = {0, 0, 0, 5, 4, 0};

    area = calcular_area(&triangulo);
    perimetro = calcular_perimetro(&triangulo);

    printf("%f %f\n", area, perimetro);

    return 1;
}

float calcular_area(Triangulo *triangulo) {
    float lado1, lado2, lado3, area;

    lado1 = pow((triangulo->x1 - triangulo->x2), 2)+ pow((triangulo->y1 - triangulo->y2), 2);

    lado2 = pow((triangulo->x2 - triangulo->x3), 2) + pow((triangulo->y2 - triangulo->y3), 2);
    
    lado3 = pow((triangulo->x1 - triangulo->x3), 2) + pow((triangulo->y1 - triangulo->y3), 2);

    if (lado1 == lado2 + lado3) {
        area = sqrt(lado2) * sqrt(lado3) / 2;
    } else if (lado2 == lado1 + lado3) {
        area = sqrt(lado1) * sqrt(lado3) / 2;
    } else if (lado3 == lado2 + lado1) {
        area = sqrt(lado2) * sqrt(lado1) / 2;
    }

    return area;
}

float calcular_perimetro(Triangulo *triangulo) {
    float lado1, lado2, lado3, perimetro;

    lado1 = pow((triangulo->x1 - triangulo->x2), 2) + pow((triangulo->y1 - triangulo->y2), 2);
    lado2 = pow((triangulo->x2 - triangulo->x3), 2) + pow((triangulo->y2 - triangulo->y3), 2);
    lado3 = pow((triangulo->x1 - triangulo->x3), 2) + pow((triangulo->y1 - triangulo->y3), 2);

    
    perimetro = sqrt(lado2) + sqrt(lado3) + sqrt(lado1);
   

    return perimetro;
}