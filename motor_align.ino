#include <Servo.h>

Servo servo_arr[10];

void setup() {

  for (int i = 0; i < 10; i++){
    servo_arr[i].attach(2 + i);
    servo_arr[i].write(10);
  }
}

void loop() {
}
