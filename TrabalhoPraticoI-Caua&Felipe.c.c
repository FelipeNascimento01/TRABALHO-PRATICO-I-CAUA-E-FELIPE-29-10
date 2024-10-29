#include <stdio.h>
#include <math.h>

void menu() {
    printf("\nCalculadora Interativa de Felipe & Cauã\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Exponenciação\n");
    printf("6. Raiz Quadrada\n");
    printf("7. Módulo\n");
    printf("8. Bhaskara\n");
    printf("9. Sair\n");
}

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return a / b;
}

double exponenciacao(double a, double b) {
    return pow(a, b);
}

double raiz_quadrada(double a) {
    if (a < 0) {
        printf("Erro: Raiz quadrada de número negativo!\n");
        return 0;
    }
    return sqrt(a);
}

double modulo(double a, double b) {
    return fmod(a, b);
}

void bhaskara(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Erro: Não existem raízes reais!\n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("A raiz é: %.2f\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: %.2f e %.2f\n", x1, x2);
    }
}

int main() {
    int escolha;
    double a, b, c;

    while (1) {
        menu();
        printf("Escolha uma operação (1-9): ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%lf", &a);
                printf("Digite o segundo número: ");
                scanf("%lf", &b);
                printf("Resultado: %.2f\n", soma(a, b));
                break;

            case 2:
                printf("Digite o primeiro número: ");
                scanf("%lf", &a);
                printf("Digite o segundo número: ");
                scanf("%lf", &b);
                printf("Resultado: %.2f\n", subtracao(a, b));
                break;

            case 3:
                printf("Digite o primeiro número: ");
                scanf("%lf", &a);
                printf("Digite o segundo número: ");
                scanf("%lf", &b);
                printf("Resultado: %.2f\n", multiplicacao(a, b));
                break;

            case 4:
                printf("Digite o primeiro número: ");
                scanf("%lf", &a);
                printf("Digite o segundo número: ");
                scanf("%lf", &b);
                printf("Resultado: %.2f\n", divisao(a, b));
                break;

            case 5:
                printf("Digite a base: ");
                scanf("%lf", &a);
                printf("Digite o expoente: ");
                scanf("%lf", &b);
                printf("Resultado: %.2f\n", exponenciacao(a, b));
                break;

            case 6:
                printf("Digite o número: ");
                scanf("%lf", &a);
                printf("Resultado: %.2f\n", raiz_quadrada(a));
                break;

            case 7:
                printf("Digite o primeiro número: ");
                scanf("%lf", &a);
                printf("Digite o segundo número: ");
                scanf("%lf", &b);
                printf("Resultado: %.2f\n", modulo(a, b));
                break;

            case 8:
                printf("Digite o coeficiente a: ");
                scanf("%lf", &a);
                printf("Digite o coeficiente b: ");
                scanf("%lf", &b);
                printf("Digite o coeficiente c: ");
                scanf("%lf", &c);
                bhaskara(a, b, c);
                break;

            case 9:
                printf("Saindo da calculadora...\n");
                return 0;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}