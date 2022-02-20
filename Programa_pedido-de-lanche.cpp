#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(void) {setlocale(LC_ALL,"portuguese");
int pedidos,qnt1,bebida1;
float t1,t2,t3,t4,t5; //total
float p1=25.60,p2=25.60,p3=27.90,p4=30.50,h1=20.90,h2=17.50,h3=15.50,h4=30.50,b1=8,b2=6.50,b3=4.50,b5=3;//Valores(bebida(b),pizza(p),hamburguer(h))
char sn1[5];//sim ou não
system("color f0");
 printf("       Lanchonete Irmãos Lima ");
  printf("\n");
  printf("\n");
  printf("           _ENTREGA_ \n");
   printf("\n");
  printf("\n");
    printf("_Lanches_           _Cód_        _Preço_   \n");
  printf("\n");
    printf("Pizzas(Grande):\n");
      printf("\n");
    printf("A Moda               100          R$%.2f   \n",p1);   //1
    printf("4 Queijos            101          R$%.2f   \n",p2);   //2
    printf("Portuguesa           102          R$%.2f    \n",p3);  //3
    printf("Vegana               103          R$%.2f    \n",p4);   //4
      printf("\n");
    printf("Hamburgueres:\n");
      printf("\n");
    printf("X-Burguer            104          R$%.2f    \n",h1);   //5
    printf("X-Bacon              105          R$%.2f    \n",h2);    //6
    printf("X-Tudo               106          R$%.2f    \n",h3);    //8
    printf("X-Artesanal          107          R$%.2f    \n",h4);    //9
      printf("\n");
         printf("Digite (3) pra entrar no modo informativo.\n");
         printf("\n");
         printf("\n");
         printf("Digite abaixo o código do seu pedido: \n");
         printf(">>> ");
         scanf("%i",&pedidos);
         if (pedidos==3)
         {
		 
        system("CLS");   
         	printf("A Moda: muçarela, frango, presunto, calabresa,tomate, oregano e azeitona.  \n");
			 printf("\n");   //1
    printf("4 Queijos: muçarela, queijo prato, provolone e catupiry. \n");   //2
    printf("\n");
    printf("Portuguêsa: presunto, muçarela, ervilha, milho, cebola, ovo e pimenta. \n");  //3
    printf("\n");
    printf("Vegana: cenoura, champignon, milho, brócolis, ervilha, cebola, tomate e azeitona. \n");   //4
    printf("\n");
    printf("X-Burguer: pão, hamburguer, muçarela, molho especial e salada. \n");   //5
    printf("\n");
    printf("X-Bacon: pão, hamburguer, bacon, muçarela, molho especial e salada. \n");    //6
    printf("\n");
    printf("X-tudo: pão, hamburguer, bacon, muçarela, catupiry, molho especial e salada. \n");    //8
    printf("\n");
    printf("X-Artesanal: pão, hamburguer artesanal, bacon, muçarela, catupiry, frango, presunto, molho especial e salada. \n");
    printf("\n");
	getch();
	system("CLS");
	main();
		 }
		 else
		 {
		 	switch (pedidos)
		 	{
		 		case 100:
		 			system("CLS");
		 	    printf("A moda, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=p1+b1;
		 	    t2=p1+b2;
		 	    t3=p1+b3;
		 	    t4=p1+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e sua Pizza A Moda está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e sua Pizza A Moda está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e sua Pizza A Moda está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e sua Pizza A Moda está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e sua Pizza A Moda está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e sua Pizza A Moda está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",p1);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
				case 101:
					system("CLS");
		 	    printf("4 Queijos, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=p2+b1;
		 	    t2=p2+b2;
		 	    t3=p2+b3;
		 	    t4=p2+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e sua Pizza 4 Queijos está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e sua Pizza 4 Queijos está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e sua Pizza 4 Queijos está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e sua Pizza 4 Queijos está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e sua Pizza 4 Queijos está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e sua Pizza 4 Queijos está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",p2);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			case 102:
				system("CLS");
		 	    printf("Portuguesa, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=p3+b1;
		 	    t2=p3+b2;
		 	    t3=p3+b3;
		 	    t4=p3+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e sua Pizza Portuguesa está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e sua Pizza Portuguesa está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e sua Pizza Portuguesa está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e sua Pizza Portuguesa está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e sua Pizza Portuguesa está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e sua Pizza Portuguesa está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",p3);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			case 103:
				system("CLS");
		 	    printf("Vegana, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=p4+b1;
		 	    t2=p4+b2;
		 	    t3=p4+b3;
		 	    t4=p4+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e sua Pizza Vegana está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e sua Pizza Vegana está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e sua Pizza Vegana está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e sua Pizza Vegana está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e sua Pizza Vegana está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e sua Pizza Vegana está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",p4);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			case 104:
				system("CLS");
		 	    printf("X-Burguer, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=h1+b1;
		 	    t2=h1+b2;
		 	    t3=h1+b3;
		 	    t4=h1+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e seu Hamburguer X-Burguer está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e seu Hamburguer X-Burguer está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e seu Hamburguer X-Burguer está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e seu Hamburguer X-Burguer está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e seu Hamburguer X-Burguer está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e seu Hamburguer X-Burguer está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",h1);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			case 105:
				system("CLS");
		 	    printf("X-Bacon, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=h2+b1;
		 	    t2=h2+b2;
		 	    t3=h2+b3;
		 	    t4=h2+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e seu Hamburguer X-Bacon está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e seu Hamburguer X-Bacon está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e seu Hamburguer X-Bacon está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e seu Hamburguer X-Bacon está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e seu Hamburguer X-Bacon está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e seu Hamburguer X-Bacon está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",h2);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			case 106:
				system("CLS");
		 	    printf("X-Tudo, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=h3+b1;
		 	    t2=h3+b2;
		 	    t3=h3+b3;
		 	    t4=h3+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e seu Hamburguer X-Tudo está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e seu Hamburguer X-Tudo está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e seu Hamburguer X-Tudo está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e seu Hamburguer X-Tudo está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e seu Hamburguer X-Tudo está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e seu Hamburguer X-Tudo está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",h3);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			case 107:
				system("CLS");
		 	    printf("X-Artesanal, vai Bebida pra acompanhar(s/n/cancelar)? \n");
		 	    scanf("%s",&sn1);
		 	    if (strcmp(sn1,"s")==0)
		 	    {	printf("Bebidas:\n");
		 	    printf("_Lanches_           _Cód_        _Preço_   \n");
	  printf("\n");                             //10
    printf("Coca-Cola2L          108          R$8,00    \n");    //11
    printf("Fanta2L              109          R$6,50    \n");    //12
    printf("Sprite2L             110          R$4,50    \n");    //13
    printf("Kuat2L               111          R$4,50    \n");    //14
    printf("Coca-cola350ml       112          R$3,00    \n");    //15
    printf("Fanta350ml           113          R$3,00    \n");    //16
				 printf("Digite o cód da bebida: \n");
		 	    scanf("%d",&bebida1);
		 	    t1=h4+b1;
		 	    t2=h4+b2;
		 	    t3=h4+b3;
		 	    t4=h4+b5;
 				 switch (bebida1)
				 {
				 	case 108:
				 	printf("Sua Coca-Cola2L e seu Hamburguer X-Artesanal está à caminho no valor de R$%.2f\n",t1);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 109:
				 	printf("Sua Fanta2L e seu Hamburguer X-Artesanal está à caminho no valor de R$%.2f\n",t2);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 110:
				 	printf("Sua Sprite2L e seu Hamburguer X-Artesanal está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 111:
				 	printf("Sua Kuat2L e seu Hamburguer X-Artesanal está à caminho no valor de R$%.2f\n",t3);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 112:
				 	printf("Sua Coca-Cola350ml e seu Hamburguer X-Artesanal está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	case 113:
				 	printf("Sua Fanta350ml e seu Hamburguer X-Artesanal está à caminho no valor de R$%.2f\n",t4);
				 	printf("Finalizar a compra?(enter)\n");
				 	getch();
				 	printf("Compra Finalizada.");
				 	break;

				 	default:
				 	printf("Informação inválida. ");
				 	getch();
				 	system("CLS");
				 	main();

			}
			}else if (strcmp(sn1,"n")==0)
		     {
			 printf("Seu pedido deu R$%.2f\n",h4);
		     getch();
		     printf("Compra finalizada.");
		     printf("\n");
		     system("exit");
		 }
		 else if(strcmp(sn1,"cancelar")==0)
		 {
		 	system("CLS");
		 	main();
		 }
			break;
			
			





			 }


		 }





  return 0;
}
