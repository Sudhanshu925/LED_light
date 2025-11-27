# LED Light Running Pattern – 8051 Microcontroller

A simple embedded systems project demonstrating a **running LED / chaser effect** using an **8051 microcontroller**.  
The C code is written in **Keil uVision**, and the circuit is simulated in **Proteus**.

---

## 🔧 Tools Used
- Keil µVision 5  
- Proteus 8 Professional  
- AT89C51 / 8051 Microcontroller  
- LEDs, Resistors (simulation components)

---

## 📁 Project Structure
LED_light/

-- Code/ → Keil C source files (.c, .h, .uvprojx)
-- Schematic/ → Proteus schematic files (.dsn, .pdsprj)





---

## 🧠 Project Description
The program turns ON LEDs one by one from P1.0 to P1.7, creating a **running light / chaser effect**.  
This is commonly used in basic embedded systems, traffic lights, and visual indicators.

---

## 🚀 How to Run

### ✅ 1. Compile in Keil
1. Open the `.uvprojx` file  
2. Build the project to generate `.hex`  
3. Verify no errors/warnings  

### ✅ 2. Simulate in Proteus
1. Open `.dsn` or `.pdsprj`  
2. Double-click the 8051 microcontroller  
3. Load the generated `.hex` file  
4. Click **Run**  
5. LEDs will glow one by one in a sequence  

---

## 💡 LED Chaser Code (Keil C)

```c
#include <reg51.h>

void main() {
    unsigned char x, y;
    unsigned int i;

    while(1) {
        x = 0x01;       // Start with first LED ON

        for(y = 0; y < 8; y++) {
            P1 = x;     // Output to Port 1

            for(i = 0; i < 6000; i++);  // Delay

            x = x << 1; // Move to next LED
        }
    }
}
