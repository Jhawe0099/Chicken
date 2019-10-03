//Brief introduction to programming loops (again)
#include<iostream>
using namespace std;

int main()
{
	int userInput;
	int sum;

	while (true)// Infinite Loop
	{
		cout << "Enter a positive integer that will be added together. Type -1 to exit" << endl << endl;
		cin >> userInput;
		if (userInput == -1)
		{
			break; //Immediately exit out of the loop it currently is executing
		}
		sum = sum + userInput; // Sum += userInput 
		cout << "Your added value is: " << sum << endl;
	}

	cout << "\nThat's All Flocks!\n";

	system("pause");

	return 0;
}