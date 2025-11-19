#include <iostream>
#include "User.h"
#include "Recipe.h"
#include "Wallet.h"
#include "Employee.h"
#include "RecipeCreator.h"

using namespace std;

RecipeCreator::RecipeCreator() {
	rcp = new Recipe(0, 0, "Not set", "Not set", 0, "Not set", "Not set");
}

RecipeCreator::RecipeCreator(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int rid, int cid, string rTitle, string rMethod, int rRating, string rCat, string rPDate) : Employee (uname, fname, lname, pwd, mail, contact) {
	creatorId = id;

	rcp = new Recipe(rid, cid, rTitle, rMethod, rRating, rCat, rPDate);
}

void RecipeCreator::writeRecipe(string title, string method) {}

void RecipeCreator::postAsFree() {}

void RecipeCreator::postAsPremium() {}

void RecipeCreator::viewWallet(Wallet* wall) {
	wallet = wall;
	wallet->displayWallet();
}

void RecipeCreator::withdrawMoney(double amt) {}

void RecipeCreator::displayRecipeCreator() {
	cout << "Employee ID : " << empID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
	rcp->displayRecipe();
	wallet->displayWallet();
}

RecipeCreator::~RecipeCreator() {
	delete rcp;
	delete wallet;
}