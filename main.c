#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "modelo.h"
#include "calculodm.h"

#define PI 3.14159

float calculods(int a);

int main() {

    int l, circuitos, condutores, freq;
    float ind, reatanciatotal;

    printf("Digite a quantidade de circuitos: ");
    scanf("%d", &circuitos);

    printf("Digite a quantidade de condutores: ");
    scanf("%d", &condutores);

    printf("Digite o comprimento da linha (km): ");
    scanf("%d", &l);

    printf("Digite a frequencia (hz): ");
    scanf("%d", &freq);

    int opcao = modelo(circuitos);
    float ds = calculods(condutores);
    float dm = calculodm(opcao);
    printf("O valor de DM: %.5f\n", dm);

    ind = 2e-7 * log(dm/ds);

    float lf = ind * 1000 * 1000;

    printf("Utilizando a equação 2*10^-7*ln(DM/DS)\n");

    printf("A indutancia por fase (Lf): %.5f mh/km\n", lf);

    float reatancia = (2 * PI * freq * lf)/1000;

    printf("Utilizando a equação 2*PI*f*Lf\n");

    printf("A reatancia indutiva (Xf): %.5f ohm/km\n", reatancia);

    reatanciatotal = reatancia * l;

    printf("Utilizando a equação Xf*l\n");

    printf("A reatancia total (Xt): %.5f ohm", reatanciatotal);

    return 0;
}

float calculods(int a){ 
    float RMG, d, R;

    printf("numero de condutores: %d\n", a);

    printf("Digite o valor do Raio Medio Geometrico: ");
    scanf("%f", &RMG);

    printf("Digite a distancia entre condutores: ");
    scanf("%f", &d);
    
    R = d / (2.0 * sin(PI / a));

    float resultado = pow(a * pow(R, a - 1.0) * RMG, 1.0 / a);

    printf("DS= %.5lf\n", resultado);

    return resultado;
}


