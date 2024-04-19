// Sensor de presença

// Define portas
const int ledR = 13;
const int presenca = 7;

//Define output ou input
void setup(){
  pinMode(ledR, OUTPUT);
  pinMode(presenca, INPUT);
  Serial.begin(9600);
}

void loop(){
  byte movimento = digitalRead(presenca); //verifica presença
  Serial.println(movimento); //printa a verificação
  if(movimento) {
        delay(500);
        digitalWrite(ledR, HIGH);
        delay(500);
    	digitalWrite(ledR, LOW);
  }
  else {   
      digitalWrite(ledR, LOW);
  }
}
