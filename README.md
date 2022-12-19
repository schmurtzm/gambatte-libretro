# Gambatte - Libretro Core - with 'palette style' color organisation
---------------------------------------------------------------------



What is this new palettes organization ?
--------------------------------

The palettes organization of this Gambatte Core has been done by Jeltron to allow the user to navigate and choose his favorite palette in an easier way.

Note that there are 2 branches with 2 different organization :
 - This current one is an organization by palette style (Essentials, Subtle, Single_Color, Multicolor, Hardware, Nintendo_Official, Extras, Others)

- [The organisation by color](https://github.com/schmurtzm/gambatte-libretro/tree/simple-color-organisation) is an organization of palettes by color (essentials, blue, brown, gray, green, inverted, multicolore, orange, pink, purple, red, yellow, others)


Why ?
------

3 packs of palettes are included in Libretro Gambatte Core : 
- the original one
- [a first pack of 200 palettes](https://github.com/schmurtzm/gambatte-libretro/commit/119473f17adce512690d69f62651fa47fa4c95ca) prefixed by "twb64" (made by TheWolfBunny64)  
- [a second pack of 45 palettes](https://github.com/schmurtzm/gambatte-libretro/commit/15536214cdce31894d374b2ffa2494543057082b) prefixed by  "pixelshift" (made by PixelShift ) 

The work on these palettes is awesome but due to the enormous number of palettes included in Gambatte core, it becomes very hard to navigate, find and choose a palette for the user. 


How this palettes style order is organized ?
------------------------------------------

This palette organization is simply done by categories of colors :
 - Essentials: Quick access to palettes that people most frequently want to use to do things like simulate DMG, GBC, bivert & grayscale.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/0_Essentials.jpg" height="200">  
 - Subtle: Palettes that are lower in saturation or contrast and create a nice effect that works across many games.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/1_Subtle.jpg" height="200">  
 - Single Color: Palettes that have one bright color. Palettes were selected to enable both having a solid background color and having a light background with the art itself appearing to be colored.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/2_Single_Color.jpg" height="250">  
 - Multicolor: Palettes that achieve a colorization effect for games. If you would like to feel like the game is full-color, this is best category to try. Contains palettes that work well with Mario, Wario, Kirby and other popular games.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/3_Multicolor.jpg" height="200">  
 - Hardware : Palettes which simulate different devices.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/4_Hardware.jpg" height="200">  
 - Nintendo Official: this category contains official Nintendo's palettes for GBC and SGB.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/5_Nintendo_Official.jpg" height="400">  
 - Extras : this category contains the palettes from [The simple color organisation](https://github.com/schmurtzm/gambatte-libretro/tree/simple-color-organisation) which have not been retained in this curated selection. This category is ordered by colors (realistic_gb, blue, brown, gray, green, inverted, multicolore, orange, pink, purple, red, yellow)
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/6_Extras.jpg" height="750">  
 - Others : this category contains other palettes which are similar to the ones in the previous categories. This is a kind of basket for the old original palettes which haven't been retain in the above selection.
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/advanced-color-organisation/palette%20-%20advanced%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/7_Others.jpg" height="950">  
 
 
How has the curation been done?
-------------------------------

For similar palettes, the best one has been chosen based on both readability and color ramping. All categories have been organized to progress through the color spectrum as best as can be managed starting with the color green.


For nostalgic people, the majority of the old palettes are in the "Extra" and "Others" categories, so if you miss one you'll probably find it here.

To be categorized first a screenshot of each palette has been done (Credits Totofaki from Onion Team)
How to use this new palette organization ?



How to use this new palette organization ?
--------------------------------------

Like before there are two ways to navigate between palettes :
- By using core options :


1- In `GB Coloorization` option, select `internal / user color categories`

2- select your current color category 

3- in the sub menu choose the palette in the current color category
 
 
 
 
> <img src="https://user-images.githubusercontent.com/7110113/207175246-4fb41321-6441-4006-93de-460cc78c1c08.png" height="350"> 

- By using L & R during game session :
it allows to scroll the palettes one by one. The current category is now displayed and the current index/total is a good indication to situate yourself.


--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
ORIGINAL README :
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

[![Build Status](https://travis-ci.org/libretro/gambatte-libretro.svg?branch=master)](https://travis-ci.org/libretro/gambatte-libretro)
[![Build status](https://ci.appveyor.com/api/projects/status/tejf7jniu1imotag/branch/master?svg=true)](https://ci.appveyor.com/project/bparker06/gambatte-libretro/branch/master)

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
Copyright (C) 2007 by Sindre Aamås
aamas@stud.ntnu.no

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License version 2 for more details.

You should have received a copy of the GNU General Public License
version 2 along with this program; if not, write to the
Free Software Foundation, Inc.,
59 Temple Place - Suite 330, Boston, MA  02111-1307, USA
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

About
--------------------------------------------------------------------------------
Gambatte is an accuracy-focused, open-source, cross-platform
Game Boy Color emulator written in C++. It is based on hundreds of
corner case hardware tests, as well as previous documentation and reverse
engineering efforts.

The core emulation code is contained in a separate library back-end
(libgambatte) written in platform-independent C++. There is currently a GUI
front-end (gambatte_qt) using Trolltech's Qt4 toolkit, and a simple command-line
SDL front-end (gambatte_sdl).

The GUI front-end contains platform-specific extensions for video, sound and
timers. It should work on MS Windows, Linux/BSD/UNIX-like OSes, and Mac OS X.

The SDL front-end should be usable on all platforms with a working SDL port. It
should also be quite trivial to create new (simple) front-ends (note that the
library API should in no way be considered stable).

Usage
--------------------------------------------------------------------------------
You will have to supply Gambatte with a ROM image file of the GB/GBC
program/game you'd like to run/play, either as a command-line argument to
gambatte_sdl, or through the File->Open... menu in gambatte_qt.

gambatte_sdl keyboard commands:
TAB    - fast-forward
Ctrl-f - toggle full screen
Ctrl-r - reset
F5     - save state
F6     - previous state slot
F7     - next state slot
F8     - load state
0 to 9 - select state slot 0 to 9

Default key mapping:
Up:     Up
Down:   Down
Left:   Left
Right:  Right
A:      D
B:      C
Start:  Return
Select: Shift

Compiling
--------------------------------------------------------------------------------
Building Gambatte from source code can be done by executing the
build_<qt/sdl>.sh scripts for the qt/sdl front-ends respectively, or by issueing
the correct build command (either 'scons' or 'qmake && make') in the top-level
subdirectories (libgambatte will have to be built first). The clean.sh script
can be executed to remove all generated files after a compile (including
binaries).

Requirements for building libgambatte:
- A decent C++ compiler (like g++ in the GNU Compiler Collection).
- SCons.
- optionally zlib

Requirements for building gambatte_sdl:
- A decent C++ compiler (like g++ in the GNU Compiler Collection).
- SDL headers and library.
- SCons.
(- libgambatte.)

Requirements for building gambatte_qt:
- A decent C++ compiler (like g++ in the GNU Compiler Collection).
- Qt4 (Core, GUI, OpenGL) headers and library.
- Qmake and make (GNU Make should work).
- Platform-specific requirements:
  * MS Windows:
    - Win32 API headers and libraries.
    - DirectSound and DirectDraw7 headers and libraries.
    - Direct3D9 headers
  * Linux/BSD/UNIX-like OSes:
    - POSIX/UNIX headers (unistd.h, fcntl.h, sys/ioctl.h, sys/time.h, sys/shm.h).
    - Open Sound System header (sys/soundcard.h).
    - X11 Xlib, XVideo, XRandR and XShm headers and libraries.
    - Alsa headers and library (Linux only).
  * Max OS X:
    - Recent Mac OS X SDK (Panther Xcode/SDK should work)
(- libgambatte.)

Installing after a compile simply amounts to copying the generated binary
(either gambatte_qt/bin/gambatte_qt<.exe> or gambatte_sdl/gambatte_sdl<.exe>)
to wherever you'd like to keep it.

Thanks
--------------------------------------------------------------------------------
Derek Liauw Kie Fa (Kreed)
Gilles Vollant
Jeff Frohwein
Jonathan Gevaryahu (Lord Nightmare)
kOOPa
Marat Fayzullin
Martin Korth (nocash)
Maxim Stepin (MaxSt)
Nach
Pan of Anthrox
Pascal Felber
Paul Robson
SDL
Shay Green (blargg)
The OpenGL Extension Wrangler Library

--------------------------------------------------------------------------------
Game Boy and Game Boy Color are registered trademarks of
Nintendo of America Inc.
Gambatte is not affiliated with or endorsed by any of the companies mentioned.

