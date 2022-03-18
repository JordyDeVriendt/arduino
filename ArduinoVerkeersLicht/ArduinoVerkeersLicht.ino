

void setup()
{
  // Stel pin 8 t/m 10 in als uitvoer
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  // Zet alle uitvoer op LOW zodat de LED's niet branden
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void loop()
{
  // Rood // groen andere kant
  digitalWrite(8, HIGH); //rood aan
  digitalWrite(13, HIGH); //groena aan
  delay(5000);
  digitalWrite(13, LOW); //groana af
  digitalWrite(12, HIGH); //oranjea aan
  delay(1000);
  digitalWrite(8, LOW); //rood af

  // Groen
  digitalWrite(12, LOW); //oranjea af
  digitalWrite(11, HIGH); //Rooda aan
  delay(1000);
  digitalWrite(10, HIGH); //groen aan
  delay(5000);
  digitalWrite(10, LOW); //groen af

  // Oranje / Geel
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(1000);
 
}
