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
    
    int countU[3] = {0}; 
    int countR[3] = {0}; 

    for (int i = 0; i < 10; i++) {
        arr[i].Name = RandomName();
        arr[i].Num = rand() % 3001;
        arr[i].Area = (rand() % 2 == 0) ? 'U' : 'R';
        arr[i].Item1 = rand() % 5; 
        
        int category;
        if (arr[i].Num <= 1000) category = 0;
        else if (arr[i].Num <= 2000) category = 1;
        else category = 2;
        
        if (arr[i].Area == 'U') {
            countU[category]++;
        } else {
            countR[category]++;
        }
    }

    cout << setw(5) << "Name" << setw(8) << "Num" << setw(6) << "Area" << setw(8) << "Item1" << endl;
    for (int i = 0; i < 10; i++) {
        cout << setw(5) << arr[i].Name << setw(8) << arr[i].Num << setw(6) << arr[i].Area << setw(8) << arr[i].Item1 << endl;
    }

    cout << "\nReport:\n";
    cout << "Area" << setw(5) << "A" << setw(5) << "B" << setw(5) << "C" << setw(8) << "Total" << endl;
    cout << "U   ";
    int totalU = 0;
    for (int i = 0; i < 3; i++) {
        cout << setw(5) << countU[i];
        totalU += countU[i];
    }
    cout << setw(8) << totalU << endl;

    cout << "R   ";
    int totalR = 0;
    for (int i = 0; i < 3; i++) {
        cout << setw(5) << countR[i];
        totalR += countR[i];
    }
    cout << setw(8) << totalR << endl;

    return 0;
}
