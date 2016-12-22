/* SoftwareSerial-Atmega328 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(5, 6); /* RX:D5, TX:D6 */

void setup() {
  Serial.begin( 9600 );
  mySerial.begin( 9600 );
  Serial.println("#Start-setup-SS");
}

void loop() {
//  if(mySerial.available())
//  Serial.write(mySerial.read());
   //d1
   char cD1[8+1];
   char cD2[8+1];   
   int iD1=12;
   int iD2=43;
   sprintf(cD1 , "d1%06d", iD1);
mySerial.print( cD1 );
Serial.print("cD1=");
Serial.println(cD1  );
    delay( 500);
    //d2
    sprintf(cD2 , "d2%06d", iD2);
//mySerial.print("#LOW#");
mySerial.print( cD2 );
Serial.print("cD2=");
Serial.println(cD2  );
    delay( 500);
}

