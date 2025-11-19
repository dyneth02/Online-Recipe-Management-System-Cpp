#include <iostream>
#include "Recipe.h"
#include "RecipeCreator.h"

using namespace std;

Recipe::Recipe() {}

Recipe::Recipe(int rid, int cid, string rTitle, string rMethod, int rRating, string rCat, string rPDate) {
	recipeID = rid;
	creatorID = cid;
	title = rTitle;
	method = rMethod;
	rating = rRating;
	category = rCat;
	publishedDate = rPDate;
}

void displayRecipe() {
	cout << "Recipe ID : " << recipeID << endl;
	cout << "Creator ID : " << creatorID << endl;
	cout << "Title : " << title << endl;
	cout << "Method : " << method << endl;
	cout << "Rating : " << rating << "/10" << endl;
	cout << "Category : " << category << endl;
	cout << "Published Date : " << publishedDate << endl;
}

Recipe::~Recipe() {}