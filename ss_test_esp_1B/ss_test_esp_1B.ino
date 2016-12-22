/* SoftwareSerial-esp8266 */

#include <SoftwareSerial.h>
SoftwareSerial mySerial(4, 5);

//
void setup() {
  Serial.begin( 9600 );
  mySerial.begin( 9600 );
  Serial.println("#Start-setup-ssEsp");

}

String mBuff="";
//
void loop() {
  while( mySerial.available() ){
    char c= mySerial.read();
    mBuff.concat(c );
  }
  if(  mBuff.length() >= 8 ){
      Serial.print("mBuff=");
      Serial.println( mBuff );
    mBuff="";
  }
}
