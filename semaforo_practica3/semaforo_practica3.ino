//variable define tiempo 
int stop=25;
void setup()
{
  //pint 12 led verde
  pinMode(12,OUTPUT);
  //pint 9 led amarillo
  pinMode(11,OUTPUT);
  //pint 6 led rojo
  pinMode(10,OUTPUT);
}

void loop()
{
  //hacemos un recorrido en bucle for para encender suavemente
  //hasta llegar hasta su maxima iluminacion el led verde, amarillo y rojo
  //como es de 5 voltios, el tamaño que tendra disponible es de 
  //0-255
  
  //iniciamos con el led verde
  for(int i=0;i<255;i++){
    analogWrite(12,i);
    delay(stop);
  }
  //led verde apagar
  analogWrite(12,LOW);
  //led amarillo encender
  for(int i=0;i<255;i++){
    analogWrite(11,i);
    delay(stop);
  }
  //led amarillo apagado
  analogWrite(11,LOW);
  //led rojo encender
  for(int i=0;i<255;i++){
    analogWrite(10,i);
    delay(stop);
  }
  //led rojo apagar
  analogWrite(10,LOW);
  //led amarillo encender
  for(int i=0;i<255;i++){
    analogWrite(11,i);
    delay(stop);
  }
  //led amarillo apagado
  analogWrite(11,LOW);
  
  //esto seguira de manera repetitiva
}

