#include "Order.hpp"

Order::Order(int number): order_nr(number) {

}


void Order::calculate_total_price(bool with_deliv = true)
{
	float suma = 0;
	
	for (Book& book : list_of_books)
	{
		suma += book.get_price();
	}

	if (with_deliv == true)
	{
		suma += delivery_cost;
		cout << "\nKoszt calkowity zamowienia nr " << get_orderNr() <<" z dostawa to: " << suma << endl;
	}

	else cout << "\nKoszt calkowity zamowienia nr " << get_orderNr() << " bez dostawy to to: " << suma << endl;
}


int Order::get_orderNr()
{
	return order_nr;
}


void Order::operator+=(const Book& book) {
	
	string titulo = book.get_title();
	bool found = false;
	for (Book& same_book : list_of_books)
	{
		if (same_book.get_title() == titulo)
		{
			same_book.set_quantity();
			found = true;
		}

	}
	
	if(!found) 
		list_of_books.push_back(book);
}

void Order::displayOrder() {
	cout << "\n\nZamowienie nr "<< get_orderNr() <<" zawiera ksiazki:" << endl;
	
	int i = 1;

	for (const Book& book : list_of_books) {
		
		cout <<i<<". Tytul: " << book.get_title() << ", Cena: " << book.get_price() << ", Ilosc: " << book.get_quantity() << endl;
		i++;
	}
}

