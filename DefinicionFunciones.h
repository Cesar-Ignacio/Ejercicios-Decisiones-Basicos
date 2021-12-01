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

#endif // DEFINICIONFUNCIONES_H_INCLUDED
