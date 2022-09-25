//variable define tiempo para stop1 de 5 segundos
int stop1=5000;
//variable define tiempo para stop1 de 3 segundos
int stop2=3000;
void setup()
{
  //primer semaforo
  
  //pint 12 led verde
  pinMode(12,OUTPUT);
  //pint 9 led amarillo
  pinMode(9,OUTPUT);
  //pint 6 led rojo
  pinMode(6,OUTPUT);
  //pint 12 led verde
  
  //segundo semaforo
  
  //pin 11 led rojo
  pinMode(11,OUTPUT);
  //pint 8 led amarillo
  pinMode(8,OUTPUT);
  //pint 7 led verde
  pinMode(7,OUTPUT);
}

void loop()
{
  //encender led verde
  digitalWrite(12,HIGH);
  //encender led rojo
  digitalWrite(11,HIGH);
  //dejamos que quede encendido por 5 s que el el timpode la variable stop1
  delay(stop1);
  //apagamos el led verde
  digitalWrite(12,LOW);
  //apagar led rojo
  digitalWrite(11,LOW);
  //encendemos el led amarillo
  digitalWrite(9,HIGH);
  //encender led amarillo
  digitalWrite(8,HIGH);
  //le damos un tiempo de encendido de 3 s
  delay(stop2);
  //apagamos el led amarillo
  digitalWrite(9,LOW);
  //apagamos el led amarillo
  digitalWrite(8,LOW);
  //encendemos el led rojo
  digitalWrite(6,HIGH);
  //encender led verde
  digitalWrite(7,HIGH);
  //le damos el tiempo de espera encendido del stop1
  delay(stop1);
  //apagamos el led rojo
  digitalWrite(6,LOW);
  //apagamos led verde
  digitalWrite(7,LOW);
  //encendemos nuevamente el led amarillo
  digitalWrite(9,HIGH);
  //encendemos led amarillo
  digitalWrite(8,HIGH);
  //le damos un tiempo de espera de encendido
  delay(stop2);
  //apagamos el led amarillo
  digitalWrite(9,LOW);
  //apagamos led amarillo
  digitalWrite(8,LOW);
  //y dejamos asi para que se repita
}
