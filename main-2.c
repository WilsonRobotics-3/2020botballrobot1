#include <kipr/wombat.h>

int main()
{	enable_servos(1); 
 	set_servo_position(1,1478); //right servo
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
 	motor(0,10); //right wheel
 	motor(1,100); //left wheel
 	msleep(1260);
 	ao();
 	//turn left
 	msleep(2000);
 	motor(1,10); //left wheel
 	motor(0,100); //right wheel
 	msleep(1100);
 	ao();
 	//turn right
 	msleep(1500);
 	motor(1,97); //left wheel	
 	motor(0,100); //right wheel
 	msleep(890);
 	ao();
 	//forward a bit
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(67);
 	ao();
 	set_servo_position(1,1015);
 	ao();
 	//turn left
 	msleep(1200);
 	motor(1,9); //left wheel
    motor(0,100); //right wheel
 	msleep(1150);
 	ao();
 	//backward
 	msleep(1500);
 	motor(0,-100); //right wheel
 	motor(1,-100); //left wheel
 	msleep(920);
 	ao();
 	//turn left
 	msleep(1000);
 	motor(0,100); //left wheel
 	motor(1,9); //right wheel
 	msleep(1200);
 	ao();
 	//turn right
 	msleep(1500);
 	motor(0,28); //right wheel
 	motor(1,100); //left wheel
 	msleep(1200);
 	ao();
 	//forward
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(800);
 	ao();
 	set_servo_position(1,1468);
 	ao();
 	set_servo_position(0,732);
 	ao();
 	//backward
 	msleep(1000);
 	motor(0,-100); //right wheel
 	motor(1,-100); //left wheel
 	msleep(1200);
 	//turn left
 	msleep(1200);
 	motor(0,100); //left wheel
 	motor(1,32); //right wheel
 	msleep(1100);
 	ao();
 	//forward
 	msleep(1200);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(1300);
 	ao();
	disable_servos();
    printf("Hello World\n");
    return 0;
}
