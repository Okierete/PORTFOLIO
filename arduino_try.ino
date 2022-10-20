 #include "Waveforms.h"
 char incomingChar=NULL

volatile int wave0 = 3;

 void setup()  {
     Serial.begin(115200);
     pinMode(2, OUTPUT);
     pinMode(3, OUTPUT);
     pinMode(4, OUTPUT);
     pinMode(5, OUTPUT);
     pinMode(6, OUTPUT);
     pinMode(7, OUTPUT);
     
 }

 void loop()  
  delay(1000);
      if (Serial.available() > 0)  {
      incomingChar = Serial.read();
      if(incomingChar>='A' && incomingChar<='Z')  {
        incomingChar=incomingChar+32;  
      }
    }

    switch (incomingChar)  { 
      case 'a':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'b':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'c':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'd':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
      case 'e':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'f':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'g':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'h':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'i':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'j':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'k':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'l':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'm':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
      case 'n':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'o':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'p':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 'q':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'r':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 's':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        break;
      case 't':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
        break;
      case 'u':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, HIGH);
        break;
      case 'v':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, HIGH);
        break;
      case 'w':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, HIGH);
        break;
      case 'x':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, HIGH);
        break;
      case 'y':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, HIGH);
        break;
      case 'z':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, HIGH);
        break;
      case '0':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
      case '1':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
      case '2':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
      case '3':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
      case '4':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
      case '5':
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
      case '6':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
      case '7':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
      case '8':
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH); 
        digitalWrite(7, LOW);
      case '9':
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
       
      default:
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW); 
        digitalWrite(7, LOW);
        
  If 2 = 1 then
    digitalWrite(2, waveformsTable[wave0][i]);
  
  else 2=0 digital(2, LOW)
  If 3 = 1 then
    digitalWrite(3, waveformsTable[wave0][i]);
  
  else 3=0 digital(3, LOW)
  If 4 = 1 then
    digitalWrite(4, waveformsTable[wave0][i]);
  
  else 4=0 digital(4, LOW)  

  If 5 = 1 then
    digitalWrite(5, waveformsTable[wave0][i]);
  
  else 5=0 digital(5, LOW)  
  
  If 6 = 1 then
    digitalWrite(6, waveformsTable[wave0][i]);
  
  else 6=0 digital(6, LOW)

  If 7 = 1 then
    digitalWrite(7, waveformsTable[wave0][i]);
  
  else 7=0 digital(7, LOW)  
 
}
 }
