#include <iostream>
using namespace std;

class seseorang {
	virtual void pesan() = 0;
	//virtual void pesan(){
	    //cout << "Pesan dari seseorang" << endl;
	//}
	//virtual void cetak() = 0;
	virtual void cetak() {

	}
};

class joko : seseorang {
public:
	void pesan() {
		cout << "Pesan dari joko" << endl;
	}
	void cetak() {
		cout << "Tulisan joko" << endl;
	}
};

class lia : seseorang {
public:
	void pesan() {
		cout << "Pesan dari lia" << endl;
	}

};