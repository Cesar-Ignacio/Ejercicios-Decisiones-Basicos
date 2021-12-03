#ifndef DEFINICIONFUNCIONES_H_INCLUDED
#define DEFINICIONFUNCIONES_H_INCLUDED


float AloNumero()
{
    char numero[10];
    float numero1;
    int cnull=1,pos=0,ccres=1;

    while(ccres!=0)
    {

        cin>>numero;

        pos=0;

        cnull=1;

        ccres=0;

        while(cnull!=0)
        {
            if(numero[pos]=='\0')
            {
                cnull=0;
            }
            else if(((int)numero[pos]<48 || (int)numero[pos]>59) && (int)numero[pos]!=46 && (int)numero[pos]!=45 )
            {
                ccres++;
            }

            pos++;
        }

    }

    numero1=atof(numero);

    return numero1;
}

float CalcularDescuento(float importe)
{

    if(importe<100)
    {
        return importe*0.95;
    }
    else if(importe>=10 && importe<=500)
    {
        return importe*0.90;
    }
    else if(importe>500)
    {
        return importe*0.85;
    }
}

int Iguales(float num1,float num2, float num3)
{
    if(num1==num2 && num1==num3 )
    {
         return 0;
    }
    if(num1!=num2 && num1!=num3 && num2!=num3)
    {
        return -1;
    }
    if( ((num1==num2 && num1!=num3) || (num3==num2 && num2!=num1)) || (num1==num3 && num3!=num2) )
    {
        return 1;
    }
}

float Maximo(float num1, float num2, float num3)
{
    if(num1>=num2)
    {
        if(num1>=num3)
        {
            return num1;
        }
        else{
            return num3;
        }
    }
    else if(num2>num3)
    {
        return num2;
    }
}

float Maximo5(float num1,float num2,float num3,float num4,float num5)
{
    float maximo=Maximo(num1,num2,num3);

    return Maximo(maximo,num4,num5);

}

int CantidadPositivos(float num1,float num2,float num3,float num4,float num5)
{
    int cantidadPos=0;

    if(num1>0)
    {
        cantidadPos++;
    }
    if(num2>0)
    {
        cantidadPos++;
    }
    if(num3>0)
    {
        cantidadPos++;
    }
    if(num4>0)
    {
        cantidadPos++;
    }
    if(num5>0)
    {
        cantidadPos++;
    }

    return cantidadPos;
}

void orden(float num1, float num2, float num3)
{
    float pm,sm,tm;

    if(num1<=num2)
    {
        pm=num1;
        sm=num2;

    }
    else
    {
        pm=num2;
        sm=num1;
    }
    if(num3<=pm)
    {
         tm=sm;
         sm=pm;
         pm=num3;
    }
    else if(num3<=sm)
    {
        tm=sm;
        sm=num3;
    }

   cout<<pm<<endl;
   cout<<sm<<endl;
   cout<<tm<<endl;


}


void EstadoAlumno(float nota1,float nota2,float nota3, float nota4)
{
    if(Igualdad(nota1,nota2,nota3,nota4,7)==4)
    {
        cout<<"Promociono "<<endl;
    }

    else if(Igualdad(nota1,nota2,nota3,nota4,4)>=3)
    {
        cout<<"Rinde examen final"<<endl;
    }
    else if(Igualdad(nota1,nota2,nota3,nota4,4)>=1)
    {
        cout<<"Recupera Parcial"<<endl;
    }
    else {
        cout<<"Recursa la materia"<<endl;
    }

}

int Igualdad(float nota1,float nota2,float nota3,float nota4,int nota)
{
    int cantidad=0;
    if(nota1>=nota)
    {
        cantidad++;
    }
    if(nota2>=nota)
    {
        cantidad++;
    }
    if(nota3>=nota)
    {
        cantidad++;
    }
    if(nota4>=nota)
    {
        cantidad++;
    }
    return cantidad;
}
#endif // DEFINICIONFUNCIONES_H_INCLUDED
