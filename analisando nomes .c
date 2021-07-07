// Analisando nomes

#include <stdlib.h>
 int main() {
 char x;
 float valor,porcent, beleza;
 printf("\n Digite a sua idade \n");
 scanf("%f", &valor);
 printf("\n Digite a letra que tem no seu primeiro nome e veja se seu nome é bonito, se tiver uma dessas letras seu nome e bonito\n");
 printf("a. seu primeiro nome tem essa letra\n");
 printf("v. seu nome possui essa letra  \n");
 printf("b. seu nome tem essa letra  \n");
 printf(" Qual letra o seu nome tem:");
 scanf("%s", &x);
 switch(x)
 {
 case 'a':

printf("Voce escolheu A, seu nome é 30 por cento bonito \n");
porcent=valor*0.30;

beleza=valor-porcent;
 printf("O seu nome além de bonito não possui feiura ou seja e %.2f\n, por cento");
 break;
 case 'v':
 printf("Voce escolheu V, seu nome e 20 por cento bonito \n");
 porcent=valor*0.20;
 beleza=valor-porcent;
 printf("Apesar de seu nome ser apenas 20 por cento bonito ele também é desprovido de feiura ou seja e %.2f\n, por cento");
 break;
 case 'b':
 
printf("Voce escolheu b, seu nome e 10 por cento bonito mas também é desprovido de feiura \n");
 porcent=valor*0.10;
 beleza=valor-porcent;
 printf("Seu nome nao tem feiura ou seja e %.2f\n, por centoa");
break;
default:
printf("Essa letra nao tem nas alternativas, mas seu nome nao deixa de ser bonito por causa disso pois esse teste e apenas uma brincadeira e nao deve ser levado a serio\n");
}
return 0;
}