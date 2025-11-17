#include <iostream>
#include "User.h"
#include "FreePlanUser.h"

using namespace std;

FreePlanUser::FreePlanUser() {
	fb = new Feedback(0, 0, "Not set", "Not set");

	bp = new BlogPost(0, 0, "Not set", "Not set", "Not set");
}

FreePlanUser::FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact) {
	userID = id;
	username = uname;
} 

FreePlanUser::FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int fid, string ftitle, string datetime) : User (fname, lname, pwd, mail, contact) {
	userID = id;
	username = uname;

	fb = new Feedback(fid, id, ftitle, datetime);
} 

FreePlanUser::FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int pid, string btitle, string bcontent, string date) : User (fname, lname, pwd, mail, contact) {
	userID = id;
	username = uname;

	bp = new BlogPost(pid, id, btitle, bcontent, date);
}

FreePlanUser::FreePlanUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact, int pid, string btitle, string bcontent, string date, int fid, string ftitle, string datetime) : User (fname, lname, pwd, mail, contact) {
	userID = id;
	username = uname;

	bp = new BlogPost(pid, id, btitle, content, date);
	fb = new Feedback(fid, id, ftitle, date);
}

void FreePlanUser::addFeedback() {}

void FreePlanUser::addBlogPost() {}

void FreePlanUser::checkFreeRecipes() {}

void FreePlanUser::changePassword(string pwd) {}

void FreePlanUser::editProfile(string fname, string lname, string uname) {}

void FreePlanUser::makePayment(Payment* pay) {
	pmt = pay;
}

void FreePlanUser::displayFreePlanUser() {
	cout << "User ID : " << userID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
	fb->displayFeedback();
	bp->displayBlogPost();
}

FreePlanUser::~FreePlanUser() {
	delete fb;
	delete bp;
	delete pmt;
}
