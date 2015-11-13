#include<iostream>
#include<string>
#include"Stocks.h"
using namespace std;
Stocks::Stocks(const string &co, long n, double pr){
	company = co;
	if (n < 0)
	{
		cout << "Number of shares can't be negative." << company << "shares to be 0.\n";
		shares = 0;
	}
	else shares = n;
	shares = pr;
	set_tot();

}
void Stocks::buy(long num, double price){
	if (num < 0)
	{
		cout << "Number of shares purchased can't be negative." << "Transcation is aburted.\n";
	}
	else {
		shares += num;
		share_val = price; set_tot();
	}
}
void Stocks::sell(long num, double price){ cout;
if (num < 0)
{
	cout << "Number of shares sold can't be negative," << "Transcation is aborted.\n";
}
else if (num>shares)
{
	cout << "You can't sell more than you have." << "Transcation is aborted.\n";
}
else {
	shares -= num;
	share_val = price;
	set_tot();
}
};
void Stocks::update(double price){
	share_val = price;
	set_tot();
};
void Stocks::show(){
	cout;
	ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);//#.###
	cout << "Company£º " << company;
	cout << "Shares£º " << shares
		<< "Share Price£º " << share_val;
	cout.precision(2);//#.##
	cout << "Total Worth£º¡¡" << total_val << endl;
		cout.setf(orig, ios_base::floatfield);
		cout.precision(prec);
};