#include "Book.hpp"

Book::Book(string title , float price) : b_price(price), b_title(title){}

Book::Book() :b_title("Kot i pies"), b_price(15.99) {}

Book::~Book() {};

string Book::get_title() const
{
	return b_title;
}

float Book::get_price() const
{
	return b_price;
}

int Book::get_quantity() const
{
	return b_quantity;
}

void Book::set_quantity()
{
	b_quantity+=1;
}