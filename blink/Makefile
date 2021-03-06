### to https://github.com/sudar/Arduino-Makefile/blob/master/arduino-mk-vars.md
### Original project where this Makefile comes from: https://github.com/WeAreLeka/Bare-Arduino-Project

#        Arduino-Makefile/examples/MakefileExample/Makefile-example.mk
# ARDUINO_DIR   = /Applications/Arduino.app/Contents/Resources/Java
# ARDMK_DIR     = /usr/local
# AVR_TOOLS_DIR = /usr
# MONITOR_PORT  = /dev/ttyACM0
# MONITOR_PORT  = /dev/tty.usmodem1142
# BOARD_TAG     = mega2560
# ARDUINO_DIR   = /Applications/Arduino.app/Contents/Java

### PROJECT_DIR
### This is the path to where you have created/cloned your project
#PROJECT_DIR       = /Users/rusty/src/Arduino-Makefile
PROJECT_DIR		= /Users/rusty/src/tank/blink

### ARDMK_DIR
### Path to the Arduino-Makefile directory.
ARDMK_DIR         = /Users/rusty/src/Arduino-Makefile

### ARDUINO_DIR
### Path to the Arduino application and resources directory.
### On OS X:
ARDUINO_DIR	= /Users/rusty/Applications/Arduino.app/Contents/Java
### or on Linux: (remove the one you don't want)
# ARDUINO_DIR       = /usr/share/arduino

### USER_LIB_PATH
### Path to where the your project's libraries are stored.
USER_LIB_PATH    :=  /Users/rusty/Documents/Arduino/libraries

### BOARD_TAG
### It must be set to the board you are currently using. (i.e uno, mega2560, etc.)
BOARD_TAG         = uno

### MONITOR_BAUDRATE
### It must be set to Serial baudrate value you are using.
MONITOR_BAUDRATE  = 115200

### AVR_TOOLS_DIR
### Path to the AVR tools directory such as avr-gcc, avr-g++, etc.
### On OS X with `homebrew`:
AVR_TOOLS_DIR     = /usr/local
### or on Linux: (remove the one you don't want)
# AVR_TOOLS_DIR     = /usr

### AVRDUDE
### Path to avrdude directory.
### On OS X with `homebrew`:
AVRDUDE          = /usr/local/bin/avrdude
### or on Linux: (remove the one you don't want)
# AVRDUDE          = /usr/bin/avrdude

### CFLAGS_STD
### Set the C standard to be used during compilation. Documentation (https://github.com/WeAreLeka/Arduino-Makefile/blob/std-flags/arduino-mk-vars.md#cflags_std)
CFLAGS_STD        = -std=gnu11

### CXXFLAGS_STD
### Set the C++ standard to be used during compilation. Documentation (https://github.com/WeAreLeka/Arduino-Makefile/blob/std-flags/arduino-mk-vars.md#cxxflags_std)
CXXFLAGS_STD      = -std=gnu++11

### CXXFLAGS
### Flags you might want to set for debugging purpose. Comment to stop.
CXXFLAGS         += -pedantic -Wall -Wextra

### MONITOR_PORT
### The port your board is connected to. Using an '*' tries all the ports and finds the right one.
MONITOR_PORT      = /dev/tty.usbmodem*

### CURRENT_DIR
### Do not touch - used for binaries path
CURRENT_DIR       = $(shell basename $(CURDIR))

### OBJDIR
### This is where you put the binaries you just compile using 'make'
OBJDIR            = $(PROJECT_DIR)/bin/$(BOARD_TAG)/$(CURRENT_DIR)

ARDUINO_LIBS	= Adafruit_Motor_Shield_library

### Do not touch - the path to Arduino.mk, inside the ARDMK_DIR
include $(ARDMK_DIR)/Arduino.mk


# upload:
# 		gort arduino upload  bin/uno/tank/tank.hex /dev/tty.usbmodem1421 

# clean::
# 	rm -rf *~ bin
# .PHONY: upload clean
