//------------------------------------------------------------------------------
//
//      Filename: Genuin328p.h
//
//      Company: Genuin.engineering
//      Author : A.F. Kemperman
//      Date   : 08-03-2017
//
//      Processor: ATMEGA328P
//      Compiler : AVR/GNU
//
//      Change log
//      Revision Date: 08-03-2017
//      Changes: first build
//
//      Functional description:
//      Company default definitions
//
//------------------------------------------------------------------------------
#ifndef GENUIN328P_H_
#define GENUIN328P_H_

//------------------------------------------------------------------------------
//  Timer defines																
//------------------------------------------------------------------------------
																				
// prescalers																		
#define TIM0_PRESCALER_NOCLOCK 		~((1 << CS02)|(1 << CS01)|(1 << CS00))		
#define TIM0_PRESCALER_1 			(1 << CS00)									
#define TIM0_PRESCALER_8 			(1 << CS01)
#define TIM0_PRESCALER_64 			(1 << CS01)|(1 << CS00)
#define TIM0_PRESCALER_256 			(1 << CS02)
#define TIM0_PRESCALER_1024 		(1 << CS02)|(1 << CS00)

#define TIM1_PRESCALER_NOCLOCK 		~((1 << CS12)|(1 << CS11)|(1 << CS10))
#define TIM1_PRESCALER_1 			(1 << CS10)
#define TIM1_PRESCALER_8 			(1 << CS11)
#define TIM1_PRESCALER_64 			(1 << CS11)|(1 << CS10)
#define TIM1_PRESCALER_256 			(1 << CS12)
#define TIM1_PRESCALER_1024 		(1 << CS12)|(1 << CS10)
	
#define TIM2_PRESCALER_NOCLOCK 		~((1 << CS22)|(1 << CS21)|(1 << CS20))
#define TIM2_PRESCALER_1 			(1 << CS20)
#define TIM2_PRESCALER_8 			(1 << CS21)
#define TIM2_PRESCALER_64 			(1 << CS21)|(1 << CS20)
#define TIM2_PRESCALER_256 			(1 << CS22)
#define TIM2_PRESCALER_1024 		(1 << CS22)|(1 << CS20)

//Interrupt masks
#define TIM0_INT_COMPB				0x04
#define TIM0_INT_COMPA				0x02
#define TIM0_INT_OVF				0x01

#define TIM1_INT_INCAPT				0x20
#define TIM1_INT_COMPB				0x04
#define TIM1_INT_COMPA				0x02
#define TIM1_INT_OVF				0x01

#define TIM2_INT_COMPB				0x04
#define TIM2_INT_COMPA				0x02
#define TIM2_INT_OVF				0x01

//------------------------------------------------------------------------------
//  ADC defines
//------------------------------------------------------------------------------

//Voltage reference
#define ADC_VREF_AREF				~((1 << REFS1)|(1 << REFS0))
#define ADC_VREF_AVCC				(1 << REFS0)
#define ADC_VREF_INTERNAL			(1 << REFS1)|(1 << REFS0)

//CTRL register A
#define ADC_ENABLE					(1 << ADEN)
#define ADC_INT_ENABLE				(1 << ADIE)

//auto trigger sources
#define ADC_ATS_TIM0OVF				(1 << ADTS2)

//ADC data register
#define ADC_VAL						(ADCL)+(ADCH&0x03 << 8)


#endif /* GENUIN328P_H_ */