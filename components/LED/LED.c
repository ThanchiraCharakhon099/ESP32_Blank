#include <stdio.h>
#include "LED.h"

#include "esp_log.h"

void on(void)
{
    ESP_LOGI("LED", "LED ON");
}

void off(void)
{
    ESP_LOGI("LED", "LED OFF");
}
