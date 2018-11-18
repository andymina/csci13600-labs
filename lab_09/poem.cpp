#include <iostream>

using std::string;
using std::cout;
using std::endl;

string* createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
		  cout << "created a poem" << endl;

        // assume that the poem p is not needed at this point
		  delete p;
		  cout << "deleted a poem" << endl;
    }
}
