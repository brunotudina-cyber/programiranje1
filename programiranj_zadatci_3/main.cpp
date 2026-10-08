#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double kvadrat(double broj);
double udaljenost(double x1, double y1, double x2, double y2);
void ispisUdaljenost(double rezultat);

int main()
{
    double x1, y1, x2, y2;

    cout << "Unesi kordinate prve tocke (x1 y1): ";
    scanf("%lf %lf",&x1, &y1);

    cout << "Unesi kordinate druge toèke (x2 y2): ";
    scanf("%lf %lf",&x2, &y2);

    double d = udaljenost(x1,y1,x2,y2);

    ispisUdaljenost(d);


    return 0;
}

double kvadrat(double broj){
return broj*broj;
}

double udaljenost(double x1, double y1, double x2, double y2){

return sqrt(kvadrat(x2-x1)+kvadrat(y2-y1));
}

void ispisUdaljenost(double rezultat){
cout << "Udaljenost izmeðu toèki:" << rezultat<< endl;
}
