#include <kipr/botball.h>

     int main()
{
    wait_for_light (3) ; 
    shut_down_in (119);
          int right = 0;
          int left = 3;
          int claw = 1;
          int arm  = 2;
   set_servo_position (claw, 777) ;
   //drive Foward
    motor (right, 60) ;
    motor (left, 60) ;
    msleep (3000) ;
    ao () ;
   //turn to power lines
         motor(right, -20);
         motor(left, 30);
         msleep(2000);
         ao();
    
         
   
   // raise power lines w/ arm and turn
      set_servo_position (arm,777);
      motor (left, 40);
      motor (right, 60);
      msleep(1000);
     set_servo_position (arm, 520) ;
     msleep (1500) ;
     set_servo_position (arm, 1000) ;
   msleep (1500) ;
         
   ao ();
    return 0;
}

         
   

