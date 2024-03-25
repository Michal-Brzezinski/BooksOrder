#include "Order.hpp"

Order::Order() {

}


void Order::calculate_total_price(bool with_deliv = true)
{
	float suma = 0;
	
	for (int i = 0; i < list_of_books.size(); i++)
	{
		suma += list_of_books.at(i).get_price();
	}

	if (with_deliv == true)
	{
		suma += delivery_cost;
		cout << "\nKoszt calkowity zamowienia z dostawa to: " << suma << endl;
	}

	else cout << "\nKoszt calkowity zamowienia bez dostawy to to: " << suma << endl;
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

void Order::displayOrder() const {
	cout << "Zamowienie zawiera ksiazki:" << endl;
	for (const Book& book : list_of_books) {
		cout << "Tytul: " << book.get_title() << ", Cena: " << book.get_price() << ", Ilosc: " << book.get_quantity() << endl;
	}
}

