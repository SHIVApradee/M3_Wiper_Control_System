# M3_Wiper_Control_System
## INTRODUCTION
* This Wiper Control System is utilised in all sorts of automobiles, and its primary function is to remove rain air drops from the vehicle's front screen. Because driving a vehicle in the rain is quite difficult, we will use wipers to clear the front screen of the vehicle, which is a mirror, so that we may drive the vehicle even in the rain. The operational speed of a wiper is controlled by a wiper speed control system in accordance with frequencies. The pulse signal is digitally processed to provide a control signal. A wiper driver circuit receives the control signal and adjusts the operational speed or timing in line with it.
## WORKING PRINCIPLE
* If the button is hit, the first led (red) will turn on, Clicking again  the wiper will start, and the second led (blue) will turn on for a desired rate. If the button is pressed again, the third led (green) will turn on, and the wiper's speed will be increased in comparison to the previous one. The fourth press will turn on the fourth led (orange), and the wiper speed will be increased in accordance with the previous one. The microcontroller (vehicle) is turned off after the fifth click.
## SOFTWARE REQUIREMENTS
* STM32 CUBE IDE
## COMPONENTS
* STM32F4O7VG MICROCONTROLLER

![STM32F4O7VG_KIT](https://user-images.githubusercontent.com/93831316/168429182-f6791bf9-d239-4199-a833-b4be4702449f.png)
### DESCRIPTION
The STM32F407 Kit takes advantage of the high-performance STM32F407 microcontrollers' capabilities to make it simple for users to create audio-based applications. It comes with an ST-LINK embedded debug tool, an ST-MEMS digital accelerometer, a digital microphone, an audio DAC with integrated class D speaker driver, LEDs, pushbuttons, and a USB OTG micro-AB connector.Ethernet connectivity, an LCD display, and other features have been added to the STM32F4 DISCOVERY kit. The STM32F405xx and STM32F407xx families are built around the high-performance Arm® Cortex®-M4 32-bit RISC core, which runs at up to 168 MHz.
## FEATURES
* In a LQFP100 package, the STM32F407VGT6 microcontroller has a 32-bit ARM Cortex-M4 with FPU core, 1-Mbyte Flash memory, and 192-Kbyte RAM.
* On-board ST-LINK/V2 or ST-LINK/V2-A on STM32F4 DISCOVERY (old reference) or STM32F407G-DISC1 (new order code)
* USB ST-LINK with three separate interfaces and re-enumeration capability.
* Virtual Com port Debug port (with new order code only)
* Large-scale storage (with new order code only)
* Board power is supplied through USB or an external 5 V supply source.
* 3 V and 5 V external application power supply
## USES
* This Microcontroller is utilised in printing and scanning machines ,heat ventilation, air conditioning, and security systems.
* This module can be found in a variety of household products.
## THE 4 W's AND H
### WHAT
* A wiper control system for an automotive wiper controls the operational speed of a wiper in accordance with conditions.
### WHY
* Windshield wipers are a small part of your car, but they have a big impact on your driving and overall safety. They remove rain, snow, dirt, pollen, frost and other debris quickly and smoothly at the push of a button! The windshield wiper motor moves the windshield wiper arms across the windshield. 
### WHEN
* Wiper is essential for keeping the windscreen sufficiently clean for driver's visibility specifically for modern high speed vehicles.
### WHO 
* Wiper is essentially used by the manufactrers to assemble it into the cars.
### HOW
* Wipers were operated manually by moving a lever inside the car back and forth.
## SWOT ANALYSIS
### STRENGTH
* It provides clear visibility to drive
* Operating principle is easy
* It is possipble to operate manually
### WEAKNESS
* Proper maintenance should be done
* High expenses
* Cause error while implementing
### THREATS
* Software issues
* Like any other part of a car, windshield wipers can need repair or replacement after being in service too long.
## DETAILED REQUIREMENTS
### HIGH LEVEL REQUIREMENTS:

|  ID   |  Description  |  Status (Implemented/In Future)  |
| ----  |  -----------  |  --------------------- |
| HLR_1 |  Wiper control system  |  Implemented  |
| HLR_2 |  press button, Red LED Ignited |  Implemented |
| HLR_3 |  Car is in Ignition mode  |  Implemented  |
| HLR_4 |  LED Blinking             |  Implemented  |

### LOW LEVEL REQUIREMENTS:

|  ID   |  Description  |  Status (Implemented/In Future)  |
| ----  |  -----------  |  --------------------- |
| LLR_1 |  Button pressed ONCE for two seconds - ON LED RED  |  Implemented  |
| LLR_2 |  Button pressed ON BLUE,GREEN,ORANGE |  Implemented |
| LLR_3 |  Button pressed OFF BLUE,GREEN,ORANGE |  Implemented |
### BADGES

[![main_check](https://github.com/SHIVApradee/M3_Wiper_Control_System/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/SHIVApradee/M3_Wiper_Control_System/actions/workflows/c-cpp.yml)

[![Valgrind](https://github.com/SHIVApradee/M3_Wiper_Control_System/actions/workflows/valgrind.yml/badge.svg)](https://github.com/SHIVApradee/M3_Wiper_Control_System/actions/workflows/valgrind.yml)

[![C windows BUILD](https://github.com/SHIVApradee/M3_Wiper_Control_System/actions/workflows/windows.yml/badge.svg)](https://github.com/SHIVApradee/M3_Wiper_Control_System/actions/workflows/windows.yml)




