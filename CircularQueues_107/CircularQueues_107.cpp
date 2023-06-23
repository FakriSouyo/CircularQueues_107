#include <iostream>
using namespace std;

class Queves {
	int FRONT, REAR, max = 5;
	int queve_array[5];

public:
	Queves() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		//Cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueve overflow\n";
			return;
		}
		//Cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//Jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queve_array[REAR] = num;
	}

	void remove() {
		//Cek apakah antrian kosong
		if (FRONT == -1) {
			cout << " Queve Underflow\n";
			return;
		}
		cout << "\nThe element deleted from the queve is: " << queve_array[FRONT] << "\M";