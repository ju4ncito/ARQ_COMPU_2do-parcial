#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
#include <Windows.h>


using namespace std;


unsigned long int retardo (unsigned long int);
void mostrar (unsigned char);
void choque(unsigned long int );
/*
void carrera(unsigned long int);
void auto_fantastico(unsigned long int);
void choque_los_5(unsigned long int);
void bateria(unsigned long int);
*/

int main(){

   unsigned long int speed = 1510; // 1000000
   string pass;
   char ch;
   for (int i=1;i<4;i++){

    cout << "Ingrese su password de 5 digitos: "<<endl;
    ch = _getch();
    while(ch != 13){
        if (ch != 8){
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
    if(pass == "12345"){
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
  //retardo(380000000);
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
                choque(speed);
                choice = 0;
                speed = 1510;
                break;
                /*
            case 2:
                system("cls");
                auto_fantastico(speed);
                choice = 0;
                speed = 151000000;
                break;
            case 3:
                system("cls");
                carrera(speed);
                choice = 0;
                speed = 151000000;
                break;
            case 4:
                system("cls");
                choque_los_5(speed);
                choice = 0;
                speed = 151000000;
                break;
            case 5:
                system("cls");
                bateria(speed);
                choice = 0;
                speed = 151000000;
                break;*/
            case 6:
                system("cls");
                cout<<"El sistema ha sido apagado"<<endl;
                break;
            default:
                system("cls");
                cout<<"El numero ingresado no corresponde a una secuencia valida"<<endl;
                choice = 0;

        }
        cout << endl << endl << endl << "Presione cualquier tecla para continuar ";
        ch = getch();

    } while (choice != 6);
    return 0;

}
unsigned long int retardo(unsigned long int a){
unsigned long int spd = a;
    while (a){

    if (((spd - 50) > 1500) && ((a - 50) > 1500)){
    if(GetAsyncKeyState(VK_UP) & 0x0001){
            spd -= 50;
            a -= 50;
        }
    }
    if(GetAsyncKeyState(VK_DOWN) & 0x0001){
            spd += 50;
            a+= 50;
    }

    a--;
cout<<endl<<"el delay es "<<a;
cout<<"\e[A";
    }
    return spd;
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
void choque (unsigned long int speed){

  uint8_t tabla[] = {
    0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42
  };
while(1){

  for (int i = 0; i < 7; ++i) {
    cout<< "Presione ESC para volver al menu principal"<<endl;
    //cout<<"Velocidad: "<<speed<<endl;
    mostrar(tabla[i]);
    speed = retardo(speed);
    system("cls");
    if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){return;}
 }
}
}

/*
void carrera (unsigned long int speed){
  uint8_t tabla[] = {
    0x80, 0x80, 0x40, 0x40, 0x20, 0x20,
    0x10, 0x10, 0x88, 0x48, 0x24, 0x14,
    0xA, 0x6, 0x3,0x1
  };


while(1){

  for (int i = 0; i < 16; ++i) {
    cout<< "Presione ESC para volver al menu principal"<<endl;
    cout<<"Velocidad: "<<speed<<endl;
    mostrar(tabla[i]);
    retardo(speed);
    system("cls");


    if ((speed - 5000000) > 1000000){
    if(GetAsyncKeyState(VK_UP) & 0x0001){speed -= 5000000;}
    }
    if(GetAsyncKeyState(VK_DOWN) & 0x0001){speed += 5000000;}
    if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){return;}


  }
}
}
void auto_fantastico(unsigned long int speed){
  unsigned int dato = 0x80;
  unsigned long int a = speed;
  unsigned long int spd = speed;
  while(1){

  for (int i = 0; i < 8; ++i) {
    cout<< "Presione ESC para volver al menu principal"<<endl;
    cout<<"Velocidad: "<<speed<<endl;
    mostrar(dato);
    dato >>= 1;
    while (a){
         if ((a - 5000000) > 100000){
    if(GetAsyncKeyState(VK_UP) & 0x0001){a -= 5000000;}
    }
    if(GetAsyncKeyState(VK_DOWN) & 0x0001){a += 5000000;}
    if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){return;}
    a--;
    }a--;
    system("cls");




  }
  dato = 0x02;
  for (int i = 0; i < 6; ++i) {
    cout<< "Presione ESC para volver al menu principal"<<endl;
    cout<<"Velocidad: "<<speed<<endl;
    mostrar(dato);
    dato <<= 1;
    retardo(speed);
    system("cls");


    if ((speed - 5000000) > 1000000){
    if(GetAsyncKeyState(VK_UP) & 0x0001){speed -= 5000000;}
    }
    if(GetAsyncKeyState(VK_DOWN) & 0x0001){speed += 5000000;}
    if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){return;}


  }
}
}
void choque_los_5(unsigned long int speed){
 unsigned char tabla []={0x0,0x81, 0xC3, 0xE7, 0xFF, 0xE7, 0xC3, 0x81};
    while (1) {
        for (int i = 0; i < 8; i++) {
            cout<< "Presione ESC para volver al menu principal"<<endl;
            cout<<"Velocidad: "<<speed<<endl;
            mostrar(tabla[i]);
            retardo(speed);
            system("cls");


    if ((speed - 5000000) > 1000000){
    if(GetAsyncKeyState(VK_UP) & 0x0001){speed -= 5000000;}
    }
    if(GetAsyncKeyState(VK_DOWN) & 0x0001){speed += 5000000;}
    if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){return;}
    }
}
}
void bateria(unsigned long int speed){
    unsigned int dato = 0xFF;
  while(1){
  for (int i = 0; i < 9; ++i) {
    cout<< "Presione ESC para volver al menu principal"<<endl;
    cout<<"Velocidad: "<<speed<<endl;
    mostrar(dato);
    dato <<= 1;
    retardo(speed);
    system("cls");


    if ((speed - 5000000) > 1000000){
    if(GetAsyncKeyState(VK_UP) & 0x0001){speed -= 5000000;}
    }
    if(GetAsyncKeyState(VK_DOWN) & 0x0001){speed += 5000000;}
    if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){return;}

    }
    dato = 0xFF;
  }
}

*/
