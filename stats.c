#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

void emailAlerter()
{
    
}
void ledAlerter()
{
    
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    
}
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
