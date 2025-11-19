#include <iostream>
#include "Wallet.h"

using namespace std;

Wallet::Wallet() {
	walletID = 0;
	creatorID = 0;
	balance = 0;
	lastWithdrawal = "Not Set";
}

Wallet::Wallet(int wid, int cid, double amt, string datetime) {
	walletID = wid;
	creatorID = cid;
	balance = amt;
	lastWithdrawal = datetime;
}

Wallet::Wallet(int wid, int cid, double amt, string datetime, RecipeCreator* creator) {
	walletID = wid;
	creatorID = cid;
	balance = amt;
	lastWithdrawal = datetime;

	rcre = creator;
}

double Wallet::checkBalance() {}

void Wallet::withdraw(double amt) {}

void Wallet::displayWallet() {
	cout << "Wallet ID : " << walletID << endl;
	cout << "Balance : " << balance << endl;
	cout << "Last Withdrawal : " << lastwithdrawal << endl;
}

Wallet::~Wallet() {
	delete rcre;
}