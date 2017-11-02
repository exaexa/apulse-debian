/*
 * Copyright © 2014-2017  Rinat Ibragimov
 *
 * This file is part of "apulse" project.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef APULSE__UTIL_H
#define APULSE__UTIL_H

#include <pulse/pulseaudio.h>
#include <asoundlib.h>


int
pa_format_to_alsa(pa_sample_format_t format);

pa_sample_format_t
pa_sample_format_from_string(const char *str);

/// finds largest number that is less or equal than |number| and multiple of |multiple_of|.
size_t
pa_find_multiple_of(size_t number, size_t multiple_of, int towards_larger_numbers);

void
pa_apply_volume_multiplier(void *buf, size_t sz, const pa_volume_t volume[PA_CHANNELS_MAX],
                           const pa_sample_spec *ss);

#endif // APULSE__UTIL_H
