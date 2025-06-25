################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/digitalCommunication.cpp \
../src/main.cpp \
../src/ofdmSimulation.cpp \
../src/qpsk.cpp \
../src/qpskAwgnBer.cpp \
../src/qpskConstellation.cpp \
../src/qpskDemodBer.cpp \
../src/utils.cpp 

CPP_DEPS += \
./src/digitalCommunication.d \
./src/main.d \
./src/ofdmSimulation.d \
./src/qpsk.d \
./src/qpskAwgnBer.d \
./src/qpskConstellation.d \
./src/qpskDemodBer.d \
./src/utils.d 

OBJS += \
./src/digitalCommunication.o \
./src/main.o \
./src/ofdmSimulation.o \
./src/qpsk.o \
./src/qpskAwgnBer.o \
./src/qpskConstellation.o \
./src/qpskDemodBer.o \
./src/utils.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/digitalCommunication.d ./src/digitalCommunication.o ./src/main.d ./src/main.o ./src/ofdmSimulation.d ./src/ofdmSimulation.o ./src/qpsk.d ./src/qpsk.o ./src/qpskAwgnBer.d ./src/qpskAwgnBer.o ./src/qpskConstellation.d ./src/qpskConstellation.o ./src/qpskDemodBer.d ./src/qpskDemodBer.o ./src/utils.d ./src/utils.o

.PHONY: clean-src

