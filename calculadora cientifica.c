#include <stdio.h>
#include <math.h>
#define USE_MATH_DEFINES
#define M_PI 3.14159265358979323846



    int main() {
    double numero1, numero2, numero3, numero4, numero5, resultado;
    int op; 
    
    printf("BEM VINDOS A CALCULADORA CIENTIFICA!\n\n");
    printf("DIGITE UM NUMERO PARA SELECIONAR A OPERACAO DESEJADA\n\n 1- ADICAO\n 2- SUBTRACAO\n 3- MULTIPLICACAO\n 4- DIVISAO\n 5- POTENCIACAO\n 6- RAIZ QUADRADA\n 7- SENO\n 8- COSSENO\n 9- TANGENTE\n 10- LOGARITMO NA BASE 10\n 11- LOGARITMO NEPERIANO - Ln\n 12- EXPONENCIAL - E^X\n 13- CALCULO DO IMC\n 14- AREA DO CIRCULO\n 15- CONVERSAO DE MIN PRA HORAS\n 16- CONVERSAO DE HORAS PRA MIN\n 17- CONVERSAO DE KM PRA METROS\n 18- CONVERSAO DE METROS PRA KM\n 19- CONVERSAO DE GRAUS EM RADIANOS\n 20- CONVERSAO DE RADIANOS PARA GRAUS\n 21- CONVERSAO DE CELSIUS PARA FAHRENHEIT\n 22- CONVERSAO DE FAHRENHEIT PARA CELSIUS\n 23- CONVERSAO DE CELSIUS PARA KELVIN\n 24- CONVERSAO DE KELVIN PARA CELSIUS\n 25- CONVERSAO DE FAHRENHEIT PARA KELVIN\n 26- CONVERSAO DE KELVIN PARA FAHRENHEIT\n 27- CALCULO DA AREA DO QUADRADO\n 28- PERCENTUAL DE UM NUMERO\n 29- AUMENTO PERCENTUAL\n 30- DESCONTO PERCENTUAL\n 31- MEDIA ARITMETICA\n");
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
    printf("O SENO E: %.2lf\n",resultado);
        break;
    }
        
        case 8:
        {
    printf("DIGITE O ANGULO EM GRAUS:\n");
    scanf("%lf",&numero1);
        resultado = cos(numero1*M_PI/180);
    printf("O COSSENO E: %.2lf\n",resultado);        
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
    printf("O LOG DE BASE 10 E: %.2lf ",resultado);
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
    
        case 13:{
    printf("DIGITE O PESO (em KG):\n");
    scanf("%lf",&numero1);  
    printf("DIGITE A ALTURA (em METROS):\n");
    scanf("%lf",&numero2);  
    if (numero2 > 0) {
        resultado = numero1 / (numero2 * numero2);  
        printf("SEU IMC E %.2lf\n", resultado);
    } else {
        printf("ERRO: ALTURA INVALIDA!\n");
    }
    break;
    }

        case 14:{
    printf("DIGITE O RAIO DO CIRCULO:\n");
    scanf("%lf", &numero1);
        resultado = M_PI * numero1 * numero1;
    printf("A AREA DO CIRCULO COM RAIO %.2lf E: %.4lf\n", numero1, resultado); 
    break;
    }
    
    
        case 15:{
    printf("DIGITE O NUMERO EM MINUTOS:\n");
    scanf("%lf", &numero1);
        resultado = numero1 / 60;
    printf("%.2lf MINUTOS SAO EQUIVALENTES A %.2lf HORAS\n", numero1, resultado);    
    break;
    }
        
        case 16:{
    printf("DIGITE O NUMERO EM HORAS:\n");
    scanf("%lf", &numero1);
        resultado = numero1 * 60;
    printf("%.2lf HORAS SAO EQUIVALENTES A %.2lf MINUTOS\n", numero1, resultado);    
    break;
    }

        case 17:{
    printf("DIGITE O NUMERO EM KM:\n");
    scanf("%lf",&numero1);
        resultado = numero1 * 1000;
    printf("%.2lf KM SAO %.2lf METROS\n",numero1, resultado);
    break;
    }
        
        case 18:{
    printf("DIGITE O NUMERO EM METROS:\n");
    scanf("%lf",&numero1);
        resultado = numero1 / 1000;
    printf("%.2lf METROS SAO %.2lf KM\n",numero1, resultado);
    break;
    }

        case 19:{
    printf("DIGITE O NUMERO EM GRAUS:\n");
    scanf("%lf",&numero1);
        resultado = numero1 * (M_PI/180);
    printf("%.2lf GRAUS SAO %.2lf RAD\n",numero1, resultado);
    break;
    }
    
        case 20:{
    printf("DIGITE O NUMERO EM RADIANOS:\n");
    scanf("%lf",&numero1);
        resultado = numero1 * (180/M_PI);
    printf("%.2lf RAD SAO %.2lf GRAUS\n",numero1, resultado);
    break;
    }
    
        case 21:{
    printf("DIGITE O NUMERO EM CELSIUS\n");
    scanf("%lf",&numero1);
        resultado = (numero1 * 1.8) + 32;
    printf("%lf CELSIUS SAO %lf FAHRENHEIT\n",numero1, resultado);
    break;
    }
        
        case 22:{
    printf("DIGITE O NUMERO EM FAHRENHEIT\n");
    scanf("%lf",&numero1);
        resultado = (numero1 - 32) * (1.0/1.8);
    printf("%.2lf FAHRENHEIT SAO %.2lf CELSIUS\n",numero1, resultado);
    break;
    }
        
        case 23:{
    printf("DIGITE O NUMERO EM CELSIUS\n");
    scanf("%lf",&numero1);
        resultado = numero1 + 273;
    printf("%.2lf CELSIUS SAO %.2lf KELVIN\n",numero1, resultado);
    break;
    }
        
        case 24:{
    printf("DIGITE O NUMERO EM KELVIN\n");
    scanf("%lf",&numero1);
        resultado = numero1 - 273;
    printf("%.2lf KELVIN SAO %.2lf CELSIUS\n",numero1, resultado);
    break;
    }
        
        case 25:{
    printf("DIGITE O NUMERO EM FAHRENHEIT\n");
    scanf("%lf",&numero1);
        resultado = (numero1-32) * 5/9 + 273;
    printf("%.2lf FAHRENHEIT SAO %.2lf KELVIN\n",numero1, resultado);
    break;
    }
        
        case 26:{
    printf("DIGITE O NUMERO EM KELVIN\n");
    scanf("%lf",&numero1);
        resultado = (numero1-273) * 1.8 + 32;
    printf("%.2lf KELVIN SAO %.2lf FAHRENHEIT\n",numero1, resultado);
    break;
    }
        
        case 27:{
    printf("DIGITE O NUMERO EM CM OU M:\n");
    scanf("%lf",&numero1);
        resultado = (numero1 * numero1);
    printf("A AREA DO QUADRADO DE LADO %.2lf E %.2lf",numero1, resultado);
    break;
    }
    
        case 28:{
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
        resultado = (numero1 * numero2) / 100;
    printf("O PERCENTUAL DE %.2lf DE %.2lf E: %.2lf\n", numero1, numero2, resultado);
    break;
    }

        case 29:{
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO (PERCENTUAL):\n");
    scanf("%lf", &numero2);
        resultado = numero1 + (numero1 * numero2 / 100);
    printf("O AUMENTO DE %.2lf POR %.2lf%% E: %.2lf\n", numero1, numero2, resultado);
    break;
    }
    
        case 30:{
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO (PERCENTUAL):\n");
    scanf("%lf", &numero2);
        resultado = numero1 - (numero1 * numero2 / 100);
    printf("O DESCONTO DE %.2lf POR %.2lf%% E: %.2lf\n", numero1, numero2, resultado);
    break;
    }
        
        case 31:{
    printf("DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%lf", &numero1);
    printf("DIGITE O SEGUNDO NUMERO:\n");
    scanf("%lf", &numero2);
    printf("DIGITE O TERCEIRO NUMERO:\n");
    scanf("%lf", &numero3);
    printf("DIGITE O QUARTO NUMERO:\n");
    scanf("%lf", &numero4);
    printf("DIGITE O QUINTO NUMERO:\n");
    scanf("%lf", &numero5);

        resultado = (numero1 + numero2 + numero3 + numero4 + numero5) / 5;

    printf("A MEDIA ARITMETICA ENTRE %.2lf, %.2lf, %.2lf, %.2lf, %.2lf E: %.2lf\n", 
            numero1, numero2, numero3, numero4, numero5, resultado);
    break;
}
    
        default:
    printf("O NUMERO ESCOLHIDO E INVALIDO.\n TENTE NOVAMENTE!\n");
        break;
    }        
    
    
    

    return 0;
        
}


    
    
    
    
    