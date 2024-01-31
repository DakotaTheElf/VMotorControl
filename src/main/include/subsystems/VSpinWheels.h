// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/phoenix6/TalonFX.hpp>
#include <frc2/command/button/JoystickButton.h>

class VSpinWheels : public frc2::SubsystemBase {
 public:
  VSpinWheels();
  void SpinWheels();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  ctre::phoenix6::controls::VelocityVoltage velocityRequest = ctre::phoenix6::controls::VelocityVoltage{0_tps};
  units::angular_velocity::turns_per_second_t TPS;
  ctre::phoenix6::hardware::TalonFX motor{1};
};