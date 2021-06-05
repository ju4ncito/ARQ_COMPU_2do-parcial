#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <conio.h> // getch
#include <vector>

using namespace std;
int main(){
   string pass ="";
   char ch;
   for (int i=1;i<4;i++){

    cout << "Enter pass\n";
   ch = _getch();
   while(ch != 13){                     //character 13 es enter
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
      cout << endl << "Bienvenido usuario"<<endl; break;
   }else{
      cout << "Password incorrtecta, restan "<<3 - i<<" intentos"<<endl;
      if (i == 3) return 0;
   }

   }


   cout <<" que desea hacer!" <<endl;
}



