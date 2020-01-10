#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

bool isThere = false;      //help test to see if inout is there
bool isPresent = false;
ShoppingCart::ShoppingCart() {
	customerName = "";
	dateCart = "";
}
ShoppingCart::ShoppingCart(string obName, string obDate) {   // define default constructor
	dateCart = obDate;
	customerName = obName;
}
void ShoppingCart::SetCustomerName(string GetName) {
	customerName = GetName;
}
string ShoppingCart::GetName() const {
	return customerName;
}
void ShoppingCart::SetDate(string GetDate) {
	dateCart = GetDate;
}
string ShoppingCart::GetDate() const {
	return dateCart; // = Get Price;
}
void ShoppingCart::SetBegin(string testName) {
	//bool isThere = false;
	for (unsigned int i = 0; i < itemCart.size(); ++i) {

		if (itemCart.at(i).GetName() == testName) {    //check if vector name matches
			isThere = true;

		}
		else {
			isThere = false;
		}


	}
	
}
void ShoppingCart::SetAdd(itemToPurchase Item) {
	if (isThere == false) {
		itemCart.push_back(Item);
	}
	else {
		cout << "Item is already in cart. Nothing added." << endl;
	}
}
void ShoppingCart::SetRemove(string item) {
	//bool isPresent = false;
	int index = 0;

	for (unsigned int i = 0; i < itemCart.size(); ++i) {

		if (itemCart[i].GetName() == item) {       //look for name
			isPresent = true;
			//cout << "its true" << endl;
			index = static_cast<int>(i);
			//cout << index << "f4f2f23" << endl;

		}


	}
	if (isPresent == true) {

		itemCart.erase(itemCart.begin() + index);
		//cout << item << " has been removed." << endl;

	}
	if (isPresent == false) {

		cout << "Item not found in cart.Nothing removed." << endl;
	}



}
void ShoppingCart::ChangeObject(string item, int newQuantity) {
	int index = 0;

	for (unsigned int i = 0; i < itemCart.size(); ++i) {

		if (itemCart[i].GetName() == item) {
			isPresent = true;
			//cout << "its true" << endl;
			index = static_cast<int>(i);
			//cout << index << "f4f2f23" << endl;

		}


	}
	if (isPresent == true) {
		for (unsigned int i = 0; i < itemCart.size(); ++i) {
			itemCart.at(index).SetQuantity(newQuantity);
			//cout << itemCart.at(i).GetQuantity();
		}
	}
	if (isPresent == false) {

		cout << "Item not found in cart.Nothing Modified." << endl;
	}

}
void ShoppingCart::GetNumItems() {       //Get number of items in the cart
	int index = 0;
	if (itemCart.size() > 0) {
		for (unsigned int i = 0; i < itemCart.size(); ++i) {
			index += itemCart.at(i).GetQuantity();
		}
		cout << "Number of Items: " << index << endl;
	}
	//return index;
}
void ShoppingCart::GetCost() {
	if (itemCart.size() > 0) {
		//cout << "TOTAL COST" << endl;
		for (unsigned int i = 0; i < itemCart.size(); ++i) {
			//cout << itemCart.at(i).GetName() << endl;
			//cout << "TOTAL COST" << endl;
			cout << itemCart.at(i).GetName() << " " << itemCart.at(i).GetQuantity() << " @ " << "$" << setprecision(2) << fixed << itemCart.at(i).GetPrice() << " = $" << itemCart.at(i).GetQuantity() * itemCart.at(i).GetPrice() << endl;
		}
		//cout << "TOTAL COST" << endl;
		double total = 0;
		for (unsigned int i = 0; i < itemCart.size(); ++i) {
			total += itemCart.at(i).GetQuantity() * itemCart.at(i).GetPrice();
		}
		cout << "Total: " << "$" << total << endl;
	}

}
void ShoppingCart::PrintDescriptions() {

	if (itemCart.size() == 0) {

		cout << "shopping cart is empty." << endl;
		return;
	}
	cout << "ITEM DESCRIPTIONS" << endl;
	for (int i = 0; i < itemCart.size(); i++) {

		itemToPurchase currentItem = itemCart.at(i);
		currentItem.PrintDescription();
		//cout << "ITEMS DESCRIPTIONS" << endl;
		//cout << GetName() << "\'s Shopping Cart - ";//<< itemCart.at(i).GetItem << endl;
		//cout << endl << endl << "Item Descriptions" << endl;
		//cart.PrintDescriptions();
	}
}
void ShoppingCart::PrintTotal() {
	if (itemCart.size() == 0) {
		cout << "Shopping cart is empty." << endl;
	}
	//for (unsigned int i = 0; i < itemCart.size(); ++i) {
		//cout << itemCart.at(i).GetName() << endl;
	//}

}