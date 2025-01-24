// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// THIS FILE WAS AUTO-GENERATED BY ./wpilibNewCommands/generate_hids.py. DO NOT MODIFY

#pragma once
#include <frc/PS5Controller.h>

#include "frc2/command/button/Trigger.h"
#include "frc2/command/CommandScheduler.h"
#include "frc2/command/button/CommandGenericHID.h"

namespace frc2 {
/**
 * A version of {@link frc::PS5Controller} with {@link Trigger} factories for
 * command-based.
 *
 * @see frc::PS5Controller
 */
class CommandPS5Controller : public CommandGenericHID {
 public:
  /**
   * Construct an instance of a controller.
   *
   * @param port The port index on the Driver Station that the controller is
   * plugged into.
   */
  explicit CommandPS5Controller(int port);

  /**
   * Get the underlying GenericHID object.
   *
   * @return the wrapped GenericHID object
   */
  frc::PS5Controller& GetHID();

  /**
   * Constructs a Trigger instance around the square button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the square button's
   * digital signal attached to the given loop.
   */
  Trigger Square(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the cross button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the cross button's
   * digital signal attached to the given loop.
   */
  Trigger Cross(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the circle button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the circle button's
   * digital signal attached to the given loop.
   */
  Trigger Circle(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the triangle button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the triangle button's
   * digital signal attached to the given loop.
   */
  Trigger Triangle(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the left trigger 1 button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the left trigger 1 button's
   * digital signal attached to the given loop.
   */
  Trigger L1(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the right trigger 1 button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the right trigger 1 button's
   * digital signal attached to the given loop.
   */
  Trigger R1(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the left trigger 2 button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the left trigger 2 button's
   * digital signal attached to the given loop.
   */
  Trigger L2(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the right trigger 2 button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the right trigger 2 button's
   * digital signal attached to the given loop.
   */
  Trigger R2(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the create button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the create button's
   * digital signal attached to the given loop.
   */
  Trigger Create(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the options button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the options button's
   * digital signal attached to the given loop.
   */
  Trigger Options(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the L3 (left stick) button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the L3 (left stick) button's
   * digital signal attached to the given loop.
   */
  Trigger L3(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the R3 (right stick) button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the R3 (right stick) button's
   * digital signal attached to the given loop.
   */
  Trigger R3(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the PlayStation button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the PlayStation button's
   * digital signal attached to the given loop.
   */
  Trigger PS(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Constructs a Trigger instance around the touchpad button's
   * digital signal.
   *
   * @param loop the event loop instance to attach the event to. Defaults to the
   * CommandScheduler's default loop.
   * @return a Trigger instance representing the touchpad button's
   * digital signal attached to the given loop.
   */
  Trigger Touchpad(frc::EventLoop* loop = CommandScheduler::GetInstance()
                                                .GetDefaultButtonLoop()) const;

  /**
   * Get the X axis value of left side of the controller. Right is positive.
   *
   * @return The axis value.
   */
  double GetLeftX() const;

  /**
   * Get the Y axis value of left side of the controller. Back is positive.
   *
   * @return The axis value.
   */
  double GetLeftY() const;

  /**
   * Get the X axis value of right side of the controller. Right is positive.
   *
   * @return The axis value.
   */
  double GetRightX() const;

  /**
   * Get the Y axis value of right side of the controller. Back is positive.
   *
   * @return The axis value.
   */
  double GetRightY() const;

  /**
   * Get the left trigger 2 axis value of the controller. Note that this axis is bound
   * to the range of [0, 1] as opposed to the usual [-1, 1].
   *
   * @return The axis value.
   */
  double GetL2Axis() const;

  /**
   * Get the right trigger 2 axis value of the controller. Note that this axis is bound
   * to the range of [0, 1] as opposed to the usual [-1, 1].
   *
   * @return The axis value.
   */
  double GetR2Axis() const;

 private:
  frc::PS5Controller m_hid;
};
}  // namespace frc2
