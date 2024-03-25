
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

/*THERE IS AN OUTPUT:

Zamowienie nr 1 zawiera ksiazki:
1. Tytul: Nowa nadzieja, Cena: 27.99, Ilosc: 1
2. Tytul: Stara nadzieja, Cena: 29.99, Ilosc: 3
3. Tytul: Kot i pies, Cena: 15.99, Ilosc: 1

Koszt calkowity zamowienia nr 1 z dostawa to: 89.52

Koszt calkowity zamowienia nr 1 bez dostawy to to: 73.97


Zamowienie nr 2 zawiera ksiazki:
1. Tytul: Stara nadzieja, Cena: 29.99, Ilosc: 2
2. Tytul: Kot i pies, Cena: 15.99, Ilosc: 2

Koszt calkowity zamowienia nr 2 z dostawa to: 61.53

Koszt calkowity zamowienia nr 2 bez dostawy to to: 45.98


Zamowienie nr 3 zawiera ksiazki:
1. Tytul: Egologia w ujeciu psychoneurotycznym, Cena: 56.99, Ilosc: 1

Koszt calkowity zamowienia nr 3 z dostawa to: 72.54

Koszt calkowity zamowienia nr 3 bez dostawy to to: 56.99

*/