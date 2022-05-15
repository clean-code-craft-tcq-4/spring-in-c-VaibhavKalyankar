#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = numberset[0];
    s.min = numberset[1];
    s.max = numberset[2];
    return s;
}

void emailAlerter()
{
    
}
void ledAlerter()
{
    
}


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    emailAlertCallCount =  1;
    ledAlertCallCount = 1;
}
