// C++ code

void setup() {
 pinMode (12, OUTPUT); //led
 pinMode (11, OUTPUT); //botao
 pinMode (10, OUTPUT);
 pinMode (7, OUTPUT);
 pinMode (6, OUTPUT);

}
void loop() {
  int t1 = 4000;
  int t2 = 500;
   digitalWrite(10, HIGH);
  digitalWrite(7, HIGH); 
   delay(t1);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(t1);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  delay(t2);
    digitalWrite(6, LOW);
  delay(t2);
  digitalWrite(6, HIGH); 
   delay(t2);
    digitalWrite(6, LOW);
  delay(t2);
    digitalWrite(6, HIGH);
  delay(t2);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(t2);
  digitalWrite(12,LOW);
}
 
   
