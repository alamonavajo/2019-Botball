#include <kipr/botball.h>

int main()
{
    motor(0,60);
    motor(3,60);
    //drive foward (little)
    
    msleep(3000);
    
    motor(0,15);
    motor(3,78);
    
    msleep(2000);
    
    while(analog(0)>100)
    {
    motor(0,75);
    motor(3,75);
    }
    
    motor(0,-50);
    motor(3,5);
    
    msleep(1000);
    
    motor(0,-80);
    motor(3,-80);
    
    msleep(3000);
    
    motor(0,10);
    motor(3,-30);
    
    msleep(1000);
    
    motor(0,-100);
    motor(3,-100);
    
    msleep(3000);
    return 0;
}
