#include <stdio.h>
#include <math.h>

double cash = 0.0;

// this function will be called later
// it's objective is to count how many notes or coins are used to reach a value

int * cashier(int* currency)
{
  static int currencies_used[6];

  for(int i = 0; i < 6; i++)
  {
    currencies_used[i] = 0; //reseting the array

    int coin_or_note = currency[i];
    int currency_used = cash / coin_or_note;

    if (currency_used > 0)
    {
      currencies_used[i] = currency_used;
      cash = fmod(cash,coin_or_note);
    }
  }

  return currencies_used; 
}

// where the party begins

int main()
{
  int banknotes[] = {100, 50, 20, 10, 5, 2};
  int coins[] = {100, 50, 25, 10, 5, 1};

  scanf("%lf", &cash);

  // splitting the coins from the banknotes
  double cash_in_notes = cash / 1;
  double cash_in_coins = ((cash - cash_in_notes) * 100); // extracting the coins and converting

  cash = cash_in_notes;
  int *banknotes_used = cashier(banknotes);

  // printing how many banknotes were used 

  printf("NOTAS:\n");

  for(int j = 0; j < 6; j++)
  {
    printf("%d nota(s) de R$ %d.00\n", banknotes_used[j], banknotes[j]);
  }

  // if the remainder is 1, we add it to our amount of coins
  cash = (cash * 100) + cash_in_coins;
  int *coins_used = cashier(coins);

  // priting how many coins were used
  printf("MOEDAS:\n");

  for(int z = 0; z < 6; z++)
  {
    printf("%d moeda(s) de R$ %.2lf\n", coins_used[z], (coins[z] / 100.0));
  }

  return 0;
}

