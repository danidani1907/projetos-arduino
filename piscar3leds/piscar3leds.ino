//C++ code
//
void setup(){
  pinMode(13, OUTPUT);//led vermelho
  pinMode(12, OUTPUT);//led amarelo
  pinMode(11, OUTPUT);//led verde
}

void loop(){
  digitalWrite(11, HIGH);//nivel alto
  delay(3000); // temporizador
  digitalWrite(11, LOW);//nivel baixo
  digitalWrite(12, HIGH);
  delay(2000); 
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000); 
  digitalWrite(13, LOW);
}
