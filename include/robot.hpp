/**
 * MIT License
 *
 * Copyright (c) 2021 Maaruf Vazifdar, Maitreya Kulkarni, Pratik Bhujnbal
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the  
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
 * DEALINGS IN THE SOFTWARE. 
 * 
 * @file controller.cpp
 * @author Maaruf Vazifdar
 * @author Maitreya Kulkarni
 * @author Pratik Bhujnbal
 * @brief Implementation file for ackermann controller goal attributes
 *        and its members.
 * @version 1.1
 * @date 10/15/2021
 * @copyright  Copyright (c) 2021
 * 
 */

#pragma once
/**
 * @brief Class to hold robot's attributes and members.
 */
class Robot {
 public:
  /**
   * @brief Constructor for class Robot
   * @param wheel_base double - Robot's wheel base (in meters)
   * @param track_width double - Robot's track width (in meters)
   * @param wheel_radius double - Robot's wheel radius (in meters)
   * @param left_wheel_vel double - Robot's left drive wheel speed (in 
   *        rotations/second)
   * @param right_wheel_vel double - Robot's right drive wheel speed (in 
   *        rotations/second)
   * @param left_wheel_ang double - Robot's left steering wheel angle (in 
   *        radians/second)
   * @param right_wheel_ang double - Robot's right steering wheel angle (in 
   *        radians/second)
   * @param com_offset double - Offset of robot's centre of mass from centre 
   *        of rear axle (in meters)
   * @param max_steer_angle double - Robot's max steering angle
   */
  Robot(double wheel_base, double track_width, double wheel_radius,
    double left_wheel_vel, double right_wheel_vel,
    double left_wheel_ang, double right_wheel_ang,
    double com_offset, double max_steer_angle)
      : _wheel_base(wheel_base),
        _track_width(track_width),
        _wheel_radius(wheel_radius),
        _left_wheel_vel(left_wheel_vel),
        _right_wheel_vel(right_wheel_vel),
        _left_wheel_ang(left_wheel_ang),
        _right_wheel_ang(right_wheel_ang),
        _com_offset(com_offset),
        _max_steer_angle(max_steer_angle) {}

  /**
   * @brief Destructor for class Robot
   */
  ~Robot() {}

  /**
   * @brief Get wheelbase of robot. (in meters)
   * @param void
   * @return double - Robot's wheel base
   */
  double getWheelBase();

  /**
   * @brief Get track width of robot. (in meters)
   * @param void
   * @return double - Robot's track width
   */
  double getTrackWidth();

  /**
   * @brief Get wheel radius of robot. (in meters)
   * @param void
   * @return double - Robot's wheel radius
   */
  double getWheelRadius();

  /**
   * @brief Get left drive wheel speed of robot. (in rotations/second)
   * @param void
   * @return double - Robot's left drive wheel speed
   */
  double getLeftWheelVel();

  /**
   * @brief Get right drive wheel speed of robot. (in rotations/second)
   * @param void
   * @return double - Robot's right drive wheel speed
   */
  double getRightWheelVel();

  /**
   * @brief Get left steering wheel angle of robot. (in radians)
   * @param void
   * @return double - Robot's left steering wheel angle
   */
  double getLeftWheelAng();

  /**
   * @brief Get right steering wheel angle of robot. (in radians)
   * @param void
   * @return double - Robot's right steering wheel angle
   */
  double getRightWheelAng();

  /**
   * @brief Get Offset of robot's centre of mass from centre 
   *        of rear axle. (in meters)
   * @param void
   * @return double - Offset of robot's centre of mass from centre 
   *        of rear axle
   */
  double getComOffset();

  /**
   * @brief Get maximum steering angle of robot. (in radians)
   * @param void
   * @return double - Robot's max steering angle
   */
  double getMaxSteerAngle();

  /**
   * @brief Set left drive wheel speed of robot.
   * @param double - left drive wheel speed
   * @return void
   */
  void setLeftWheelVel(double);

  /**
   * @brief Set right drive wheel speed of robot.
   * @param double - right drive wheel speed
   * @return void
   */
  void setRightWheelVel(double);

  /**
   * @brief Set left drive wheel angle of robot. (in rotations/second)
   * @param double - left drive wheel angle
   * @return void
   */
  void setLeftWheelAng(double);

  /**
   * @brief Set right drive wheel angle of robot. (in rotations/second)
   * @param double - right drive wheel angle
   * @return void
   */
  void setRightWheelAng(double);

 private:
  /**
   * Class local variables.
   */
  double _wheel_base, _track_width, _wheel_radius,
    _left_wheel_vel, _right_wheel_vel, _left_wheel_ang,
    _right_wheel_ang, _com_offset, _max_steer_angle;
};
