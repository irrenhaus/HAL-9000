###############################################################################
#
#  	    File        : Makefile
#
#       Abstract    : Example Makefile for STM32 C Project
#
#       Environment : Atollic TrueSTUDIO(R)
#
###############################################################################

# System configuration
CC = arm-atollic-eabi-gcc
RM=rm -rf

# Assembler, Compiler and Linker flags and linker script settings
LINKER_FLAGS=-mthumb -mcpu=cortex-m3 -Wl,--gc-sections -T$(LINK_SCRIPT) -static  -Wl,-cref "-Wl,-Map=$(BIN_DIR)/Bordcomputer.map"
LINK_SCRIPT="stm32_flash.ld"
ASSEMBLER_FLAGS=-c -g -O0 -mcpu=cortex-m3 -mthumb  
COMPILER_FLAGS=-c -g -mcpu=cortex-m3 -O0 -Wall -ffunction-sections -fdata-sections -mthumb -D"STM32F10X_CL" -D"USE_STDPERIPH_DRIVER"  -Ifirmware/CMSIS/CM3/CoreSupport -Ifirmware/CMSIS/CM3/DeviceSupport/ST/STM32F10x -Ifirmware/STM32F10x_StdPeriph_Driver/inc -Isrc -ISTM32_EVAL -ISTM32_EVAL/Board -ISTM32_EVAL/Common

# Define output directory
OBJECT_DIR = Debug
BIN_DIR = $(OBJECT_DIR)

# Define sources and objects
SRCS := $(wildcard src/*.c) $(wildcard FreeRTOS/*.c) $(wildcard src/font/*.c) $(wildcard src/lib/lcd/*.c) $(wildcard src/lib/fat_sd/*.c) $(wildcard src/lib/minIni/*.c)
OBJS := $(SRCS:%.c=$(OBJECT_DIR)/%.o)  
LIBSRCS := $(wildcard firmware/*/src/*.c) $(wildcard firmware/CMSIS/CM3/CoreSupport/*.c) $(wildcard STM32_EVAL/Board/*.c) $(wildcard STM32_EVAL/Common/*.c) $(wildcard firmware/CMSIS/CM3/DeviceSupport/ST/STM32F10x/*.c)
LIBSRCSASM :=  $(wildcard firmware/CMSIS/CM3/DeviceSupport/ST/STM32F10x/startup/TrueSTUDIO/*.s) 
LIBOBJS := $(LIBSRCS:%.c=$(OBJECT_DIR)/%.o) $(LIBSRCSASM:%.s=$(OBJECT_DIR)/%.o)

###############
# Build project
# Major targets
###############
all: buildelf

lib: $(LIBOBJS)	

buildelf: lib $(OBJS) 
	$(CC) -o "$(BIN_DIR)/Bordcomputer.elf" $(OBJS) $(LIBOBJS) $(LINKER_FLAGS)

clean:
	$(RM) $(OBJS) $(LIBOBJS) "$(BIN_DIR)/Bordcomputer.elf" "$(BIN_DIR)/Bordcomputer.map"


##################
# Specific targets
##################
$(OBJECT_DIR)/src/main.o: src/main.c src/*.h
	$(CC) $(COMPILER_FLAGS) src/main.c -o $(OBJECT_DIR)/src/main.o 

$(OBJECT_DIR)/src/stm32f10x_it.o: src/stm32f10x_it.c src/*.h
	$(CC) $(COMPILER_FLAGS) src/stm32f10x_it.c -o $(OBJECT_DIR)/src/stm32f10x_it.o 


##################
# Implicit targets
##################
$(OBJECT_DIR)/%.o: %.c
	$(CC) $(COMPILER_FLAGS) $< -o $@

$(OBJECT_DIR)/%.o: %.s
	$(CC) $(ASSEMBLER_FLAGS) $< -o $@
