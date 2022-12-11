What is this new palettes ordering ?
--------------------------------
The palettes ordering of this Gambatte Core has been done to allow the user to naviguate and choose his favorite palette in an easier way.

Note that there are 2 branchs with 2 different ordering :
 - This current one is an ordering of palettes by color (realistic_gb, blue, gray, green, inverted, multicolor, orange, pink, purple, red, yellow, others   )
- This alternative one is an ordering by kind (Basics, Colorize, Muted, Monochrome, Hardware, Game-Specific, Experimental, Extras)


Why ?
------
3 packs of palettes are included in Libretro Gambatte Core : 
- the original one
- a first pack of 200 palettes prefixed by "twb64" (made by TheWolfBunny64)  https://github.com/schmurtzm/gambatte-libretro/commit/119473f17adce512690d69f62651fa47fa4c95ca
- a second pack of 45 palettes prefixed by  "pixelshift" (made by PixelShift ) https://github.com/schmurtzm/gambatte-libretro/commit/15536214cdce31894d374b2ffa2494543057082b

The work on these palettes is awesome but due to the enormous number of palettes included in Gambatte core, it becomes very hard to naviagate, find and choose a palette for the user. 


How this palettes ordering has been done ?
------------------------------------------
This palette ordering is simply done by group of colors :
realistic_gb : This group is not really a color of course but a collection of palettes close to the original Game Boy screen.
blue : palettes with a dominant blue color
gray : palettes with a dominant blue color
green : palettes with a dominant blue color
inverted: this group contains particular palettes where colors seems inverted. Can be useful to have great contrast and for people with sight problems.
multicolor : this group contains particular palettes made of several different colors. Ideal for highlighting different elements in specific games.
orange : palettes with a dominant blue color
pink : palettes with a dominant blue color
purple : palettes with a dominant blue color
red : palettes with a dominant blue color
yellow : palettes with a dominant blue color
others : this group contains 128 others palettes which are similar to the ones in the groups. This is a kind of basket for the old original palettes which haven't been retain in the above color groups.


How this palettes ordering has been done ?
------------------------------------------
For each group all similar palettes have been reduced to one choice. The ojective was to have about 10 palettes by color group.
For nostalgic people, the majority of the old palettes are in the "Others" group, so if you miss one you' ll probably find it here.

To be categorized first a screenshot of each palette has been done (Credits Totofaki from Onion Team)
Then the software "Image Sorter" for PC has been used to order the colors in a easy way. https://visual-computing.com/project/imagesorter/
 === SCREENSHOT ===
the version 4.3 is available but give less handy results than the 2.02 that I recommend. https://imagesorter.fr.softonic.com/

Then for each color group each palettes which was similar to another one has been put in the "del" sub folder. Then all the del subfolders are joined in the "_Others" folder.
We removed some doublon again to keep 128 palettes in "others" section (which is the maximum of items in a libretro core option).
To avoid to create a second "Others" group about 60 palettes have been removed, you probably wont miss them due to their similarities with other ones.
Very few have been added by the Miyoo Mini / Onion community to fit with recent LCD of this kind of little handhelds.


How to use this new palette ordering ?
--------------------------------------
Like before there are two ways to navigate between palettes :
- By using core options
	1- select your current color group
	2- in the sub menu choose the palette in the current color group

- By using L & R during game session
it allows to défilate the palettes one by one. The current group is now displayed and the current index/total is a good indication to situate yourself.



