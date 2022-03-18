int red1 = 13;
int red2 = 12;
int red3 = 11;
int red4 = 10;
int geel = 9;
int groen = 8;

void setup() {
    pinMode(red1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(red3, OUTPUT);
    pinMode(red4, OUTPUT);
    pinMode(geel, OUTPUT);
    pinMode(groen, OUTPUT);
  }

void loop() {
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);
  digitalWrite(red4, HIGH);
  delay(1000);

  digitalWrite(red2, LOW);
  delay(1000);

  digitalWrite(red3, LOW);
  delay(1000);

  digitalWrite(red4, LOW);
  delay(1000);

  digitalWrite(red1, LOW);
  delay(1000);

  digitalWrite(groen, HIGH);
  delay(2000);
  
  digitalWrite(groen, LOW);
  delay(500);

  digitalWrite(geel, HIGH);
  delay(500);

  digitalWrite(geel, LOW);
  delay(500);
}
