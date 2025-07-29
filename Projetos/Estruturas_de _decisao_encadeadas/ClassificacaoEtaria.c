#include <stdio.h>
//Verificação de idade para classificação etária
    int main(){
        int idade;
            printf("Digite a idade: ");
            scanf("%d", &idade);
            //Criança < 12
            //Adolescente >= 12 x < 18
            //Adulto <= 18 x < 60
            //Idoso > 60
                if (idade < 12){
                    printf("Você é uma criança");
                } else if (idade >= 12 && idade < 18){
                    printf("Você é um adolescente");
                } else if (idade >= 18 && idade < 60){
                    printf("Você é um adulto");
                } else {
                    printf("Você é um idoso");
                }
    }