#include <iostream>

using namespace std;

class BlogPost {
    private:
        int postID;
        int userID;
        string title;
        string content;
        string publishedDate;

    public:
        BlogPost();
        BlogPost(int pid, int uid, string btitle, string bcontent, string date);
        void displayBlogPost();
        ~BlogPost();
}