# IoT-based-Pet-Feeder-with-NodeMCU-and-Blynk-App
This project is an IoT-based Pet Feeder that allows you to feed your pet remotely using the Blynk mobile app and a NodeMCU ESP8266 microcontroller. 

---

## 📌 Features
- Remote pet feeding via **Wi-Fi** using the **Blynk App**.
- Buzzer notification to alert the pet when food is ready.
- Motorized plate movement to dispense food.
- Real-time device control from anywhere in the world.
- Built with **NodeMCU ESP8266**, Arduino IDE, and IoT integration.

---

## 🛠️ Hardware Requirements
- NodeMCU ESP8266 (Wi-Fi-enabled microcontroller)
- Motor (or actuator) for plate movement
- Buzzer
- Power supply (5V)
- Connecting wires
- Breadboard or mounting setup

---

## 🔌 Circuit Connection
1. Connect **Buzzer** to a digital pin on NodeMCU.
2. The servo motor is powered via 5V and connected directly to the NodeMCU’s digital pin for control.
4. Ensure a stable Wi-Fi connection.

---

## 📲 Blynk App Setup
1. Download and install the **Blynk App**.
2. Create a new project and select **NodeMCU** as the device.
3. Add:
   - **Button widget** (to control feeding)
   - **Notification widget** (optional)
4. Link your Blynk Auth Token in the Arduino code.

---

## 📜 Arduino Code
See [`PetFeeder.ino`](PetFeeder.ino) for the full source code.

---

## 🌐 How to Find Your Wi-Fi SSID
- On your phone or PC, check the connected Wi-Fi network name.
- Use that name in the Arduino code:
  ```cpp
  char ssid[] = "YourWiFiSSID"; // Replace with your Wi-Fi name
  char pass[] = "YourWiFiPassword"; // Replace with your Wi-Fi password

