#ifndef _SERVO_H
#define _SERVO_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1165599213_H
#define TOP_LEVEL_PREAMBLE_1165599213_H
#include <servo.h>
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _servo_angle_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    _servo_angle_t* _lf_angle;
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    // width of -2 indicates that it is not a multiport.
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    int _lf_angle_width;
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    // Default input (in case it does not get connected)
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    _servo_angle_t _lf_default__angle;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    trigger_t _lf__angle;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _servo_self_t;
_servo_self_t* new__servo();
#endif // _SERVO_H
