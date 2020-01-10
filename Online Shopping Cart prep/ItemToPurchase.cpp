
#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

#include "ItemToPurchase.h"
itemToPurchase::itemToPurchase() {
	itemName = "";
	itemPrice = 0;
	itemQuantity = 0;
	ItemDescrip = "";
}
itemToPurchase::itemToPurchase(string name, string description, double price, int quantity) {   // define default constructor
	SetName(name);

	SetPrice(price);

	SetQuantity(quantity);

	SetDescription(description);

	// initialize class member in member initializers list
}
void itemToPurchase::SetName(string GetName) {
	itemName = GetName;
}
void itemToPurchase::SetPrice(double GetPrice) {
	itemPrice = GetPrice;
}
void itemToPurchase::SetQuantity(int GetQuantity) {
	itemQuantity = GetQuantity;
}
void itemToPurchase::SetTotal(double GetTotal) {
	totalCost = itemPrice * itemQuantity;
}
void itemToPurchase::SetDescription(string GetItem) {
	ItemDescrip = GetItem;
}
void itemToPurchase::Print() {
	// cout <<itemName << endl;
	// cout << setprecision(2) << fixed << itemPrice << endl;
	// cout << itemQuantity << endl;
	// cout << "TOTAL COST" << endl;
	// cout << Item1.SetName(userItem) << " " << Item1.SetQuantity(userQuantity) << "@ " << Item1.SetPrice(userPrice) << " = " << Item1.SetTotal(totalCost) << endl;
	// cout << itemName << " " << itemQuantity << " @ " << "$" << setprecision(2) << fixed << itemPrice << " = $" << itemQuantity * itemPrice << endl;

}

void itemToPurchase::PrintDescription() {
	cout << itemName << ": " << ItemDescrip << endl;
}

string itemToPurchase::GetName() const {
	return itemName;
}
double itemToPurchase::GetPrice() const {
	return itemPrice;
}
int itemToPurchase::GetQuantity() const {
	return itemQuantity;
}
string itemToPurchase::GetItem() const {
	return ItemDescrip;
}

//implementation
//}