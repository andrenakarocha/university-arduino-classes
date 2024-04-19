const int trigger = 4; 
const int echo    = 5; 
const int ledG    = 9;
const int ledY    = 12;
const int ledR    = 13;
float distancia = 0;

void setup(){
    Serial.begin(9600);
    pinMode(trigger,OUTPUT);
    pinMode(echo,INPUT);
    pinMode(ledG,OUTPUT);
    pinMode(ledY,OUTPUT);
    pinMode(ledR,OUTPUT);
}

void loop(){
    digitalWrite(trigger,LOW);
    delayMicroseconds(5);        
    digitalWrite(trigger,HIGH);  
    delayMicroseconds(10);      
    digitalWrite(trigger,LOW); 
  
    distancia = pulseIn(echo,HIGH); //Ler distância      
    distancia = distancia/58; //Convertendo para centimetros
    Serial.print ("Distancia = ");
    Serial.print (distancia);         
    Serial.print (" cm");         
    Serial.write (10);            
    delay (200); 

    if (distancia <= 50 and distancia > 9) {
        apagarLeds();
        digitalWrite(ledG, HIGH);
        delay(1000);
    }

    if (distancia <= 150 and distancia > 50) {
        apagarLeds();
        digitalWrite(ledY, HIGH);
        delay(1000);
    }
  
    if (distancia <= 330 and distancia > 150) {
        apagarLeds();
        digitalWrite(ledR, HIGH);
        delay(1000);
    }
}                             

void apagarLeds () {
    digitalWrite(ledG, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
}


