#include <stdio.h>
#include <math.h>
#define USE_MATH_DEFINES
#define M_PI 3.14159265358979323846



int main() {
    double numero1, numero2, resultado;
    int op; 
    
    printf("BEM VINDOS A CALCULADORA CIENTIFICA!\n\n");
    printf("DIGITE UM NUMERO PARA SELECIONAR A OPERACAO DESEJADA\n\n 1- ADICAO\n 2- SUBTRACAO\n 3- MULTIPLICACAO\n 4- DIVISAO\n 5- POTENCIACAO\n 6- RAIZ QUADRADA\n 7- SENO\n 8- COSSENO\n 9- TANGENTE\n 10- LOGARITMO NA BASE 10\n 11- LOGARITMO NEPERIANO - Ln\n 12- EXPONENCIAL - E^X\n");
    scanf(" %d", &op);

    switch(op){
       
        case 1:
        {
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
        resultado = numero1 + numero2;
    printf("RESULTADO: %g\n", resultado);
            break;
    }
        case 2:
        {
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
        resultado = numero1 - numero2;
    printf("RESULTADO: %g\n", resultado);
            break;
    }
        case 3:
        {
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
        resultado = numero1 * numero2;
    printf("RESULTADO: %g\n", resultado);
            break;
    }
        case 4:
        {
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
        if (numero2 == 0) {
    printf("Erro: DIVISAO POR 0\n");
            } 
        else {
        resultado = numero1 / numero2;
    printf("RESULTADO: %g\n", resultado);
        }
            break;
    } 
        case 5:
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
            {
        resultado = pow(numero1, numero2);
    printf("%.2lf ELEVADO A %.2lf = %.2lf\n", numero1, numero2, resultado);
            break;
    }   
        
        case 6:
        {
    printf("DIGITE O NUMERO:\n");
    scanf("%lf",&numero1);
        if(numero1>=0) {
        resultado = sqrt(numero1);
    printf("RESULTADO:%.2lf\n",resultado);
            }
        else{
    printf("ERRO: RAIZ DE NUMERO NEGATIVO!\n");
        }
        break;
    }
        
        case 7:
        {
    printf("DIGITE O ANGULO EM GRAUS:\n");
    scanf("%lf",&numero1);
        resultado = sin(numero1*M_PI/180);
    printf("O SENO É: %.2lf\n",resultado);        
        break;
    }
        
        case 8:
        {
    printf("DIGITE O ANGULO EM GRAUS:\n");
    scanf("%lf",&numero1);
        resultado = cos(numero1*M_PI/180);
    printf("O COSSENO É: %.2lf\n",resultado);        
        break;
    }
        
        case 9:
        {
    printf("DIGITE O ANGULO EM GRAUS:\n");
    scanf("%lf",&numero1);
        resultado = tan(numero1*M_PI/180);
    printf("A TANGENTE E: %.2lf\n",resultado);        
        break;
    }
        
        case 10:
        
    printf("DIGITE O NUMERO:\n");    
    scanf("%lf",&numero1);
       
        if(numero1>0)
        {
        resultado = log10(numero1);
    printf("O LOG DE BASE 10 É: %.2lf ",resultado);
        }
        else{
    printf("ERRO: LOGARITMO INEXISTENTE - NUMERO NAO POSITIVO!\n");
        }
        break;
        
        case 11:
    printf("DIGITE O NUMERO: ");
    scanf("%lf",&numero1);
        if(numero1>0)
        {
        resultado = log(numero1);
    printf("O LOG É: %.2lf\n",resultado);
        }
        else{
    printf("ERRO: LOGARITMO INEXISTENTE - NUMERO NAO POSITIVO!\n");
        }
        break;
        
        case 12:{
    printf("DIGITE O EXPOENTE X PARA E^X:\n");    
    scanf("%lf",&numero1);    
        resultado = exp(numero1);
    printf("RESULTADO: %.2lf",resultado);  
 }  
    break;
        
        default:
    printf("O NUMERO ESCOLHIDO E INVALIDO.\n TENTE NOVAMENTE!\n");
        break;
    }        

    return 0;
        
}

