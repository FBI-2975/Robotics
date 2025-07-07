#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(11); //the number is the port it is on
inline pros::Motor motor2(12);
//inline pros::adi::DigitalIn limit_switch('A');