<h1 align="center"> CALCULADORA CIENTÍFICA -  ATUALIZADA COM FUNÇÕES - 2.0</h1>

Este projeto é uma calculadora científica na linguagem C que suporta 36 funções, divididas em 33 funções matemáticas e funções de saída da calculadora, mostrar e limpar histórico. O usuário pode acessar o menu interativo para escolher a operação desejada.

## Tecnologias e Recursos Utilizados

**Linguagem:** C 

**Bibliotecas padrão:**
- `<stdio.h>` — entrada e saída de dados
- `<math.h>` — funções matemáticas avançadas

**Funções matemáticas da `<math.h>`:**
- **Trigonométricas:** `sin()`, `cos()`, `tan()`
- **Potência e raiz:** `pow()`, `sqrt()`
- **Logaritmos:** `log()` (ln), `log10()` (base 10)
- **Exponencial:** `exp()` (e^x)

**Constantes:**
- `M_PI` — cálculos trigonométricos e geométricos

**Estruturas de dados:**
- Arrays (`double[]`) — utilizados para adição de múltiplos números e cálculo de média aritmética

**Estruturas de controle:**
- `do-while` — loop principal da calculadora
- `switch-case` — seleção de operações (36 cases)
- `if-else` — validação de entrada e tratamento de erros

**Tratamento de erros:**
- Divisão por zero
- Raiz quadrada de número negativo<br>
- Logaritmo de número não positivo
- Validação de entradas inválidas

**Compilador:** GCC

## Como usar este projeto?

### 1. Download
Baixe o arquivo `calculadora cientifica.c` deste repositório.

### 2. Abrir na IDE ou ONLINE (GDB)
- Abra o arquivo no Dev-C++, Code::Blocks, Visual Studio ou sua IDE de preferência
- Certifique-se de que a IDE está configurada para usar um compilador C

### 3. Compilar e Executar
- Compile o projeto
- Execute o programa

## Exemplos de Uso:

### Exemplo 1: SENO
- Escolha a opção 7  
- Digite o ângulo em graus: 30  
- o seno é: 0.50

### Exemplo 2: Celsius para Fahrenheit
- Escolha a opção 21  
- Digite o número em celsius 100  
- 100 celsius sao 212 fahrenheit

### Informações adicionais:

O programa utiliza um loop do-while, permitindo que o usuário realize várias operações sem reiniciar.
Para sair da calculadora, basta escolher a opção 0 (sair) ou responder "n" quando perguntado ao final de uma operação se deseja continuar.

O código possui tratamento para erros.  
***Exemplos:***  
1-Divisão por zero  
2-Raiz de número negativo  
3-Logaritmo de número não positivo


