#include <iostream>
using namespace std;
//Car Rental Software

class rental
{

public:
	string a, b, c, d, name;
	int model1, model2, model3, model4, model5, model6, cnic;
	double miles1, miles2, miles3, miles4, miles5, miles6;
	double price1, price2, price3, price4, price5, price6;
	int countt, age,  ageflag;
	static double tmiles1, tmiles2, tmiles3, tmiles4, tmiles5, tmiles6, totalrev;

	rental()
	{
		a = "Aston martin", b = "Lamborghini Gallardo", c = "Mehran";
		model1 = 2007, model2 = 2010, model3 = 2006, model4 = 2010, model5 = 2011, model6 = 2016;
		price1 = 20, price2 = 40, price3 = 30, price4 = 60, price5 = 80, price6 = 100;  //Prices for the miles below
		miles1 = 20, miles2 = 30, miles3 = 34, miles4 = 50, miles5 = 26, miles6 = 28;  //Per Day These miles are allowed
		countt = 0, age = 0, ageflag = 0;

	}

	void menu()

	{
		int opt, opt2, opt3, days, out;
		double tprice1, tprice2, tprice3, tprice4, tprice5, tprice6, miles;
		int disc = 0, disc1 = 0;//for discount
		cout << "What do u want to do? Press 1 2 3 3 4 for the required operation." << endl;
		cout << "1.Rent a car " << endl;
		cout << "2.Check Complete Record " << endl;
		cout << "3.Check Record of Vehicles" << endl;
		cout << "4.Check The Total Revenue EARNED" << endl;
		cin >> opt;
		//Rent a car option
		if (opt == 1)

		{
			if (ageflag == 0)
			{
				cout << "Write your age" << endl;
				cin >> age;
				ageflag = 1;
			}
			if (age<18)
			{
				cout << "Sorry, you are not allowed to use this service" << endl;
			
				return;
			}
		
			
			if (countt>3)
			{
				cout << "As an old member you will get a 4$ discount" << endl;
				price1 = price1 - 4, price2 = price2 - 4, price3 = price3 - 4, price4 = price4 - 4, price5 = price5 - 4;
				price6 = price6 - 4;
				disc = 1;
			}
			++countt;
			cout << "Will you take the car out of city ? 1.Yes 2.No " << endl;
			cin >> out;
			if (out == 1)
			{
				cout << "Permission Granted" << endl;
			}
			cout << "For how many days do you want to rent the car?" << endl;
			cin >> days;
			if (days>2)
			{
				cout << "Congratulations, You will have a discount of 8$" << endl;
				disc1 = 1;
				getch();
				price1 = price1 - 8, price2 = price2 - 8, price3 = price3 - 8, price4 = price4 - 8, price5 = price5 - 8;
				price6 = price6 - 8;
			}
			cout << "Which car do you want? " << endl;
			cout << "Press 1 for Aston Martin, 2 for Lamborghini Gallardo, 3 for Mehran" << endl;
			cin >> opt2;
			if (opt2 == 1)
			{
				cout << "Which model of AstonMartin you want? 1 for 2007, 2 for 2010" << endl;
				cin >> opt3;
				if (opt3 == 1)

				{
					if (tmiles1>300)
					{
						cout << "This car has ran " << tmiles1 << " miles, maintenance maybe required" << endl;
					}
					cout << "How many miles will u drive? " << "             Available Miles = " << miles1 << endl;
					cin >> miles;
					tmiles1 = tmiles1 + miles;
					if (miles>miles1)
					{
						tprice1 = miles*(20 / miles1);
						if (disc == 1)
						{
							tprice1 = tprice1 - 10;
						}
						if (disc1 == 1)
						{
							tprice1 = tprice1 - 8;
						}

						cout << "This will cost you " << tprice1 << " dollars" << endl;
						totalrev = totalrev + tprice1;
						getch();
					}
					else
					{
						cout << "This will cost you " << price1 << " dollars" << endl;
						totalrev = totalrev + price1;


					

					}
				
				}


				if (opt3 == 2)
				{
					if (tmiles1>300)
					{
						cout << "This car has ran " << tmiles2 << " miles, maintenance maybe required" << endl;
					}
					cout << "How many miles will u drive? " << "             Available Miles = " << miles2 << endl;
					cin >> miles;
					tmiles2 = tmiles2 + miles;
					if (miles>miles2)
					{
						tprice2 = miles*(40 / miles2);
						if (disc == 1)
						{
							tprice2 = tprice2 - 10;
						}
						if (disc1 == 1)
						{
							tprice2 = tprice2 - 8;
						}
						cout << "This will cost you " << tprice2 << " dollars" << endl;
						totalrev = totalrev + tprice2;
						
					}
					else
					{
						cout << "This will cost you " << price2 << " dollars" << endl;
						totalrev = totalrev + price2;
						
					}
				
				}

			}
			//SecondCar

			if (opt2 == 2)
			{
				cout << "Which model of Lamborghini Gallardo you want? 1 for 2009, 2 for 2011" << endl;
				cin >> opt3;
				if (opt3 == 1)
				{
					if (tmiles1>300)
					{
						cout << "This car has ran " << tmiles3 << " miles, maintenance maybe required" << endl;
					}
					cout << "How many miles will u drive? " << "             Available Miles = " << miles3 << endl;
					cin >> miles;
					tmiles3 = tmiles3 + miles;
					if (miles>miles3)
					{
						tprice3 = miles*(30 / miles3);
						if (disc == 1)
						{
							tprice3 = tprice3 - 10;
						}
						if (disc1 == 1)
						{
							tprice3 = tprice3 - 8;
						}
						cout << "This will cost you " << tprice3 << " dollars" << endl;
						totalrev = totalrev + tprice3;
					
					}
					else
					{
						cout << "This will cost you " << price3 << " dollars" << endl;
						totalrev = totalrev + price3;
						
					}
				}

				if (opt3 == 2)
				{
					if (tmiles1>300)
					{
						cout << "This car has ran " << tmiles4 << " miles, maintenance maybe required" << endl;
					}
					cout << "How many miles will u drive? " << "             Available Miles = " << miles4 << endl;
					cin >> miles;
					tmiles4 = tmiles4 + miles;
					if (miles>miles4)
					{
						tprice4 = miles*(60 / miles4);
						if (disc == 1)
						{
							tprice4 = tprice4 - 10;
						}
						if (disc1 == 1)
						{
							tprice4 = tprice4 - 8;
						}
						cout << "This will cost you " << tprice4 << " dollars" << endl;
						totalrev = totalrev + tprice4;
				
					}
					else
					{
						cout << "This will cost you " << price4 << " dollars" << endl;
						totalrev = totalrev + price4;
					
					}
				}

			}
			//Third Car
			if (opt2 == 3)
			{
				cout << "Which model of Mehran you want? 1 for 2001, 2 for 2005" << endl;
				cin >> opt3;
				if (opt3 == 1)
				{
					if (tmiles1>300)
					{
						cout << "This car has ran " << tmiles5 << " miles, maintenance maybe required" << endl;
					}
					cout << "How many miles will u drive? " << "             Available Miles = " << miles5 << endl;
					cin >> miles;
					tmiles5 = tmiles5 + miles;
					if (miles>miles5)
					{
						tprice5 = miles*(80 / miles5);
						if (disc == 1)
						{
							tprice5 = tprice5 - 10;
						}
						if (disc1 == 1)
						{
							tprice5 = tprice5 - 8;
						}
						cout << "This will cost you " << tprice5 << " dollars" << endl;
						totalrev = totalrev + tprice5;
					
					}
					else
					{
						cout << "This will cost you " << price5 << " dollars" << endl;
						totalrev = totalrev + price5;
						
					}
				}

				if (opt3 == 2)
				{
					if (tmiles1>300)
					{
						cout << "This car has ran " << tmiles6 << " miles, maintenance maybe required" << endl;
					}
					cout << "How many miles will u drive? " << "             Available Miles = " << miles6 << endl;
					cin >> miles;
					tmiles6 = tmiles6 + miles;
					if (miles>miles6)
					{
						tprice6 = miles*(100 / miles6);
						if (disc == 1)
						{
							tprice6 = tprice6 - 10;
						}
						if (disc1 == 1)
						{
							tprice6 = tprice6 - 8;
						}
						cout << "This will cost you " << tprice6 << " dollars" << endl;
						totalrev = totalrev + tprice6;
					
					}
					else
					{
						cout << "This will cost you " << price6 << " dollars" << endl;
						totalrev = totalrev + price6;
						
					}
				}


			}

		}



		//checking record option
		if (opt == 2)
			record();


		//Car record option
		if (opt == 3)
			carrecord();

		//Total Revenue
		if (opt == 4)
			revenue();
	}



