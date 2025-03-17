#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //deklarasi variabel
    int counter;
    int i;
    int perulanganwhile = 0;
    int perulanganDo = 0;

    //loop with for
    //loop for ascending
    for(counter = 0; counter < 5; counter++) {
        cout << "Nilai Counter = " << counter << "TI UMY" << endl;
    }
    cout << "Nilai counter terakhir = " << counter << endl;
    cout <<endl;

    //loop for descending
    for(counter = 5; counter > 0; counter--) {
        cout << "Nilai Counter = " << counter << "TI UMY" << endl;
    }
    cout << "Nilai counter terakhir = " << counter << endl;
    cout <<endl;

    //loop with while
    srand(time(0));
    i = rand() % 10;
    cout << "Nilai awal i = " << i << endl;

    while (i < 7)
    {
        cout << "Nilai i = " << i << "TI UMY" << endl;
        i = rand() % 10;
        perulanganwhile++;
    }
    
}