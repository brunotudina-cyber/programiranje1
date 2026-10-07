#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

int main()
{

   double a,b;
   cout<< "Unesite prvi broj a: ";
   cin >> a;
    cout<< "Unesite prvi broj b: ";
   cin >> b;


    double zbroj=a+b;
    double razlika=a-b;
    double umnozak=a*b;
    double kolicnik=a/b;

    cout << "zbroj je:" << zbroj <<endl;
 cout << "razlika je:" << razlika<<endl;
 cout << "umnozak je:" << umnozak<<endl;
 cout << "kolicnik je:" << kolicnik<<endl;

    return 0;
}
