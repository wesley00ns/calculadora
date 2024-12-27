#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    
    printf("Bem-vindo à Calculadora!\n");
    printf("Escolha a operação desejada:\n");
    printf(" +  -> Adição\n");
    printf(" -  -> Subtração\n");
    printf(" *  -> Multiplicação\n");
    printf(" /  -> Divisão\n");
    printf("Digite a operação: ");
    scanf(" %c", &op);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}