/*Class Function Definitions/Code*/

#include "Tips.h"
#include <iostream>
using namespace std;

double Tips::getBillAmountBeforeTaxes()
{
	double bill_before_taxes;
	bill_before_taxes = ((bill_after_taxes * tax_rate) / (1 + tax_rate));
	return bill_before_taxes;
}

double Tips::getTip()
{
	double tipAmount;
	tipAmount = (bill_before_taxes * tip_rate)/100;
	return tipAmount;
}


/*Set and Get Definitions
DO NOT CHANGE DO NOT CHANGE DO NOT CHANGE DO NOT CHANGE DO NOT CHANGE
*/
void Tips::setTax_rate(double _tax_rate)
{
	tax_rate = _tax_rate;
}
void Tips::setBill_after_taxes(double _bill_after_taxes)
{
	bill_after_taxes = _bill_after_taxes;
}
void Tips::setTip_rate(double _tip_rate)
{
	tip_rate = _tip_rate;
}
double Tips::getTax_rate()
{
	return tax_rate;
}
double Tips::getBill_after_taxes()
{
	return bill_after_taxes;
}


/*Void Print*/
void Tips::print()
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "Bill Before Taxes : $" << bill_before_taxes << endl;
	cout << "Tip Amount $: " << tipAmount << endl;
	cout << "Bill After Taxes: $" << bill_after_taxes << endl;
	
}