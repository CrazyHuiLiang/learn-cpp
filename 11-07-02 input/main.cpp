#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[]) {
	string line;
	cout << "Type a line terminated by âtâ" << endl;
	getline(cin, line, 't');
	cout << line << endl;
	
	return 0;
}
