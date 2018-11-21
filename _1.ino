#include <SoftwareSerial.h>//
 SoftwareSerial mySerial(0, 1); // 1-RX, 0-TX - 

int ch1 =  A0;
int ch2 =  A1;
int ch3 =  A2;
int ch4 =  A3;


 void setup()
 {
 mySerial.begin(9600);

 
 pinMode(ch1, OUTPUT);
 pinMode(ch2, OUTPUT);
 pinMode(ch3, OUTPUT);
 pinMode(ch4, OUTPUT);



 }

 void loop()
{

 char caracter = mySerial.read();

 //--------------------------------ch1---------------------
 if(caracter == 'A')
{
 digitalWrite(ch1,HIGH);
 

}

if(caracter == 'a')
{
 digitalWrite(ch1,LOW);
 
}
//---------------------------------ch1----------------------
//---------------------------------ch2---------------------
 if(caracter == 'B')
{
 digitalWrite(ch2,HIGH);

}

if(caracter == 'b')
{
 digitalWrite(ch2,LOW);
 
}
//---------------------------------ch2----------------------
//---------------------------------ch3---------------------
 if(caracter == 'C')
{
 digitalWrite(ch3,HIGH);

}

if(caracter == 'c')
{
 digitalWrite(ch3,LOW);
  
}
//---------------------------------ch3----------------------
//---------------------------------ch4---------------------
 if(caracter == 'D')
{
 digitalWrite(ch4,HIGH);
 
}

if(caracter == 'd')
{
 digitalWrite(ch4,LOW);
  
}
//---------------------------------ch4----------------------


 delay(10);
}
