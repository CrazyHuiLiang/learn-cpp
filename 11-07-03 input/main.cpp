#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct SalaryInfo {
	unsigned id;
	double salary;
};

int main(int argc, char *argv[]) {
	// mock数据
	SalaryInfo employee1 = {600001, 8000};
	ofstream os("playroll", ios_base::out | ios_base::binary);
	os.write(reinterpret_cast<char *> (&employee1), sizeof(employee1));
	os.close();
	
	
	// in
	ifstream is("playroll", ios_base::in | ios_base::binary);
	if(is) {
		SalaryInfo employee2;
		is.read(reinterpret_cast<char *> (&employee2), sizeof(employee2));
		cout << employee2.id << " " << employee2.salary << endl;
	} else {
		cout << "ERROR: Cannot open file 'payroll'." << endl;
	}
	return 0;
}