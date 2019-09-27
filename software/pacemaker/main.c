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
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include "altera_avalon_uart_regs.h"
#include <stdio.h>
#include "pacemaker.h"

#define LED7 128
#define LED6 64
#define LED5 32
#define LED4 16
#define LED3 8
#define LED2 4
#define LED1 2
#define LED0 1

//Timeout values in milliseconds
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900


//Variable Declaration
int VLED1 = 0, VLED2 = 0;
int timeCount, ledTimeCount;
int buttonPressed1 = 0, buttonPressed2 = 0;
int buttonValue, buttonValuePrevious;
int ap_count, vp_count;

void* timerContext;
alt_alarm timer, timer2;

//handler for the timer interrupt
alt_u32 timer_isr(void* context){
	int *timeCount = (int*) context;
	(*timeCount)++;
	return 1;
}

void tx_char(char string) {
	IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE, IORD_ALTERA_AVALON_UART_CONTROL(UART_BASE) & ~0x0800);
	while((IORD_ALTERA_AVALON_UART_STATUS(UART_BASE) & 0x0800) != 0) {

	};
	while ((IORD_ALTERA_AVALON_UART_STATUS(UART_BASE) & 0x0040 == 0)) {

	};
	IOWR_ALTERA_AVALON_UART_TXDATA(UART_BASE, string);
	IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE, IORD_ALTERA_AVALON_UART_CONTROL(UART_BASE) | 0x0800);
}

alt_u32 led_timer_isr(void* context){
	int *timeCount = (int*) context;
	(*timeCount)++;
	return 1;
}

int main()
{
	reset();



	to_avi = AVI_VALUE;
	to_lri = LRI_VALUE;
	to_uri = URI_VALUE;
	to_pvarp = PVARP_VALUE;
	to_vrp = VRP_VALUE;
	to_aei = AEI_VALUE;

	timeCount = 0;
	ledTimeCount = 0;
	timerContext = (void*) &timeCount;

	ap_count = 0;
	vp_count = 0;

	alt_alarm_start(&timer, 1, timer_isr, timerContext);

	while(1) {

		VLED1 = 0;
		tx_char('V');
		buttonValuePrevious = buttonValue;
		buttonValue = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

		//if (buttonValuePrevious != buttonValue) {
			// Key 1 is pressed
			if(buttonValue == 6){
				as = 1;
				VLED1 = VLED1 + LED0;
				//printf("as\n");
			}else{
				as = 0;
			}

			//Key 2 is pressed
			if(buttonValue == 5){
				vs = 1;
				VLED1 = VLED1 + LED1;
				//printf("vs\n");
			}else{
				vs = 0;
			}
		//}

		// Every millisecond do this.
		if(timeCount >= 1){

			alt_alarm_stop(&timer);
			timeCount = 0;
			VLED2 = 0;

			tick();

			if(ap_count > 0){
				ap_count--;
			}

			if(vp_count > 0){
				vp_count--;
			}

			//Turns off VS & AS
			if (as == 1 || vs == 1){
				as = 0;
				vs = 0;
			}

			// Debug RED LEDS.
			if(AVI == 1){
				VLED2 = VLED2 + LED0;
			}
			if(VRP == 1){
				VLED2 = VLED2 + LED1;
			}
			if(PVARP == 1){
				VLED2 = VLED2 + LED2;
			}
			if(AEI == 1){
				VLED2 = VLED2 + LED3;
			}
			if(URI == 1){
				VLED2 = VLED2 + LED4;
			}
			if(LRI == 1){
				VLED2 = VLED2 + LED5;
			}

			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, VLED2);

			alt_alarm_start(&timer, 1, timer_isr, timerContext);
		}
		if(ap == 1 && ap_count == 0){
			ap_count = 20;
		}

		if(vp == 1 && vp_count == 0){
			vp_count = 20;
		}

		if(ap_count > 0 ){
			VLED1 = VLED1 + LED6;
		}
		if(vp_count > 0){
			VLED1 = VLED1 + LED7;
		}
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, VLED1);
	}
}
