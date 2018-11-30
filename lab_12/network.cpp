#include "network.h"

Network::Network(){
	numUsers = 0;
	numPosts = 0;

	for (int i = 0; i < MAX_USERS; i++){
		for (int j = 0; j < MAX_USERS; j++){
			following[i][j] = false;
		}
	}
}

bool Network::addUser(string usrn, string dspn){
	if (usrn == "" || numUsers + 1 > MAX_USERS || findID(usrn) != -1){
		return false;
	}

	for (int i = 0; i < usrn.length(); i++){
		if (isalnum(usrn[i]) == 0){
			return false;
		}
	}

	Profile* temp = new Profile(usrn, dspn);
	profiles[numUsers] = *temp;
	delete temp;
	numUsers++;
	return true;
}

int Network::findID(string usrn){
	for (int i = 0; i < numUsers; i++){
		if (profiles[i].getUsername() == usrn){
			return i;
		}
	}

	return -1;
}

bool Network::follow(string usrn1, string usrn2){
	if (findID(usrn1) == -1 || findID(usrn2) == -1){
		return false;
	}

	following[findID(usrn1)][findID(usrn2)] = true;
	return true;
}

bool Network::writePost(string usrn, string msg){
	if (numPosts + 1 > MAX_POSTS || findID(usrn) == -1){
		return false;
	}

	posts[numPosts].username = usrn;
	posts[numPosts].message = msg;
	numPosts++;
	return true;
}

void Network::printDot(){
	string output = "digraph {";

	output += '\n';

	for (int i = 0; i < numUsers; i++){
		output += "\t\"@" + profiles[i].getUsername() + "\"";
		output += '\n';
	}

	output += '\n';

	for (int i = 0; i < MAX_USERS; i++){
		for (int j = 0; j < MAX_USERS; j++){
			if (following[i][j]){
				output += "\t\"@" + profiles[i].getUsername() + "\"";
				output += " -> ";
				output += "\"@" + profiles[j].getUsername() + "\"";
				output += '\n';
			}
		}
	}

	output += "}";
	output += '\n';

	cout << output;
}

void Network::printTimeline(string usrn){
	string output = "";

	for (int i = numPosts; i >= 0; i--){
		if (posts[i].username == usrn){
			output += profiles[findID(usrn)].getFullName() + ": " + posts[i].message;
			output += '\n';
		}

		if (isFollowing(usrn, posts[i].username)){
			output += profiles[findID(posts[i].username)].getFullName() + ": " + posts[i].message;
			output += '\n';
		}
	}

	cout << output;
}

bool Network::isFollowing(string usrn1, string usrn2){
	return following[findID(usrn1)][findID(usrn2)];
}
