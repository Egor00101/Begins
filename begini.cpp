39)
#include <iostream>
#include <cmath>
using namespace std;
void f39(double a1,double a2,double b1,double b2,double c1,double c2)
{
double D=a1*b2-a2*b1;
double x=(c1*b2-c2*b1)/D;
double y=(a1*c2-a2*c1)/D;
  cout << "x:= " << x << "\n";
  cout << "y:= " << y << "\n";
}
int main ()
{
  double a1, b1, c1;
  double a2, b2, c2;
  double x, y, D;
  cout << "vvedite kof. 1 uravnenia:=  "<<"\n";
  cin >> a1 >> b1 >> c1;
  cout << "vvedite kof. 2 uravnenia:=  "<<"\n";
  cin >> a2 >> b2 >> c2;
 func(a1,a2,b1,b2,c1,c2);
  return 0;
}
40)
  #include <iostream>
using namespace std;
#include <cmath>
void f40(int A, int B, int C){
if(A != 0)
{
 int Dis = pow(B,2) - 4 * A * C;
if(Dis>0)
{
 double x1 = ((-B)-pow(Dis,1.0/2.0))/(A*2);
 double x2 = ((-B)+pow(Dis,1.0/2.0))/(A*2);
if (x1<x2)
{
 cout << "x1-min:= " << x1;
 }else
{
  cout << "x2-min:= " <<  x2;
}
 }else
{
 cout <<"Discriminant uravnenia otrizhacelen";} 
 }else
{
  cout << "A:= 0";}}
int main(){
int A,B,C;
cout <<"vvedite A,B,C:= ";
cin>>A,B,C;
func(A,B,C);
return 0;
}
