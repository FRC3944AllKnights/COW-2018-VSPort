/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <IterativeRobot.h>
#include <Joystick.h>
#include "servoswitch.cpp"
#include "Drive.h"

/**
 * This is a demo program showing how to use Mecanum control with the
 * MecanumDrive class.
 */
class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override {
    // Invert the left side motors. You may need to change or remove this to
    // match your robot.
    COWDrive.init();
  }
//test 123
  void TeleopPeriodic() override {
    /* Use the joystick X axis for lateral movement, Y axis for forward
     * movement, and Z axis for rotation.
     */
    COWDrive.mechanum(m_stick.GetX(), m_stick.GetY(), m_stick.GetZ());
    servoswitch.servoRotato(m_stick.GetTrigger);
  }

 private:
 //this is where to change variables
  servoswitch servoswitch;
  static constexpr int kJoystickChannel = 0;
  Drive COWDrive;
  frc::Joystick m_stick{kJoystickChannel};
};

START_ROBOT_CLASS(Robot)
