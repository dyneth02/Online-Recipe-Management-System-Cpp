#include <iostream>

using namespace std;

class PremiumMembership {
	private:
		int pkgID;
		string pkgName;
		int duration;
		double price;
		
	public:
		PremiumMembership();
		PremiumMembership(int id, string pname, int pduration, double pprice);
		void displayPremiumMembership;
		~PremiumMembership()
};
