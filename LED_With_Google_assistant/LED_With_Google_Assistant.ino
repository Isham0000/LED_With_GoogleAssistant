#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "1395433070:AAEPTklXsMKKSqPLaRF_XdbKWU4yTMWd8sY";
char ssid[] = "realme 5 Pro";
char pass[] = "11111111";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
