#include "Lifter.h"

Lifter::Lifter(){

};

void Lifter::manualUp(bool upButton){
    if(upButton && topSlow.Get() && topStop.Get()){
        lifterMotor.Set(0.2);
    }
    else if(topSlow.Get()){
        lifterMotor.Set(0.1);
    }
    else{
        lifterMotor.Set(0.0);
    }
};

void Lifter::manualDown(bool downButton){
    if(downButton && bottomSlow.Get() && bottomStop.Get()){
        lifterMotor.Set(-0.2);
    }
    else if(bottomSlow.Get()){
        lifterMotor.Set(-0.1);
    }
    else{
        lifterMotor.Set(0.0);
    }
};