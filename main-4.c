#include <kipr/wombat.h>

int main()
{	enable_servos(1);
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(2550); 
 	ao();
 	//backward
 	msleep(1000); 
 	motor(0,-100); //right wheel
 	motor(1,-100); //left wheel
 	msleep(2000);
 	ao();
 	//turn right 
 	msleep(1500);
 	motor(1,100); //right wheel
 	motor(0,10); //left wheel
 	msleep(1250);
 	ao();
 	//turn left
 	msleep(2000);
 	motor(0,100); //left wheel
 	motor(1,10); //right wheel
 	msleep(1200);
 	ao();
    //forward a bit
 	msleep(1300);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(980);
 	ao();
 	set_servo_position(1,1015); 
 	ao(); 
 	//turn left
 	msleep(1050);
 	motor(0,100); //left wheel
 	motor(1,25); //right wheel
 	msleep(990);
 	//backward
 	msleep(1500);
 	motor(0,-100); //right wheel
 	motor(1,-100); //left wheel
 	msleep(920);
 	ao();
 	//forward
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(1750);
 	ao();
    set_servo_position(1,1395);
 	set_servo_position(0,569);
 	//backward
 	msleep(1500);
 	motor(0,-100); //right wheel
 	motor(1,-100); //left wheel
 	msleep(1500);
 	ao();
 	//turn left
 	msleep(1500);
  	motor(1,38); //left wheel
 	motor(0,100); //right wheel
 	msleep(1000);
 	ao();
 	//go back
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(2000);
 	ao();
    printf("Hello World\n");
    return 0;
}
