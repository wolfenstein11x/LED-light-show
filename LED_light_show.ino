void setup()
{
  pinMode(13, OUTPUT);
}

void countdown(){
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000); 
}

void flash(int flashes){
  for (int i=0; i < flashes; i++){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(300);
  }
  delay(1000);
}

void snake(int laps){
  for (int i=0; i < laps; i++){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(200);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(200);
  }
}

void loop()
{
  countdown();
  while (true){
    flash(3);
    snake(5);
  }
}
