// Code generated by the Lingua Franca compiler from:
// file://home/foobar/FlyderBot/src/ServoCalibTest.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/foobar/FlyderBot/src-gen/ServoCalibTest"

#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
void _lf_set_default_command_line_options() {}
#include "_servo.h"
#include "_servocalibtest_main.h"
typedef enum {
    servocalibtest_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void _lf_create_environments() {
    environment_init(&envs[servocalibtest_main],servocalibtest_main,_lf_number_of_workers,1,1,0,0,0,0,0,NULL);
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
// No watchdogs found.
typedef void watchdog_t;
watchdog_t* _lf_watchdogs = NULL;
int _lf_watchdog_count = 0;
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _servocalibtest_main_main_self_t* servocalibtest_main_self[1];
    SUPPRESS_UNUSED_WARNING(servocalibtest_main_self);
    _servo_self_t* servocalibtest_servo_self[1];
    SUPPRESS_UNUSED_WARNING(servocalibtest_servo_self);
    // ***** Start initializing ServoCalibTest of class ServoCalibTest
    servocalibtest_main_self[0] = new__servocalibtest_main();
    servocalibtest_main_self[0]->base.environment = &envs[servocalibtest_main];
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    { // For scoping
        static int _initial = 180;
        servocalibtest_main_self[0]->maxAngle = _initial;
    } // End scoping.
    { // For scoping
        static int _initial = 0;
        servocalibtest_main_self[0]->angleInput = _initial;
    } // End scoping.
    { // For scoping
        static bool _initial = true;
        servocalibtest_main_self[0]->rising = _initial;
    } // End scoping.
    // Initiaizing timer ServoCalibTest.t.
    servocalibtest_main_self[0]->_lf__t.offset = 0;
    servocalibtest_main_self[0]->_lf__t.period = MSEC(200);
    // Associate timer with the environment of its parent
    envs[servocalibtest_main].timer_triggers[timer_triggers_count[servocalibtest_main]++] = &servocalibtest_main_self[0]->_lf__t;
    servocalibtest_main_self[0]->_lf__t.mode = NULL;
    
    servocalibtest_main_self[0]->_lf__reaction_0.deadline = NEVER;
    {
        // ***** Start initializing ServoCalibTest.servo of class Servo
        servocalibtest_servo_self[0] = new__servo();
        servocalibtest_servo_self[0]->base.environment = &envs[servocalibtest_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        servocalibtest_servo_self[0]->_lf_angle_width = -2;
        envs[servocalibtest_main].startup_reactions[startup_reaction_count[servocalibtest_main]++] = &servocalibtest_servo_self[0]->_lf__reaction_0;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        servocalibtest_servo_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing ServoCalibTest.servo
    }
    //***** End initializing ServoCalibTest
    // **** Start deferred initialize for ServoCalibTest
    {
    
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_0 of ServoCalibTest.
        servocalibtest_main_self[0]->_lf__reaction_0.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 0 of ServoCalibTest
    
        // **** Start deferred initialize for ServoCalibTest.servo
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ServoCalibTest.servo.
            servocalibtest_servo_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of ServoCalibTest.servo
        
        }
        // **** End of deferred initialize for ServoCalibTest.servo
    }
    // **** End of deferred initialize for ServoCalibTest
    // **** Start non-nested deferred initialize for ServoCalibTest
    
    
    
    // **** Start non-nested deferred initialize for ServoCalibTest.servo
    
    
    
    
    // **** End of non-nested deferred initialize for ServoCalibTest.servo
    // **** End of non-nested deferred initialize for ServoCalibTest
    // Connect inputs and outputs for reactor ServoCalibTest.
    // Connect inputs and outputs for reactor ServoCalibTest.servo.
    {
    }
    
    // Set reaction priorities for ReactorInstance ServoCalibTest
    {
        servocalibtest_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 0 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        servocalibtest_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
    
        // Set reaction priorities for ReactorInstance ServoCalibTest.servo
        {
            servocalibtest_servo_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            servocalibtest_servo_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        }
    
    }
    
    // Initialize the scheduler
    size_t num_reactions_per_level[1] = 
        {2};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 1};
    lf_sched_init(
        &envs[servocalibtest_main],
        envs[servocalibtest_main].num_workers,
        &sched_params
    );
    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble(&envs[0]);
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
}
void logical_tag_complete(tag_t tag_to_send) {
#ifdef FEDERATED_CENTRALIZED
        _lf_logical_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
#ifndef FEDERATED
void terminate_execution(environment_t* env) {}
#endif
