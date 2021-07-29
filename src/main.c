#include "stm32f429xx.h"



int main() {
RCC->AHB1ENR |= RCC_AHB1ENR_GPIOGEN;
GPIOG->MODER |= GPIO_MODER_MODE13_0 | GPIO_MODER_MODE14_0;
volatile int countdown = 1000000;
 while (1 == 1) {   
    while(countdown > 0) {
        countdown--;
    }
    countdown = 1000000;
    GPIOG->ODR ^= (1<<13 | 1<<14); 
    }
    return 1;
}

