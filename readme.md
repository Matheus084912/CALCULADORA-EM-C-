<h1 align="center">Ordenação e Análise de Desempenho</h1>

Este projeto é um programa em C que ordena os dígitos do RGM (Registro Geral do Matrículo) do usuário utilizando **Bubble Sort** e mede métricas de desempenho, como **passos**, **comparações**, **trocas** e **tempo de execução**.  
Além disso, realiza um **benchmark automático** com vetores aleatórios de diferentes tamanhos e gera resultados em formato CSV para análise.

---

## Tecnologias e Recursos Utilizados

**Linguagem:** C

**Bibliotecas padrão:**

- `<stdio.h>` — Entrada e saída de dados
- `<stdlib.h>` — Funções de alocação dinâmica e `rand()`
- `<string.h>` — Manipulação de strings
- `<time.h>` — Medição de tempo de execução
- `<ctype.h>` - Usado para funções de manipulação e verificação de caracteres

**Funções principais:**

- `bubble_sort(int v[], int n, Metricas *m)` — Ordena um vetor de inteiros e contabiliza métricas  
- `copia(int *dest, int *orig, int n)` — Copia o conteúdo de um vetor para outro

**Estruturas de dados:**

- `struct Metricas` — Armazena métricas de execução:
  - `passos` — Número total de passos executados
  - `comparacoes` — Total de comparações entre elementos
  - `trocas` — Total de trocas realizadas
  - `tempo_ms` — Tempo de execução em milissegundos

**Controle de fluxo:**

- Loops `for` — Iteração para ordenação e benchmark
- Estruturas `if` — Validação do RGM e tratamento de erros

---

## Informações adicionais

- O programa só aceita RGMs de 8 dígitos. Entradas inválidas são rejeitadas.
- Os vetores do benchmark são gerados aleatoriamente.

---

## Exemplos de Uso

**Exemplo 1: Ordenar RGM**

Digite seu RGM (8 digitos): 87654321

---ORDENANDO O RGM-----
Bubble Sort RGM: 12345678
Passos: 28 | Comparacoes: 28 | Trocas: 12 | Tempo: 0.012 ms


**Exemplo 2: Benchmark automático**

---RESULTADOS EM CSV---
Metodo,N,Passos,Comparacoes,Trocas,Tempo_ms
Bubble,100,4950,4950,2475,0.150
Bubble,1000,499500,499500,249750,15.342
Bubble,10000,49995000,49995000,24997500,1550.678

**Explicação das métricas:**

- **Passos** — Contagem total de operações executadas pelo algoritmo  
- **Comparações** — Cada verificação `v[j] > v[j+1]`  
- **Trocas** — Cada vez que dois elementos são trocados de posição  
- **Tempo_ms** — Tempo total gasto na ordenação em milissegundos

---

## Como usar este projeto?

1. **Download**  
   Baixe o arquivo `ordenacao.c` ou o projeto completo deste repositório.

2. **Abrir na IDE ou Online (GDB)**  
   Abra o arquivo no Dev-C++, Code::Blocks, Visual Studio ou sua IDE de preferência.  
   Certifique-se de que a IDE está configurada para usar um compilador C.

3. **Compilar e Executar**  

```bash

gcc ordenacao.c -o 



