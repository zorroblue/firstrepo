#include "car.h"
#include<iostream>
using namespace std;
int main()
{
car c[3];
int i;
for(i=0;i<3;i++)
c[i].get_input();
for(i=0;i<3;i++)
{
if(is_overspeeding(c[i].give_speed()))
cout<<"Overspeeding ";
else
cout<<"Right way to go!! ";
if(is_latestmodel(c[i].give_model())
{
cout<<"Yes";
else
cout<<"No";
}
return 0;
}

