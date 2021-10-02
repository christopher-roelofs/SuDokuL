# SuDokuL
This is a Sudoku game made in C++ and SDL2. It is currently available for Wii U and PC, but I intend to also port it to Vita and Switch.

## Features
- Play Sudoku puzzles of Easy, Normal, Hard, or Very Hard difficulty
  - These puzzles are generated on-demand using a built-in algorithm; however, to eliminate computation time on weaker devices, Hard and Very Hard puzzles have been pre-generated.
- Mouse, keyboard, and controller support
- Supports many resolution options ranging from 320x240 to 5120x2160
- Scrolling background with customizable settings (scroll speed, angle, size)
- Calm and envigorating MOD music to suit your mood
- Shaded text for a nice, 3D look
- Runs on a potato
- Optional auto-fill cheat, in case you get stuck

## Screenshots (click for full size)

All screenshots are from the PC version. More can be found in the [screenshots](https://github.com/Mips96/SuDokuL/tree/main/screenshots) folder.

<img src="https://github.com/GateGuy/SuDokuL/blob/main/screenshots/screenshot-640-480_1.png?raw=true" width="320" height="240"/> <img src="https://github.com/GateGuy/SuDokuL/blob/main/screenshots/screenshot-640-480_2.png?raw=true" width="320" height="240"/> <img src="https://github.com/GateGuy/SuDokuL/blob/main/screenshots/screenshot-640-480_3.png?raw=true" width="320" height="240"/>

This game was initially designed for 640x480 displays, but it is compatible with any resolution, and higher resolutions will utilize more detailed text and support for smaller background tiles.

<img src="https://github.com/GateGuy/SuDokuL/blob/main/screenshots/screenshot-1920_1080_1.png?raw=true" width="480" height="270"/>

## Credits
Everything in this game is made by me except for the following assets:

### Music
- [Nuke of Anarchy - "Wonder Flow"](http://modarchive.org/index.php?request=view_by_moduleid&query=38132) (alternate version can be found [here](http://modarchive.org/index.php?request=view_by_moduleid&query=133262))
- [Okeanos - "Sudoku Padawan"](http://modarchive.org/index.php?request=view_by_moduleid&query=64812)
- [Nuke of Anarchy - "Electroquest"](http://modarchive.org/index.php?request=view_by_moduleid&query=41515)
- [Soundscape - "Main Menu"](http://modarchive.org/index.php?request=view_by_moduleid&query=49158)
- [Okeanos - "Insomnia"](http://modarchive.org/index.php?request=view_by_moduleid&query=45908)
- [Solon - "Ontario"](http://modarchive.org/index.php?request=view_by_moduleid&query=128908)
- [Noiseless - "Addiction"](http://modarchive.org/index.php?request=view_by_moduleid&query=32912)

### Font
Commodore Pixelized v1.2 by by Devin Cook

### Sound Effects
[Luke.RUSTLTD](https://opengameart.org/users/lukerustltd)

### Libraries / Tools
##### All
- Visual Studio 2019
##### PC
- SDL2 2.0.14
- SDL2_image 2.0.5
- SDL2_ttf 2.0.15
- SDL2_mixer 2.0.4
##### Wii U
- devkitPro
- Wii U Toolkit
- SDL2 for Wii U

## How to Compile
### PC
Use the Visual Studio project file from the repo with Visual Studio 2019.
### Wii U
Install devkitPro, Wii U Toolkit, and SDL2 for Wii U, then build with CMake. I've included a *make_wii_u.sh* file for convenience once you have everything installed (make sure you change the directory in this file to your appropriate SuDokuL directory).
