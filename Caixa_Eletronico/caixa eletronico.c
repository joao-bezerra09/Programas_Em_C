#include<stdio.h>
int main(){
float saldo = 1000, cred , deb;
int opcao;
do{
    printf("====Banco Jm==== \n");
    printf(" 1 - Depositar \n");
    printf("2 - Sacar \n");
    printf("3 - Ver saldo \n");
    printf("0 Sair \n");
    scanf("%d", &opcao);
    switch (opcao){
case 1:
    printf("Quanto deseja adicionar? \n");
    scanf("%f", &cred);
    saldo = saldo + cred;
    printf("Novo saldo = %.2f \n", saldo);
break;

case 2:
    printf("Quanto deseja sacar? \n");
    scanf("%f", &deb);
    if (deb > saldo){
        printf("Saldo insuficiente \n");
    }else{
    saldo = saldo - deb;
     printf("saldo atual: %.2f \n", saldo);
    }
    break;
case 3:
    printf("saldo = %.2f \n" ,saldo);
    break;

case 0:

printf("Obrigado pela a preferencia, adeus. \n");
break;

    }
}while(opcao != 0);

return 0;
}
