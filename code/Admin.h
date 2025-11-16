#include <iostream>
#include "User.h"
#include "Employee.h"

class Admin : protected Employee {
	private:
		int adminID;
		int userID;
		int feedbackID;

	protected:
		void addAccount();
		void editAccount();
		void deleteAccount();
		void reviewFeedback();
		void approveFeedback();
		void deleteFeedback();
		
	public:
		Admin();

		Admin(int aid, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact);

		Admin(int aid, int uid, int fid, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact);

		void displayAdmin();
		
		~Admin();
};
