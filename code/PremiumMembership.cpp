#include <iostream>
#include "PremiumMembership.h"

using namespace std;

PremiumMembership::PremiumMembership() {}

PremiumMembership::PremiumMembership(int id, string pname, int pduration, double pprice) {
	pkgID = id;
	pkgName = pname;
	duration = pduration;
	price = pprice;
}

void displayPremiumMembership() {
	cout << "Package ID : " << pkgID << endl;
	cout << "Package Name : " << pkgName << endl;
	cout << "Duration : " << duration << endl;
	cout << "Price : " << price << endl;
}

PremiumMembership::~PremiumMembership() {}