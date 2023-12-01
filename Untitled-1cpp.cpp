#include<bits/stdc++.h>
using namespace std;
class coord
{
int x,y;
public:
coord()
{
x=0;
y=0;
}
coord(int i,int j)
{
x=i;
y=j;
}
void show()
{
cout<<x<<" "<<y<<endl;
}
coord operator ++(int notused)
{
x++;
y++;
return *this;
}
};
int main()
{
coord o1(10,20),o2(5,5),o3,o4(3,3);
o1++;
o1.show();
return 0;
}
