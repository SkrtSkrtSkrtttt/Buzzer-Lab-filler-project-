// Naafiul 
// Buzzer Lab 
int passBuzzer = 12;
void setup() {
  
  pinMode(passBuzzer, OUTPUT);  //designates the active buzzer pin as output 
 
}
 
 
void loop() {
 
  
 
  sound(262,300,100);
 
  sound(262,300,100);
 
  sound(392,300,100);
 
  sound(392,300,100);
 
  sound(440,300,100);
 
  sound(440,300,100);
 
  sound(392,300,100);
 
  delay(400);
 
  sound(349,300,100);
 
  sound(349,300,100);
 
  sound(330,300,100);
 
  sound(330,300,100);
 
  sound(294,300,100);
 
  sound(294,300,100);
 
  sound(262,300,100);
 
  delay(1000);
 
}
 
 
void sound(int frequency, int playtime, int resttime)
 
{
 
  tone(passBuzzer, frequency);
 
  delay(playtime);                   //this is the tone "ON" time
 
  noTone(passBuzzer);
 
  delay(resttime);                   //this is the time between tones
 
}
