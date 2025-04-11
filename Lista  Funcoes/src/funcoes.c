#include <stdio.h>
#include <string.h>
#include <math.h>
#include "funcoes.h"

void dizer_oi() {
    printf("OI\n");
}

void imprimir_texto(char texto[]) {
    printf("%s\n", texto);
}

char* imprimir_e_confirmar(char texto[]) {
    printf("%s\n", texto);
    return "Ok";
}

void bhaskara(float a, float b, float c) {
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("Raízes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

void converter_tempo(int segundos) {
    int h = segundos / 3600;
    segundos %= 3600;
    int m = segundos / 60;
    segundos %= 60;
    printf("%dh %dmin %ds\n", h, m, segundos);
}

int idade_em_dias(int anos, int meses, int dias) {
    return anos * 365 + meses * 30 + dias;
}

int numero_perfeito(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return (soma == n) ? 1 : 0;
}

const char* classificar_nadador(int idade) {
    if (idade >= 5 && idade <= 7) return "Infantil A";
    else if (idade <= 10) return "Infantil B";
    else if (idade <= 13) return "Juvenil A";
    else if (idade <= 17) return "Juvenil B";
    else if (idade >= 18) return "Adulto";
    else return "Idade fora da faixa";
}

int positivo_ou_negativo(int valor) {
    return (valor >= 0) ? 1 : 0;
}

int par_ou_impar(int valor) {
    return (valor % 2 == 0) ? 0 : 1;
}

char conceito(float media) {
    if (media >= 0 && media <= 4.9) return 'D';
    else if (media <= 6.9) return 'C';
    else if (media <= 8.9) return 'B';
    else if (media <= 10.0) return 'A';
    else return 'X';
}

void ordenar(int a, int b, int c) {
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    printf("Ordem crescente: %d %d %d\n", a, b, c);
}

void tipo_triangulo(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z)
            printf("Equilátero\n");
        else if (x == y || x == z || y == z)
            printf("Isósceles\n");
        else
            printf("Escaleno\n");
    } else {
        printf("Não é um triângulo\n");
    }
}

float media_valores() {
    float soma = 0;
    int count = 0, valor;

    printf("Digite valores positivos (-1 para sair):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor == -1) break;
        if (valor > 0) {
            soma += valor;
            count++;
        }
    }

    return (count > 0) ? soma / count : 0;
}

int potencia(int x, int z) {
    int resultado = 1;
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}
