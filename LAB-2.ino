void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);

}
void loop() {
  //pulse output
  digitalWrite(2, LOW);
  delayMicroseconds(4);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  
  float t = pulseIn(4, HIGH);
  float t_cm = (t/1000000) *173 *100;
  

//  Serial.print(inches +inch);
  Serial.println(t_cm, 1);
  Serial.println();
  delay(100);
}
