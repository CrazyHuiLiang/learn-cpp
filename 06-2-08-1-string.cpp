#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char *argv[]) {
	
	// c风格的字符串
	const char *string1 = "program";
	char str[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
	char str2[8] = "program";
	char str3[] = "program";
	
	
	// string 类
	string s1 = "abc";
	string s2 = s1 + "efg";
	cout << s2 << endl;
	
	
	string s3;
	getline(cin, s3);
	cout << s3 << endl;
	
	return 0;
}