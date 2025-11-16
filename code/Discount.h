#include <iostream>
#include "Manager.h"
#include "Report.h"

using namespace std;

class Discount {
    private:
        int discountID;
        int managerID;
        string discountName;
        double amount;

    public:
        Discount();
        Discount(int id, int mid, string dname, double amt);
        void displayDiscount();
        ~Discount();
}