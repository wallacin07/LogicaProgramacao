#include <stdio.h>
#ifndef banco_h
#define banco_h


int banco(){
int saldo = 0,saque,deposito, opcao, sair = 0;
printf("Voce acabou de abrir a conta, o que deseja fazer");
Inicio:
while (sair != 1)
{
    


printf("Digite o que deseja fazer\n1 - depositar\n2 - sacar\n");
scanf("%i", &opcao);
if (opcao == 1)
{
printf("\nDigite o quanto deseja depositar\n");
scanf("%i", &deposito);
saldo = saldo + deposito;
}
else if (opcao == 2)
{
printf("Digite o quanto deseja sacar\n");
scanf("%i", &saque);
while(saldo < 60)
{
    printf("\nVoce nao pode sacar");
    goto Inicio;
}
saldo =  saldo - saque;
}
 else
 printf("\nOpcao invalida");

printf("\nDeseja sair do sistema?\nSe sim, digite 1\nSe nao, digite qualquer outro numero\n") ;
scanf("%i", &sair);
}

}





#endif

