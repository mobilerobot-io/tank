// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

AF_DCMotor m1(1);
// AF_DCMotor m2(2);

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

void back_and_forth_loop() {

	Serial.print("Start in ");
	Serial.println(direction);

  // turn on motor
	forward(&m1, 300);
	//forward(&m2, 300);

	delay(2000);

  // turn on motor
	//forward(&m2, 300);
	reverse(&m1, 300);
	delay(2000);
	
  m1.run(RELEASE);
  //m2.run(RELEASE);

	Serial.println("released  ... ");
}

void spin_right_loop() {
	Serial.println("Spinning wheel goes spinning around");
	forward(&m1, 300);
	//forward(&m2, 300);

	delay(2000);
	//m2.run(RELEASE);
	m1.run(RELEASE);
}

void loop() {
	//back_and_forth_loop();
	spin_right_loop();
}


