#include <iostream>
#include "RecipeCreator.h"

using namespace std;

class Recipe {
	private:
		int recipeID;
		int creatorID;
		string title;
		string method;
		int rating;
		string category;
		string publishedDate;
		
	public:
		Recipe();
		Recipe(int rid, int cid, string rTitle, string rMethod, int rRating, string rCat, string rPDate);
		void displayRecipe();
		~Recipe();
};
