#include <string>

using namespace std;

class Book {

private:
	string b_title;
	float b_price;
	int b_quantity=1;

public:
	Book(string title, float price);
	Book();
	~Book();
	string get_title() const;
	float get_price() const;
	int get_quantity() const;
	void set_quantity ();
};