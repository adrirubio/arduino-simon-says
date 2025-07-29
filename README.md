# arduino-simon-says
Minimal Simon‑Says game for Arduino: 4 LEDs, 4 buttons
This project recreates the classic Simon Says Game where it tests your memory to remember longer and longer sequences of lights.

## Demo & Full Video
Watch a quick preview below (GIF), or download the full demo video

### Preview (GIF)
![Arduino Simon Says Demo](https://github.com/adrirubio/arduino-simon-says/blob/a0dde178995b86c90b5a282224bca7c2de4c0c6e/my-build/demos/arduino-simon-says-demo.gif)

### Full Video

[Click here to download the full demo video (MP4)](https://github.com/adrirubio/arduino-simon-says/raw/refs/heads/main/my-build/demos/arduino-simon-says-demo.mp4)

## How It Works

The game displays a sequence of lights accompanied by unique tones. Players must repeat the same sequence by pressing the correct pushbutton that corresponds to the led that lit up.

## Components Used

- Arduino Board (Uno R3 in my-build)
- 4 colored LEDs (red, yellow, blue, green)
- 4 pushbuttons
- Resistors and wiring
- 1 piezo buzzer (optional if sound is wanted)

## Repo Structure

- `simon/simon.ino` - Main Arduino code with game logic
- `docs/` - Documentation including wiring diagram and components list
- `my-build` - Build files and demo videos

## Features

- Random pattern generation
- Visual feedback with colored LEDs
- Audio feedback with distinct tones for each color
- Serial monitor output for debugging

## Quick Start

1. **Clone this repository**
   ```bash
   git clone https://github.com/adrirubio/arduino-simon-says.git
   ```

2. **Open the Arduino sketch**
   - Open `simon/simon.ino` in Arduino IDE

3. **Wire your components**
   - Connect LEDs to pins 3, 4, 5, 6
   - Connect buttons to pins 9, 10, 11, 12
   - Connect buzzer to pin 7 (optional)
   - See `docs/` for more information on the wiring

4. **Upload and play!**
   - Upload the sketch to your Arduino
   - Press Upload to start a new game
   - Enjoy!

## Screenshots

Side view of the project:

![Arduino Side View](https://raw.githubusercontent.com/adrirubio/arduino-simon-says/main/my-build/arduino-side-view.jpg)

Top view of the project:

![Arduino Top View](https://raw.githubusercontent.com/adrirubio/arduino-simon-says/main/my-build/arduino-top-view.jpg)
