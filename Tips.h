#define TIPS_H
#include <iomanip>
#include <iostream>

using namespace std;

class Tips
{
private:
	double tax_rate, bill_after_taxes, tip_rate, bill_before_taxes, tipAmount;

public:
	//------- Constructor ----------
	Tips::Tips(double _bill_after_taxes = 100, double _tax_rate = 6.5, double _tip_rate = 10)
	{
		bill_after_taxes = _bill_after_taxes, tax_rate = _tax_rate, tip_rate = _tip_rate;
	}
	//--------- class functions that perform calculations -----------

	double getTip();

	double getBillAmountBeforeTaxes();


	//-------- mutator functions ----------
	void setTax_rate(double);
	void setBill_after_taxes(double);
	void setTip_rate(double);

	//--------- accessor functions -------------
	double getTax_rate();
	double getBill_after_taxes();
	double getTip_rate();

	//------ print out class variables -----------
	void print();

};