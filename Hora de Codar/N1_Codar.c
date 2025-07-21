#include <stdio.h>
    int main() {
        
//Hora de Codar
//Registro de Alunos
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome \n");
    scanf("%s", nome);
    printf("Digite sua matricula \n");
    scanf("%d", &matricula);
    printf("Digite sua idade \n");
    scanf("%d", &idade);
    printf("Digite sua altura \n");
    scanf("%f", &altura);

    printf("Nome do aluno: %s\ - matricula: %d\n", nome, matricula);
    printf("idade do aluno: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;   
}
