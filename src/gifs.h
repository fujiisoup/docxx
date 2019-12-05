/*
  gifs.h

  Copyright (c) 1996 Roland Wunderling, Malte Zoeckler
  Copyright (c) 2000 Dragos Acostachioaie

  This file is part of DOC++.

  DOC++ is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public
  License as published by the Free Software Foundation; either
  version 2 of the license, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public
  License along with this library; if not, write to the Free
  Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef _GIFS_H
#define _GIFS_H

static unsigned char blueBall[]={
 71, 73, 70, 56, 57, 97, 14,  0, 14,  0,165,  0,  0,255,255,255,128,123,
198, 70, 65,205, 15, 15,205,107, 98,205,  3,  0,214,  0,  0,254,  4,  0,
254,  7,  0,239,  6,  0,198,123,123,198,  6,  0,205, 19, 15,254, 48, 52,
254, 12,  7,254,  7,  0,231,  7,  0,156,139,168,254,164,198,254, 23, 15,
254,  0,  0,189,  4,  0,148, 19, 16,132, 36, 32,254, 14,  8,214,  0,  0,
132,  2,  0, 90,  3,  0,222,  3,  0,181,  6,  0, 99,  6,  0,189,  5,  0,
173,  0,  1, 90,  0,  0, 74, 15, 15,115,  3,  0,115,  4,  0, 74, 74, 74,
156,100, 98,205,  1,  0,107, 50, 49,140,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0, 33,249,  4,  1,  0,  0,  0,  0, 44,  0,  0,
  0,  0, 14,  0, 14,  0,  0,  6, 99, 64,128,112, 72, 44, 26,143,196,128,
 96, 48, 16,  4,142,132,130,193,112, 64, 36,  8, 69,197,194,192,104, 56,
 30,  9,136,130, 40, 48, 56, 34,146, 73,129, 82,177, 16,  7,  7, 71,227,
130,161, 64, 50,154,247,230,177, 89,112,238, 29,121, 67,  2, 20, 20, 30,
 31,119, 32, 33, 34, 68, 10, 21, 16, 21, 25, 35, 29, 36, 33, 37, 69, 38,
 39, 39, 26, 33,157, 40, 71, 10, 34, 26, 26, 34,151, 72,167,168, 68, 65,
  0, 59};

static unsigned char greyBall[]={
 71, 73, 70, 56, 57, 97, 14,  0, 14,  0,213,  0,  0,238,238,238,145,144,
155,117,116,136, 89, 89,116,134,133,148, 85, 85,115,100,100,136,101,100,
136, 95, 94,128, 79, 78,106,144,144,155, 82, 81,110,109,108,142,126,127,
155,105,104,139, 92, 91,124, 63, 62, 84,175,179,191,188,193,201,109,108,
142, 74, 74,101, 59, 58, 79, 61, 61, 77,118,117,149, 90, 89,118, 52, 52,
 71, 35, 35, 48, 87, 87,119, 72, 71, 97, 40, 39, 53, 75, 74,101, 69, 68,
 93, 35, 35, 48, 29, 29, 40, 53, 53, 67, 45, 45, 61, 30, 29, 40,101,101,
113,133,133,148, 42, 42, 57, 82, 82, 95,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0, 33,249,  4,  1,  0,  0,  0,  0, 44,  0,  0,
  0,  0, 14,  0, 14,  0,  0,  6, 99, 64,128,112, 72, 44, 26,143,196,128,
 96, 48, 16,  4,142,132,130,193,112, 64, 36,  8, 69,197,194,192,104, 56,
 30,  9,136,130, 40, 48, 56, 34,146, 73,129, 82,177, 16,  7,  7, 71,227,
130,161, 64, 50,154,247,230,177, 89,112,238, 29,121, 67,  2, 20, 20, 30,
 31,119, 32, 33, 34, 68, 10, 21, 16, 21, 25, 35, 29, 36, 33, 37, 69, 38,
 39, 39, 26, 33,157, 40, 71, 10, 34, 26, 26, 34,151, 72,167,168, 68, 65,
  0, 59};

#endif
