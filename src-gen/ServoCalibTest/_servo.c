#include "include/api/api.h"
#include "include/Servo/Servo.h"
#include "_servo.h"
// ***** Start of method declarations.
void _servo_method_set_angle(void* instance_args, /*undefined*/ angle);
#define set_angle(...) _servo_method_set_angle(self, ##__VA_ARGS__)
#line 16 "/home/foobar/FlyderBot/src/lib/Servo.lf"
// Implementation of method set_angle()
void _servo_method_set_angle(void* instance_args, /*undefined*/ angle) {
    _servo_self_t* self = (_servo_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    #line 17 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    servo_set_angle(angle);
}
#undef set_angle
// ***** End of method declarations.
#include "include/api/set.h"
#define set_angle(...) _servo_method_set_angle(self, ##__VA_ARGS__)
void _servoreaction_function_0(void* instance_args) {
    _servo_self_t* self = (_servo_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 13 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    servo_init();
}
#undef set_angle
#include "include/api/set_undef.h"
_servo_self_t* new__servo() {
    _servo_self_t* self = (_servo_self_t*)_lf_new_reactor(sizeof(_servo_self_t));
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    // Set input by default to an always absent default input.
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf_angle = &self->_lf_default__angle;
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    // Set the default source reactor pointer
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf_default__angle._base.source_reactor = (self_base_t*)self;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.number = 0;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.function = _servoreaction_function_0;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.self = self;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.name = "?";
    #line 12 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__reaction_0.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__angle.last = NULL;
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    self->_lf__angle.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 10 "/home/foobar/FlyderBot/src/lib/Servo.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__angle.tmplt.type.element_size = sizeof(int);
    return self;
}
