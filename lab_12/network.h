#include <cctype>
#include <string>
#include <iostream>
#include "profile.h"

using std::string;
using std::cout;
using std::endl;

struct Post{
    string username;
    string message;
};

class Network {
	private:
	    static const int MAX_USERS = 20;
	    int numUsers;
	    Profile profiles[MAX_USERS];
	    bool following[MAX_USERS][MAX_USERS];
	    static const int MAX_POSTS = 100;         // new
	    int numPosts;                             // new
	    Post posts[MAX_POSTS];                    // new
	    int findID (string usrn);
	public:
	    Network();
	    bool addUser(string usrn, string dspn);
	    bool follow(string usrn1, string usrn2);
	    void printDot();
	    bool writePost(string usrn, string msg);  // new
	    void printTimeline(string usrn);          // new
		 bool isFollowing(string usrn1, string usrn2);
};
