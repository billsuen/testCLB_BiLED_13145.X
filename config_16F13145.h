#ifndef CONFIG_16F13145_H
#define CONFIG_16F13145_H

#include <stdint.h>

void USER_TMR0_ISR(void);
void USER_ADC_THRESHOLD_ISR(void);

struct
{
	uint8_t initFlag : 1;
	uint8_t lowBattFlag : 1;
}stateFlag;

#define initFlag	stateFlag.initFlag
#define lowBattFlag	stateFlag.lowBattFlag

#define	IND_ON	0
#define IND_OFF	1

#define ADC_TRIGGER_SETTING	60	// Number of TMR0 overflows before starting an ADC conversion

extern volatile uint8_t	ADC_triggerCnt;

extern volatile uint16_t initCnt;

#endif // CONFIG_16F13145_H
