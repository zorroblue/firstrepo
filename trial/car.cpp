#include "car.h"
#include<iostream>
int is_overspeeding(int speed)
{
if(speed>40)
return 1;
else
return 0;
}
int is_latestmodel(char model)
{
if(model=='q')
return 1;
else
return 0;
}
void car::get_input()
{
printf("enter  the values\n");
scanf("%d %c",&speed,&model_name);
}
void car::print_details()
{
cout<<speed<<" "<<model_name;
}
int car::give_speed()
{
return speed;
}


