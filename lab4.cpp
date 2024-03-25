
#include <iostream>
#include "Order.hpp"

int main()
{

	Order order1;
	Book a("Nowa nadzieja", 27.99);
	Book b("Stara nadzieja", 29.99);
	Book c;

	order1 += a;
	order1 += b;
	order1 += b;
	order1 += b;
	order1 += c;
	order1.displayOrder();
	order1.calculate_total_price(true);
	order1.calculate_total_price(false);

	Order order2;
	order2 += b;
	order2 += b;
	order2 += c;
	order2 += c;
	order2.calculate_total_price(true);
	order2.calculate_total_price(false);

}

