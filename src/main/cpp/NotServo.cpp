#include "NotServo.h"

NotServo::NotServo(){

}; //consturcter - lets the class be called in this file
    
void NotServo::servoRotate(bool lifterLock){
    if(lifterLock){
        servo.Set(0.4); // sets servo to 0 radians if true
    }
    else{
       servo.Set(0); // sets servo to 170 degrees if false 
    }

};

void NotServo::originPos(){

    servoRotate(0);

}; // Notservo is the class that the function is in