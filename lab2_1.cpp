#include <iostream>
#include <string> 
#include<iomanip>

using namespace std;

struct Data {
    string Name; 
    char Area;   
    int Num;     
    int Item1;   
};

int main() {
    Data d;

    cout << "Enter name (5 characters): ";
    cin >> setw(5)>>d.Name; 

    cout << "Enter num (0-2500): ";
    cin >> d.Num;

    cout << "Enter area (U/R): ";
    cin >> d.Area;

    cout << "Enter item1 (0-4): ";
    cin >> d.Item1;

 	cout<<"\n"<<setw(5)<<"Name"<<setw(8)<<"Num"<<setw(6)<<"Area"<<setw(6)<<"Item1"<<endl;
 	cout<< setw(5)<<d.Name<<setw(8)<<d.Num<<setw(6)<<d.Area<<setw(6)<<d.Item1<<endl;
   
    return 0;
}

