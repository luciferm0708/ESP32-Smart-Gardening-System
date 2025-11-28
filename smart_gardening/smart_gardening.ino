#include "ThingSpeak.h"
#include <WiFi.h>

#define RELAY 23   // GPIO23 connected to relay IN PIN
#define MOIST 34   // GPIO32 connected to Capacitive Soil Moisture AOUT PIN
#define CHANNEL_ID 3038494 //ThingSpeak Channel ID
#define CHANNEL_API_KEY "8EVBSK1ZISXDOWUP" //ThingSpeak Write API KEY

WiFiClient client;
const char* ssid = "Lucifer";
const char* password = "696969420"; 
void setup() {
  Serial.begin(115200);
  pinMode(RELAY, OUTPUT);      // set relay pin as output
  digitalWrite(RELAY, LOW);    //active low

  //WiFI Begin
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  //WiFi End

  //ThingSpeak Begin
  ThingSpeak.begin(client);
  //ThingSpeak End

}

void loop() {
  int dry = 2950;
  int wet = 1465;
  int m_val = analogRead(MOIST);
  if (m_val >= dry) {
    digitalWrite(RELAY, LOW);
    Serial.print("MOISTURE: ");
    Serial.println(m_val);
    delay(1000);
  } else {
    digitalWrite(RELAY, HIGH);
    Serial.print("MOISTURE: ");
    Serial.println(m_val);
    delay(1000);
  }

  ThingSpeak.setField(1, m_val);
  int httpCode = ThingSpeak.writeFields(CHANNEL_ID, CHANNEL_API_KEY);
  if (httpCode == 200) {
    Serial.println("Channel updated");

  } else {
    Serial.print("ThingSpeak error ");
    Serial.println(httpCode);          // prints negative or 4xx/5xx code
  }
  delay(14000);
}
