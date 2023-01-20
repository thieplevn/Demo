#define PWM_CH_R          12
#define PWM_CH_G          13
#define PWM_CH_B          14
#define PWM_CH_W          0
#define PWM_CH_UV         2

#define TOUCH_PAD         5
#define BTN               4

uint8_t pwm = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(PWM_CH_R, OUTPUT);
  pinMode(PWM_CH_G, OUTPUT);
  pinMode(PWM_CH_B, OUTPUT);
  pinMode(PWM_CH_W, OUTPUT);
  pinMode(PWM_CH_UV, OUTPUT);

  pinMode(TOUCH_PAD, INPUT);
  pinMode(BTN, INPUT);
}

void loop() {
  
  if(digitalRead(TOUCH_PAD) == 1)
  {
    delay(15);
    if(digitalRead(TOUCH_PAD) == 1)
    {
      while(digitalRead(TOUCH_PAD) == 1);
//      digitalWrite(PWM_CH_R, (digitalRead(PWM_CH_R) ? LOW : HIGH)); 
//      digitalWrite(PWM_CH_G, (digitalRead(PWM_CH_G) ? LOW : HIGH)); 
//      digitalWrite(PWM_CH_B, (digitalRead(PWM_CH_B) ? LOW : HIGH)); 
//      digitalWrite(PWM_CH_W, (digitalRead(PWM_CH_W) ? LOW : HIGH)); 
//      digitalWrite(PWM_CH_UV, (digitalRead(PWM_CH_UV) ? LOW : HIGH)); 
        pwm = pwm + 20;
        if(pwm >= 255) pwm = 0;
        analogWrite(PWM_CH_R, pwm);
        analogWrite(PWM_CH_G, pwm);
        analogWrite(PWM_CH_B, pwm);
//        analogWrite(PWM_CH_W, pwm);
//        analogWrite(PWM_CH_UV, pwm);
    }
  }

}
