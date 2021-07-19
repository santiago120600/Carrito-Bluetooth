int motor1pin1 = 4;
int motor1pin2 = 5;

int motor2pin1 = 6;
int motor2pin2 = 7;


void setup() 
{
  Serial.begin(9600);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
}

void loop() {
 if(Serial.available()>0)
   {     
      char data= Serial.read();
      Serial.println(data);
      if(data=='w')
      {
        parar();
        adelante();
      }
      else if(data=='a')
      {
        parar();
        izquierda();
      } 
      else if(data=='s')
      {
         parar();
         reversa();
      } 
      else if(data=='d')
      {
        parar();
        derecha();
      } 
       else if(data=='p')
      {
        parar();
      } 
      else
      {
         Serial.println(data);
      }  
   }
   delay(50);

  /*
  derecha();
  parar();
  izquierda();
  parar();
  atrasDer();
  parar();
  atrasIzq();
  parar();
  reversa();
  parar();
  adelante();
  parar();
  */
}

void parar()
{
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
  }

void reversa(){
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(1000);
}

void adelante()
{
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(1000);
}

void derecha()
{
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(1000);
}

void atrasDer()
{
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(1000);
}
  
void izquierda()
{
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  delay(1000);
}

void atrasIzq()
{
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(1000);
}
