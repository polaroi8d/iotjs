/* Copyright 2017-present Samsung Electronics Co., Ltd. and other contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#if defined(__APPLE__)

#include "module/iotjs_module_pwm.h"
#include "iotjs_module_unimplemented.inl.h"

void iotjs_pwm_open_worker(uv_work_t* work_req) IOTJS_MODULE_UNIMPLEMENTED();
bool iotjs_pwm_set_period(iotjs_pwm_t* pwm) IOTJS_MODULE_UNIMPLEMENTED(false);
bool iotjs_pwm_set_dutycycle(iotjs_pwm_t* pwm)
    IOTJS_MODULE_UNIMPLEMENTED(false);
bool iotjs_pwm_set_enable(iotjs_pwm_t* pwm) IOTJS_MODULE_UNIMPLEMENTED(false);
bool iotjs_pwm_close(iotjs_pwm_t* pwm) IOTJS_MODULE_UNIMPLEMENTED(false);

#endif // __APPLE__
