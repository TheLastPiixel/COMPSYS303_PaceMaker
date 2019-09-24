/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */


#include <alt_types.h> // alt_u32 is a kind of alt_types
#include <sys/alt_alarm.h>
#include <sys/alt_irq.h> // to register interrupts
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <stdio.h>
#include "pacemaker.h"

#define GLED7 128
#define GLED6 64
#define GLED5 32
#define GLED4 16
#define GLED3 8
#define GLED2 4
#define GLED1 2
#define GLED0 1

//Timeout values in milliseconds
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900

int main()
{
	//Turns on LEDs based on TLC
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 1);

	reset();

	//Variable Declaration
	int LED = 0;

	to_avi = 300;
	to_lri = 950;
	to_uri = 900;
	to_pvarp = 50;
	to_vrp = 150;
	to_aei = 800;


	while(1) {


		if (ap == 1) {
			LED = LED + GLED0;
		}

		if (vp == 1) {
			LED = LED + GLED1;
		}

		LED = 0;

		tick();
	}
}
