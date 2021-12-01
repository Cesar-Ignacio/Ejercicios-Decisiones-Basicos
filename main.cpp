#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;


///Puntos H

#include "Prototipos.h"
#include "DefinicionFunciones.h"
#include "Puntos.h"

int main()
{

    int opc=1;



    while(opc!=0)
    {


       cout<<"EJERCICIOS"<<endl;
       cout<<"******************"<<endl;
       cout<<"1: Ejercicio 6"<<endl;
       cout<<"2: Ejercicio 7"<<endl;
       cout<<"3: Ejercicio 8"<<endl;
       cout<<"4: Ejercicio 9"<<endl;
       cout<<"5: Ejercicio 10"<<endl;
       cout<<"6: Ejercicio 11"<<endl;
       cout<<"7: Ejercicio 12"<<endl;
       cout<<"******************"<<endl;
       cout<<"OPCION:";
       cin>>opc;

       system("cls");

       if(opc==1)
       {
           Punto_ejer6();
       }
       if(opc==2)
       {
           Punto_ejer7();
       }
       if(opc==3)
       {
           Punto_ejer8();
       }
       if(opc==4)
       {
            Punto_ejer9();
       }
       if(opc==5)
       {
           Punto_ejer10();
       }
       if(opc==6)
       {
           Punto_ejer11();
       }
       if(opc==7)
       {
           Punto_ejer12();
       }

    }




    return 0;
}
