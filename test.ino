long number;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop() {
 number = random(20);
 Serial.println(number);
 delay(500);
}
 
