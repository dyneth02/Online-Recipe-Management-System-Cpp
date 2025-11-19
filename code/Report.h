#include <iostream>
#include "Discount.h"
#include "Manager.h"

using namespace std;

class Report {
    private:
        int reportID;
        int managerID;
        string type;
        string frequency;
        string submittedDate;

    public:
        Report();
        Report(int rid, int mid, string rtype, string frqcy, string datetime);
        void displayReport();
        ~Report();
}