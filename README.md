# Gambatte - Libretro Core - with simple color organisation for palettes
---------------------------------------------------------------------



What is this new palettes organization ?
--------------------------------

The palettes organization of this Gambatte Core has been done to allow the user to navigate and choose his favorite palette in an easier way.

Note that there are 2 branches with 2 different organization :
 - This current one is an organization of palettes by color (realistic_gb, blue, brown, gray, green, inverted, multicolore, orange, pink, purple, red, yellow, others)
- [The advanced color oraganisation](https://github.com/schmurtzm/gambatte-libretro/tree/advanced-color-organisation) is an organization by kind (Basics, Colorize, Muted, Monochrome, Hardware, Game-Specific, Experimental, Extras)


Why ?
------

3 packs of palettes are included in Libretro Gambatte Core : 
- the original one
- [a first pack of 200 palettes](https://github.com/schmurtzm/gambatte-libretro/commit/119473f17adce512690d69f62651fa47fa4c95ca) prefixed by "twb64" (made by TheWolfBunny64)  
- [a second pack of 45 palettes](https://github.com/schmurtzm/gambatte-libretro/commit/15536214cdce31894d374b2ffa2494543057082b) prefixed by  "pixelshift" (made by PixelShift ) 

The work on these palettes is awesome but due to the enormous number of palettes included in Gambatte core, it becomes very hard to navigate, find and choose a palette for the user. 


How this palettes organization is organized ?
------------------------------------------

This palette organization is simply done by categories of colors :
 - realistic_gb : This category is not really a color of course but a collection of palettes close to the original Game Boy screen.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/realistic_gb.jpg" height="200">  
 - blue : palettes with a dominant blue color
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/blue.jpg" height="200">  
 - brown : palettes with a dominant brown
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/brown.jpg" height="200">  
 - gray : palettes with a dominant gray color
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/gray.jpg" height="200">  
 - green : palettes with a dominant green color
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/green.jpg" height="200">  
 - inverted: this category contains particular palettes where colors seems inverted. Can be useful to have great contrast and for people with sight problems.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/inverted.jpg" height="200">  
 - multicolor : this category contains particular palettes made of several different colors. Ideal for highlighting different elements in specific games.
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/multicolor.jpg" height="200">  
 - orange : palettes with a dominant orange color
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/orange.jpg" height="200">  
 - pink : palettes with a dominant pink color
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/pink.jpg" height="200">  
 - purple : palettes with a dominant purple color
  > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/purple.jpg" height="200"> 
 - red : palettes with a dominant red color
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/red.jpg" height="200">  
 - yellow : palettes with a dominant yellow color
 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/yellow.jpg" height="200">  
 - others : this category contains 128 others palettes which are similar to the ones in the categories. This is a kind of basket for the old original palettes which haven't been retain in the above color categories.
> <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/02%20-%20New%20Palette%20Oganisation/__Preview%20Generator/preview/others.jpg" height="200">  

How this palettes organization has been done ?
------------------------------------------

For each category all similar palettes have been reduced to one choice. The ojective was to have about 10 palettes by color category.
For nostalgic people, the majority of the old palettes are in the "Others" category, so if you miss one you' ll probably find it here.

To be categorized first a screenshot of each palette has been done (Credits Totofaki from Onion Team)
Then the software "[Image Sorter](https://visual-computing.com/project/imagesorter/)" for PC has been used to order the colors in a easy way. 

 > <img src="https://raw.githubusercontent.com/schmurtzm/gambatte-libretro/simple-color-organisation/palette%20-%20simple%20color%20organisation/Color_Map_2.jpg" height="200">  

 
 
The version 4.3 is available but give less handy results than the [version 2.02](https://imagesorter.fr.softonic.com/) that I recommend. 

Then for each color category each palettes which was similar to another one has been put in the "del" sub folder. Then all the del subfolders are joined in the "_Others" folder.
We removed some doublon again to keep 128 palettes in "others" section (which is the maximum of items in a libretro core option).

To avoid to create a second "Others" category about 60 palettes have been removed, you probably wont miss them due to their similarities with other ones.
Very few have been added by the Miyoo Mini / Onion community to fit with recent LCD of this kind of little handhelds.


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

