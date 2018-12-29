#ifndef NOTSERVO_H
#define NOTSERVO_H

#include <Servo.h>

class NotServo{


    
    public: 
        
        NotServo(); //constructor - when called it builds the class, creates instance 

        void servoRotate(bool lifterLock); //lifterlock variable for turning it on off
        void originPos();


    private:
        frc::Servo servo{9};// the 9 value is the socket roboRio
    



};

#endif
