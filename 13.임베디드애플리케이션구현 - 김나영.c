// C++ code
//

// 전역변수 선언
int PIN_LED = 7;
int PIN_LED8 = 8;
int PIN_TRIGER = 4;
int PIN_ECHO = 3;


void setup()
{
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_TRIGER, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  
  
  Serial.begin(9600);
}

void loop()
{
  
  int distance = 0;
  
  digitalWrite(PIN_TRIGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIGER, LOW);
  
  distance = pulseIn(PIN_ECHO, HIGH);
  int cm = distance / 57 ;
  
  // Serial.println(cm);
  
  if(cm > 100) {
    digitalWrite(PIN_LED, LOW);
    digitalWrite(PIN_LED8, LOW);
  } else if(cm <= 100 && cm > 70) {
    digitalWrite(PIN_LED8, HIGH);
    digitalWrite(PIN_LED, LOW);
  } else {
    digitalWrite(PIN_LED8, HIGH);
    digitalWrite(PIN_LED, HIGH);
  }
  
  
  
  
  
  
}