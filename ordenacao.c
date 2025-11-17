#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorts.h"

int main() {
    char rgm[9];
    int vetor_rgm[8];

    printf("Digite seu RGM (8 digitos): ");
    scanf("%8s", rgm);

    if (strlen(rgm) != 8) {
        printf("ERRO: o RGM deve conter exatamente 8 digitos.\n");
        return 1;
    }

    for (int i = 0; i < 8; i++)
        vetor_rgm[i] = rgm[i] - '0';

    Metricas m_bubble;
    int aux[8];

    printf("\n---ORDENANDO O RGM-----\n");

    copia(aux, vetor_rgm, 8);
    bubble_sort(aux, 8, &m_bubble);
    printf("Bubble Sort RGM: ");
    for (int i = 0; i < 8; i++) printf("%d", aux[i]);
    printf("\nPassos: %lld | Comparacoes: %lld | Trocas: %lld | Tempo: %.3f ms\n",
           m_bubble.passos, m_bubble.comparacoes, m_bubble.trocas, m_bubble.tempo_ms);

    // Criar pasta "data/" se não existir (opcional)
    system("mkdir -p data");

    // Abrir arquivo CSV
    FILE *fp = fopen("data/resultados.csv", "w");
    if (!fp) {
        printf("Erro ao criar CSV.\n");
        return 1;
    }

    fprintf(fp, "Metodo,N,Passos,Comparacoes,Trocas,Tempo_ms\n");

    int tamanhos[] = {100, 1000, 10000};
    int qtd_t = 3;

    printf("\n---RESULTADOS EM CSV---\n");
    printf("Metodo,N,Passos,Comparacoes,Trocas,Tempo_ms\n");

    for (int t = 0; t < qtd_t; t++) {
        int N = tamanhos[t];
        int *base = malloc(N * sizeof(int));
        int *v = malloc(N * sizeof(int));

        for (int i = 0; i < N; i++)
            base[i] = rand() % 10000;

        copia(v, base, N);
        bubble_sort(v, N, &m_bubble);

        printf("Bubble,%d,%lld,%lld,%lld,%.3f\n", N,
               m_bubble.passos, m_bubble.comparacoes, m_bubble.trocas, m_bubble.tempo_ms);

        fprintf(fp, "Bubble,%d,%lld,%lld,%lld,%.3f\n", N,
                m_bubble.passos, m_bubble.comparacoes, m_bubble.trocas, m_bubble.tempo_ms);

        free(base);
        free(v);
    }

    fclose(fp);
    printf("\nCSV salvo em data/resultados.csv\n");

    return 0;
}
