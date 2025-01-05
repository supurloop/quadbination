/* --------------------------------------------------------------------------------------------- */
/* cspriteo.h                                                                                    */
/*                                                                                               */
/* Character sprite interface.                                                                   */
/*                                                                                               */
/* BSD-3-Clause License                                                                          */
/* Copyright 2024 Supurloop Software LLC                                                         */
/*                                                                                               */
/* Redistribution and use in source and binary forms, with or without modification, are          */
/* permitted provided that the following conditions are met:                                     */
/*                                                                                               */
/* 1. Redistributions of source code must retain the above copyright notice, this list of        */
/* conditions and the following disclaimer.                                                      */
/* 2. Redistributions in binary form must reproduce the above copyright notice, this list of     */
/* conditions and the following disclaimer in the documentation and/or other materials provided  */
/* with the distribution.                                                                        */
/* 3. Neither the name of the copyright holder nor the names of its contributors may be used to  */
/* endorse or promote products derived from this software without specific prior written         */
/* permission.                                                                                   */
/*                                                                                               */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS   */
/* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF               */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE    */
/* COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL      */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE */
/* GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED    */
/* AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING     */
/* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED  */
/* OF THE POSSIBILITY OF SUCH DAMAGE.                                                            */
/* --------------------------------------------------------------------------------------------- */
#ifndef CSPRITEO_H_INCLUDE
#define CSPRITEO_H_INCLUDE

#include <stdint.h>

#define CSPRITEO_VAR(sname, code) \
    uint8_t xcharoff_##sname; \
    uint8_t ycharoff_##sname; \
    uint8_t xcharoff_new_##sname; \
    uint8_t ycharoff_new_##sname; \
    uint8_t code_##sname = code; \
    uint8_t digit_##sname; \
    uint8_t masked_##sname; \
    uint8_t buttonCount_##sname; \
    uint8_t buttonCountLast_##sname; \
    uint8_t enabled_##sname; \

#define CSPRITE_XCHAROFF(sname) xcharoff_##sname
#define CSPRITE_YCHAROFF(sname) ycharoff_##sname
#define CSPRITE_YCHAROFF_NEW(sname) ycharoff_new_##sname
#define CSPRITE_BUTTON_COUNT(sname) buttonCount_##sname
#define CSPRITE_BUTTON_COUNT_LAST(sname) buttonCountLast_##sname
#define CSPRITE_ENABLED(sname) enabled_##sname
#define CSPRITE_DIGIT(sname) digit_##sname
#define CSPRITE_DELTA_COUNT(sname) deltaCount_##sname
#define CSPRITE_MASKED(sname) masked_##sname

#define CSPRITE_UNDRAW(sname) \
    if (CSPRITE_ENABLED(sname)) { \
    rows[ycharoff_##sname][xcharoff_##sname] = masked_##sname; }

#define CSPRITE_DRAW(sname) \
    if (CSPRITE_ENABLED(sname)) { \
    xcharoff_##sname = xcharoff_new_##sname; \
    ycharoff_##sname = ycharoff_new_##sname; \
    masked_##sname = rows[ycharoff_##sname][xcharoff_##sname]; \
    rows[ycharoff_##sname][xcharoff_##sname] = code_##sname; }

#endif /* CSPRITEO_H_INCLUDE */