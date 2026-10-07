#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int orijentacija,av,kb;

    cout << "Unesite broj od -100 do 100: ";
    cin >> a;

    if(a%2==0){
        cout << "paran je" <<endl;

    }
    else{
        cout<< "nije paran" <<endl;
    }
   av=abs(a);
   cout<<"apsulutna vrijednost="<<av<<endl;
   kb=a*a;
   cout<<"kvadrat="<<kb<<endl;
    return 0;
}
