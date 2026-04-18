#Digital Dice using Tinkercad & Logisim

##  Overview
This project implements a **Digital Dice** using two different approaches:

- **Tinkercad (Arduino-based simulation)**  
-  **Logisim Evolution (Digital logic circuit design)**  

The system simulates a traditional six-sided dice by generating random numbers and displaying the result using LEDs (Arduino) and a Hex Display (Logisim).

---

##  Objectives
- To simulate a six-sided dice electronically.
- To implement **random number generation using Arduino**.
- To design a **logic-based dice using counters and adders**.
- To understand both **software-based and hardware-based approaches**.

---

##  Technologies Used
- Arduino (C/C++)
- Tinkercad Circuits
- Logisim Evolution
- Digital Logic Design

---

## Components Used

### 🔹 Tinkercad (Arduino)
- Arduino Uno R3  
- LEDs (8)  
- Resistors  
- Breadboard  
- Push Button (optional)  

###  Logisim
- Clock  
- AND Gate  
- Roll Button  
- Reset Button  
- 3-bit Counter  
- Adder  
- Constant (1)  
- Hex Digit Display  

---

## Working Principle

### 🔸 Arduino (Tinkercad)
1. The system generates a random number between **1 and 6** using:
   ```cpp
   random(1, 7);
   Each number corresponds to a predefined LED pattern.
LEDs are turned ON/OFF based on the selected pattern.
A button can be used to roll the dice again.
🔸 Logisim
A clock signal drives the counter.
The counter generates values from 0 to 5.
A 3-bit adder adds 1, converting output to 1–6.
The result is displayed on a Hex Digit Display.
The AND gate ensures counting only when ROLL is pressed.
