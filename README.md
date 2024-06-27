# 15-Puzzle-Game

This is a C++ implementation of the classic 15 Puzzle game, also known as the sliding tile puzzle. The game is played on a 4x4 grid with numbered tiles that can be moved horizontally or vertically within the confines of the board. The objective of the game is to arrange the tiles in ascending order starting from the top-left corner (1 to 15) with the empty space at the bottom-right corner (represented by 0).

## How to Play

### Controls

- **w**: Slide tile right
- **a**: Slide tile down
- **s**: Slide tile left
- **d**: Slide tile up
- **q**: Quit game

### Gameplay

1. The game starts with a randomized board configuration.
2. Use the controls to slide tiles into the empty space.
3. Continue until all tiles are arranged in numerical order with the empty space in the bottom-right corner.
4. Press **q** to quit the game at any time.

## Installation and Execution

### Linux / MAC

1. Clone this repository:
2. Navigate to your project directory containing main.cpp and other source files (src/ folder)
3. Compile the code using g++ (GNU Compiler Collection):
   ```
        g++ src/main.cpp src/Board.cpp src/Tile.cpp src/UserInput.cpp src/Direction.cpp src/Point.cpp -o main
   ```
5. Run the executable:

### Windows

1. Clone this repository using Git Bash or download as ZIP and extract it:
2. Open Command Prompt (cmd) or PowerShell and navigate to your project directory containing main.cpp and other source files (src/ folder):
3. Compile the code using g++ (ensure you have g++ installed, you can download MinGW for Windows for g++):
   ```
      g++ src/main.cpp src/Board.cpp src/Tile.cpp src/UserInput.cpp src/Direction.cpp src/Point.cpp -o main.exe

   ```
5. Run the executable:


## Contribution

Contributions to this project are welcome! To contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## Dependencies

- C++ compiler (supporting C++11)
- Standard C++ libraries

## Notes

- The board is initially randomized by performing a series of random valid moves.
- The game checks if the player has won after each move and displays a victory message when the puzzle is solved.

Enjoy the challenge of solving the 15 Puzzle game!
