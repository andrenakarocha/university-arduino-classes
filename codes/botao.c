//Código para printar texto ao apertar um botão

//Definir Botão
void setup()
{
  pinMode(2, INPUT); //Definir porta
  Serial.begin(9600); //Mandar informações
}
 
//Loop
void loop()
{
  if (digitalRead(2) == HIGH) //Quando botão pressionado
  {
     Serial.println("Botao pressionado!"); //Print
  }
}

