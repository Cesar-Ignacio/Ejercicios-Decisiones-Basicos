#ifndef PUNTOS_H_INCLUDED
#define PUNTOS_H_INCLUDED



void EnunciadoEjer6()
{
  cout<<"EJERCICIO 6"<<endl;
  cout<<"Enunciado:"<<endl;
  cout<<"6) Hacer un programa para ingresar por teclado dos números. Si el segundo número es distinto de cero, calcular y emitir por pantalla el cociente del primero sobre el segundo, sino emitir un cartel que diga Divisor Nulo, no se puede efectuar la operación. (Tener en cuenta que la división por cero es una operación inválida que no puede ejecutarse)"<<endl;
}

void Punto_ejer6()
{
  float num1=0,num2=0,cociente=0;
  int corte=1;



  while(corte!=0)
  {
    EnunciadoEjer6();

    cout<<"*****************"<<endl;

    cout<<"Primer numero:";
    num1=AloNumero();
    cout<<"Segundo numero:";
    num2=AloNumero();

    if(num2!=0)
    {
        cociente=num1/num2;

        cout<<num1<<"/"<<num2<<"="<<cociente<<endl;
    }
    else
    {
        cout<<"Divisor nulo"<<endl;
    }

    cout<<"*****************"<<endl;

    cout<<"Seguir 1, No seguir 0:";
    cin>>corte;

    system("cls");
  }





}


void Punto_ejer7()
{


  float num1=0,num2=0,direncia=0;
  int corte=1;

  while(corte!=0)
  {

   EnunciadoEjer7();

   cout<<"*****************"<<endl;

   cout<<"Primer numero:";
   num1=AloNumero();
   cout<<"Segundo numero:";
   num2=AloNumero();

   direncia=fabsf(fabsf(num1)-fabsf(num2));

   cout<<"Direncia Absoluta:"<<direncia<<endl;

   cout<<"*****************"<<endl;
   cout<<"Seguir 1, No seguir 0:";
   cin>>corte;
   system("cls");

  }

}

void EnunciadoEjer7()
{
  cout<<"EJERCICIO 7"<<endl;
  cout<<"Enunciado:"<<endl;
  cout<<"7) Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos. "<<endl;
  cout<<"Por ejemplo:"<<endl;
  cout<<"Si se ingresan 3 y 8, se emite 5."<<endl;
}


void Punto_ejer8()
{

 float importe=0;
 int corte=1;
 while(corte!=0)
 {
   EnunciadoEjer8();

   cout<<"****************"<<endl;

   cout<<"Importe :";
   importe=AloNumero();
   importe=CalcularDescuento(importe);
   cout<<"Total a pagar:"<<importe<<endl;
   cout<<"****************"<<endl;
   cout<<"Seguir 1, No Seguir 0:";
   cin>>corte;
   system("cls");
 }
}

void EnunciadoEjer8()
{
  cout<<"EJERCICIO 8"<<endl;
  cout<<"Enunciado:"<<endl;
  cout<<"8) Un negocio de perfumería efectúa descuentos en sus ventas según el importe de éstas, con la siguiente escala:"<<endl;

  cout<<"- Si el importe es menor a $100 corresponde un descuento del 5%"<<endl;
  cout<<"- Si el importe es de entre $100 (inclusive) y hasta $500 (inclusive) corresponde un descuento del 10% "<<endl;
  cout<<"- Si el importe es mayor a $500 corresponde un descuento del 15%"<<endl;

  cout<<"El dueño le solicitó a Ud., futuro programador, un programa donde se deba ingresar el importe "<<endl;
  cout<<"original a pagar por el cliente y que luego se calcule e informe por pantalla el precio final con "<<endl;
  cout<<"el descuento que corresponda ya aplicado. "<<endl;

}

void Punto_ejer9()
{

  float num1=0,num2=0,num3=0;
  int corte=1;

  while(corte!=0)
  {
      EnunciadoEjer9();

      cout<<"Primer numero:";
      num1=AloNumero();
      cout<<"Segundo numero:";
      num2=AloNumero();
      cout<<"Tercer numero:";
      num3=AloNumero();


      if(Iguales(num1,num2,num3)==0)
      {
          cout<<"Son Iguales los numeros"<<endl;
      }
      else {
        cout<<"Son distintos"<<endl;
      }

      cout<<"************************"<<endl;
      cout<<"Seguir 1, No Seguir 0:";
      cin>>corte;

      system("cls");

  }

}


void EnunciadoEjer9()
{
  cout<<"EJERCICIO 9"<<endl;
  cout<<"Enunciado:"<<endl;
  cout<<"  9) Hacer un programa para ingresar por teclado tres números y luego determinar e informar "<<endl;
  cout<<"con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada. "<<endl;
  cout<<"Recordar la ley de transitividad de la igualdad: Si un número A es igual a otro número B y si "<<endl;
  cout<<"el número B es igual a otro número C, entonces se deduce que A también es igual a C."<<endl;

   cout<<"**************************"<<endl;

}


void Punto_ejer10()
{

   float num1,num2,num3;
   int corte=1;

   while(corte!=0)
   {
       EnunciadoEjer10();
       cout<<"Ingrese numero:";
       num1=AloNumero();
       cout<<"Segundo numero:";
       num2=AloNumero();
       cout<<"Tercer numero:";
       num3=AloNumero();

       if(Iguales(num1,num2,num3)==-1)
       {
           cout<<"Los numeros son distintos"<<endl;
       }

       cout<<"******************"<<endl;
       cout<<"Seguir 1, No seguir 0:";
       corte=AloNumero();
       system("cls");

   }



}

