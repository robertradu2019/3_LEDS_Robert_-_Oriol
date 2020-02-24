/**********************************************************************************
**                                                                               **
**                              Array de 3 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
 int n = 0;
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int buttonPin = 4;     // donar nom al pin 2 de l’Arduino
const int buttonState = 0 ;
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
   
}
//********** Loop *****************************************************************
void loop()
{
  Serial.println( digitalRead (buttonPin));
  if (  digitalRead(buttonPin) == LOW )  
  {

   n = n+1;
   if (n == 7)
   {
     n = 0;
   }
  }
         
   if (n == 1)
   {
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5  1
    digitalWrite(led1, LOW);    // posar a 5V el pin 6
    digitalWrite(led2, LOW);    // posar a 5V el pin 7
    delay(500);                  // es queden leds 500ms encesos
   }
   if (n == 2)
     {
  digitalWrite(led0, LOW);     // posar a 0V el pin 5  2
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7

 
  delay(500);
    }// es queden leds 500ms apagats

   if (n == 3)
     {
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5  3
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7

 
  delay(500);                  // es queden leds 500ms apagats
  }
   if (n == 4) 
    { 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5  4
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7

 
  delay(500);                  // es queden leds 500ms apagats
     }
   if (n == 5) 
    {
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5  5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7

 
  delay(500);                  // es queden leds 500ms apagats
      }
   if (n == 6)
    {
  digitalWrite(led0, LOW);     // posar a 0V el pin 5  6
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7

  
  delay(500);                  // es queden leds 500ms apagats
   }

 if(n == 7) 
 {
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5   7
  digitalWrite(led1, HIGH);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7

 
  delay(500);                  // es queden leds 500ms apagats         
   }
 
 

 
 
}

         

//********** Funcions *************************************************************
