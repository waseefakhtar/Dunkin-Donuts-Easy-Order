#include <iostream>
using namespace std;


int main() 
{
	int num, n;

	cout << "\t******WELCOME TO DUNKIN DONUTS******";
	cout << "\n\t************************************";

	cout << "\n\nEnter your choice \n1. Donuts\n2. Sandwiches\n3. Cold Beverages: " << endl;
	cin >> num;

	if (num == 1)
	{
		int d, c, b, bill;
		char n;

		cout << "\nEnter your choice: ";
		cout << "\n\n1. Simple Donut\tprice=120 \n2. Choco Donut\tprice=180 \n3. Special Donut\tprice=200";
		cin >> b;

		if (b == 1) {
			cout << "\nEnter your quantity: ";
			cin >> c;

			d = 120 * c;

			cout << "\nTotal Bill = " << d;
		}
		else if (b == 2) {

			cout << "\nEnter your quantity: ";
			cin >> c;

			d = 180 * c;

			cout << "\nTotal Bill = " << d;
		}
		else if (b == 3) {

			cout << "\nEnter your quantity: ";
			cin >> c;

			d = 200 * c;

			cout << "\nTotal Bill = " << d;

		}
		else if (num == 2)
		{

			int d2, c2, b2;
			cout << "\nEnter your choices: ";
			cout << "\n\n1. Chicken Tikka \n2. Chicken Fajita \n3. Boston Burger";
			cin >> b2;

			if (b2 == 1)
			{
				cout << "\nPrice = 260";
				cout << "\nEnter your quantity: ";
				cin >> c2;

				d2 = 260 * c2;

				cout << "\nTotal Bill = " << d2;
			}
			else if (b2 == 2)
			{
				cout << "\nPrice = 260";
				cout << "\nEnter your quantity: ";
				cin >> c2;

				d2 = 260 * c2;

				cout << "\nTotal Bill = " << d2;
			}
			else if (b2 == 3)
			{
				cout << "\nPrice = 170";
				cout << "\nEnter your quantity: ";
				cin >> c2;

				d2 = 170 * c2;

				cout << "\nTotal Bill = " << d2;
			}
			else
				cout << "Invalid Value";
		}
		else if (num == 3)
		{
			int d3, c3, b3;

			cout << "\nEnter your choices: ";
			cout << "\n\n1. Coffee Alaska \n2. Vanilla Shake \n3. Iced Coffee";
			cin >> b3;

			if (b3 == 1) {
				cout << "\nPrice = 200";
				cout << "\nEnter your quantity: ";
				cin >> c3;

				d3 = 200 * c3;

				cout << "\nTotal Bill = " << d3;
			}
			else if (b3 == 2) {
				cout << "\nPrice = 200";
				cout << "\nEnter your quantity: ";
				cin >> c3;

				d3 = 200 * c3;

				cout << "\nTotal Bill = " << d3;
			}
			else if (b3 == 3) {
				cout << "\nPrice = 200";
				cout << "\nEnter your quantity: ";
				cin >> c3;

				d3 = 200 * c3;

				cout << "\nTotal Bill = " << d3;
			}
			system("pause");
			return 0;
		}
	}

