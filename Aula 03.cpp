#include <stdio.h>

int main()
{
	//printf("Hello World\n");
	//printf("Primeira linha\n");
	//printf("Segunda linha\n\n");
	
	//int a=10; //%d
	//char ch='Z'; //%c
	//printf("Atualmente, temos a = %d e ch = %c.\n",a,ch);
	
	//int a,b,c;
	//a=10;
	//b=a+1;
	//c=b+2;
	//printf("Atualmente, temos a=%d, b=%d e c=%d.\n\n",a,b,c);
	
	//printf("A variavel a vale %d. Seu sucessor e o %d.\n\n",a,a+1);
	
	//char ch1,ch2,ch3;
	//ch1='H';
	//ch2='o';
	//ch3='W';
	//printf("%cell%c %corld\n\n",ch1,ch2,ch3);
	
	//float a;
	//a=12.5;
	//printf("a = %f\n",a);
	//printf("a = %.1f\n",a);
	//printf("a = %.2f\n",a);
	//printf("a = %.3f\n\n",a);
	//puts ("Bye World");
	
	//int numero;
	//printf("Entre com um numero inteiro: \n");
	//scanf("%d",&numero);
	//printf("O valor informado pelo usuario foi %d \n",numero);
	
	//float dividendo,divisor;
	//printf("Entre com dois numeros reais:\n");
	//scanf("%f %f",&dividendo,&divisor);
	//printf("Entre com o valor do Dividendo:\n");
	//scanf("%f",&dividendo);
	//printf("Entre com o valor do Divisor:\n");
	//scanf("%f",&divisor);
	//printf("\nDividendo = %.2f\n",dividendo);
	//printf("Divisor = %.2f\n", divisor);
	//printf("\nA divisao de %.2f por %.2f vale %.2f\n",dividendo, divisor,dividendo/divisor);
	
	//char ch1,ch2;
	//printf("Entre com duas letras:");
	//scanf("%c",&ch1);
	//scanf("%c",&ch2);
	//printf("A primeira letra inserida foi %c\n",ch1);
	//printf("A segunda letra inserida foi %c\n",ch2);
	//printf("As letras inseridas foram %c e %c\n",ch1,ch2);
	
	//char ch1, ch2;
	//printf("Entre com a primeira letra:");
	//scanf("%c",&ch1);
	//getc(ch1)
	//fflush(stdin);
	//printf("Entre com a segunda letra:");
	//scanf("%c",&ch2);
	//getc(ch2)
	//printf("As letras inseridas foram %c e %c\n",ch1,ch2);
	
	//char inicial;
	//int idade;
	//printf("Entre com a sua inicial e sua idade\n");
	//scanf("%c",&inicial);
	//fflush(stdin);
	//scanf("%d",&idade);
	//printf("Seu nome comeca com %c e voce tem %d anos",idade,inicial);
	
	//char inicial;
	//int idade;
	//printf("Insira a inicial do seu nome:");
	//scanf("%c",&inicial);
	//fflush(stdin);
	//printf("Insira a sua idade:");
	//scanf("%d",&idade);
	//printf("Seu nome comeca com %c e voce tem %d anos",inicial,idade);
	
	//int a,b,c;
	//printf("Entre com o valor de a:");
	//scanf("%d",&a);
	//printf("Entre com o valor de b:");
	//scanf("%d",&b);
	//c=a-b;
	//printf("A diferencça entre %d e %d vale %d",a,b,c);
	
	float altura,peso,IMC;
	printf("Insira a sua altura:");
	scanf("%f",&altura);
	fflush(stdin);
	printf("Insira o seu peso:");
	scanf("%f",&peso);
	IMC=(peso/altura)/altura;
	printf("Seu IMC vale %f",IMC);
		
}
