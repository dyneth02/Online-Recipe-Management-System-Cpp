#include <iostream>
#include "FreePlanUser.h"
#include "PremiumUser.h"
#include "GuestUser.h"
#include "Discount.h"
#include "PremiumMembership.h"

using namespace std;

class FreePlanUser;
class GuestUser;
class PremiumUser;
class Discount;
class PremiumMembership;

class Payment {
    private:
        int transactionID;
        int userID;
        int managerID;
        double amount;
        string transactionMethod;
        string transactionDate;

        FreePanUser* fpu;
        PremiumUser* pu;
        GuestUser* gu;

    public:
        Payment();

        Payment(int tid, int usid, int mid, double amt, string tmethod, string tdate, FreePlanUser* free);

        Payment(int tid, int usid, int mid, double amt, string tmethod, string tdate, FreePlanUser* pre);

        Payment(int tid, int usid, int mid, double amt, string tmethod, string tdate, FreePlanUser* guest);

        calAfterDisPayment(Discount* dis);

        calAfterPkgPayment(PremiumMembership* mem);

        void displayPayment();
        
        ~Payment();
}