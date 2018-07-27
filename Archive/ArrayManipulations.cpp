#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int arrLength;
	int answer;
	char answer1;

	cout << "Put the length of array" << endl;
	cin >> arrLength;

	int Array[arrLength];
	
	//Fill the array manually or randomly
		do
	{
		cout << "Press '1' to get random array, press '2' to manual input" << endl;
		cin >> answer;
	}
	while((answer != 1) || (answer != 2));

	//Random array
	if (answer == 1)						
	{
		for(int i = 0; i < arrLength; i++)
		{
			int j = rand() % 100 + 1;
			Array[i] = j;
		}
	}
	//Predermined array
	else
	{
		for(int i = 0; i < arrLength; i++)	
		{
			cout << "Give the number" << endl;
			cin >> Array[i];
		}
	}

	do
	{
		cout << "So, now we can sum all array cells (press 's') or just print them all (press 'p')" << endl;
		cin >> answer1;
	}
	while((answer1 != "s") || (answer1 != "p"));

	system("pause");
	return 0;
}
