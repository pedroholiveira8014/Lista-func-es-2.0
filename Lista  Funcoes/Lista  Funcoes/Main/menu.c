#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {
    int opcao = -1;

    while (opcao != 0) {
        printf("\n=== MENU DE FUN��ES ===\n");
        printf("1. Dizer OI\n2. Imprimir Texto\n3. Imprimir e Confirmar\n");
        printf("4. Bhaskara\n5. Converter Tempo\n6. Idade em Dias\n");
        printf("7. N�mero Perfeito\n8. Classificar Nadador\n9. Positivo ou Negativo\n");
        printf("10. Par ou �mpar\n11. Conceito da M�dia\n12. Ordenar Tr�s N�meros\n");
        printf("13. Tipo de Tri�ngulo\n14. M�dia de Valores\n15. Pot�ncia\n");
        printf("0. Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            dizer_oi();

        } else if (opcao == 2) {
            char texto[100];
            printf("Digite um texto: ");
            getchar(); // limpa o buffer
            fgets(texto, 100, stdin);
            imprimir_texto(texto);

        } else if (opcao == 3) {
            char texto[100];
            printf("Digite um texto: ");
            getchar();
            fgets(texto, 100, stdin);
            printf("%s\n", imprimir_e_confirmar(texto));

        } else if (opcao == 4) {
            float a, b, c;
            printf("Digite a, b e c: ");
            scanf("%f %f %f", &a, &b, &c);
            bhaskara(a, b, c);

        } else if (opcao == 5) {
            int seg;
            printf("Segundos: ");
            scanf("%d", &seg);
            converter_tempo(seg);

        } else if (opcao == 6) {
            int anos, meses, dias;
            printf("Anos, meses e dias: ");
            scanf("%d %d %d", &anos, &meses, &dias);
            printf("Total dias: %d\n", idade_em_dias(anos, meses, dias));

        } else if (opcao == 7) {
            int n;
            printf("N�mero: ");
            scanf("%d", &n);
            printf("%s\n", numero_perfeito(n) ? "Perfeito" : "N�o perfeito");

        } else if (opcao == 8) {
            int idade;
            printf("Idade: ");
            scanf("%d", &idade);
            printf("Categoria: %s\n", classificar_nadador(idade));

        } else if (opcao == 9) {
            int val;
            printf("Valor: ");
            scanf("%d", &val);
            printf("%s\n", positivo_ou_negativo(val) ? "Positivo" : "Negativo");

        } else if (opcao == 10) {
            int val;
            printf("N�mero: ");
            scanf("%d", &val);
            printf("%s\n", par_ou_impar(val) ? "�mpar" : "Par");

        } else if (opcao == 11) {
            float m;
            printf("M�dia final: ");
            scanf("%f", &m);
            char c = conceito(m);
            printf("Conceito: %c\n", c);

        } else if (opcao == 12) {
            int a, b, c;
            printf("Digite 3 n�meros inteiros: ");
            scanf("%d %d %d", &a, &b, &c);
            ordenar(a, b, c);

        } else if (opcao == 13) {
            float x, y, z;
            printf("Digite os lados do tri�ngulo (X, Y, Z): ");
            scanf("%f %f %f", &x, &y, &z);
            tipo_triangulo(x, y, z);

        } else if (opcao == 14) {
            float media = media_valores();
            printf("M�dia dos valores: %.2f\n", media);

        } else if (opcao == 15) {
            int x, z;
            printf("Digite base (X) e expoente (Z): ");
            scanf("%d %d", &x, &z);
            printf("Resultado: %d\n", potencia(x, z));

        } else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Op��o inv�lida. Tente novamente.\n");
        }
    }

    return 0;
}