	//revenue
	void revenue()
	{
		cout << "The total revenue earned is " << totalrev << endl;
	}


	//Customer Record
	void record()
	{
		cout << "This customer has used our rental system " << countt << " times" << endl;
				cout << "Rent a car " << 4 - countt << " more times, FOR YOUR DISCOUNT!!" << endl;
		cout << "This customer's age is " << age << endl;

	}

	void carrecord()
	{
		int oppt = 0, oppt2 = 0;
		cout << "Which Car record do you want ?" << endl;
		cout << "Press 1 for Aston Martin, 2 for Lamborghini Gallardo, 3 for Mehran" << endl;
		cin >> oppt;
		if (oppt == 1)
		{
			{
				cout << "1.Model 2007  2.2010" << endl;
				cin >> oppt2; }
			if (oppt2 == 1)
			{
				if (tmiles1>300)
				{
					cout << "This car has ran " << tmiles1 << " miles, maintenance maybe required" << endl;
				}
				else
				{
					cout << "This car has ran a total of " << tmiles1 << " miles" << endl;
				}
				
			}

			if (oppt2 == 2)
			{
				if (tmiles2>300)
				{
					cout << "This car has ran " << tmiles2 << " miles, maintenance maybe required" << endl;
				}
				else {
					cout << "This car has ran a total of " << tmiles2 << " miles" << endl;
				}
				
			}
		}


		if (oppt == 2)
		{
			{
				cout << "1.Model 2009  2.2011" << endl;
				cin >> oppt2; }
			if (oppt2 == 1)
			{
				if (tmiles3>300)
				{
					cout << "This car has ran " << tmiles3 << " miles, maintenance maybe required" << endl;
				}
				else {
					cout << "This car has ran a total of " << tmiles3 << " miles" << endl;
				}
				
			}

			if (oppt2 == 2)
			{
				if (tmiles4>300)
				{
					cout << "This car has ran " << tmiles4 << " miles, maintenance maybe required" << endl;
				}
				else {
					cout << "This car has ran a total of " << tmiles4 << " miles" << endl;
				}
				
			}
		}

		if (oppt == 3)
		{
			{
				cout << "1.Model 2001  2.2005" << endl;
				cin >> oppt2; }
			if (oppt2 == 1)
			{
				if (tmiles5>300)
				{
					cout << "This car has ran " << tmiles5 << " miles, maintenance maybe required" << endl;
				}
				else {
					cout << "This car has ran a total of " << tmiles5 << " miles" << endl;
				}
			
			}

			if (oppt2 == 2)
			{
				if (tmiles6>300)
				{
					cout << "This car has ran " << tmiles6 << " miles, maintenance maybe required" << endl;
				}
				else {
					cout << "This car has ran a total of " << tmiles6 << " miles" << endl;
				}
				
			}

		}
	}
};


//Static Member Initialization
double rental::tmiles1 = 0;
double rental::tmiles2 = 0;
double rental::tmiles3 = 0;
double rental::tmiles4 = 0;
double rental::tmiles5 = 0;
double rental::tmiles6 = 0;
double rental::totalrev = 0;
void welcome()
{
	cout << "********** Welcome to Roxi Car Rental Service **********" << endl;
}
int main()

{
	int a = 0, cnic_temp;
	rental one[10];
	string n;
	welcome();
	for (int i = 0; i<10; i++)
	{
		cout << "Write your Name" << endl;
		cin >> n;
		cout << "Write your CNIC" << endl;
		cin >> cnic_temp;
		for (int j = 0; j<10; j++)
		{
			if (one[j].cnic == cnic_temp)
			{
				one[j].menu();
				a = 1;
			}

		}
		if (a == 1)
		{
			a = 0;
			continue;
		}
		else {
			one[i].cnic = cnic_temp;
			one[i].menu();
		}
	}
	return 0;
}

