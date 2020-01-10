#include <iostream>
#include <string>
#include<vector>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
#include <iomanip>



using namespace std;
double userPrice;
double userQuantity;
double userPrice2;
double userQuantity2;
string userItem;
string userItem2;
string userDescrip;

void PrintMenu() {

	cout << endl << "MENU" << endl;
	cout << "add - Add item to cart" << endl;
	cout << "remove - Remove item from cart" << endl;
	cout << "change - Change item quantity" << endl;
	cout << "descriptions - Output items' descriptions" << endl;
	cout << "cart - Output shopping cart" << endl;
	cout << "options- Print the options menu" << endl;
	cout << "quit - Quit" << endl << endl;
}
void PrintCustomerAndDate(string& userName, string& userDate) {
	cout << "Customer's Name: " << endl;
	cout << "Today's Date: " << endl;
}
void PrintCart(ShoppingCart& cart, string& userName, string& userDate) {
	cout << userName << "'s Shopping Cart - " << userDate << endl;
	//cart.GetName();
	cart.PrintTotal();
	cart.GetNumItems();
	cart.GetCost();
}
void AddItem(ShoppingCart& cart) {
	cout << "Enter the item name:" << endl;
	cin.ignore();
	getline(cin, userItem);
	//cin.ignore();
	cart.SetBegin(userItem);
	cout << "Enter the item description: " << endl;
	getline(cin, userDescrip);
	//cin.ignore();
	cout << "Enter the item price:" << endl;
	cin >> userPrice;
	cin.ignore();
	cout << "Enter the item quantity:" << endl;
	cin >> userQuantity;
	cin.ignore();
	itemToPurchase newItem(userItem, userDescrip, userPrice, userQuantity);
	cart.SetAdd(newItem);


}
void RemoveItem(ShoppingCart& cart) {
	string userRemove;

	//cout << "REMOVE ITEM FROM CART" << endl;
	cin.ignore();
	cout << "Enter name of the item to remove : " << endl;
	getline(cin, userRemove);
	//cin.ignore();
	cart.SetRemove(userRemove);
}
void OutputItemDescriptions(ShoppingCart& cart, string& userDate, string& userName) {

	//cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
	cout << userName << "\'s Shopping Cart - " << userDate << endl;
	//cout << endl << endl << "Item Descriptions" << endl;
	cart.PrintDescriptions();
}
void ModifyObject(ShoppingCart& cart) {
	string oldItem;
	int newQuantity;
	cout << "Enter the item name: " << endl;
	cin.ignore();
	getline(cin, oldItem);
	cout << "Enter the new quantity: ";
	cin >> newQuantity;
	cart.ChangeObject(oldItem, newQuantity);
}


int main() {
	string userInput;
	string userName;
	string userDate;
	ShoppingCart cart(userName, userDate);
	cout << "Enter Customer's name:" << endl;
	getline(cin, userName);
	//cin.ignore();
	cout << "Enter Today's date:" << endl;
	getline(cin, userDate);
	//cin.ignore(); 
	//PrintCustomerAndDate(userName, userDate);
	//cout << "Enter option: " << endl;
	//PrintMenu();
	do {
		//cout << "Enter option: " << endl;
		//PrintMenu();
		cout << "Enter option: " << endl;
		cin >> userInput;
		if (userInput == "add") {
			AddItem(cart);
		}
		else if (userInput == "remove") {
			RemoveItem(cart);
		}
		else if (userInput == "change") {
			ModifyObject(cart);
		}
		else if (userInput == "descriptions") {
			OutputItemDescriptions(cart, userDate, userName);
		}
		else if (userInput == "cart") {
			PrintCart(cart, userName, userDate);
		}
		else if (userInput == "options") {
			PrintMenu();
		}

		else if (userInput == "quit") {
			cout << "Goodbye." << endl;
		}
		else if (userInput != "add" && userInput != "quit" && userInput != "options" && userInput != "cart" && userInput != "descriptions" && userInput != "remove" && userInput != "change") {
			PrintMenu();
		}
	} while (userInput != "quit");

	return 0;






}