#include <iostream>

using namespace std;

class Feedback {
    private:
        int feedbackID;
        int userID;
        string feedbackTitle;
        string feedbackBody;
        string publishedDate;


    public:
        Feedback();
        Feedback(int fid, int u_id, string ftitle, string datetime);
        void displayFeedback();
}