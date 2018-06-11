#include <stdio.h>
#include <math.h> 

//int _tmain(int argc, _TCHAR* argv[]) 
int main() 
{ 
float fMoney = 0; 
int nMoneyInCoins = 0; 
int nCoins = 0;
printf("How much change (in dollars) is owed?\n"); 
scanf("%f", &fMoney); 

nMoneyInCoins = fMoney * 100; 

// 25 
nCoins += nMoneyInCoins/25; 
nMoneyInCoins = nMoneyInCoins%25; 

// 10 
nCoins += nMoneyInCoins/10; 
nMoneyInCoins = nMoneyInCoins%10; 

// 5 
nCoins += nMoneyInCoins/5; 
nMoneyInCoins = nMoneyInCoins%5; 

// 1 
nCoins += nMoneyInCoins; 

printf("Change owe yet: %.f\n", fMoney);
printf("Coins of change get: %i\n", nCoins); 
return 0; 
}