#include "Arduino.h"
#include "timerD.h"
Timer::Timer(int startMillis, int delayMillis)
{
    _timer = startMillis;//set timer to start
    _delayMillis = delayMillis;//set delay in milliseconds
}
void Timer::setTimer(int startMillis, int delayMillis)
{
    _timer = startMillis; //set timer to start
    _delayMillis = delayMillis; //set delay in milliseconds
}
bool Timer::on() //the millis function will overflow at 49.7 days this has not been delt with
{
    
    if (_timer < millis()){
        while (_timer < millis()){
            _timer += _delayMillis;
        }
        return 1;
    }
    return 0;

}