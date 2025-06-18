/*

5. Utilizando o template de menus mostrado em aula, faça um programa que simule uma calculadora
simples, mostrando ao usuário as opções somar, subtrair, multiplicar e dividir dois números reais. Cada
uma das operações deve ser executada em funções que recebam como parâmetro os dois números,
lidos do usuário. As funções devem retornar o resultado para o programa principal, que o exibirá na
tela. OBS.: Apenas chame a função de dividir se o divisor for diferente de zero (divisão por zero não
existe!).

*/
    #include <stdio.h>

    float somar(float a, float b) {
        return a + b;
    }

    float subtrair(float a, float b) {
        return a - b;
    }

    float multiplicar(float a, float b) {
        return a * b;
    }

    float dividir(float a, float b) {
        return a / b;
    }

     
    int main() {

    int opcao;
    float num1, num2, resultado;

    do {
        printf("\nCalculadora Simples\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch(opcao) {
            case 1:
                resultado = somar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = dividir(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);
    }


}