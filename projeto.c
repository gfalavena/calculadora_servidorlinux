#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

/* run this program using the console pauser or add your own getch, system("pause") or imput loop */

int main(int argc, char *argv[]){



	float numero1;
	int operacao;
        float numero2;
        float resultado;
        int opcao;

        
        opcao=1;
  while(opcao==1){
    printf("Qual operacao voce deseja fazer:\n  Soma=1  Subtracao=2  Multiplicacao=3  Divisao=4\n");
    scanf("%d",&operacao);
    printf("Digite o primeiro numero:\n");
    scanf("%f",&numero1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&numero2);




 switch(operacao){

	 case 1:
	//Soma
	resultado= soma (numero1, numero2);
        break;

	 case 2:
	//Subtracao
	resultado= subtracao (numero1, numero2);
	break;

	 case 3:
	//Multiplicacao
	resultado= multiplicacao (numero1, numero2);
	break;

        case 4:
	//Divisao
	/*if(numero2=0){*/
         
	/*printf("Operacao por erro invalido");
	}*/

	/*else(numero2>0);{*/
	
        resultado= divisao (numero1, numero2);
	break;

 }

 printf("O valor é: %.2f\n",resultado);
 printf("Digite 1 p/ escolher outra operacao ou 0 para encerrar o programa\n");
 scanf("%d",&opcao);

  }

  return 0;

}
