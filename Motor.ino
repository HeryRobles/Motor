// C++ code
//
int reversa=6;
int adelante=5;

void setup()
{
  pinMode(reversa,OUTPUT);
  pinMode(adelante,OUTPUT);
}

void loop()
{
  digitalWrite(reversa, 1);
  digitalWrite(adelante,0);
  delay(4000);
  digitalWrite(reversa, 0);
  digitalWrite(adelante,1);
  delay(4000);
  
}