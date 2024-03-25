
#include <iostream>
#include "Order.hpp"

int main()
{
	Book a("Nowa nadzieja", 27.99);
	Book b("Stara nadzieja", 29.99);
	Book c;
	Book d("Egologia w ujeciu psychoneurotycznym", 56.99);
	
	Order order1(1);

	order1 += a;
	order1 += b;
	order1 += b;
	order1 += b;
	order1 += c;
	order1.displayOrder();
	// true/false parameter signalises whether delivery cost is included (true) or not (false)
	order1.calculate_total_price(true);
	order1.calculate_total_price(false);

	Order order2(2);

	order2 += b;
	order2 += b;
	order2 += c;
	order2 += c;
	order2.displayOrder();
	order2.calculate_total_price(true);
	order2.calculate_total_price(false);

	Order order3(3);

	order3 += d;
	order3.displayOrder();
	order3.calculate_total_price(true);
	order3.calculate_total_price(false);
}

