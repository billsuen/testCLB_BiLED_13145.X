#include "config_16F13145.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/system/system.h"

volatile uint8_t	ADC_triggerCnt = 0;
volatile uint16_t	initCnt = 0;

void USER_TMR0_ISR(void)
{
	// User code for TMR0 interrupt
	ADC_triggerCnt++;
	if(ADC_triggerCnt >= ADC_TRIGGER_SETTING)
	{
		ADC_triggerCnt = 0;
		ADC_ConversionStart();
	}

	initCnt++;
	if(initCnt >= 1000)
	{
		initCnt = 1000;
		initFlag = 1;
	}

}

void USER_ADC_THRESHOLD_ISR(void)
{
	// User code for ADC threshold interrupt
	lowBattFlag = 1;
}