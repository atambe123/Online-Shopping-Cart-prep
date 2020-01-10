#include <iostream>
#include <string>
#include<vector>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
#include <iomanip>



//using namespace std;
//
//int main() {
//	double userPrice;
//	double userQuantity;
//	double userPrice2;
//	double userQuantity2;
//	string userItem;
//	string userItem2;
//	string userDescrip;
//	int index = 0;
//	while (index < 3) {
//		cout << "Item 1" << endl;
//		cout << "Enter the item name: " << endl;
//		getline(cin, userItem);
//		cout << "Enter the item price: " << endl;
//		cin.ignore();
//		cin >> userPrice;
//		cout << "Enter the item quantity: " << endl;
//		cin.ignore();
//		cin >> userQuantity;
//
//		itemToPurchase Item;
//		itemToPurchase Item2;
//		ShoppingCart Object;
//		Item.SetName(userItem);
//		Item.SetPrice(userPrice);
//		Item.SetQuantity(userQuantity);
//		Item.Print();
//
//		cout << endl;
//		cout << "Item 2" << endl;
//		cout << "Enter the item name: " << endl;
//		cin.ignore();
//		getline(cin, userItem2);
//		cout << "Enter the item price: " << endl;
//		cin.ignore();
//		cin >> userPrice2;
//		cout << "Enter the item quantity: " << endl;
//		cin.ignore();
//		cin >> userQuantity2;
//		cout << "user Descrip" << endl;
//		cin.ignore();
//		getline(cin, userDescrip);
//		Item2.SetName(userItem2);
//		Item2.SetPrice(userPrice2);
//		Item2.SetQuantity(userQuantity2);
//		Item2.Print();
//
//		cout << "TOTAL COST" << endl;
//		cout << Item.GetName() << " " << Item.GetQuantity() << " @ " << "$" << setprecision(2) << fixed << Item.GetPrice() << " = $" << Item.GetQuantity() * Item.GetPrice() << endl;
//		cout << Item2.GetName() << " " << Item2.GetQuantity() << " @ " << "$" << setprecision(2) << fixed << Item2.GetPrice() << " = $" << Item2.GetQuantity() * Item2.GetPrice() << endl << endl << endl;
//		cout << "Total: $" << setprecision(2) << fixed << (userQuantity2 * userPrice2) + (userQuantity * userPrice);
//
//		//Object.SetAdd();
//		Object.PrintTotal();
//		index += 1;
//	}
//
//
//		return 0;
//





















//