#ifndef DRIVE_H
#define DRIVE_H

#include <Drive/MecanumDrive.h>
#include <Talon.h>

class Drive{
    public:
        Drive();
        void init();
        void mechanum(double x, double y, double z, double throttle);

    private:
        static constexpr int kFrontLeftChannel = 0;
        static constexpr int kRearLeftChannel = 1;
        static constexpr int kFrontRightChannel = 2;
        static constexpr int kRearRightChannel = 3;

        frc::Talon m_frontLeft{kFrontLeftChannel};
        frc::Talon m_rearLeft{kRearLeftChannel};
        frc::Talon m_frontRight{kFrontRightChannel};
        frc::Talon m_rearRight{kRearRightChannel};
        frc::MecanumDrive m_robotDrive{m_frontLeft, m_rearLeft, m_frontRight,
                                 m_rearRight};
};

#endif