#include <kipr/wombat.h>

int main()
    //make sure all the strings are pluged in
{	enable_servos(1);
 	set_servo_position(1, 1350); //right servo
 	msleep(1000);
    motor(0,100); //right wheel
 	motor(1,100); //left wheel
    msleep(2500);
    ao();
 	//backward
 	msleep(1000);
 	motor(0,-100); //right wheel
 	motor(1,-100); //left wheel
 	msleep(1050);
 	ao();
    //turn right
 	msleep(2000);
 	motor(1,100); //right wheel
 	motor(0,30); //left wheel
 	msleep(1000);
 	//forward for a bit
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(1000);
 	ao();
 	//turn left
 	msleep(2000);
 	motor(0,100); //left wheel
 	motor(1,46); //right wheel
 	msleep(3000);
 	ao();
 	//forward
 	msleep(2000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(2000);
 	ao();
	//turn left
 	msleep(2000);
 	motor(0,100); //left wheel
 	motor(1,10); //right wheel
 	msleep(1050);
 	ao();
 	//forward
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(1800);
 	ao();
 	//about to turn back
 	//turn left
 	msleep(1000);
 	motor(0,100); //left wheel
 	motor(1,30); //right wheel
 	msleep(2050);
 	ao();
 	msleep(1000);
 	set_servo_position(1,1543); //right servo
 	set_servo_position(0,856); //right servo
 	//forward a bit
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(1000);
 	ao();
 	set_servo_position(0,1155); //right wheel
 	//forward
 	msleep(1000);
 	motor(0,100); //right wheel
 	motor(1,100); //left wheel
 	msleep(4000);
 	ao();
 	msleep(1000);
 	set_servo_position(1,216); //right servo
 	disable_servos();
    printf("Hello World\n");
    return 0;
}
