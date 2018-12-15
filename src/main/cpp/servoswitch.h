#include <servo.h>

class servoswitch{
public:
    //consturcter - when called it builds the class, creates instance
    servoswitch();

    void servoRotato(bool lifterLock); // lifterlock variable for turning it on or off 
    void originPos();

private:
    frc::Servo servo{9};
};

