#include <vector>
#include "Book.hpp"
#include <iostream>


class Order {

private:
	vector <Book> list_of_books;
	float delivery_cost = 15.55;
	int order_nr;

public:
	
	Order(int number);
	void calculate_total_price(bool with_deliv);
	int get_orderNr();

    void operator+=(const Book& book);

    // Metoda do wyœwietlania zawartoœci zamówienia
	void displayOrder();
};