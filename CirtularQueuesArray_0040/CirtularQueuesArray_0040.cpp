#include<iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5]; 
	 
public:
	Queues() {
		FRONT = -1; 
		REAR = -1;  
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}

		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}

		else {
			// Jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	};
	void remove() {
		// cek apakah antrian kosong
		if (FRONT == -1){

		}
		cout << "nThe element deleted from the Queue is; " << queue_array[FRONT] << "\n";

		// 
		if (FRONT == REAR) {
			FRONT == -1;
			REAR == -1;
		}
		else {
			//
			if (FRONT == max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}

	void dsplay() {
		int FRONT_position = FRONT;
		int REAR_position = REAR;

		//cek apakah antrian kosong 
		if (FRONT == -1) {
			cout << "Quesu is empty\n";
			return;
		}

		cout << "\nlEmen   the queue...\n";
		// jika front _ position <==rear_positin, interasi dari front himgga rear
		if (FRONT_position <= REAR_position) {
			while (FRONT_position <= REAR_postion) {
				cout << queue_array[FRONT_position] << "   ";
				FRONT_position++;
			}
			cout << endl;
		}
		else {
			// Jika FRONT_position <= REAR_postion, iterasi dari FRONT hingga REAR
			while (FRONT_position <= max - 1) {
				cout << queue_array[FRONT_position] << "   ";
				FRONT_position++;
			}

			FRONT_position = 0;

			// Iterasi dari awal array hingga REAR
			while (FRONT_position <= REAR_postion) {
				cout << queue_array[FRONT_position] << "   ";
				FRONT_position++;
			}
			cout << endl;
		}
	};

		int main(){
				Quesues q;
				char ch;

				while (true) {
					try {
						cout << "menu" << endl;
						cout << "1. implement insert opration" << endl;
						cout << "2.implement insert opration" << endl;
						cout << "3. dispaly values" << endl;
						cout << "4.  exit" << endl;
						cout << "5, enter your choise (1-4):" << endl;
							
