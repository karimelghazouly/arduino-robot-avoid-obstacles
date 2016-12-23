# arduino-robot-avoid-obstacles
arduino robot that avoid obstacles
Arduino Robot written with arduino C programming language it avoid obstacles by using the ultrasonic sensor to calculate distance
between it and objects in front of it when it comes to a specified range it changes it's direction to avoid crashing 
#How the ultra sonic sensor works
The ultra sonic sensor sends ultra sonic waves to the objects in front of it for a specified time (10 micro seconds in my robot)
this part of the sensor if called Trigger you change the time for sending the ultra sonic waves according to the range you want to calculate
after sending the ultra sonic waves when it hits and object it reflects to the sensor again receiving it with the echo part of the
sensor now you have the time it took to go back and forth so you divide it by 2 and you have the speed of sound which is constant
you can then calculate the distance between it and the object infront of it
