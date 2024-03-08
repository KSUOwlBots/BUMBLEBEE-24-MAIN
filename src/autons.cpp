#include "main.h"
const int DRIVE_SPEED = 110;  
const int TURN_SPEED = 90;
const int SWING_SPEED = 90;

void default_constants() {
  chassis.pid_heading_constants_set(3, 0, 20);
  chassis.pid_drive_constants_set(10, 0, 100);
  chassis.pid_turn_constants_set(3, 0, 20);
  chassis.pid_swing_constants_set(5, 0, 30);

  chassis.pid_turn_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_swing_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_drive_exit_condition_set(300_ms, 1_in, 500_ms, 3_in, 750_ms, 750_ms);

  chassis.slew_drive_constants_set(7_in, 80);
}

void bumblebeeAuto()
{

pros::delay(20000);
//drives  


//turns
chassis.pid_turn_set(90_deg, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(130_in, 110, true);
chassis.pid_wait();

chassis.pid_turn_set(5_deg, 70, true);
chassis.pid_wait();

intake.move_voltage((110 * 12000) / 127);

chassis.pid_drive_set(70_in, 50, true);
chassis.pid_wait();

chassis.pid_drive_set(-70_in, 50, true);
chassis.pid_wait();

chassis.pid_turn_set(90_deg, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(45_in, 50, true);
chassis.pid_wait();

intake.move_voltage((-110 * 12000) / 127);

chassis.pid_drive_set(17_in, 110, true);
chassis.pid_wait();

chassis.pid_drive_set(-15_in, 110, true);
chassis.pid_wait();

chassis.pid_turn_set(0_deg, 70, true);
chassis.pid_wait();


chassis.pid_drive_set(80_in, 50, true);
chassis.pid_wait();

chassis.pid_turn_set(90_deg, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(25_in, 110, true);
chassis.pid_wait();
















/*
picks up triball with intake
goes back
turns
drives into bar so it goes over

intake.move_voltage((110 * 12000) / 127);

chassis.pid_drive_set(20_in, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(-20_in, 110, true);
chassis.pid_wait();

chassis.pid_turn_set(-90_deg, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(50_in, 110, true);
chassis.pid_wait();

intake.move_voltage((-110 * 12000) / 127);

chassis.pid_drive_set(30_in, 110, true);
chassis.pid_wait();

chassis.pid_drive_set(-40_in, 110, true);
chassis.pid_wait();

chassis.pid_turn_set(90_deg, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(30_in, 110, true);
chassis.pid_wait();

chassis.pid_turn_set(-90_deg, 70, true);
chassis.pid_wait();

chassis.pid_drive_set(50_in, 110, true);
chassis.pid_wait();

intake.move_voltage((-110 * 12000) / 127);






wings out
push them under goal

then full throttle to get back over to the side before driver control


*/

  
}