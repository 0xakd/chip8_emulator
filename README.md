# CHIP-8 Emulator

A simple **CHIP-8 emulator** written in C with **SDL2** for graphics, input, and audio.  
This project was built as a learning exercise in low-level emulation, graphics, and system architecture.

---

## 📖 What is CHIP-8?

CHIP-8 is a virtual machine developed in the 1970s, originally used to play simple video games on microcomputers like the COSMAC VIP.  
It provides a minimal instruction set, making it a great starting point for learning about emulation.

Some popular CHIP-8 games include:
- Pong
- Space Invaders
- Tetris
- Snake

---

## ✨ Features

- Full CHIP-8 instruction set support
- Keyboard input mapped to hex-based keypad
- Graphics rendering via SDL2 (64×32 monochrome display)
- Configurable emulation speed
- Sound buzzer support

---

## 🛠️ Requirements

- **C compiler** (e.g., `gcc`, `clang`)
- **SDL2 development libraries**

---

## Build & Run

### build
```bash
mingw32-make clean
mingw32-make

```
### run
```bash 
./bin/main.exe ./bin/snake.ch8 
```
replace "snake.ch8" with any other game you want.

---

## Controls 🎮
1 2 3 4    →   1 2 3 4 <br>
Q W E R    →   5 6 7 8 <br>
A S D F    →   9 A B C <br>
Z X C V    →   D E F 0

---

## Exit 
Press the Cross button or 'ctrl+c' in the terminal to terminate the program.