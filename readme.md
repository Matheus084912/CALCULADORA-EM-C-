# <h1 align="center">Algoritmos e Pensamento Computacional</h1>

## 📚 ADS – 1º Semestre

**Aluno:** Matheus Gomes Costa Teixeira  
**Instituição:** UDF - Centro Universitário  
**Disciplina:** Algoritmos e Pensamento Computacional

---

## 📁 Projetos Desenvolvidos

### 🔹 1. Sistema de Gerenciamento de Alunos – Média de Notas
Programa em C que registra informações do aluno, lê múltiplas notas e calcula:

- Média automática
- Situação (aprovado/reprovado)
- Nome e matrícula

---

### 🔹 2. Ordenação e Análise de Desempenho — Bubble Sort
Programa que:

- Ordena os 8 dígitos do RGM do aluno
- Calcula métricas do algoritmo:
  - Passos  
  - Comparações  
  - Trocas  
  - Tempo (ms)
- Executa benchmark automático
- Gera arquivo CSV com estatísticas

---

### 🔹 3. Calculadora Científica 2.0 (36 Funções)
Calculadora completa desenvolvida em C, contendo:

- 33 funções matemáticas
- Exibir histórico
- Limpar histórico
- Sair da calculadora

Todas as operações são feitas via menu com **switch-case** e **do-while**.

---

## 🧰 Stack Tecnológica

**Linguagem:** C  
**Ferramentas:** Dev-C++, VS Code, Online GDB  
**Compilador:** GCC  

**Bibliotecas utilizadas:**

- `<stdio.h>`  
- `<stdlib.h>`  
- `<string.h>`  
- `<ctype.h>`  
- `<time.h>`  
- `<math.h>`  

---

## 🔵 1. Sistema de Notas — Detalhamento

Sistema simples baseado em:

- Vetores
- Condicionais
- Funções
- Estruturas (`struct`)

Mostra:

- Nome
- Matrícula
- Notas
- Média
- Aprovação/Reprovação

---

## 🟢 2. Ordenação e Análise de Desempenho — Detalhamento

### Struct utilizada:
```c
struct Metricas {
    long passos;
    long comparacoes;
    long trocas;
    double tempo_ms;
};
