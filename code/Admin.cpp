#include <iostream>
#include "User.h"
#include "Employee.h"
#include "Admin.h"

using namespace std;

Admin::Admin() {}

Admin(int aid, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact) {
	adminID = aid;
}

Admin::Admin(int aid, int uid, int fid, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact) {
	adminID = aid;
	userID = uid;
	feedbackID = fid;
}

void Admin::addAccount() {}

void Admin::editAccount() {}

void Admin::deleteAccount() {}

void Admin::reviewFeedback() {}

void Admin::approveFeedback() {}

void Admin::deleteFeedback() {}

void Admin::displayAdmin() {
	cout << "Employee ID : " << empID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
}

Admin::~Admin() {}