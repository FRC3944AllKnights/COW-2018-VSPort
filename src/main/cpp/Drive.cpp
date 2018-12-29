#include "Drive.h"

Drive::Drive(){
};

void Drive::init(){
    m_frontLeft.SetInverted(true);
    m_rearLeft.SetInverted(true);
    m_frontRight.SetInverted(true);
    m_rearRight.SetInverted(true);
};

void Drive::mechanum(double x, double y, double z, double throttle){
    throttle = (throttle-1.0)/(-2.0);
    z = z/(-2.0)*throttle;
    x = x*(-1.0)*throttle;
    y = y*throttle;
    m_robotDrive.DriveCartesian(x, y, z);
};