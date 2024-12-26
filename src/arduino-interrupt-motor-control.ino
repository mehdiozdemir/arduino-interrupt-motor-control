byte enB = 3;
byte in3 = 4;
byte in4 = 5;

byte btn = 2;

bool direction = true;

void setup()
{
  for(byte i=3; i<6; i++)
    pinMode(i, OUTPUT);
  
  pinMode(btn, INPUT);
  pinMode(A0, INPUT);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
  attachInterrupt(digitalPinToInterrupt(btn), btnPress, RISING);
}

void loop()
{
 int speed = map(analogRead(A0), 0, 1023, 0, 255);
  motorControl(speed);
}

void btnPress(){
direction = !direction;
 
}

void motorControl(int speed){
  analogWrite(enB, speed);
  
  if(direction){
  	digitalWrite(in3, HIGH);
  	digitalWrite(in4, LOW);
  }else{
    digitalWrite(in3, LOW);
  	digitalWrite(in4, HIGH);
  
  }
}