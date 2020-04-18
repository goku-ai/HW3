// Team #5      CSCI/CMPE 1370      Spring2020      Homework #3
// Fabian Hernandez
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void showMenu(){
    cout << "Rational numbers calculator" << endl;
    cout << "(A)ddition" << endl;
    cout << "(S)ubtraction" << endl;
    cout << "(Q)uit" << endl;
    cout << "Enter your option: " << endl;
}
void getRational(int* num, int* den){
    char c;
    while(true){
        cout << "Please enter a fraction (n/d): ";
        cin >> *num >> c >> *den;
        if(*den ==0){
        cout<< "Denominator must not be 0" << endl;;
        }
        else {
            break;
        } 
        
    }
}
void reduce(int* num, int* den){
    int r, gcd , a ,b;
    a = *num;
    b = *den;
    if (a < 0){
        a *= -1;
    }
    r = (a %b);
    while(r != 0){
        a = b;
        b =r;
        r =a % b;
    }
    gcd = b;
    *num /= gcd;
    *den /= gcd;
}
// Addition: (a/b) + (c/d) = (a*d)+(c*b)/(b*d)
void AddRational(int* anum, int* aden, int num1, int den1, int num2, int den2){
    *anum = (num1 * den2)+ (num2 * den1);
    *aden = (den1 * den2);
    reduce(anum, aden);
}
// Subtraction: (a/b) -(c/d) = (a*d)-(c*b)/(b*d)
void SubtractRational(int *anum, int * aden, int num1, int den1, int num2, int den2){
    *anum = (num1 * den2) - (num2 * den1);
    *aden = (den1 * den2);
    reduce(anum, aden);
   
}


void DisplayRational(int num, int den){
    if (den == 1){
        cout << num << endl;
}
    else if (num == 0){
        cout << num << endl;
}
    else{
        cout << num << "/" << den << endl;
}
}

void add(){
    int num1, den1, num2, den2, anum, aden;
    while(true){
    system("cls");
    cout << "Addition of rational numbers" << endl;
        getRational(&num1, &den1);
        getRational(&num2, &den2);
        AddRational(&anum, &aden, num1, den1, num2, den2);
    cout << "The result of ";
    cout << num1 <<"/"<<den1 <<" + " << num2 << "/" <<den2 << " = ";
        DisplayRational(anum, aden);
    char user = '\0';
    cout << "Do you want to do more additions? (Y/N):";
    cin >> user; cin.ignore();
    if (user == 'N' || user == 'n'){
            break;
    }
    }
}
void subtract(){
    int num1, den1, num2, den2, anum, aden;
    while(true){
    system("cls");
    cout << "Subtraction of rational numbers" << endl;
        getRational(&num1, &den1);
        getRational(&num2, &den2);
        SubtractRational(&anum, &aden, num1, den1, num2, den2);
    cout << "The result of " ;
    cout << num1 <<"/"<<den1 <<" - " << num2 << "/" <<den2 << " = ";
        DisplayRational(anum, aden);
    char user = '\0';
    cout << "Do you want to do more subtractions? (Y/N): ";
    cin >> user; cin.ignore();
    if(user == 'N' || user == 'n'){
        break;
    }
    }
}