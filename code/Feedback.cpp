#include <iostream>
#include "Feedback.h"

using namespace std;

Feedback::Feedback() {}

Feedback::Feedback(int fid, int uid, string ftitle, string datetime) {
    feedbackID = fid;
    userID = uid;
    feedbackTitle = ftitle;
    publishedDate = datetime;
}

void Feedback::displayFeedback() {
    cout << "Feedback ID : " << feedbackID << endl;
    cout << "User ID : " << userID << endl;
	cout << "Title : " << feedbackTitle << endl;
	cout << "Published Date : " << publishedDate << endl;
}
