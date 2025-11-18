#include <iostream>
#include "User.h"
#include "Report.h"
#include "Wallet.h"
#include "Employee.h"

class Discount;
class Report;
class Wallet;

using namespace std;

class Manager : protected Employee {
	private:
		int managerID;

		Discount* dct;
		Report* rpt;

		Wallet* wallet;

	protected:
		void generateReport();
		void calculateDiscount();
		void approvePayment();
		
	public:
		Manager();

		Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact)  : Employee (uname, fname, lname, pwd, mail, contact);

		Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact, int did, string dname, double amt)  : Employee (uname, fname, lname, pwd, mail, contact);

		Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact, int rid, string rtype, string frqcy, string datetime)  : Employee (uname, fname, lname, pwd, mail, contact);

		Manager(int mid, string uname, string fname, string lname, string pwd, string mail, string contact, int did, int manid, string dname, double amt, int rid, int mid, string rtype, string frqcy, string datetime, int wid, int cid, double amt, string datetime)  : Employee (uname, fname, lname, pwd, mail, contact);

		void ManageWallet(Wallet* wall);

		void displayManager();
		
		~Manager();
};
