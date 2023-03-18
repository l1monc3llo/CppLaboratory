#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation{
private:
    double a, b, c, x;
public:
    QuadraticEquation(double A, double B, double C, double X){
        a=A; b=B; c=C; x=X;
    }
    QuadraticEquation(const QuadraticEquation& QE)
    {
        a=QE.a; b=QE.b; c=QE.c; x=QE.x;
    }
    void Coefficients() {
        cout << "Coefficients a,b,c: " << a << " " << b << " " << c << endl;
    }
    void Inf() {
        cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
        if (a==0){
            cout << "Not a quadratic equation" << endl;
        }
    }
    double Y() {
        cout << a*pow(x,2)+b*x+c << endl;
    }
    double Roots() {
        double x1, x2, D, Re, Im;
        if (a==0){
            cout << "Wrong Input Data" << endl;
        }
        else{
            D = pow(b,2)-4*a*c;
            if (D > 0) {
                x1 = (-b-sqrt(D))/(2*a);
                x2 = (-b+sqrt(D))/(2*a);
                cout << x1 << endl;
                cout << x2 << endl;
                cout << "2 real roots" << endl;
            }
            else if (D == 0) {
                x1 = -b/(2*a);
                cout << x1 << endl;
                cout << "1 real root" << endl;
            }
            else {
                Re = -b / (2 * a);
                Im = sqrt(-D) / (2 * a);
                cout << Re << "-" << Im << "i" << endl;
                cout << Re << "+" << Im << "i" << endl;
                cout << "2 complex roots" << endl;
            }
        }

    }
    double MaxMin() {
        double SecondPart=c-(b*b/(4*a));
        if (a>0) {
            cout << "MaxValue = Infinity" << endl;
            cout << "MinValue = " << SecondPart;
        }
        else if (a<0) {
            cout << "Maxvalue = " << SecondPart << endl;
            cout << "Minvalue = -Infinity" << endl;
        }
        else{
            cout << "Wrong Input Data" << endl;
        }
    }
};

int main() {
    double a,b,c,x;
    cin >> a >> b >> c >> x;
    QuadraticEquation QE(a ,b, c, x);
    QuadraticEquation QE1(QE);
    QE1.Coefficients();
    QE1.Inf();
    QE1.Y();
    QE1.Roots();
    QE1.MaxMin();
    return 0;
}