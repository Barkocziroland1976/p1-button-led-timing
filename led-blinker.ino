/***********************************************
   Automotive HW and SW development in practice
   @date: 2019.09.21
   @author: Roland Barkóczi
   @email: roland.barkoczi@email.com
   @phone: 555-55555
   @file: pwm-1-led

   Requirements:
   - two LEDs need to flash with 1Hz with fading effect
   - Use PIN 10 as output

 ***********************************************/

#define LED1 12   //PIN 12 to drive the led
#define LED2 11   //PIN 10 to drive the led
#define DELAY 500 //50ms delay in each loop
#define MIN_PWM_VALUE 0 //minimum pwm value
#define MAX_PWM_VALUE 255 //max pwm value
/**
 * State of first LED
 */
int state = 0;  //

void setup() {
  pinMode(LED1, OUTPUT);    //Configuring the I/O port of the 1st LED as 'output'.
  pinMode(LED2, OUTPUT);    //Configuring the I/O port of the 2nd LED as 'output'.
}

void loop() {
  digitalWrite(LED1, state);   //Turning OFF the 1st LED.
  digitalWrite(LED2, !state);    //Turning ON the 2nd LED.
  delay(DELAY);         //Waiting 500 ms.
  state = !state;
}