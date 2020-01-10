//#pragma once
//#pragma once
#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H  
#include <string>
#include<vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart
{
private:

	string customerName; //gx
	string dateCart; //gy
	vector<itemToPurchase> itemCart; //gz
public:
	ShoppingCart();
	ShoppingCart(string obName, string obDate);
	void SetCustomerName(string GetName);
	void SetDate(string GetDate);
	void SetAdd(itemToPurchase);
	void SetBegin(string testName);
	void SetRemove(string);
	void ChangeObject(string item, int quantity);
	void GetNumItems();
	void GetCost();
	void PrintTotal();
	void PrintDescriptions();
	string GetName() const;
	string GetDate() const;
	


};

#endif