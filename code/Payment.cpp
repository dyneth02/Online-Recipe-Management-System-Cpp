#include <iostream>
#include "Payment.h"
#include "Discount.h"
#include "PremiumMembership.h"

using namespace std;

Payment::Payment() {}

Payment::Payment(int tid, int uid, int mid, double amt, string tmethod, string tdate, FreePlanUser* free) {
    transactionID = id;
    userID = uid;
    managerID = mid;
    amount = amt;
    transactionMethod = tmethod;
    transactionDate = tdate;

    fpu = free;
}

Payment::Payment(int tid, int uid, int mid, double amt, string tmethod, string tdate, PremiumUser* pre) {
    transactionID = id;
    userID = uid;
    managerID = mid;
    amount = amt;
    transactionMethod = tmethod;
    transactionDate = tdate;

    pu = pre;
}

Payment::Payment(int tid, int uid, int mid, double amt, string tmethod, string tdate, GuestUser* guest) {
    transactionID = id;
    userID = uid;
    managerID = mid;
    amount = amt;
    transactionMethod = tmethod;
    transactionDate = tdate;

    gu = guest;
}

Payment::calAfterDisPayment(Discount* dis) {
    this->amount -= dis->amount;
}

Payment::calAfterPkgPayment(PremiumMembership* mem) {
    this->amount = mem->price;
}

void Payment::displayPayment() {
    cout << "Transaction ID : " << transactionID << endl;
	cout << "Transaction Amount : " << amount << endl;
	cout << "Transaction Method : " << transactionMethod << endl;
	cout << "Transaction Date : " << transactionDate << endl;
}

Payment::~Payment() {
    delete fpu;
    delete pu;
    delete gu;
}