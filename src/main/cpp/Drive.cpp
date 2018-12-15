#include "Drive.h"

Drive::Drive(){
    m_frontLeft.SetInverted(true);
    m_rearLeft.SetInverted(true);
    m_frontRight.SetInverted(true);
    m_rearRight.SetInverted(true);
};

void Drive::mechanum(double x, double y, double z){
    m_robotDrive.DriveCartesian(x, y, z);
};