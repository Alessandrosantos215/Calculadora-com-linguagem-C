#include <stdio.h> //inclui a biblioteca padrão de entrada e saída 

int main() {       // Todo programa C começa a execução pela função
    char operador; //operador: armazena o operador inserido pelo usuário
    float num1, num2, resultado;//armazenam os números inseridos pelo usuário.
                                //resultado: armazena o resultado da operação matemática

    printf("Digite uma operação (+, -, *, /): ");//printf, o programa solicita ao usuário que insira um dos simbulos matematicos
    scanf(" %c", &operador); // Adicionando espaço em branco antes de %c
            //%c é o formato de conversão para "UM" caractere

    printf("Digite o primeiro numero depois enter e o segundo numero do calculo: ");//printf, o programa solicita ao usuário que insira uma operação e dois números
    scanf("%f %f", &num1, &num2); // scanf para ler a entrada do usuário
         //%f é o formato de conversão para um número de ponto flutuante

    switch(operador) { //permite selecionar uma das várias opções de execução de código
        case '+': //Cada "case" corresponde a uma operação matemática possível.
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro! Divisão por zero.\n");
                return 1; // Termina o programa com código de erro
            }
            break;
        default: //não corresponder a nenhum dos casos, o bloco default é executado, indicando que a operação inserida pelo usuário é inválida.
            printf("Operação inválida,você inseriu um dos simbulos matematicos que não está na calculadora.\n");
            return 1; // Termina o programa com código de erro
    }

    printf("Resultado: %.2f\n", resultado);

    return 0; // Termina o programa sem erro
}


