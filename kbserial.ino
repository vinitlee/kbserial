/* Simple USB Keyboard Example
   Teensy becomes a USB keyboard and types characters

   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

int count = 0;

float step = 0.1;

void setup() {
  // Serial.begin(9600);
  // delay(1000);
}

void loop() {
  // int incomingByte;
  // while (Serial.available() > 0) {
  //   incomingByte = Serial.read();
  //   float netscroll = 0;
  //   for (int i=0; i<8; i++) {
  //     if (((incomingByte >> i) & 1) != 0) {
  //       Mouse.scroll(1);
  //       netscroll += step;
  //     }
  //     else
  //     {
  //       Mouse.scroll(-1);
  //       netscroll -= step;
  //     }
  //   }
  //   Mouse.scroll(-netscroll);
  //   // Keyboard.print(incomingByte); 
  //   Serial.println(netscroll, DEC);
  // }
  // Joystick.button(1, 1);
  // delay(50);
  // Joystick.button(1, 0);
  // delay(50);
  usb_mouse_move(0,0,1);
  delay(1000);
  // int amount = 5;
  // int dl = 100;
  // int cross = 1;
  // Mouse.move(amount,cross*amount);
  // cross *= -1;
  // delay(dl);
  // Mouse.move(-amount,0);
  // delay(dl);
}