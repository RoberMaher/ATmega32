################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ADC_Program.c \
../Src/App.c \
../Src/DIO_Program.c \
../Src/LCD_Program.c \
../Src/LED_Program.c 

OBJS += \
./Src/ADC_Program.o \
./Src/App.o \
./Src/DIO_Program.o \
./Src/LCD_Program.o \
./Src/LED_Program.o 

C_DEPS += \
./Src/ADC_Program.d \
./Src/App.d \
./Src/DIO_Program.d \
./Src/LCD_Program.d \
./Src/LED_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


