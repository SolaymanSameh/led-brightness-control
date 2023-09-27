const int led = 9;
const int bt1 = 10;
const int bt2 = 11;
const int on = HIGH;
const int off = LOW;

int lvl = 255;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  analogWrite(led, 255);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(lvl);
  if(digitalRead(bt1) == on)
  {
    delay(50);
    lvl -= 17;
    analogWrite(led, lvl);
  }
  while(lvl<0){lvl=0;}
  
  if(digitalRead(bt2) == on)
  {
    delay(50);
    lvl += 17;
    analogWrite(led, lvl);
  }
  while(lvl>255)(lvl=255);
}
