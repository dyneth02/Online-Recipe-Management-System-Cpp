#include <iostream>
#include "BlogPost.h"

using namespace std;

BlogPost::BlogPost() {}
BlogPost::BlogPost(int pid, int uid, string btitle, string bcontent, string date) {
    postID = fid;
    userID = uid;
    title = btitle;
    content = bcontent;
    publishedDate = date;
}
void BlogPost::displayBlogPost() {
    cout << "Blog Post ID : " << postID << endl;
    cout << "User ID : " << userID << endl;
	cout << "Title : " << title << endl;
	cout << "Content : " << content << endl;
	cout << "Published Date : " << publishedDate << endl;
}

BlogPost::~BlogPost() {}