#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <time.h>
#include<stdio.h>

time_t rawtime;
struct tm * timeinfo;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Serial.println("\n\nHello World");

  Serial.println("\n\nJorge Isaza - 000811486");
  
  Serial.println("\nFlash Chip ID: \t");
  Serial.println(ESP.getFlashChipId());

  Serial.println("\nChip ID: \t");
  Serial.println(ESP.getChipId());

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  Serial.println("\nCurrent Time: \t");
  Serial.println(asctime (timeinfo));

}

void loop() {
  // put your main code here, to run repeatedly:

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  Serial.println("\nCurrent Time: \t");
  Serial.println(asctime (timeinfo));

   delay(2000);

}