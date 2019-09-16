#include <iostream>
#include <string>
using namespace std;


int main() {
	string name[10];
	int id[10];
	float grade[10];
	bool flag = true;
	cout << "Please input the information of students(separated by space):" << endl;
	for (int i = 0; i < 10; i++) cin >> name[i] >> id[i] >> grade[i];
	cout << "Result:" << endl;
	for (int i = 0; i < 10; i++) {
		if (grade[i] < 60) {
			cout << "name:" << name[i] << " " << "id:" << id[i] << " " << "grade:" << grade[i] << " " << "not passed!" << endl;
			flag = false;
		}
	}
	if (flag) cout << "Every body passed!";
	return 0;
}