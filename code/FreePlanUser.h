#include <iostream>
#include "User.h"
#include "Feedback.h"
#include "Payment.h"
#include "BlogPost.h"

class Feedback;
class BlogPost;
class Payment;

using namespace std;

class FreePlanUser : protected User{
	protected:
		int userID;
		string username;
		void addFeedback();
		void addBlogPost();
		void checkFreeRecipes();
		void changePassword(string pwd);
		void editProfile(string fname, string lname, string uname);
		void makePayment(double amt);

		Feedback* fb;
		BlogPost* bp;

		Payment* pmt;
		
	public:
		FreePlanUser();

		FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact);

		FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int fid, string ftitle, string datetime) : User (fname, lname, pwd, mail, contact)

		FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int pid, string btitle, string bcontent, string date) : User (fname, lname, pwd, mail, contact)

		FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int pid, string btitle, string bcontent, string date, int fid, string ftitle);

		void addFeedback();

		void addBlogPost();

		void checkFreeRecipes();

		void changePassword(string pwd);

		void editProfile(string fname, string lname, string uname);

		void makePayment(Payment* pay);

		void displayFreePlanUser();
		
		~FreePlanUser();
};
