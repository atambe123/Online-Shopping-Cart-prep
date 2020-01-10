//#pragma once
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H   
#include <string>

using namespace std;

class itemToPurchase
{
private:

	string itemName; //gx
	double itemPrice; //gy
	int itemQuantity; //gz
	double totalCost;
	string ItemDescrip;
public:
	itemToPurchase();
	itemToPurchase(string name, string Description, double price, int quantity);
	//itemToPurchase(double SetPrice, int SetQuantity, string SetName) { // : setPrice(0), SetQuantity(0) { // declare default constructor
	//itemToPurchase(double setPrice, int setQuantity);
	void SetName(string GetName);
	void SetPrice(double GetPrice);
	void SetQuantity(int Quantity);
	void SetTotal(double GetTotal);
	void SetDescription(string);
	void Print();
	void PrintDescription();
	string GetName() const;
	double GetPrice() const;
	int GetQuantity() const;
	string GetItem() const;
	double GetTotal();


};

#endif