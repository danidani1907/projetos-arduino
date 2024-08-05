void setup() {
  //progama que envia sinal para a saida 7 para ligar ou desligar
pinMode (8,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // pisca o led:
  digitalWrite(8,HIGH);//liga
  delay(1000);//1 seg de delay
  digitalWrite(6,HIGH);//liga
  delay(1000);//1 seg de delay
  digitalWrite(6,LOW);//desliga
  delay(1000);//1 seg de delay
  digitalWrite(8,LOW);//desliga
  delay(1000);//1 seg de delay
}
