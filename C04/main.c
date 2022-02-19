/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:31:24 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/02/18 20:49:32 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);


int main()
{
    //-------------------------------------------------------------------------
	//TESTE EX00
    //-------------------------------------------------------------------------

    printf("\n---- ft_strlen --- ex00:\n");
	printf("\nRetorna o número de caracteres de uma string.\n\n");
	char str[] = "Programando em C ^~{}008++";
	printf("Foi passado: Programando em C ^~{}008++\n\n");
	printf("Retornou: %d\n", ft_strlen(str));
	printf("\n");

    //-------------------------------------------------------------------------
	//TESTE EX01
    //-------------------------------------------------------------------------

    printf("\n---- ft_putstr --- ex01:\n");
	printf("\nMostra um a um os caracteres de uma string.\n\n");
	char str1[] = "Escreva uma função que mostre um a um os caracteres de uma string na tela.";
	printf("Foi passado: Escreva uma função que mostre um a um os caracteres de uma string na tela.\n\n");
	ft_putstr(str1);
	printf("\n");

    //-------------------------------------------------------------------------
	//TESTE EX02
    //-------------------------------------------------------------------------

	printf("\n---- ft_putnbr --- ex02:\n");
	printf("\nMostra o núnero passado como parâmetro.\n\n");
	printf("Foi passado: \n");
	ft_putnbr(367800054);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483648);
	printf("\n");
	ft_putnbr(+253678924);
	printf("\n");
	ft_putnbr(-425);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");

    //-------------------------------------------------------------------------
	//TESTE EX03
    //-------------------------------------------------------------------------

	printf("\n---- ft_atoi --- ex03:\n");
	printf("\nConverte o início de uma string que contenha números no tipo int com sinal.\n\n");
	printf("Foi passado:    --+---+--1234avbfg\n");
	printf("%d\n\n", ft_atoi ("   --+---+--1234avbfg"));

    //-------------------------------------------------------------------------
    //-------------------------------------------------------------------------    
	printf("\n---- FIM DOS TESTES ---\n\n");
}
