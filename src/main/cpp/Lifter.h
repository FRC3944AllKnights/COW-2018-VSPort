#ifndef LIFTER_H
#define LIFTER_H

#include <Talon.h>
#include <DigitalInput.h>

class Lifter{
    public:
        Lifter();
        void manualUp(bool upButton);
        void manualDown(bool downButton);

    private:
        frc::Talon lifterMotor{4};
        frc::DigitalInput bottomSlow{4};
        frc::DigitalInput topSlow{3};
        frc::DigitalInput topStop{2};
        frc::DigitalInput bottomStop{1};
};

#endif