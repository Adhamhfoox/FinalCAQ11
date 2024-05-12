#include "mbed.h"

// Define pin numbers for Digital Inputs (DI) and Outputs (DO)
DigitalIn digital_in_1(PC_13);  // Replace with actual pin number
DigitalIn digital_in_2(PC_14);  // Replace with actual pin number
DigitalOut digital_out_1(PC_8); // Replace with actual pin number
DigitalOut digital_out_2(PC_9); // Replace with actual pin number

int main() {
    // Main loop
      while (true) {
    // Read digital input states
    int input_1 = digital_in_1.read(); // 0 for LOW, 1 for HIGH
    int input_2 = digital_in_2.read();

          // Check if digital input 1 is pressed (LOW signal)
    if (input_1 == 0) {
      digital_out_1 = 1;  // Turn on Digital Output 1 (HIGH)
      digital_out_2 = 0;  // Turn off Digital Output 2 (LOW)

        } else if (input_2 == 0) {
      digital_out_1 = 0;  // Turn off Digital Output 1 (LOW)
      digital_out_2 = 1;  // Turn on Digital Output 2 (HIGH)
        }
        // No button pressed, turn off both outputs
    else {
      digital_out_1 = 0;
      digital_out_2 = 0;
    }
    }
    return 0;
}