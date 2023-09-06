#include<iostream>
using namespace std;

void Def_arg(int a = 0, int b=0)
{
cout<<"a= "<<a<<" b= "<<b<<endl;
}
int main()
{
Def_arg();
Def_arg(10);
Def_arg(10,20);
return 0;
}