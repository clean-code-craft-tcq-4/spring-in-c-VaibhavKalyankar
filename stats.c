#include "stats.h"
#include <stdio.h>

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int total=0;
    
    if(numberset != NULL)
    {
        s.min = numberset[0];
        s.max = numberset[0];
           for (int i=0;i<setlength;i++)
           {
               printf("numberset[i]=%f",numberset[i]);
               total = total + numberset[i];
                if(numberset[i] > s.max)
                    s.max = numberset[i];

                if(numberset[i] < s.min)
                    s.min = numberset[i];
           }



        s.average = (total/setlength);
    }
    else
    {
         computedStats.average = NAN;
        computedStats.max = NAN;
        computedStats.min = NAN;
        
    }
    
    //s.max = numberset[2];
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
