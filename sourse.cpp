#include<iostream>
#include<string>
#include"Stocks.h"
using namespace std;
int main()
{
	Stocks fluffy_the_cat("Nanosmart", 10.0, 12.30);
	fluffy_the_cat.buy(15, 12.58);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.00);
	fluffy_the_cat.show();
	return 0;
}