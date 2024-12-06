#ifndef _servocalibtest_main_H
#define _servocalibtest_main_H
#ifndef TOP_LEVEL_PREAMBLE_945698516_H
#define TOP_LEVEL_PREAMBLE_945698516_H
/*Correspondence: Range: [(5, 4), (5, 22)) -> Range: [(0, 0), (0, 18)) (verbatim=true; src=/home/foobar/FlyderBot/src/lib/Servo.lf)*/#include <servo.h>
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct servocalibtest_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int maxAngle;
    int angleInput;
    bool rising;
    int end[0]; // placeholder; MSVC does not compile empty structs
} servocalibtest_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;

} servo_angle_t;
#endif
