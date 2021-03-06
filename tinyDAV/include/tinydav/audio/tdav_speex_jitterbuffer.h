/*
* Copyright (C) 2011 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tdav_speex_JitterBuffer.h
 * @brief Speex audio JitterBuffer Plugin
 *
 * @author Mamadou Diop <diopmamadou(at)doubango.org>
 */
#ifndef TINYDAV_SPEEX_JITTER_BUFFER_H
#define TINYDAV_SPEEX_JITTER_BUFFER_H

#include "tinydav_config.h"

#if HAVE_SPEEX_DSP && HAVE_SPEEX_JB

#include "tinymedia/tmedia_jitterbuffer.h"

TDAV_BEGIN_DECLS

extern const tmedia_jitterbuffer_plugin_def_t *tdav_speex_jitterbuffer_plugin_def_t;

TDAV_END_DECLS

#endif /* #if HAVE_SPEEX_DSP */

#endif /* TINYDAV_SPEEX_JITTER_BUFFER_H */
