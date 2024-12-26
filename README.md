# Arduino DC Motor Control with Interrupt

A simple yet effective Arduino project featuring DC motor control with speed adjustment via potentiometer and direction control using interrupt-driven button input.

## 🛠️ Components Used

- 1x Arduino Uno
- 1x DC Motor
- 1x L293D Motor Driver
- 1x Potentiometer
- 1x Push Button
- 1x 9V Battery
- Jumper Wires
- 1x Breadboard
- Resistors

## 📋 Features

- Variable speed control
- Interrupt-driven direction change
- Potentiometer-based speed adjustment
- Single button operation
- Real-time motor control
- Bidirectional rotation

## ⚡ Pin Configuration

### Motor Driver (L293D)
Motor Control:
 - Enable B: Pin 3
 - Input 3: Pin 4
 - Input 4: Pin 5

### Control Inputs
 - Button: Pin 2 (Interrupt)
 - Potentiometer: A0


## 🎮 System Operation

1. **Speed Control**
   - Potentiometer reading (0-1023)
   - Mapped to PWM output (0-255)
   - Real-time speed adjustment

2. **Direction Control**
   - Interrupt-driven button input
   - Toggle direction on button press
   - Immediate direction change

## 📺 Circuit Diagram

![Tremendous Bombul-Kasi](https://github.com/user-attachments/assets/8701c01f-ae73-418e-a1c7-029994272cfc)


## 💡 Interrupt Configuration

- Trigger: RISING edge
- Pin: 2 (External Interrupt)
- Handler: btnPress function

## ⚠️ Important Notes

- Use appropriate current-limiting resistors
- Verify motor driver connections
- Check button debouncing if needed
- Monitor motor current draw
- Ensure stable power supply
- Ground connections are critical

## 🔧 Setup Instructions

1. **Hardware Setup**
   - Connect motor to L293D
   - Wire button with pull-down resistor
   - Install potentiometer
   - Connect power supply

2. **Software Setup**
   - Upload code
   - Verify interrupt operation
   - Test speed control
   - Check direction changes

## 🔍 Troubleshooting

| Problem | Possible Solution |
|---------|------------------|
| Motor not running | Check driver connections |
| Erratic direction changes | Add button debouncing |
| Uneven speed | Verify potentiometer |
| No direction change | Check interrupt setup |

## 📝 License

This project is licensed under the MIT License
