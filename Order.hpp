#include <vector>
#include "Book.hpp"
#include <iostream>


class Order {

private:
	vector <Book> list_of_books;
	float delivery_cost = 15.55;

public:
	
	Order();
	void calculate_total_price(bool with_deliv);

    void operator+=(const Book& book);

    // Metoda do wy�wietlania zawarto�ci zam�wienia
	void displayOrder() const;
};