#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string vardas;
    int plotis;
    cout << "iveskite varda: ";
    cin >> vardas;
    cout << "iveskite ploti: ";
    cin >> plotis;
    while(plotis < 4)
    {
        cout << "plotis per mazas, iveskite 4 < ploti: " << endl;
        cin >> plotis;
    }
    
    int centras = plotis/2;
    string *stringMasyvas = new string[plotis+1];

    if(vardas.back()=='e' or vardas.back()=='a')
    stringMasyvas[centras] = "* Sveika, " + vardas + "! *";
    else
    stringMasyvas[centras] = "* Sveikas, " + vardas + "! *";
    int zvaigzdutes = stringMasyvas[centras].length();
    for(int i=0;i<zvaigzdutes;i++)
    {
        //cout << i << endl;
        stringMasyvas[0]+="*";
        stringMasyvas[plotis]+="*";
    }
    
    for(int i=1;i<centras;i++)
    {
        stringMasyvas[i]="*";
        for(int j=0;j<zvaigzdutes-2;j++)
        {
            stringMasyvas[i]+=" ";
        }
        stringMasyvas[i]+="*";
    }

    for(int i=centras+1;i<plotis;i++)
    {
        stringMasyvas[i]="*";
        for(int j=0;j<zvaigzdutes-2;j++)
        {
            stringMasyvas[i]+=" ";
        }
        stringMasyvas[i]+="*";
    }
    
    for(int i=0;i<plotis+1;i++)
    {
        cout << stringMasyvas[i] << endl;
    }
    delete [] stringMasyvas;
}