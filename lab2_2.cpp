#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Data {
    string Name;  
    char Area;    
    int Num;     
    int Item1;    
};


string RandomName() {
    string name = "";
    name += 'A' + rand() % 26;  
    for (int i = 0; i < 4; i++) {
        name += '0' + rand() % 10;  
    }
    return name;
}
int main() {
    srand(time(0)); 

    Data arr[10];  
    for (int i = 0; i < 10; i++) {
        arr[i].Name = RandomName();
        arr[i].Num = rand() % 2501;  
        arr[i].Area = (rand() % 2 == 0) ? 'U' : 'R';
        arr[i].Item1 = rand() % 5;  
    }

    cout << setw(5) << "Name" << setw(8) << "Num" << setw(6) << "Area" << setw(6) << "Item1" << endl;

    for (int i = 0; i < 10; i++) {
        cout << setw(5) << arr[i].Name << setw(8) << arr[i].Num << setw(6) << arr[i].Area << setw(6) << arr[i].Item1 << endl;
    }

    return 0;
}