void EnunciadoEjer10()
{
  cout<<"EJERCICIO 9"<<endl;
  cout<<"Enunciado:"<<endl;
  cout<<"10) Hacer un programa para ingresar por teclado tres números y luego determinar e informar "<<endl;
  cout<<"con   una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada."<<endl;
  cout<<"Recordar que la ley de transitividad de la igualdad no se cumple para la desigualdad: Si un"<<endl;
  cout<<"número A es distinto de otro número B y si el número B es distinto de otro número C, "<<endl;
  cout<<"entonces no se deduce que A sea distinto de C. Por ejemplo A=3, B=5 y C=3."<<endl;

  cout<<"************************"<<endl;


}


void Punto_ejer11()
{
    float num1,num2,num3;
    int corte=1,Vtri=0;

    while(corte!=0)
    {
        EnunciadoEjer11();

        cout<<"Primer Lado:";
        num1=AloNumero();
        cout<<"Segundo Lado:";
        num2=AloNumero();
        cout<<"Tercer numero:";
        num3=AloNumero();

        Vtri=Iguales(num1,num2,num3);
        if(Vtri==0)
        {
            cout<<"Triangulo Equilatero"<<endl;
        }
        if(Vtri==-1)
        {
            cout<<"Triangulo Escaleno"<<endl;
        }
        if(Vtri==1)
        {
            cout<<"Triangulo Isosceles"<<endl;
        }

        cout<<"*********************"<<endl;
        cout<<"Seguir 1, No seguir 0:";
        corte=AloNumero();
        system("cls");

    }


}

void EnunciadoEjer11()
{
cout<<"EJERCICIO 9"<<endl;
cout<<"Enunciado:"<<endl;
cout<<"11) Hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo,"<<endl;
cout<<"luego se pide determinar e informar con un cartel aclaratorio que tipo de triángulo es:"<<endl;
cout<<"- Equilátero: si los tres lados son iguales"<<endl;
cout<<"- Isósceles: si dos de los tres lados son iguales"<<endl;
cout<<"- Escaleno: si los tres lados son distintos entre sí"<<endl;

cout<<"********************"<<endl;

}


void Punto_ejer12()
{

 float num1,num2,num3;
 int corte=1;

 while(corte!=0)
 {
     EnunciadoEjer12();

     cout<<"Primer numero:";
     num1=AloNumero();
     cout<<"Segundo numero:";
     num2=AloNumero();
     cout<<"Tercer numero:";
     num3=AloNumero();

     cout<<"Valor maximo: " << Maximo(num1,num2,num3)<<endl;

     cout<<"*********************"<<endl;
     cout<<"Seguir 1, No seguir 0:";
     corte=AloNumero();
     system("cls");
 }


}

void EnunciadoEjer12()
{
cout<<"EJERCICIO 12"<<endl;
cout<<"Enunciado:"<<endl;
cout<<"12) Hacer un programa para ingresar por teclado tres números y luego determinar e informar "<<endl;
cout<<"el máximo de ellos."<<endl;
cout<<"************************"<<endl;
}


void Punto_ejer13()
{

 float num1, num2,num3,num4,num5;
 int corte=1;

 while(corte!=0)
 {
     EnunciadoEjer13();

     cout<<"Primer numero:";
     num1=AloNumero();
     cout<<"Segundo numero:";
     num2=AloNumero();
     cout<<"Tercer numero:";
     num3=AloNumero();
     cout<<"Cuarto numero:";
     num4=AloNumero();
     cout<<"Quinto numero:";
     num5=AloNumero();


     cout<<"Maximo: " << Maximo5(num1,num2,num3,num4,num5)<<endl;


     cout<<"*************************"<<endl;

     cout<<"Seguir 1, No seguir 0 :";
     corte=AloNumero();


     system("cls");

 }


}

void EnunciadoEjer13()
{
    cout<<"EJERCICIO 13"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"13) Hacer un programa para ingresar por teclado cinco números y luego determinar e informar"<<endl;
    cout<<"el máximo de ellos."<<endl;
    cout<<"****************************"<<endl;
}


void Punto_ejer14()
{
   float num1,num2,num3,num4,num5;
   int corte=1;
   while(corte!=0)
   {
       EnunciadoEjer114();

       cout<<"Primer numero:";
       num1=AloNumero();
       cout<<"Segundo numero:";
       num2=AloNumero();
       cout<<"Tercer numero:";
       num3=AloNumero();
       cout<<"Cuarto numero:";
       num4=AloNumero();
       cout<<"Quinto numero:";
       num5=AloNumero();


       cout<<"Cantidad de Positivos:"<< CantidadPositivos(num1,num2,num3,num4,num5)<<endl;

       cout<<"**************************"<<endl;
       cout<<"Seguir 1, No seguir 0:";
       corte=AloNumero();

       system("cls");
   }



}

void EnunciadoEjer114()
{
    cout<<"EJERCICIO 14"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"14) Hacer un programa para poder ingresar por teclado cinco números y luego determinar e"<<endl;
    cout<<"informar cuantos de esos cinco números son positivos"<<endl;
    cout<<"*****************************"<<endl;
}


#endif // PUNTOS_H_INCLUDED
