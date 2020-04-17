//Fabian Hernandez
//HW3
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