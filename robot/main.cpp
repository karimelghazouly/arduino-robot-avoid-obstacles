    int d;
    int t;
    void setup() {
      //setting pins for the H bridge for the motor
      pinMode(2,OUTPUT);
      pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);
      pinMode(5,OUTPUT);

      //setting trigger and echo for the ultrasonic sensor
      pinMode(9,OUTPUT);//trig
      pinMode(10,INPUT);//echo
      Serial.begin(9600);
    }
    void loop() {
        digitalWrite(9,HIGH);
        delayMicroseconds(10);
        digitalWrite(9,LOW);
        t=pulseIn(10,HIGH);
        d = (t/58.2);
        if(d<=30&&d>=0)
        {
            digitalWrite(2,LOW);
            digitalWrite(3,LOW);
            digitalWrite(4,HIGH);
            digitalWrite(5,LOW);
        }
        else
        {
            //the value of 180 because we had some problems with the wheels
            analogWrite(2,180);
            digitalWrite(3,LOW);
            digitalWrite(4,HIGH);
            digitalWrite(5,LOW);
        }
    }
