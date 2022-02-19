#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int main()
{
	printf("\n\n----------Testes ex00----------\n\n");
    printf("O fatorial de -1 retorna (0) : %d\n", ft_iterative_factorial(-1));
	printf("O fatorial de 0 retorna (1) : %d\n", ft_iterative_factorial(0));
	printf("O fatorial de 1 retorna (1) : %d\n", ft_iterative_factorial(1));
	printf("O fatorial de 2 retorna (2) : %d\n", ft_iterative_factorial(2));
	printf("O fatorial de 3 retorna (6) : %d\n", ft_iterative_factorial(3));
	printf("O fatorial de 4 retorna (24) : %d\n", ft_iterative_factorial(4));
	printf("O fatorial de 5 retorna (120) : %d\n", ft_iterative_factorial(5));
	printf("O fatorial de 10 retorna (3628800) : %d\n", ft_iterative_factorial(10));

	printf("\n\n----------Testes ex01----------\n\n");
	printf("O fatorial de -1 retorna (0) : %d\n", ft_recursive_factorial(-1));
	printf("O fatorial de 0 retorna (1) : %d\n", ft_recursive_factorial(0));
	printf("O fatorial de 1 retorna (1) : %d\n", ft_recursive_factorial(1));
	printf("O fatorial de 2 retorna (2) : %d\n", ft_recursive_factorial(2));
	printf("O fatorial de 3 retorna (6) : %d\n", ft_recursive_factorial(3));
	printf("O fatorial de 4 retorna (24) : %d\n", ft_recursive_factorial(4));
	printf("O fatorial de 5 retorna (120) : %d\n", ft_recursive_factorial(5));
	printf("O fatorial de 10 retorna (3628800) : %d\n", ft_recursive_factorial(10));

	printf("\n\n----------Testes ex02----------\n\n");
    printf("10 elevado a -2 retorna (0) : %d\n", ft_iterative_power(10,-2));
	printf("0 elevado a 0 retorna (1) : %d\n", ft_iterative_power(0,0));
	printf("1 elevado a 10 retorna (1) : %d\n", ft_iterative_power(1,10));
	printf("5 elevado a 2 retorna (25) : %d\n", ft_iterative_power(5,2));
	printf("2 elevado a 3 retorna (8) : %d\n", ft_iterative_power(2,3));
	printf("8 elevado a 6 retorna (262.144) : %d\n", ft_iterative_power(8,6));
	printf("9 elevado a 4 retorna (6561) : %d\n", ft_iterative_power(9,4));
	printf("3 elevado a 8 retorna (6561) : %d\n", ft_iterative_power(3,8));
	printf("10 elevado a 5 retorna (100.000) : %d\n", ft_iterative_power(10,5));

	printf("\n\n----------Testes ex03----------\n\n");
    printf("10 elevado a -2 retorna (0) : %d\n", ft_recursive_power(10,-2));
	printf("0 elevado a 0 retorna (1) : %d\n", ft_recursive_power(0,0));
	printf("1 elevado a 10 retorna (1) : %d\n", ft_recursive_power(1,10));
	printf("5 elevado a 2 retorna (25) : %d\n", ft_recursive_power(5,2));
	printf("2 elevado a 3 retorna (8) : %d\n", ft_recursive_power(2,3));
	printf("8 elevado a 6 retorna (262.144) : %d\n", ft_recursive_power(8,6));
	printf("9 elevado a 4 retorna (6561) : %d\n", ft_recursive_power(9,4));
	printf("3 elevado a 8 retorna (6561) : %d\n", ft_recursive_power(3,8));
	printf("10 elevado a 5 retorna (100.000) : %d\n", ft_recursive_power(10,5));

	printf("\n\n----------Testes ex04----------\n\n");
    printf("Fibonacci n-10: %d\n",ft_fibonacci(-10));
	printf("Fibonacci n0: %d\n",ft_fibonacci(0));
	printf("Fibonacci n1: %d\n",ft_fibonacci(1));
	printf("Fibonacci n2: %d\n",ft_fibonacci(2));
	printf("Fibonacci n3: %d\n",ft_fibonacci(3));
	printf("Fibonacci n4: %d\n",ft_fibonacci(4));
	printf("Fibonacci n5: %d\n",ft_fibonacci(5));
	printf("Fibonacci n6: %d\n",ft_fibonacci(6));
	printf("Fibonacci n7: %d\n",ft_fibonacci(7));
	printf("Fibonacci n8: %d\n",ft_fibonacci(8));
	printf("Fibonacci n9: %d\n",ft_fibonacci(9));

	printf("\n\n----------Testes ex05----------\n\n");
	printf("sqrt of %d is %d\n", -2248, ft_sqrt(-2248));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 510714801, ft_sqrt(510714801));
	printf("sqrt of %d is %d\n", 1777343761, ft_sqrt(1777343761));
	printf("sqrt of %d is %d\n", 391644100, ft_sqrt(391644100));
	printf("sqrt of %d is %d\n", 429071442, ft_sqrt(429071442));
	printf("sqrt of %d is %d\n", 389154529, ft_sqrt(389154529));
	printf("sqrt of %d is %d\n", 156562515, ft_sqrt(156562515));
	printf("sqrt of %d is %d\n", 1320522921, ft_sqrt(1320522921));
	printf("sqrt of %d is %d\n", 2070781495, ft_sqrt(2070781495));
	printf("sqrt of %d is %d\n", 113976976, ft_sqrt(113976976));
	printf("sqrt of %d is %d\n", 2033678655, ft_sqrt(2033678655));

	printf("\n\n----------Testes ex06----------\n\n");
	printf("O número 0 não é primo - retornar (0): %d\n",ft_is_prime(0));
	printf("O número 1 não é primo - retornar (0): %d\n",ft_is_prime(1));
	printf("O número 2 é primo - retornar (1): %d\n",ft_is_prime(2));
	printf("O número 3 é primo - retornar (1): %d\n",ft_is_prime(3));
	printf("O número 4 não é primo - retornar (0): %d\n",ft_is_prime(4));
	printf("O número 5 é primo - retornar (1): %d\n",ft_is_prime(5));
	printf("O número 6 não é primo - retornar (0): %d\n",ft_is_prime(6));
	printf("O número 7 é primo - retornar (1): %d\n",ft_is_prime(7));
	printf("O número 8 não é primo - retornar (0): %d\n",ft_is_prime(8));
	printf("O número 9 não é primo - retornar (0): %d\n",ft_is_prime(9));
	printf("O número 11 é primo - retornar (1): %d\n",ft_is_prime(11));
	printf("O número 263 é primo - retornar (1): %d\n",ft_is_prime(263));
	printf("O número 787 é primo - retornar (1): %d\n",ft_is_prime(787));

	printf("\n\n----------Testes ex07----------\n\n");
    printf("O próximo primo em relação a 0 é: %d\n",ft_find_next_prime(0));
	printf("O próximo primo em relação a 1 é: %d\n",ft_find_next_prime(1));
	printf("O próximo primo em relação a 2 é: %d\n",ft_find_next_prime(2));
	printf("O próximo primo em relação a 10 é: %d\n",ft_find_next_prime(10));
	printf("O próximo primo em relação a 13 é: %d\n",ft_find_next_prime(13));
	printf("O próximo primo em relação a 15 é: %d\n",ft_find_next_prime(15));
	printf("O próximo primo em relação a 32 é: %d\n",ft_find_next_prime(32));
	printf("O próximo primo em relação a 100 é: %d\n",ft_find_next_prime(100));
	printf("O próximo primo em relação a 500 é: %d\n",ft_find_next_prime(500));
	printf("O próximo primo em relação a 938 é: %d\n",ft_find_next_prime(938));

		printf("\n\n----------FIM----------\n\n");

	return(0);
}