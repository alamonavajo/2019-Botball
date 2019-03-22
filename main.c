#include <kipr/botball.h>

int main()
{
          int right = 0;
          int left = 3;
          int claw = 2;
    	  int  arm  = 3;
    
       // raise power lines w/ arm and turn
      enable_servos();
   
      set_servo_position (claw,565);
      msleep(2500);
    set_servo_position (arm,924);
    msleep(2500);
    while (analog(0)<100)
      motor (left, 40);
      motor (right, 40);
      msleep(3000);
     set_servo_position (arm, 510) ;
     msleep (2500) ;
     motor (left,-20);
     motor (right,30);
     msleep(2000);
    motor (left,30);
     motor (right,-20);
     msleep(2000);
     set_servo_position (arm, 924) ;
     msleep(2000) ;
    return 0;
}
