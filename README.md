# Serial-Communication-Simulation-microprocessors-and-microcontrollers

# 8051 UART Communication using Proteus Simulation

This project demonstrates serial communication between two 8051 microcontrollers using UART. It simulates data transmission from one microcontroller to another, displaying the received message on an LCD screen.

## 🚀 Features
- UART communication via serial port (9600 baud)
- LCD interfacing for live data display
- Switch-based message transmission (3 predefined messages)
- Simulated in Proteus using 8051 virtual microcontrollers

## 🧠 How It Works

### Transmitter (`Transmission.c`)
- Connected to three switches on Port 1 (P1.0, P1.1, P1.2)
- Pressing each switch sends a unique message via UART
- Messages are hardcoded: `" Message 1"`, `" Message 2"`, `" Message 3"`

### Receiver (`Receiving.c`)
- Listens via UART and receives characters
- Displays incoming characters on a 16x2 LCD connected to Port 2
- Uses control pins RS, RW, EN from Port 1

## 🛠️ Hardware (Simulated in Proteus)
- **Two 8051 Microcontrollers**
- **16x2 LCD** (connected to Receiver)
- **Three Push Buttons** (connected to Transmitter)
- **Serial Communication Lines** (TX of transmitter → RX of receiver)
- **Common Ground**

## ⚙️ Baud Rate Configuration
- Baud rate: **9600 bps**
- Timer 1 in Mode 2 (Auto-reload)
- TH1 set to 253 for 11.0592 MHz clock

# how to run
Load .c files into your respective 8051 MCUs in Proteus.
Connect TX of Transmitter to RX of Receiver.
Set both MCUs to 11.0592 MHz clock.
Run simulation and press switches.
Watch the LCD on Receiver display the message.
