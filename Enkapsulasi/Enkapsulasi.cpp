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

int main() {
	remotelampu lampurumah;
	
	lampurumah.setsaklarNo(0, "Lampu Teras Rumah");
	lampurumah.setsaklarNo(1, "Lampu Ruang Tamu");
	lampurumah.setsaklarNo(2, "Lampu Kamar Tidur");
	lampurumah.setsaklarNo(3, "Lampu Dapur");

	cout << lampurumah.getsaklarNo(0) << endl;
	cout << lampurumah.getsaklarNo(1) << endl;
	cout << lampurumah.getsaklarNo(2) << endl;
	cout << lampurumah.getsaklarNo(3) << endl;

	return 0;
}