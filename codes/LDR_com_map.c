//Usando a função MAP para ajustar o valor do sensor de iluminidade

int sensorPin = A0;    //selecione o pino de entrada ao potenciômetro
int val;

void setup() {
 Serial.begin(9600);
}

void loop() {
    val = analogRead(sensorPin);    //ler o valor do potenciômetro
    int luz = map(val, 0 , 1023, 0, 100);
    Serial.println(luz);            //envia valor para o pc
    delay(1000);                    //aguarda 1 segundo
}
