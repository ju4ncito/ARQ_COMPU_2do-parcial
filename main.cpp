#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>



using namespace std;


int main() {

    unsigned long int vel = 10000;
    char password[5] = {'h','o','l','a','s'};
    char caracter[6];
    bool iguales = false;
    int contador = 0;
    cout << "Ingrese su password de 5 digitos " <<endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cin.getline(caracter, 6);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    iguales = true;

    for (int i=0; i<5; i++){
        cout<<"*";
        if (password[i] != caracter[i]){
            iguales = false;
        }
        contador++;
        _sleep(500);
        system("CLS");
    }


}






