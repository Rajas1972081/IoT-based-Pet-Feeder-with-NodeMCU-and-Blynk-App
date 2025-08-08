#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

// Replace with your network credentials and Blynk token
char auth[] = "YourAuthTokenHere";
char ssid[] = "YourWiFiSSID";
char pass[] = "YourWiFiPassword";

Servo feederServo;
const int servoPin = D4;
const int buzzerPin = D5;

BlynkTimer timer;

void setup() {
  Serial.begin(115200);

  feederServo.attach(servoPin);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  Blynk.begin(auth, ssid, pass);

  feederServo.write(0);  // initial position
}

BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    beepBuzzer(3);
  }
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    feedPet();
  }
}

void beepBuzzer(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(300);
    digitalWrite(buzzerPin, LOW);
    delay(300);
  }
}

void feedPet() {
  feederServo.write(180);  // rotate to dispense food
  delay(2000);
  feederServo.write(0);    // return to start position
}

void loop() {
  Blynk.run();
  timer.run();
}
