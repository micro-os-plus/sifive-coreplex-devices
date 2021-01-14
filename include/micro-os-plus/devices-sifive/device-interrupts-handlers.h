/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef SIFIVE_DEVICES_DEVICE_INTERRUPTS_HANDLERS_H_
#define SIFIVE_DEVICES_DEVICE_INTERRUPTS_HANDLERS_H_

// ----------------------------------------------------------------------------

#if defined(SIFIVE_FE310)
#include <micro-os-plus/devices-sifive/fe310/device-interrupts-handlers.h>
#elif defined(SIFIVE_E31ARTY)
#include <micro-os-plus/devices-sifive/arty/e31/device-interrupts-handlers.h>
#elif defined(SIFIVE_E51ARTY)
#include <micro-os-plus/devices-sifive/arty/e51/device-interrupts-handlers.h>
#else
#error "Unsupported device"
#endif

// ----------------------------------------------------------------------------

#endif /* SIFIVE_DEVICES_DEVICE_INTERRUPTS_HANDLERS_H_ */

// ----------------------------------------------------------------------------
