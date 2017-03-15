//------------------------------------------------------------------------------
//
//      Filename: Genuintiny84a.h
//
//      Company: Genuin.engineering
//      Author : A.F. Kemperman
//      Date   : 13-03-2017
//
//      Processor: ATTINY84A
//      Compiler : AVR/GNU
//
//      Change log
//      Revision Date: 13-03-2017
//      Changes: first build
//
//      Functional description:
//      Company default definitions
//
//------------------------------------------------------------------------------

#ifndef GENUINTINY84A_H_
#define GENUINTINY84A_H_

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

//Interrupt masks
#define TIM0_INT_COMPB				0x04
#define TIM0_INT_COMPA				0x02
#define TIM0_INT_OVF				0x01

#define TIM1_INT_INCAPT				0x20
#define TIM1_INT_COMPB				0x04
#define TIM1_INT_COMPA				0x02
#define TIM1_INT_OVF				0x01

#endif /* GENUINTINY84A_H_ */