#include "Pusher.h"

Pusher::Pusher(){
};

void Pusher::manualPush(bool pushButton){
    if(pushButton && limitExtend.Get()){
        pusherMotor.Set(0.5);
    }
    else{
       pusherMotor.Set(0.0);
    }
};

void Pusher::manualRetract(bool retractButton){
    if(retractButton && limitRetract.Get()){
        pusherMotor.Set(-0.5);
    }
    else{
        pusherMotor.Set(0.0);
    }
};