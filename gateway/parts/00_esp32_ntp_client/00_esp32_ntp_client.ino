// Automatic ESP module type select
#ifdef ESP32
#include <WiFi.h>
//#include <AsyncTCP.h>

#elif defined(ESP8266)
#include <ESP8266WiFi.h>
//#include <ESPAsyncTCP.h>

#endif

#include <NTPClient.h>
#include <WiFiUdp.h>
#include "config.h"
#include "readme.h"

WiFiUDP ntpUDP;  
NTPClient timeClient(ntpUDP, ntpServerAddress, timeOffset, ntpUpdateInterval);

void setup(){
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }

  timeClient.begin();
}

void loop() {
  timeClient.update();

  Serial.println(timeClient.getEpochTime());

  delay(1000);
}
