programa
{
	
	funcao inicio ()
	{
		escreva("Ola Mundo!", "\n", "Ola", "\n")
		
		inteiro numero
		escreva("Digite um número inteiro:")
		leia(numero)
		escreva("O número digitado foi:", numero, "\n")

		real a, b, soma, sub, mult, div
		//escreva("Digite o primeiro número: ")
		//leia(numero)
		a = numero
		escreva("Digite o segundo número: ")
		leia(b)
		escreva("Os números digitados foram: ", a, " e ", b, "\n")

		soma = a + b
		sub = a - b
		mult = a * b
		div = a / b

		escreva("\nA soma dos número é igual a: ", soma)
		escreva("\nA sub dos número é igual a: ", sub)
		escreva("\nA mult dos número é igual a: ", mult)
		escreva("\nA div dos número é igual a: ", div)
	}
	
}
