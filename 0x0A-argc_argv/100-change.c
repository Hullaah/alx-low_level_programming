#include <stdio.h>
#include <stdlib.h>
/**
 * calculate_coins - calculate the number of coins to be exchanged for a given
 * amount of money
 * @money: money to be exchanged
 * Return: number of coins to be exchanged
*/
int calculate_coins(int money)
{
	int total_coins = 0;
	int coins_count;

	while (money)
	{
		if (money / 25)
		{
			coins_count = money / 25;
			money = money - coins_count * 25;
			total_coins += coins_count;
		}
		else if (money / 10)
		{
			coins_count = money / 10;
			money = money - coins_count * 10;
			total_coins += coins_count;
		}
		else if (money / 5)
		{
			coins_count = money / 5;
			money = money - coins_count * 5;
			total_coins += coins_count;
		}
		else if (money / 2)
		{
			coins_count = money / 2;
			money = money - coins_count * 2;
			total_coins += coins_count;
		}
		else
		{
			money -= 1;
			total_coins++;
		}
	}
	return (total_coins);
}

/**
 * main - check the code
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int total_coins;
        int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
        money = atoi(argv[1]);
        if (money < 0)
        {
                printf("0\n");
                return (0);
        }
	total_coins = calculate_coins(money);
	printf("%d\n", total_coins);
	return (0);
}
