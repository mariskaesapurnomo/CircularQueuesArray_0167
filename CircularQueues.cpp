// CircularQueues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
		//cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}
		// cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
        else {
            //jika REAR berapa di posisi terakhir array, kembali ke awla array
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queue_array[REAR] = num;

    }
    void Remove() {
        //cek apakah antrian kosong
        if (FRONT == -1) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe element delete from the queue is :" << queue_array[FRONT] << "\N";
        //cek jika antrian hanya memiliki satu elemen
        if (FRONT == REAR) {
            FRONT = -1;
            FRONT = -1;
        }
        else {
            //jika element yang dihapus berada di posisi trakhir array, kembali ke awal array
            if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT = 1;
        }
    }
    void Display() {

        int FRONT_Position = FRONT;
        int REAR_Position = REAR;

        // cek apakah antrian kososng
        if (FRONT_Position == -1) {
            cout << "Queue is empty";
            return;
        }

        cout << "\nElements in the are...\n";


    }


	
	

int main()
{

};