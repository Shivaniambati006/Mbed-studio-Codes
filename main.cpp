#include "mbed.h"

AnalogIn touch_slider(A0);   // replace A0 with your slider pin

int main() {
    while (true) {
        float value = touch_slider.read();   // range 0.0 to 1.0
        printf("Touch slider value: %.3f\n", value);

        ThisThread::sleep_for(200ms);
    }
}
