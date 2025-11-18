#include <iostream>
#include "User.h"
#include "Employee.h"
#include "Manager.h"
#include "Report.h"
#include "Discount.h"

using namespace std;

Manager::Manager() {
	dct = new Discount(0, 0, "Not set", 0);

	rpt = new Report(0, 0, "Not set", "Not set", "Not set");
}

Manager::Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact)  : Employee (uname, fname, lname, pwd, mail, contact) {
	managerID = mid;
}

Manager::Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact, int rid, string rtype, string frqcy, string datetime)  : Employee (uname, fname, lname, pwd, mail, contact) {
	managerID = mid;

	rpt = new Report(rid, mid, rtype, frqcy, datetime);
}

Manager::Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact, int did, string dname, double amt)  : Employee (uname, fname, lname, pwd, mail, contact) {
	managerID = mid;

	dct = new Discount(did, mid, dname, amt);
}

Manager::Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact, int did, int manid, string dname, double amt, int rid, int mid, string rtype, string frqcy, string datetime) : Employee (uname, fname, lname, pwd, mail, contact) {
	managerID = mid;

	dct = new Discount(did, manid, dname, amt);

	rpt = new Report(rid, mid, rtype, frqcy, datetime);
}

void Manager::ManageWallet(Wallet* wall) {
	wallet = wall;
}

void Manager::generateReport() {}

void Manager::calculateDiscount() {}

void Manager::approvePayment() {}

void Manager::displayManager() {
	cout << "Employee ID : " << empID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
	dct->displayDiscount();
	rpt->displayReport();
}

Manager::~Manager() {
	delete dct;
	delete rpt;
	delete wallet;
};