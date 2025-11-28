# ESP32-Smart-Gardening-System
An automatic smart gardening system using ESP32, soil moisture sensor, relay module, and water pump to water plants automatically based on real-time soil moisture level—without any internet or IoT dependency.
# ESP32 Automatic Smart Gardening System 🌱

An automatic plant watering system using ESP32, soil moisture sensor, relay module, and a water pump. The system works completely offline and automatically irrigates plants based on real-time soil moisture condition.

---

## 📌 Project Overview

This project is designed to automate the watering process for plants without human involvement. The soil moisture sensor continuously checks the moisture level of the soil, and the ESP32 controls the water pump through a relay module based on a predefined threshold.

This system does NOT use:
- Internet
- WiFi
- Cloud
- Mobile App

It is a fully standalone embedded system.

---

## ⚙️ Hardware Components Used

- ESP32 Development Board  
- Soil Moisture Sensor  
- Relay Module  
- DC Water Pump  
- External Power Supply  
- Connecting Wires  
- Breadboard  

---

## 🛠️ Software Used

- Arduino IDE  
- ESP32 Board Package  
- Serial Monitor (for debugging only)

---

## 🔌 Working Principle

1. The soil moisture sensor detects the water content in the soil.
2. ESP32 reads the sensor value using its ADC pin.
3. If the moisture level goes below the preset threshold:
   - ESP32 activates the relay
   - The relay turns ON the water pump
4. Once sufficient moisture is detected:
   - ESP32 deactivates the relay
   - The water pump turns OFF automatically

This ensures fully automatic irrigation without manual control.

---

## ✅ Features

- Fully automatic plant watering  
- Standalone embedded system (no IoT)  
- Real-time soil moisture detection  
- Reduces water wastage  
- Low power consumption  
- Reliable and low-cost solution  

---

## 🧠 Applications

- Home Gardening  
- Rooftop Gardening  
- Indoor Plants  
- Greenhouse Irrigation  
- Small-Scale Agriculture  

---

## 🚀 How to Run the Project

1. Upload the code to the ESP32 using Arduino IDE.
2. Connect the soil moisture sensor to the ESP32 ADC pin.
3. Connect the relay module to a digital output pin.
4. Connect the water pump to the relay output.
5. Provide power to ESP32 and the pump.
6. Insert the sensor into the soil.
7. The pump will turn ON and OFF automatically based on soil moisture.

---

## 🔧 Future Improvements (Optional)

- LCD Display for moisture level
- Buzzer alert for dry soil
- Manual ON/OFF switch
- Battery-powered operation
- Solar-powered version
