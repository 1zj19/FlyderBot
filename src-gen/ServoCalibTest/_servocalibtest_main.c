#include "include/api/api.h"
#include "include/ServoCalibTest/ServoCalibTest.h"
#include "_servocalibtest_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _servocalibtest_mainreaction_function_0(void* instance_args) {
    _servocalibtest_main_main_self_t* self = (_servocalibtest_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 15 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    if (rising) {
        if (self->angleInput < 180) {
            lf_set(servo.angle, self->angleInput);
            self->angleInput++;
        } else {
            self->rising = false
        }
    } else {
        if (self->angleInput > 0) {
            lf_set(servo.angle, self->angleInput);
            self->angleInput--;
        } else {
            self->rising =true;
        }
    }
}
#include "include/api/set_undef.h"
_servocalibtest_main_main_self_t* new__servocalibtest_main() {
    _servocalibtest_main_main_self_t* self = (_servocalibtest_main_main_self_t*)_lf_new_reactor(sizeof(_servocalibtest_main_main_self_t));
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.number = 0;
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.function = _servocalibtest_mainreaction_function_0;
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.self = self;
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.name = "?";
    #line 14 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__t.last = NULL;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    #ifdef FEDERATED
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 9 "/home/foobar/FlyderBot/src/ServoCalibTest.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
