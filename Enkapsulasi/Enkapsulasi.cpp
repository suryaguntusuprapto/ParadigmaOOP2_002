#include <iostream>
using namespace std;

class remotelampu {
private:
	string saklarNo[10];
public:
	void setsaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getsaklarNo(int i) {
		return saklarNo[1];
	}
};