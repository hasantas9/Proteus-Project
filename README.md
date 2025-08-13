  -Simple Circuits in Proteus 8 Pro-

This repository contains simple electronic circuit examples designed using **Proteus 8 Professional**.  
The goal is to help beginners understand the basic operation of electronic components and circuits.

  Contents

- NTC Circuit → A basic control circuit using an NTC thermistor whose resistance decreases as temperature increases.
- PTC Circuit → A circuit using a PTC thermistor whose resistance increases with rising temperature.
- H-Bridge Circuit → A motor driver circuit that allows a DC motor to rotate in both forward and reverse directions.
- Rectifier Circuit → A basic circuit that converts AC voltage to DC voltage.

    Software Used
- Proteus 8 Professional

    How to Use
1. Download the desired project folder from this repository.
2. Open it in Proteus 8 Professional or a compatible version.
3. Press the **Simulate (Play)** button to run the circuit.

 📌 Notes
- These circuits are for educational purposes only.
- `.bak` and temporary files are not included.
- Each circuit is simplified to clearly demonstrate the working principle of the related components.


## Arduino Project How to Run?

1. **Install the Required Software**
   - Download and install Arduino IDE from the [official Arduino website](https://www.arduino.cc/en/software).
   - Install Proteus 8 Professional or a later version on your computer.
   - Add the Proteus Arduino library files (.LIB and .IDX) to the `Proteus/LIBRARY` folder.

2. **Prepare the Arduino Code**
   - Open the `.ino` file in Arduino IDE.
   - From the **Tools** menu, select the correct board type (e.g., Arduino Uno).
   - Click the **Verify** button to compile the code.
   - Once compiled, a `.hex` file will be generated.  
     This file is usually located at:
     ```
     Documents/Arduino/ProjectName/
     ```

3. **Build the Circuit in Proteus**
   - Create a new project in Proteus.
   - Place the Arduino board (UNO, MEGA, etc.) in the workspace.
   - Add all required components to the schematic and make the necessary connections.
   - Right-click on the Arduino board, go to **Edit Properties**, and select the `.hex` file.

4. **Run the Simulation**
   - Click the **Run** button to start the simulation.
   - Your code will run in Proteus; no physical Arduino board is required.

> **Note:** If the circuit will not be tested in real life and will only run in Proteus, make sure the `.hex` file is correctly loaded and that the library files are complete.
