
#include <stdio.h>

int main(){

    float idade;

    printf("Digite a sua idade, se não tiver qualificado para tirar habilitação a tela fechará: \n");
    scanf("%f", &idade);
    if (idade>=18)
    {
        printf("Pode tirar a sua carteira de habilitacao, voce e maior de 18");
        return 0;
       
    }
}
