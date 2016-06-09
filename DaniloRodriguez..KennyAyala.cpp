#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct empleado
{
    char nombre[40];
    char zona;
    int horas,pn,pt,pe;
};
empleado emple[5];
const int t=5;

void ingresar(empleado emple[],int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        cout<<"Nombre del empleado :";
        cin.getline(emple[i].nombre,40);

        cout<<"Ingrese Horas:";
        cin>>emple[i].horas;
        do
        {
            cout <<"Ingrese Zona a,b,c ...:";
            cin>>emple[i].zona;

        }while (!((emple[i].zona='a')and (emple[i].zona='b')and (emple[i].zona='c')));
_flushall();
    }
}
char PagoNormal (char zona)
{
    switch (zona)
    {
    case 'a':
        return 100;
        break;
    case 'b':
        return 120;
        break;
    default :
        return 130;
        break;
    }
}
char PagoExtra (char zona)
{
    switch (zona)
    {
    case 'a':
        return 120;
        break;
    case 'b':
        return 140;
        break;
    default :
        return 145;
        break;
    }
}


void calcular1(empleado emple[],int t)
{
    int i=0;
    if (emple[i].horas<=40)
    {for(i=0;i<t;i++)
    {
        emple[i].pn=PagoNormal(emple[i].zona);
        emple[i].pt=emple[i].pn*emple[i].horas;

    }}
}
void calcular2(empleado emple[],int t)
{
    int i,horaextra,pb;
    if (emple[i].horas>40)
    {for(i=0;i<t;i++)
    {   emple[i].pn=PagoNormal(emple[i].zona);
        pb=emple[i].pn*emple[i].horas;
        horaextra=emple[i].horas-40;
        emple[i].pe=PagoExtra(emple[i].zona);
        emple[i].pt=(emple[i].pe*horaextra)+pb;

    }}
}


void presentar (empleado emple[],int t)

{  int i;
    for(i=0;i<t;i++)
    {
        cout<<"Empleado..:"<<emple[i].nombre<<"\n";
        cout<<"Pago normal ..:"<<emple[i].pn<<"\n";
        cout<<"Pago extra ..:"<<emple[i].pe<<"\n";
        cout<<"Pago total ..:"<<emple[i].pt<<"\n";
    }
}
int main()
{  ingresar(emple,t);
   calcular1(emple,t);
   calcular2(emple,t);
   presentar(emple,t);
}
