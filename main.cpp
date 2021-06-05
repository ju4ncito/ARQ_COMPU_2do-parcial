#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
#include <Windows.h>


using namespace std;


void retardo (unsigned long int);


int main(){


   string pass ="";
   char ch;
   for (int i=1;i<4;i++){

    cout << "Ingrese su password de 5 digitos: "<<endl;
    ch = _getch();
    while(ch != 13){                        //character 13 es enter
        if (ch != 8){                       //character 8 es enter
            pass.push_back(ch);
            cout << '*';
        } else {
            if (pass.length() > 0){
            cout << "\b \b";
            pass = pass.substr(0, pass.length() -1);
            }
        }
        ch = _getch();
   }
    cout <<endl;
    if(pass == "234"){
      cout << endl << "Bienvenido al sistema! "<<endl; break;
    }else{
        if (i == 3) {
                cout<<"Password no valida, no tiene mas intentos"<<endl;
                return 0;
        }
        cout << "Password no valida, restan "<<3 - i<<" intentos "<<endl;
        pass = "";


    }

    }

 //retardo para que se lea bienvenido
  retardo(1000000000);



  //Estructura switch

        int choice = 0;

   do {
        system("cls");
        cout << "Seleccione el numero de la secuencia a visualizar" << endl
        << "(1) El choque" << endl
        << "(2) El auto fantastico" << endl
        << "(3) La carrera" << endl
        << "(4) Salir " << endl;
        while ((choice < 1)) {
            cout << "Secuencia: ";
            cin >> choice;
        }
        switch (choice) {
            case 1:
                system("cls");
                cout<<"fantastic();";
                choice = 0;
                break;
            case 2:
                system("cls");
                cout<<"crash()";
                choice = 0;
                break;
            case 3:
                system("cls");
                cout<<"race()";
                choice = 0;
                break;
            case 4:
                system("cls");
                cout<<"El sistema ha sido apagado"<<endl;
                break;
            default:
                system("cls");
                cout<<"El numero ingresado no corresponde a una secuencia valida"<<endl;
                choice = 0;

        }
        cout << endl << endl << endl << "Presione ENTER para continuar ";
        ch = getch();

    } while (choice != 4);
    return 0;

}




void retardo(unsigned long int a){
    while (a) a--;
}
