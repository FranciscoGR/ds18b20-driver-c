#include <stdio.h>
#include "pico/stdlib.h"

int main(void)
{
    stdio_init_all();

    // Espera activa a que el host abra el puerto serie USB.
    // Útil mientras depuramos: así no perdemos los primeros printf().
    while (!stdio_usb_connected()) {
        sleep_ms(100);
    }

    printf("DS18B20 driver - esqueleto de proyecto\n");
    printf("Pico 2 (RP2350) lista.\n");

    uint32_t contador = 0;

    while (true) {
        printf("Tick %lu\n", (unsigned long)contador++);
        sleep_ms(1000);
    }

    return 0;
}
