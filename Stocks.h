#include<iostream>
#include<string>
using namespace std;
#define STOCK00_H_
class Stocks
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){
		total_val = shares*share_val;
	}
public:
	 Stocks(const string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
