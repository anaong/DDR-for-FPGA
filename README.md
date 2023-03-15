# Intro  
This final project was created for a the CSE 125 class in UCSC taught by Dustin Richmond.
This recreates the Konami game Dance Dance Revolution(DDR) on an FPGA.
The FPGA used for this project is the iCEBreaker FPGA.  

The features that were implemented are
* Making and reading from charts
* Arrows movement and launching
* Button presses
* Sheet music timing (limited to 4/4 time signature)  

More info down below on unimplemented features and how to read and make charts.  

Special thanks to Will Green and his Project F design and tutorials.
His Pong implementation was used as a skeleton for my game and helped me understand how to display graphics through the DVI Pmod.  
**LINK:** https://github.com/projf/projf-explore  

# Structure  
## ddr
This folder includes the game.
It can be run on the iCEBreaker FPGA or simulated through a computer.  
It has lint.sh to run the linter.  
### ice40
This has all the files needed to build and run the game on the FPGA.
The modules folder is all the modules needed for the game logic from arrow movement to chartting.  
### sim
This folder is has all the files needed to simulate the game on your computer.  

## lib
This folder is a library from Will Green's Project F and includes the files for the clock and debouncer.  

## tests
This folder has all the file needed to run tests on certain modules.  

# Cloning

# Building

## Requirements

## iCEBreaker

## Simulator

# Testing
