#include <iostream>
#include "User.h"
#include "Recipe.h"
#include "Wallet.h"
#include "Employee.h"

using namespace std;

class Wallet;
class Recipe;

class RecipeCreator : protected Employee {
	private:
		int creatorId;

		Recipe* rcp;

		Wallet* wallet;

	public:
		RecipeCreator();

		RecipeCreator(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int rid, int cid, string rTitle, string rMethod, int rRating, string rCat, string rPDate, Wallet* wallet) : Employee (uname, fname, lname, pwd, mail, contact);

		void writeRecipe(string title, string method);

		void postAsFree();

		void postAsPremium();

		void viewWallet(Wallet* wall);

		void withdrawMoney(double amt);

		void displayRecipeCreator();

		~RecipeCreator();
};
