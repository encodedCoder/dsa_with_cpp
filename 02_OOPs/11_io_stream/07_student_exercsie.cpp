#include <iostream>
#include <fstream>
using namespace std;

struct Item{
	string name;
	int price, quantity;
	friend ofstream& operator<<(ofstream&, Item&);
};
ofstream& operator<<(ofstream& out, Item& i){
	out << i.name << endl << i.price << endl << i.quantity << endl;
	return out;
}

int main(int argc, char const *argv[])
{
	Item *item;

	ofstream outfile("Items.txt");

	cout << "Enter number of items you want to store: ";
	int num_of_items;
	cin >> num_of_items;
	item = new Item[num_of_items];
	for (int i = 0; i < num_of_items; ++i)
	{
		cout << "Enter the details of item_" << i+1 << " :" << endl;
		cout << "Name: ";
		cin >> item[i].name;
		cout << "Price: ";
		cin >> item[i].price;
		cout << "Quantity: ";
		cin >> item[i].quantity;

		outfile << item[i];
	}
	outfile.close();


	ifstream infile("Items.txt");
	if(not infile.is_open()) cout << "file not opened for reading";
	string line; int i = 1;
	while(i <= num_of_items){
		cout << endl <<"Details of item_" << i++ << " are:" << endl;
		getline(infile, line);
		cout << "Name: " << line << endl;
		getline(infile, line);
		cout << "Price: " << line << endl;
		getline(infile, line);
		cout << "Quantity: " << line << endl;
	}

	cout << "bye\n";
	return 0;
}
