#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, vPedido=0 , vTotal=0, totaldoDia=0, taxa = 0, acrescimos = 0;
    int opc, qtd, numPedido=1, resposta, somaQtd = 0;


    do{
        printf("\nMENU LANCHONETE\n\n");
        printf("1.Faca Seu Pedido\n");
        printf("2.Historico dos seus pedidos\n");
        printf("3.Encerrar operacao\n\n\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opc);



            switch(opc)
            {
            case 1:

                do{
                    do{
                        do{
	                        printf("\nPedido numero: %d\n", numPedido);
	                        vTotal=0;
	                        vPedido=0;
	                        acrescimos=0;
	                        somaQtd=0;
							do{
								printf("\nMenu\n[1] p/SONHO\n[2] p/CHURROS\n[3] p/ COXINHA DE FRANGO\n[0] p/ ENCERRAR\n ");
	                            scanf("%d", &opc);
	                        	if(opc>3){
									printf("Opçao Invalida! Digite uma opcao valida\n\n");
								}
							}while(opc>3);

                            if(opc == 1){
                                valor = 3.50;
                                printf("\nInforme a Quantidade: ");
                                scanf("%d", &qtd);
                                vPedido = valor * qtd;
                                printf("Valor por unidade: %.2f\n", valor);
                                printf("Valor do item selecionado: %.2f\n\n", vPedido);
                                }else
                                    if(opc == 2){
                                        valor = 4.50;
                                        printf("Informe a Quantidade: ");
                                        scanf("%d", &qtd);
                                        vPedido = valor * qtd;
                                        printf("Valor por unidade: %.2f\n", valor);
                                        printf("Valor do item selecionado: %.2f\n\n", vPedido);
                                        }else
                                        	if(opc == 3){
                                            valor = 5.50;
                                            printf("Informe a Quantidade: ");
                                            scanf("%d", &qtd);
                                            vPedido = valor * qtd;
                                            printf("Valor por unidade: %.2f\n", valor);
                                            printf("Valor do item selecionado: %.2f\n\n", vPedido);
                                        	}


                            if(opc!=0){
                            	printf("[1] Continuar pedindo\n[2] Estorno\n[3] Pagamento\n");
                            	scanf("%d", &opc);
	                            if(opc == 2){
	                                qtd = 0;
	                                vPedido = 0;
	                                printf("Pedido %d estornado com sucesso.\n", numPedido);
                            	}
                       		}


                            vTotal = vTotal + vPedido;
                            somaQtd = somaQtd + qtd;

                        }while(opc == 1 || opc == 2);


                        if(opc == 3){
                            printf("Total de itens: %.2d\n", somaQtd);
                            printf("Valor total do Pedido: %.2f\n\n", vTotal);
                            printf("FORMAS DE PAGAMENTO\n");
                            printf("ATENCAO!!! Pagamentos com CREDITO taxa adicional de 1.00 por item.\n\n");
                            do{
                                printf("[1] PIX [2] A VISTA [3] DEBITO [4] CREDITO: ");
                                scanf("%d", &opc);
                                if(opc>4){
                                printf("Opcao invalida!!! Digite uma opcao valida para continuar!\n");
                                }
                            }while(opc>4);
                            if(opc == 1){
                                printf("Total a pagar: %.2f\n\n", vTotal);
                                }else
                                    if(opc == 2){
                                        printf("Total a Pagar: %.2f\n\n", vTotal);
                                        }else
                                            if(opc== 3){
                                                printf("Total a Pagar: %.2f\n\n", vTotal);
                                                }else{
                                                    taxa = 1.00;
                                                    acrescimos = taxa * somaQtd;
                                                    vTotal = vTotal + acrescimos;
                                                    printf("Total da Taxa: %.2f\n", acrescimos);
                                                    printf("Total a Pagar: %.2f\n\n", vTotal);
                                                    printf("Pedido %d Finalizado com sucesso.\n\n", numPedido);
                                                }
                        }


						totaldoDia = totaldoDia + vTotal;


                        if(opc!=0){
							printf("Digite [1] para continuar ou [2] para encerrar.\n");
	                        scanf("%d", &resposta);
                        	if(resposta == 1){
                            	numPedido++;
                        }
                    	}


	                }while(resposta == 1);

	            }while(opc!=0);
	            printf("Programa Finalizado\n");

                break;

            case 2:
				printf("\n---RELATORIOS ADMINISTRATIVOS---\n\n");
                printf("Fechamento de Caixa do dia : %.2f\n", totaldoDia);
                break;

            case 3:
                break;

            default:
            printf("Opcao Invalida!! Digite uma opcao valida!\n\n");
            break;
            }
    }while(opc!=3);
    printf("Programa encerrado");

    return 0;
}
