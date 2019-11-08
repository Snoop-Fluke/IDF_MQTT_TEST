
#ifndef PRJ_WIFI_MODULE
#define PRJ_WIFI_MODULE

#include "esp_event_loop.h"
#include "freertos/FreeRTOS.h"

#define WIFI_SSID "CM_RD_2F_2G"
#define WIFI_PASS "ilovecivicmedia"

void initialise_wifi(const char *running_partition_label);

#endif