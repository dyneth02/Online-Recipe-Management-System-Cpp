#include <iostream>
#include "Discount.h"
#include "Manager.h"
#include "Report.h"

using namespace std;

Discount();

Discount(int id, int mid, string dname, double amt) {
    discountID = id;
    managerID = mid
    discountName = dname;
    amount = amt;
}

void displayDiscount() {
    cout << "Discount ID : " << discountID << endl;
    cout << "Manager ID : " << managerID << endl;
	cout << "Discount Name : " << discountName << endl;
	cout << "Amount : " << amount << endl;
}

Discount::~Discount() {}