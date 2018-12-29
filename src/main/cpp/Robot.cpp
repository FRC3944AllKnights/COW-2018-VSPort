/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <IterativeRobot.h>
#include <Joystick.h>
#include "Drive.h"
#include "NotServo.h"
#include "Lifter.h"

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
    Servo.originPos();
  }

  void TeleopPeriodic() override {
    /* Use the joystick X axis for lateral movement, Y axis for forward
     * movement, and Z axis for rotation.
     */
    COWDrive.mechanum(m_stick.GetX(), m_stick.GetY(), m_stick.GetZ(), m_stick.GetThrottle());
    Servo.servoRotate(m_stick.GetTrigger());
  }

 private:
 //this is where to change variables
  static constexpr int kJoystickChannel = 0;
  Drive COWDrive;
  NotServo Servo; //names the class notServo - servo, also creates an instance of servo
  frc::Joystick m_stick{kJoystickChannel};
};

START_ROBOT_CLASS(Robot)
