#include <iostream>
#include "Report.h"
#include "Discount.h"
#include "Manager.h"

using namespace std;

Report::Report() {}

Report::Report(int rid, int mid, string rtype, string frqcy, string datetime) {
    reportID = rid;
    managerID = mid;
    type = rtype;
    frequency = frqcy;
    submittedDate = datetime;
}

void Report::displayReport() {
    cout << "Report ID : " << reportID << endl;
    cout << "Manager ID : " << managerID << endl;
	cout << "Report Type : " << type << endl;
	cout << "Frequency : " << frequency << endl;
	cout << "Submitted Date : " << submittedDate << endl;
}

Report::~Report() {}