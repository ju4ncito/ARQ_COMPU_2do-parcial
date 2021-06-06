#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
#include <Windows.h>


using namespace std;


void retardo (unsigned long int);
void mostrar (unsigned char);
void choque();
void carrera();
void auto_fantastico();
void choque_los_5();
void bateria();


int main(){


   string pass;
   char ch;
   for (int i=1;i<4;i++){

    cout << "Ingrese su password de 5 digitos: "<<endl;
    ch = _getch();
    while(ch != 13){                        //character 13 es enter
        if (ch != 8){                       //character 8 es backspace
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
  retardo(100000);
//Estructura switch
        int choice = 0;

   do {
        system("cls");
        cout << "Seleccione el numero de la secuencia a visualizar" << endl
        << "(1) El choque" << endl
        << "(2) El auto fantastico" << endl
        << "(3) La carrera" << endl
        << "(4) Choque los 5!" << endl
        << "(5) Bateria baja" << endl
        << "(6) Salir " << endl;
        while ((choice < 1)) {
            cout << "Secuencia: ";
            cin >> choice;
        }
        switch (choice) {
            case 1:
                system("cls");
                choque();
                choice = 0;
                break;
            case 2:
                system("cls");
                auto_fantastico();
                choice = 0;
                break;
            case 3:
                system("cls");
                carrera();
                choice = 0;
                break;
            case 4:
                system("cls");
                choque_los_5();
                choice = 0;
                break;
            case 5:
                system("cls");
                bateria();
                choice = 0;
                break;
            case 6:
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

    } while (choice != 6);
    return 0;

}
void retardo(unsigned long int a){
    while (a) a--;
}
void mostrar (unsigned char dato){
  for (unsigned char mask = 128; mask > 0; mask>>=1)
    {
        if (dato&mask)
        {
            cout<<"*";
        }
        else {
            cout<<"_";
        }
    }
}
void choque (){
  uint8_t tabla[] = {
    0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42
  };
while(1){

  for (int i = 0; i < 7; ++i) {
    cout<< "Presione ENTER para volver al menu principal"<<endl;
    mostrar(tabla[i]);
    retardo(150000000);
    system("cls");
    if(GetKeyState(13) & 0x8000){return;}
    }
 }
}
void carrera (){
  uint8_t tabla[] = {
    0x80, 0x80, 0x40, 0x40, 0x20, 0x20,
    0x10, 0x10, 0x88, 0x48, 0x24, 0x14,
    0xA, 0x6, 0x3,0x1
  };
while(1){
  for (int i = 0; i < 16; ++i) {
    cout<< "Presione ENTER para volver al menu principal"<<endl;
    mostrar(tabla[i]);
    retardo(150000000);
    system("cls");


    if(GetKeyState(13) & 0x8000){return;}
  }
}
}
void auto_fantastico(){
  unsigned int dato = 0x80;
  while(1){

  for (int i = 0; i < 8; ++i) {
    cout<< "Presione ENTER para volver al menu principal"<<endl;
    mostrar(dato);
    dato >>= 1;
    retardo(100000000);

    system("cls");

    if(GetKeyState(13) & 0x8000){return;}
  }
  dato = 0x02;
  for (int i = 0; i < 6; ++i) {
    cout<< "Presione ENTER para volver al menu principal"<<endl;
    mostrar(dato);
    dato <<= 1;
    retardo(100000000);
    system("cls");
    if(GetKeyState(13) & 0x8000){return;}
  }
}
}
void choque_los_5(){
 unsigned char tabla []={0x0,0x81, 0xC3, 0xE7, 0xFF, 0xE7, 0xC3, 0x81};
    while (1) {
        for (int i = 0; i < 8; i++) {
            cout<< "Presione ENTER para volver al menu principal"<<endl;
            mostrar(tabla[i]);
            retardo(100000000);
            system("cls");
            if(GetKeyState(13) & 0x8000){return;}
    }
}
}
void bateria(){
    unsigned int dato = 0xFF;
  while(1){
  for (int i = 0; i < 9; ++i) {
    cout<< "Presione ENTER para volver al menu principal"<<endl;
    mostrar(dato);
    dato <<= 1;
    retardo(100000000);
    system("cls");
    if(GetKeyState(13) & 0x8000){return;}
  }
dato = 0xFF;
}
}
