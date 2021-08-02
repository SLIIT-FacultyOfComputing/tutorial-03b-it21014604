#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout <<"0        1         2         3 "<<endl;
 cout <<"123456789012345678901234567890 "<<endl;
 cout << setw(5)<< setiosflags(ios::fixed)<<"No";
 cout << setw(15)<< setiosflags(ios::fixed)<<"Name";
 cout << setw(10)<< setiosflags(ios::fixed)<<"Marks"<<endl;

 for (int r = 0; r < 5; r++) {
     cout << setw(5)<< setiosflags(ios::fixed)<<r+1;
     cout << setw(15)<< setiosflags(ios::fixed)<<names[r];
     cout << setw(10)<< setprecision(2)<<marks[r]<<endl;
 }
}