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
It has lint.sh to run the linter (needs verilator to be installed).  
#### ice40
This has all the files needed to build and run the game on the FPGA.
The modules folder is all the modules needed for the game logic from arrow movement to chartting.  
#### sim
This folder is has all the files needed to simulate the game on your computer.  

## lib
This folder is a library from Will Green's Project F and includes the files for the clock and debouncer.  

## tests
This folder has all the file needed to run tests on certain modules.  

# Cloning
To clone the repository, run the command below on command line
```shell
git clone git@github.com:anaong/DDR-for-FPGA.git
```

# Building
Below are the requirements needed to build and run the program.  
## Requirements
### **OSS Cad Suite**  
Installation instructions can be found on their github.  
LINK: https://github.com/YosysHQ/oss-cad-suite-build

**OSS Cad Suite is enough for just hardware. You'll need more (listed below) to run the simulation.**

For the simulation you need 3 things  
* C++ toolchain
* Verilator
* SDL  

For Linux (Debian/Ubuntu) run the commands below on command line
```shell
sudo apt install build-essential
sudo apt install verilator libsdl2-dev
```

For macOS you'll need Homebrew installed. Run the command below.  
```shell
brew install verilator sdl2
```

## iCEBreaker
To build on the FPGA, run the commands below  
```shell
cd DDR-for-FPGS/ddr/ice40
make ddr
```
To implement on the fpga run the command below after building
```shell
iceprog ddr.bin
```
## Simulator
To build the simulator, run the commands below  
```shell
cd DDR-for-FPGA/ddr/sim
make ddr
```
To run the simulator, run the command below after building
```shell
./obj_dir/ddr
```

# Testing
