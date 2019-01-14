// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

AF_DCMotor m1(1);
AF_DCMotor m2(2);

// The tank can only be going in one direction
int direction = FORWARD;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
	Serial.print("Get your motors running, out on the hiway ... \n");
}

int switch_direction(int dir) {
	// switch directions from previous iteration.  We do not care
	// which direction starts first, so BACKWARD is fine.
	dir = (direction == FORWARD) ? BACKWARD : FORWARD;
	return dir;
}

void forward(AF_DCMotor *m, int speed) {
	m->setSpeed(speed);
	m->run(FORWARD);
}

void reverse(AF_DCMotor *m, int speed) {
	m->setSpeed(speed);
	m->run(BACKWARD);
}

void loop() {

	m1.setSpeed(100);
	m2.setSpeed(200);
	m1.run(FORWARD);
	m2.run(FORWARD);

	delay(2000);
	m1.run(RELEASE);
	m2.run(RELEASE);
	//back_and_forth_loop();
	//spin_right_loop();
}


