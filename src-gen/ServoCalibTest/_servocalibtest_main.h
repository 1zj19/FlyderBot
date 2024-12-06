#ifndef _SERVOCALIBTEST_MAIN_H
#define _SERVOCALIBTEST_MAIN_H
#include "include/core/reactor.h"
#include "_servo.h"
#ifndef TOP_LEVEL_PREAMBLE_945698516_H
#define TOP_LEVEL_PREAMBLE_945698516_H
#include <servo.h>
#endif
typedef struct {
    struct self_base_t base;
    
    #line 10 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    int maxAngle;
    #line 11 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    int angleInput;
    #line 12 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    bool rising;
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    reaction_t _lf__reaction_0;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    trigger_t _lf__t;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    reaction_t* _lf__t_reactions[1];
} _servocalibtest_main_main_self_t;
_servocalibtest_main_main_self_t* new__servocalibtest_main();
#endif // _SERVOCALIBTEST_MAIN_H
