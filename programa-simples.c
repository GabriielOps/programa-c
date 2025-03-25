#include <stdio.h>

#include <stdlib.h>



int main() {

    int esc1;



    printf("Bem-vindo ao programa em C\n");

    printf("Escolha uma das seguintes opções:\n");

    printf("1 - Cálculo do metro quadrado\n");

    printf("2 - Cálculo de média\n");

    printf("3 - Verificação de idade\n");

    printf("4 - Cálculo do IMC\n");

    printf("5 - Calculadora Simples\n");

    printf("6 - Tabuada Simples\n");

    printf("7 - Numero Par ou Impar\n");

    printf("8 - Sair\n");

    printf("Escolha um: ");

    scanf("%d", &esc1);



    switch (esc1) {

        case 1:

	    system("cls");

            metroQuadrado();

            break;

        case 2:

            system("cls");

	    calculoMedia();

            break;

        case 3:

            system("cls");

	    verificadorIdade();

            break;

        case 4:

            system("cls");

	    calculoIMC();

            break;

        case 5:
            system("cls");

            calculadoraSimples();

            break;

        case 6:
        system("cls");
        tabuadaSimples();
            break;

        case 7:
        system("cls");
        parOuImpar();
            break;

        case 8:
            system("cls");
	        printf("Até logo! o/\n");
            break;

        default:

            printf("Opção inválida!\n");

            break;

    }



    return 0;

}



void metroQuadrado() {

    int altura, largura, resultado;



    printf("Bem-vindo à calculadora de metros quadrados!\n");

    printf("Digite a altura: ");

    scanf("%d", &altura);

    printf("Digite a largura: ");

    scanf("%d", &largura);



    resultado = altura * largura;



    printf("O resultado da sua operação é %d\n", resultado);

}

void calculoMedia() {

    int valor1, valor2, valor3, valor4, resultado;



    printf("Bem-vindo à calculadora de médias!\n");

    printf("Insira ao menos 4 notas:\n");

    printf("Digite a primeira nota: ");

    scanf("%d", &valor1);

    printf("Digite a segunda nota: ");

    scanf("%d", &valor2);

    printf("Digite a terceira nota: ");

    scanf("%d", &valor3);

    printf("Digite a última nota: ");

    scanf("%d", &valor4);



    resultado = (valor1 + valor2 + valor3 + valor4) / 4;



    printf("Sua média é de %d\n", resultado);

}

void verificadorIdade() {

    int idade;



    printf("Bem-vindo ao verificador de idade!\n");

    printf("Insira sua idade: ");

    scanf("%d", &idade);



    if (idade < 18) {

        printf("Menor de idade! Alguém pega a chupeta!\n");

    } else if (idade >= 18 && idade < 60) {

        printf("A vida adulta não é mole...\n");

    } else {

        printf("A fila preferencial é logo ali!\n");

    }

}

void calculoIMC() {

    float altura, peso, resultado;



    printf("Bem-vindo à calculadora de IMC!\n");

    printf("Digite sua altura: ");

    scanf("%f", &altura);

    printf("Digite seu peso: ");

    scanf("%f", &peso);



    resultado = peso / (altura * altura);



    printf("O seu IMC é de %.2f\n", resultado);


}

void calculadoraSimples(){

    float num1,num2,resultado;
    int operacao;

    printf("Bem-vindo à calculadora simples!zn");

    printf("Digite o valor 1: ");

    scanf("%f",&num1);

    printf("Digite o valor 2: ");

    scanf("%f",&num2);

    printf("Digite a operação desejada:\n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Sair");

    switch (operacao) {

        case 1:

	    system("cls");

            resultado = num1 + num2;
            printf("O resultado da operação é: %f\n", &resultado);

            break;

        case 2:
        system("cls");

        resultado = num1 - num2;
        printf("O resultado da operação é: %f\n", &resultado);

            break;

        case 3:
        system("cls");

        resultado = num1 * num2;
        printf("O resultado da operação é: %f\n", &resultado);

            break;

        case 4:

        system("cls");

        resultado = num1 / num2;
        printf("O resultado da operação é: %f\n", &resultado);

            break;

        case 5:
            system("cls");
            printf("Adeus!");
            break;

        default:

            printf("Opção inválida!\n");

            break;


}
}

void tabuadaSimples(){
    int i,input,resultado;

    printf("Bem-vindo à Tabuada Simples!\n");

    printf("Digite a tabuada a ser exibida: ");

    scanf("%d",&input);

    printf("A tabuada de %d é :\n", &input);

    for (i = 1; i <= 10; i++) {
        resultado = input * i;
        printf("%d x %d = %d\n", input, i, resultado);
    }
}

void parOuImpar() {
    int numero;

    printf("Bem-vindo ao verificador de número par ou ímpar!\n");
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
}
