// Chapter 7 - Programming Challenge 14, Gratuity Calculator
// This program utilizes a Tips class to calculate the gratuity on
// a restaurant meal, using whatever tip and tax percent the patron desires.
#include <iostream>
#include <iomanip>
#include "Tips.h"
using namespace std;


//------------- tester program ---------------------------------   
int main()
{
	//----------- double variables --------------
	//billamount with taxes
	double bill_after_taxes_1 = 75.5, bill_after_taxes_2 = 104.56;
	double tax_rate_1 = 12.5, tax_rate_2 = 6.25;
	double tip_rate_1 = 15, tip_rate_2 = 10;
	double test;
	

	//----------- Tips object variables --------------
	
	Tips myTips1(bill_after_taxes_1, tax_rate_1, tip_rate_1);


	//-------------- Print out object variables ------------------------
	cout << "\n\n-------- Printing out class variables using class print function------\n" << endl;
	myTips1.print();
	cin >> test;


	return 0;
}

