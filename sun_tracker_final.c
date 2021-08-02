
#include<pic.h>
#define delay for(i=0;i<=1000;i++)
//#define rs RC0
//#define rw RC1
//#define e RC2
//#define LED RD0
#define _XTAL_FREQ 4000000
#include <xc.h>
//#include<config.h>        // Header files
// #include "delay.h"

int mode;         //1 = forward ; 0 = reverse
int ready;        //1 = stop ; 0 = start
int dummy;

__CONFIG( FOSC_HS & WDTE_OFF & PWRTE_OFF & CP_OFF & BOREN_ON & LVP_OFF & CPD_OFF & WRT_OFF & DEBUG_OFF);

unsigned int adc1();
unsigned int adc2();
void motor_clockwise(); // one step clockwise
void motor_reset(); // reset
void motor_stop(); // the motor will remain static


int i;

void main()
{
    unsigned int val1;
    unsigned int val2;
    TRISA0=1;                 
    PORTC = 0b11111111;            
    val1 = adc1();
    val2 = adc2();
    while(1) {
        val1 = adc1();
        val2 = adc2();
        while((val1 > 800) & (val2> 800)){
            val1 = adc1();
            val2 = adc2();
            if((val1-val2)<1 || val2 - val1 < 1){
                
            motor_stop();
                
            }
            else{
                // loop for moving motor 
                while((val1 - val2)> 1){
                    motor_clockwise(); //takes a step each time in the clock wise direction
                }
                    
                
            }
        _delay(720); // there is a 12 min stop at the each iteration
       
        
        } 
        motor_reset();
        _delay(720); 
    }
}
void motor_clockwise(){
    TRISC = 0;  //Clearing this bit will make PORTC as output.
CCP1CON = 0x0F;  //configuring CCP1CON register for PWM mode
CCP2CON = 0x0F;
int i = 0;
T2CON = 0x04;  
PR2 = 255;
while(i<2)
{
char pw_sin[] = {0,25,50,74,98,120,141,162,180,197,212,225,236,244,250,253,255};
    for(int j = 0;j<16;j++){
CCPR1L = pw_sin[j];  //generated 75% duty cycle
CCPR2L = pw_sin[j];
TRISC = 0;
i ++ ;
 }
}    
}
void motor_reset(){
    PORTC = 0b00001100; 
}
void motor_stop(){
    PORTC = 0;
}


//
// reading the LDR
unsigned int adc1()
{
    unsigned int adcval;

    ADCON1=0xc0;                 
    ADCON0=0x85;                    //the three centre bits decide which line is selected - 000 - AN0
    while(GO_nDONE);                //wait until conversion is finished
    adcval=((ADRESH<<8)|(ADRESL));    //store the result
    adcval=(adcval/3)-1;

    return adcval;
}
// for taking the next input all we need to do is change the bit select register
unsigned int adc2()
{
    unsigned int adcval;

    ADCON1=0xc0;                    
    ADCON0=0x8D;                    //AN1
    while(GO_nDONE);                //wait until conversion is finished
    adcval=((ADRESH<<8)|(ADRESL));    //store the result
    adcval=(adcval/3)-1;

    return adcval;
}