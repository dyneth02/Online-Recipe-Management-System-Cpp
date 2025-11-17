#include <iostream>
#include "User.h"
#include "GuestUser.h"
#include "FreePlanUser.h"
#include "PremiumUser.h"
#include "Emloyee.h"
#include "Admin.h"
#include "Manager.h"
#include "RecipeCreator.h"
#include "Recipe.h"
#include "Wallet.h"
#include "Payment.h"
#include "Feedaback.h"
#include "Payment.h"
#include "BlogPost.h"
#include "PremiumMembership.h"
#include "Discount.h"

using namespace std;

int main() {
	// creating a new FreePlan object
	FreePlanUser* dineth = new FreePlanUser(1,"dineth@2002", "Dineth", "Hirusha", "dineth@02", "dineth@gmail.com", "077-2424521", 1, "Incredible..!", "Very Delicious :)", "2024-05-17", 1, "Great Recipe");

	// passing the payment object to dineth's makePayment method
	dineth->makePayment(transaction1);

	// displaying the "dineth" object
	dineth->displayFreePlanUser();

	// creating a new Premium object
	PremiumUser* eshan = new PremiumUser(2, "eshan@2002", "Eshan", "Harshana", "eshan@02", "eshan@gmail.com", "076-1541638", true, 1, membership);

	// view the membership package that eshan has bought
	eshan->showMembership(membership);

	// displaying the "eshan" object
	eshan->displayPremiumUser();

	// creating new GuestUser object
	GuestUser* ranidu = new GuestUser();

	// passing the payment object to dinil's makePayment method
	dinil->makePayment(transaction2);

	// entering details to "ranidu" object
	ranidu->Register(3, "ranidu@2003", "Ranidu", "Ganegoda", "ranidu@02", "ranidu@gmail.com", "077-0377131")

	// displaying the "ranidu" object
	ranidu->displayGuestUser();

	// creating a new Admin object
	Admin* dinil = new Admin(1, "dinil@2002", "Dinil", "Gunathilaka", "dinil@02", "dinil@gmail.com", "070-2310863");

	// displaying the "dinil" object
	dinil->displayAdmin();

	// creating a new Manager object
	Manager* yashodha = new Manager(1, "yashodha@2003", "Yashodha", "Cooray", "yashodha@02", "yashodha@gmail.com", "070-6080877", 1, 1, "Black Friday", 15.5, 1, 1, "Performance", "Monthly", "2024-05-17");

	// displaying "yashodha" object
	yashodha->displayManager();

	// creating a new Recipe Creator
	RecipeCreator* chef = new RecipeCreator(1, "chef@2002", "Chef", "Dias", "chef@02", "chef@gmail.com", "077-8921540", 1, 1, "Chocolate Chip Cookies", "1. Preheat oven to 350°F. 2. In a bowl, cream butter and sugars. 3. Beat in eggs and vanilla. 4. Mix in flour, baking soda, and salt. 5. Stir in chocolate chips. 6. Drop dough by rounded spoonfuls onto baking sheets. 7. Bake for 10-12 minutes or until golden brown.", 9, "Snack", "2024-05-17");

	// displaying the "chef" object
	chef->displayRecipeCreator();
	
	// creating a new Membership object
	PremiumMembership* membership = new PremiumMembership(2, "SILVER", 12, 49.99);

	// displaying "membership" object
	membership->displayPremiumMembership();

	// creating a new Payment object
	Payment* transaction1 = new Payment(1, 49.99, "VISA", "5-13-2024", dineth);
	Payment* transaction2 = new Payment(2, 49.99, "VISA", "5-15-2024", dinil);

	// passing the "membership" object into calAfterPkgPayment method
	transaction1->calAfterPkgPayment(membership);
	transaction2->calAfterPkgPayment(membership);

	// creating a discount object
	Discount* discount = new Discount(1, 1, "Black Friday", 8.25);

	// passing the discount object into calAfterDiscount method
	transaction1->calAfterDiscount(discount);
	transaction2->calAfterDiscount(discount);

	// passing the "membership" object into calAfterPkgPayment method
	transaction1->calAfterPkgPayment(membership);
	transaction2->calAfterPkgPayment(membership);

	// displaying the "transaction" object
	transaction1->displayPayment();
	transaction2->displayPayment();
	
	// creating a new Wallet object
	Wallet* wally = new Wallet(1, 120.00, "5-13-2024", chef);

	// passing the wally object into Recipe Creator's view method
	chef->viewWallet(wally);

	//passing the wally object into Manager's manage method
	yashodha->manageWallet(wally);

	delete dineth;
	delete eshan;
	delete ranidu;
	delete dinil;
	delete yashodha;
	delete chef;
	delete membership;
	delete transaction1;
	delete transaction2;
	delete wally;

	return 0;
}
