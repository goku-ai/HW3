// Team #5       CSCI/CMPE 1370     Spring2020         Homework # 3
// Fabian Hernandez
// This program lets you add or subtract rational numbers using algorithms
//and giving you the result in its simplest form.
#include <iostream>
#include <cstdlib>
#include "hw3functions.h"
using namespace std;
int main(){
    char choice= '\0';
    while(true){
    system("cls");
     showMenu();
     cin >> choice;
if( (choice== 'A') || (choice == 'a')){
    add();
}
else if((choice == 'S')|| (choice == 's')){
    subtract();
}
else {
    break;
}
    }
    cout << "Thank you!!!!" << endl;
return 0;
}