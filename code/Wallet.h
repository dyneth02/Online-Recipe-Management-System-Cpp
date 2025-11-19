#include <iostream>

using namespace std;

class Wallet {
	private:
		int walletID;
		int creatorID;
		double balance;
		string lastWithdrawl;

		RecipeCreator* rcre;
		
	public:
		Wallet();
		Wallet(int wid, int cid, double amt, string datetime);
		Wallet(int wid, int cid, double amt, string datetime, RecipeCreator* creator);
		double checkBalance();
		void withdraw(double amt);
		void displayWallet();
		~Wallet();
};
