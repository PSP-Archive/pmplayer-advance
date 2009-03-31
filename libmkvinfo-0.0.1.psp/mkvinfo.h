/* 
 *	Copyright (C) 2009 cooleyes
 *	eyes.cooleyes@gmail.com 
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */
 
#ifndef __MKVINFO_H__
#define __MKVINFO_H__

#include "mkvinfo_type.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

mkvinfo_t* mkvinfo_open(const char* filename);
void mkvinfo_close(mkvinfo_t* info);

void mkvinfo_dump(mkvinfo_t* info, const char* dumpfile);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif