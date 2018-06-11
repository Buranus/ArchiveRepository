#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int charge = 0;
	int bullet = 0;
	int shoot = 0;
	char confirm;
	bool alive = true;
	
	cout << "Hello, my little furry friend! Let us play russian roulette!" << endl;
	
	do
	{
		cout << "What kind of revolver do you want to use: 5-, 6-, or8-charged? " << endl;
		cout << "You say: ";
		cin >> charge;
	}
	while((charge != 5) && (charge != 6 ) && (charge != 8));
	
	cout << "\nOkay, go on!" << endl;
	do
	{
		cout << "How many bullets do you want to charge?" << endl;
		cout << "you say: ";
		cin >> bullet;
	}
	while((bullet <= 0) || (bullet > charge));
	
	do
	{
		do
		{
			cout << "\nOkay, wanna make your shoot? (y/n)" << endl;
			cin >> confirm;
		}
		while((confirm != 'y') && (confirm != 'n'));
		if (confirm == 'y')
		{
			cout << "You made your shot..." << endl;
			srand(time(NULL));
			shoot= rand() % charge + 1;
				if(shoot <= bullet)
				{
					alive = false;
					cout << "You have shot you down:/" << endl;
				}
				else
				{
					cout << "You're lucky!"<< endl;
				}
		}
		else
		{
			cout << "You are too scared to make the shot?!" << endl;
		}
		}
	while((alive != false) && (confirm != 'n'));
	if(alive == false)
	{
		cout<< "rest in peace" << endl;
	}
	else
	{
		cout << "You are a coward!" << endl;
	}
	
	
	
	system("pause");
	return 0;
}
