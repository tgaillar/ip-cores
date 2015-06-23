/* -*- c++ -*- */
/*
 * Copyright 2003 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

/************************************************************************/
/** \file         delay.h
 *************************************************************************
 *  \brief        delay routines for Cypress EZ-USB FX2
 *  
 *  \details      provides functions for a 1 us and a 1 ms delay
 *
 *  \author       GNU Radio     
 */

#ifndef _DELAY_H_
#define _DELAY_H_

/**
 * delay for approximately usecs microseconds
 * \param[in] usecs number of microseconds  to wait
 * \warning limit of 255 usecs.
 */
void udelay (unsigned char usecs);

/**
 * delay for approximately msecs milliseconds
 * \param[in] msecs number of milliseconds to wait
 */
void mdelay (unsigned short msecs);


#endif /* _DELAY_H_ */
