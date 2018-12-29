#include "Lifter.h"

Lifter::Lifter(){

};

void Lifter::manualUp(bool upButton){
    if(upButton && topSlow.Get() && topStop.Get()){
        lifterMotor.Set(-0.3);
    }
    else if(!topStop.Get() && upButton){
        lifterMotor.Set(-0.2);
    }
    else{
        lifterMotor.Set(0.0);
    }
};

void Lifter::manualDown(bool downButton){
    if(downButton && bottomSlow.Get() && bottomStop.Get()){
        lifterMotor.Set(0.4);
    }
    else if(!bottomStop.Get() && downButton){
        lifterMotor.Set(0.3);
    }
    else{
        lifterMotor.Set(0.0);
    }
};