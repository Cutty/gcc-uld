/* Configuration file for ARM BPABI targets using FDPIC.
   Copyright (C) 2016
   Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */


// Be sure to update t-bpabi-fdpic if changing default fdpic options.
#undef  SUBTARGET_EXTRA_LINK_SPEC
#define SUBTARGET_EXTRA_LINK_SPEC " %{!mno-fdpic: -m armelf_fdpiceabi} "

#undef  LINK_SPEC
#define LINK_SPEC BPABI_LINK_SPEC " %{!r:%{!mno-fdpic:-z now}}"

#ifdef  CC1_SPEC
#undef  CC1_SPEC
#endif
#define CC1_SPEC "%{!mno-fdpic:-mfdpic -fPIC}"
