#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string vardas;
    cin >> vardas;
    string eil1;
    string eil2="*";
    string eil3;
    string eil4="*";
    string eil5;

    eil3 = "* Sveikas, " + vardas + "! *";

    int zvaigzdutes = eil3.length();
     
    for(int i=0;i<zvaigzdutes;i++)
    {
        eil1+="*";
        eil5+="*";
    }
    for(int i=0;i<zvaigzdutes-2;i++)
    {
        eil2+=" ";
        eil4+=" ";
    }
    eil2+="*";
    eil4+="*";

    cout << eil1 << endl << eil2 << endl << eil3 << endl << eil4 << endl << eil5;
}