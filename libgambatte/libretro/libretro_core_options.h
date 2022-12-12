#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifndef HAVE_NO_LANGEXTRA
#include "libretro_core_options_intl.h"
#endif

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface 
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_v2_category option_cats_us[] = {
   {
      "gb_link",
      "Game Link",
      "Change networked Game Link (multiplayer) settings."
   },
   {
      "gb_colors",
      " > Color Categories",
      "Choose a palette from the color category you have selected above."
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_us[] = {
   {
      "gambatte_gb_colorization",
      "GB Colorization",
      NULL,
      "Enables colorization of Game Boy games. 'Auto' selects the 'best' (most colorful/appropriate) palette. 'GBC' selects game-specific Game Boy Color palette if defined, otherwise 'GBC - Dark Green'. 'SGB' selects game-specific Super Game Boy palette if defined, otherwise 'SGB - 1A'. 'internal / use color categories' uses 'Internal Palettes ordered by color categories' core option. 'Custom' loads user-created palette from system directory.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     "Auto" },
         { "GBC",      "GBC" },
         { "SGB",      "SGB" },
         { "internal", "internal / use color categories" },
         { "custom",   "custom / external file" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "gambatte_gb_internal_palette",
      "Current category color for palettes",
      NULL,
      "Select the color category you want and then select a palette from the color category of your choice below.",
      NULL,
      NULL,
      {
         { "Realistic GB",     NULL },       
         { "Blue",             NULL },
         { "Brown",            NULL },
         { "Gray",             NULL },
         { "Green",            NULL },
         { "Inverted",         NULL },
         { "Multicolor",       NULL },
         { "Orange",           NULL },
         { "Pink",             NULL },
         { "Purple",           NULL },
         { "Red",              NULL },
         { "Yellow",           NULL },
         { "Others",           NULL },
         { NULL, NULL },
      },
      "Realistic GB"
   },
   {
      "gambatte_gb_palette_realistic_gb",
      "Realistic GB",
      NULL,
      "Select a palette when 'color category' is set to 'Realistic GB'.",
      NULL,
      "gb_colors",
      {
         //realistic GB 
         { "Jeltron GB-DMG",               NULL },            //GB
         { "GB Old",               NULL  },
         { "GB - DMG",               NULL  },    // Original Game Boy
         { "Greenscale Ver.",               NULL  },
         { "GB New",               NULL  },
         { "GB Backlight Yellow Dark",               NULL  },
         { "Game.com Ver.",               NULL  },
         { "BGB 0.3 Emulator",               NULL  },
         { "Game Boy Pocket Alt",               NULL  },
         { "Pokemon mini Ver.",               NULL  },
         { "Pocket Ver.",                NULL  },
         { "Sky Pop Ivory",          NULL   },   //GB
         { "Camouflage",               NULL  },
         { "Hogwarts Goldius",             NULL   },	         // unicolor MARRON 
         { "Paris Gold",               NULL  },
         { "Superball Ivory",               NULL  },
         { "Lime Midori",               NULL  },
         { "Pokemon Pinball",          NULL   },    //GB
         { "SGB - 4D",               NULL  },
         { "SGB - 1B",               NULL  }, // (NB: don't think these
         { "SGB - 1E",               NULL  }, // codes...)
         { NULL, NULL },
      },
      "Jeltron GB-DMG"
   },
   {
      "gambatte_gb_palette_blue",
      "Blue",
      NULL,
      "Select a palette when 'color category' is set to 'Blue'.",
      NULL,
      "gb_colors",
      {
         { "Disney Dream Blue",                 NULL   },
         { "Doraemon Blue",                 NULL   },
         { "GB Backlight Blue",                 NULL   },
         { "Aquatic Iro",                 NULL   },
         { "TOKYO SKYTREE CLOUDY BLUE",                 NULL   },
         { "Sword Art Cyan",                 NULL   },
         { "Wish",                 NULL   },
         { "Blue Stripes Ver.",                 NULL   },
         { NULL, NULL },
      },
      "Aquatic Iro"
   },
   {
      "gambatte_gb_palette_brown",
      "Brown",
      NULL,
      "Select a palette when 'color category' is set to 'Brown'.",
      NULL,
      "gb_colors",
      {
         { "Chocolate Bar",               NULL   },
         { "DK Barrel Brown",               NULL   },
         { "Fruity Orange",               NULL   },
         { "Survey Corps Brown",               NULL   },
         { "Teyvat Brown",             NULL   },		         // unicolor MARRON
         { NULL, NULL },
      },
      "Chocolate Bar"
   },
   {
      "gambatte_gb_palette_gray",
      "Gray",
      NULL,
      "Select a palette when 'color category' is set to 'Gray'.",
      NULL,
      "gb_colors",
      {
         { "Newspaper",                NULL  },
         { "Microvision Ver.",                NULL  },
         { "Perfected Ultra Instinct",                NULL  },
         { "Tamagotchi Ver.",                NULL  },
         { "GB Backlight Faded",                NULL  },
         { "Grand Ivory",                NULL  },
         { "Game & Watch Ball",               NULL  },
         { "Silhouette",                NULL  },
         { "Game Pocket Computer",               NULL   },
         { NULL, NULL },
      },
      "Perfected Ultra Instinct"
   },



   {
      "gambatte_gb_palette_green",
      "Green",
      NULL,
      "Select a palette when 'color category' is set to 'Green'.",
      NULL,
      "gb_colors",
      {
            { "Gamate",               NULL   },
            { "Neon Green",               NULL   },
            //{ "Scarlett Green",               NULL   },
            { "Google Green",               NULL   },
            //{ "Irish Green",               NULL   },
            //{ "Xbox Green",               NULL  },   // almost yellow
            //{ "Legendary Super Saiyan",               NULL  },   // almost yellow
            { "Glow In The Dark",               NULL   },
            { "Supervision Ver.",               NULL   },
            { "VMU Ver.",               NULL   },
            { "GameKing Ver.",               NULL   },
            { "Jeltron Greenscale",         NULL },    //GB
            { "SGB - 3H",               NULL  },
            { "Lemon-Lime Green",               NULL   },
            //{ "Pocket Tales Ver.",               NULL   },   // almost yellow
            { "TI-83 Ver.",                NULL  },
           // { "Arctic Green",               NULL   },  // similar to TI83
         { NULL, NULL },
      },
      "Lemon-Lime Green"
   },
   {
      "gambatte_gb_palette_inverted",
      "Inverted",
      NULL,
      "Select a palette when 'color category' is set to 'Inverted'.",
      NULL,
      "gb_colors",
      {
         { "Arduboy",               NULL   },
         { "Pip-Boy",               NULL   },
         { "Nightvision Green",          NULL  },    //inverted
         { "MS-Dos",               NULL   },
         { "Tron",               NULL   },
         { "Virtual Vision",          NULL   },    //inverted
         { "SGB - 1G",               NULL   },
         { "Vulnerable Blue",             NULL   },		      // INVERTED BLUE
         { "SGB - 4G",               NULL   },
         { "SGB - 2G",               NULL   },
         { "SGB - 3G",               NULL   },
         { "GBC - Inverted",               NULL   },   // B + Right
         { NULL, NULL },
      },
      "Nightvision Green"
   },
   {
      "gambatte_gb_palette_multicolor",
      "Multicolor",
      NULL,
      "Select a palette when 'color category' is set to 'Multicolor'.",
      NULL,
      "gb_colors",
      {





         { "bandai namco tricolor",             NULL   },      // multicolor
         { "Funimation Melon", NULL },   //multicolor
         { "Vaporwave",               NULL   },

         { "Moonlight Vision",               NULL   },
         { "champion s tunic",             NULL   },           // multicolor
         { "Bikini Bottom Ver.",               NULL   },
         { "Retro Bogeda",               NULL   },
         { "Ryuuguu Sunset",             NULL   },             // multicolor yellow pink
         { "GBC - Pastel Mix",               NULL   }, // Down

         { "Super Famicom Suprem",             NULL   },       // multicolor
         { "NASCAR Ver.",               NULL   },
         { "Doraemon Tricolor",             NULL   },          // multicolor
         { "Christmas Ver.",               NULL   },
         { "Winter Christmas",          NULL   },  //multicolor
         { "Classy Christmas",          NULL   },  //multicolor
         { "SGB - 3A",               NULL   },

         { "SGB - 4A",               NULL   },
         { "Cotton Candy",               NULL   },
         { "Pocket Girl",               NULL   },
         { "SGB - 3C",               NULL   },
         { "JPop Idol Sherbet",            NULL   },           // multicolor pink blue

         //{ "Special 2",               NULL   },
         { NULL, NULL },
      },
      "bandai namco tricolor"
   },
   {
      "gambatte_gb_palette_orange",
      "Orange",
      NULL,
      "Select a palette when 'color category' is set to 'Orange'.",
      NULL,
      "gb_colors",
      {
         { "Cheetos",         NULL },
         { "Value Orange",               NULL   },
         { "Camouflage Ver.",               NULL   },
         { "SGB - 3E",               NULL   },
         { "GB Backlight Orange",               NULL   },
         { "Nijigasaki Yellow",               NULL   },
         { "Crunchyroll Orange",               NULL   },
         { "GBC - Orange",               NULL   },     // A + Down
         { "SGB - 2B",               NULL   },
         { NULL, NULL },
      },
      "Cheetos"
   },
   {
      "gambatte_gb_palette_pink",
      "Pink",
      NULL,
      "Select a palette when 'color category' is set to 'Pink'.",
      NULL,
      "gb_colors",
      {
         { "Muse Pink",               NULL   },
         { "Neon Pink",               NULL   },
         { "Barbie Pink",               NULL   },
         { "Susan G. Pink",               NULL   },
         { "Patrick Star Pink",               NULL   },
         { "Cardcaptor Pink",               NULL   },
         { "Sanrio Pink",               NULL   },
         { "Sakura Pink",               NULL   },
         { NULL, NULL },
      },
      "Sakura Pink"
   },
   {
      "gambatte_gb_palette_purple",
      "Purple",
      NULL,
      "Select a palette when 'color category' is set to 'Purple'.",
      NULL,
      "gb_colors",
      {
         { "Royal Blue",                 NULL   },
         { "Neon Purple",               NULL   },
         { "Liella Purple!",               NULL   },
         { "Advanced Indigo",             NULL   },            // unicolor Powerful purple
         { "Equestrian Purple",               NULL   },
         { "Yo-kai Purple",               NULL   },
         { "GB Backlight White ",  NULL   },
         { "Wisteria Murasaki",               NULL   },
         { "SGB - 4F",               NULL   },
         { "SGB - 4C",               NULL   },
         { NULL, NULL },
      },
      "Wisteria Murasaki"
   },
   {
      "gambatte_gb_palette_red",
      "Red",
      NULL,
      "Select a palette when 'color category' is set to 'Red'.",
      NULL,
      "gb_colors",
      {
         { "Phantom Red",               NULL   },
         { "Berserk Blood",               NULL   },
         { "Team Rocket Red",               NULL   },
         { "Straw Hat Red",               NULL   },
         { "Oni Aka",               NULL   },
         { "SGB - 1F",               NULL   },
         { NULL, NULL },
      },
      "Phantom Red"
   },
   {
      "gambatte_gb_palette_yellow",
      "Yellow",
      NULL,
      "Select a palette when 'color category' is set to 'Yellow'.",
      NULL,
      "gb_colors",
      {
         { "Yellow Banana",               NULL   },
         { "Odyssey Gold",               NULL   },
        // { "Kingdom Key Gold",          NULL   },    
         { "Builder Yellow",               NULL   },
         { "SpongeBob Yellow",               NULL   },
         { "Gold Bar",               NULL   },
         { "Sunburst",               NULL   },
         { "Golden Kiiro",               NULL   },
        
         { NULL, NULL },
      },
      "Yellow Banana"
   },

   /////////////////////////////////////===========================================================================================
   {
      "gambatte_gb_palette_others",
      "Others",
      NULL,
      "Select a palette when 'color category' is set to 'Others'.",
      NULL,
      "gb_colors",
      {
         // Maximum 128 items

         // realistic_gb
               { "SGB - 4H",               NULL   },
               { "Link's Awakening DX Ver.",               NULL   },
               { "Buttercup Green",               NULL   },
               { "Star Command Green",               NULL   },
               //{ "Ninja Turtle Green",               NULL   },
               { "Sailor Spinach Green",               NULL   },
               //{ "Dew Green",               NULL   },
               { "Yoshi Egg Green",               NULL   },
               //{ "Yo-kai Green",               NULL   },
               { "Golden Wild",               NULL   }, //green
               //{ "Swampy Ogre Green",               NULL   },
               { "Tokyo Midtown Ver.",               NULL   },
               { "DMG Ver.",               NULL   },
               //{ "Classic LCD",               NULL   },
               { "Gamebuino Classic Ver.",               NULL   },
               { "Nokia 3310 Ver.",               NULL   },

         // blue
               { "Google Blue",               NULL   },
               { "Glitchy Blue",               NULL   },
               //{ "Smurfy Blue",               NULL   },
               { "Super Saiyan Blue Evolved",               NULL   },
               { "Bobblun Blue",               NULL   },
               //{ "Yo-kai Blue",               NULL   },
               //{ "Miraitowa Blue",               NULL   },
               { "Aqours Blue",               NULL   },
               //{ "Fury Blue",               NULL   },
               //{ "HoloBlue",               NULL   },
               //{ "Neon Blue",               NULL   },
               //{ "ANA Sky Blue",               NULL   },
               { "Champion Blue",               NULL   },
               //{ "S.E.E.S. Blue",               NULL   },
               //{ "SEGA Tokyo Blue",               NULL   },
               //{ "Ticketmaster Azure",               NULL   },
               //{ "Pepsi Cola Blue",               NULL   },
               //{ "Sonic Mega Blue",               NULL   },
               //{ "Slime Blue",               NULL   },
               //{ "CINDERELLA Blue",               NULL   },
               { "Beijing Blue",               NULL   },
               //{ "Miku Blue",               NULL   },
               { "Super Saiyan Blue",               NULL   },
               { "Niconico Sea Green",               NULL   },
               { "GB - Light",               NULL   },  // Original Game Boy Light
               { "Bubbles Blue",               NULL   },
               { "SHINY Sky Blue",               NULL   },
               //{ "Ghostly Aoi",               NULL   },
               { "GBP Bivert",               NULL   },
               { "Mega Man V Ver.",               NULL   },
               { "Classic Blurple",               NULL   },
               { "Silver Shiro",               NULL   },
               { "GB - Pocket",               NULL   }, // Original Game Boy Pocket	
               { "765 Production Ver.",               NULL   },
               { "Game Master Ver.",               NULL   },
               { "PocketStation Ver.",               NULL   },
               { "GB Hunter",               NULL   },
               { "Olympic Silver",               NULL   },


         // gray
               { "Neo Geo Pocket Ver.",               NULL   }, // grey
               { "Anime Expo Ver.",               NULL   },
               { "GBC - Grayscale",               NULL   },  // B + Left
               { "SGB - 2H",               NULL   },
               //{ "WonderSwan Ver.",               NULL   },
               { "Pretty Guardian Gold",               NULL   },
               { "3DS Virtual Console Ver.",               NULL   },
               { "Game Boy Pocket",               NULL   },
               { "Digivice Ver.",               NULL   },// grey


         // green
               { "GB Kiosk",               NULL   },
               { "Evangelion Green",               NULL   },
               { "Cosmo Green",               NULL   },
               { "Shenron Green",               NULL   },
               //{ "Clover Green",               NULL   },
               { "Puyo Puyo Green",               NULL   },
               { "Gamate Ver.",               NULL   }, // green
               //{ "Green Banana",               NULL   },
               { "Bubblun Green",               NULL   },
               //{ "Game Awards Cyan",               NULL   },
               { "Deku Alpha Emerald",               NULL   },
               { "GB Washed Yellow Backlight",               NULL   },
               { "Easy Greens",               NULL   },
               { "Tea Midori",               NULL   },  // green lite
               { "Baja Blast Storm",               NULL   },
               //{ "Android Green",               NULL   },
               //{ "SideM Green",               NULL   },
               { "Light Ver.",               NULL   },
               { "Island Green",               NULL   },
               { "Game Boy Light",               NULL   },
               //{ "Plumbob Green",               NULL   },
               //{ "Mania Plus Green",               NULL  },
               //{ "Special 4 (TI-83 Legacy)",                NULL  },
               //{ "Olympic Gold",               NULL   },



         // inverted
         // multicolor
               { "SGB - 2D",               NULL   },
               { "Scooby-Doo Mystery Ver.",               NULL   },
               { "SGB - 2F",               NULL   },
               { "CMYK",               NULL   },
               { "Nintendo Switch Lite Ver.",               NULL   },
               { "Angry Volcano Ver.",               NULL   },
               { "Halloween Ver.",               NULL   },
               { "SGB - 1D",               NULL   }, // names -> leave as colour
               { "SGB - 3D",               NULL   },// multicolor green lite pink
               { "GBC - Dark Green",               NULL   }, // A + Right (default GBC)
               { "GBC - Red",               NULL   },        // A + Up
               { "GBC - Blue",               NULL   },       // Left
               { "GBC - Dark Blue",               NULL   },  // A + Left
               { "Special 3",               NULL   },
               { "GBC - Yellow",               NULL   },     // B + Down
               { "Gray Green Mix",               NULL   },
               { "Do The Dew Ver.",               NULL   },
               { "GBC - Green",               NULL   },      // Right
               { "Missingno",               NULL   },
               { "Technicolor",               NULL   },
               { "GBC - Brown",               NULL   },      // Up
               { "SGB - 3B",               NULL   },
               { "Gold Silver and Bronze",             NULL   },     // multicolor
               { "SGB - 2E",               NULL   },
               { "GBC - Dark Brown",               NULL   }, // B + Up
               { "Perfect Majin Emperor",             NULL   },      // multicolor salmon purple
               { "SGB - 3F",               NULL   },// multicolor purple pink
               { "GB Bootleg",               NULL   },
               { "GB Nuked",               NULL   },


         // orange
               { "SGB - 4E",               NULL   },
               { "Travel Wood",               NULL   },
               { "SGB - 2A",               NULL   },
               { "Labo Fawn",               NULL   },
               //{ "MILLION Yellow!",               NULL   },
               //{ "Google Yellow",               NULL   },
               { "SEIKO Timer Yellow",               NULL   },
               //{ "Neon Orange",               NULL   },
               //{ "Nijigasaki Orange",               NULL   },
               //{ "Dragon Ball Orange",               NULL   },
               //{ "Rockstar Orange",               NULL   },
               { "Eevee Brown",               NULL   },
               { "G4 Orange",               NULL   },
               { "Stone Orange",               NULL   },
               //{ "Game Grump Orange",               NULL   },
               //{ "Hokage Orange",               NULL   },
               //{ "Crash Orange",               NULL   },
               { "Nick Orange",               NULL   },
               //{ "Kakarot Orange",               NULL   },


         // pink

               { "Super Saiyan Rose",               NULL   },
               { "Super Star Pink",               NULL   },
               { "AKB48 Pink",               NULL   },
               { "Blossom Pink",               NULL   },
               { "Yo-kai Pink",               NULL   },
               { "PINK109",               NULL   },
               { "SGB - 1C",               NULL   }, // palettes have 'official'
               { "SGB - 2C",               NULL   },
               { "Ghost",               NULL   },
               { "Wanda Pink",               NULL   },
              //{ "Someity Pink",               NULL   },
               { "Bizarre Pink",               NULL   },
               { "Super Saiyan God",               NULL   },
               { "765PRO Pink",               NULL   }, // pink flashy
               { "Aegis Cherry",               NULL   },


         // purple
         // red
               { "Grapefruit",               NULL   },
               { "SGB - 4B",               NULL   },
               { "SGB - 1H",               NULL   },
               { "SGB - 1A",               NULL   }, // 1-A (default SGB)	
               //{ "Pokemon Ver.",               NULL   },
               { "Duracell Copper",               NULL   },
               { "Olympic Bronze",               NULL   },
               { "Google Red",               NULL   },
               //{ "Saint Snow Red",               NULL   },
               { "Pokedex Red",               NULL   },
               //{ "Pizza Hut Red",               NULL   },
               //{ "Neon Red",               NULL   },
               //{ "Coca-Cola Red",               NULL   },
               //{ "Virtual Boy Ver.",               NULL   },
               { "Virtual Boy",               NULL   },
               //{ "Mario Red",               NULL   },
               //{ "Fairy Tail Red",               NULL   },
               //{ "Wrestling Red",               NULL   },
               { "Autobot Red",               NULL   },
               //{ "Tokyo Red",               NULL   },


         // yellow
               { "Super Saiyan",               NULL   },
               { "Christmas Gold",               NULL   },
               { "Game and Gold",               NULL   },
               { "Super Saiyan 3",               NULL   },
               //{ "Famicom Disk Yellow",               NULL   },
               { "Neon Yellow",               NULL   },
               { "Investigation Yellow",               NULL   },
               //{ "MILLION LIVE GOLD!",               NULL   }, // yellow almost green
               { "Demon's Gold",               NULL   }, // yellow almost green
               //{ "Pac-Man Yellow",               NULL   },
               //{ "Pikachu Yellow",               NULL   },
               { "Special 1",               NULL   },
               { "GB Kiosk 2",               NULL   },
               //{ "BANDAI NAMCO Ver.",               NULL   }, //yellow /orange
            



         ///////////////////////////////////////////////////////////////////////////////////

         // { "Ultra Black",             NULL   },                // unicolor dark
         // { "NHK Silver Gray",             NULL   },            // unicolor dark
         // { "Steam Gray",             NULL   },                 // unicolor dark
         
         

        
         

         { NULL, NULL },
      },
      "GB - Light"
   },






   {
      "gambatte_gbc_color_correction",
      "Color Correction",
      NULL,
      "Adjusts output colors to match the display of real Game Boy Color hardware. 'GBC Only' ensures that correction will only be applied when playing Game Boy Color games, or when using a Game Boy Color palette to colorize a Game Boy game. 'Always' applies color correction to all content, and will produce unexpected/suboptimal results when using 'GB' or 'SGB' internal color palettes.",
      NULL,
      NULL,
      {
         { "GBC only", "GBC Only" },
         { "always",   "Always" },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "GBC only"
   },
   {
      "gambatte_gbc_color_correction_mode",
      "Color Correction Mode",
      NULL,
      "Specifies method used when performing color correction. 'Accurate' produces output almost indistinguishable from a real Game Boy Color LCD panel. 'Fast' merely darkens colors and reduces saturation, and may be used on low-end hardware if the 'Accurate' method is too slow.",
      NULL,
      NULL,
      {
         { "accurate", "Accurate" },
         { "fast",     "Fast" },
         { NULL, NULL },
      },
      "accurate"
   },
   {
      "gambatte_gbc_frontlight_position",
      "Color Correction - Frontlight Position",
      NULL,
      "Simulates the physical response of the Game Boy Color LCD panel when illuminated from different angles. 'Central' represents standard color reproduction. 'Above Screen' increases brightness. 'Below Screen' reduces brightness. This setting only applies when 'Color Correction Mode' is set to 'Accurate'.",
      NULL,
      NULL,
      {
         { "central",      "Central" },
         { "above screen", "Above Screen" },
         { "below screen", "Below Screen" },
         { NULL, NULL },
      },
      "central"
   },
   {
      "gambatte_dark_filter_level",
      "Dark Filter Level (%)",
      NULL,
      "Enable luminosity-based brightness reduction. May be used to avoid glare/eye strain when playing games with white backgrounds, which are intended for display on a non-backlit Game Boy Color and can therefore appear uncomfortably bright when viewed on a modern backlit screen.",
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_mix_frames",
      "Interframe Blending",
      NULL,
      "Simulates LCD ghosting effects. 'Simple' performs a 50:50 mix of the current and previous frames. 'LCD Ghosting' mimics natural LCD response times by combining multiple buffered frames. 'Simple' blending is required when playing games that rely on LCD ghosting for transparency effects (Wave Race, Ballistic, Chikyuu Kaihou Gun ZAS...).",
      NULL,
      NULL,
      {
         { "disabled",          NULL },
         { "mix",               "Simple" },
         { "lcd_ghosting",      "LCD Ghosting (Accurate)" },
         { "lcd_ghosting_fast", "LCD Ghosting (Fast)" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "gambatte_audio_resampler",
      "Audio Resampler",
      NULL,
      "Specify which algorithm to use when resampling generated audio (the Game Boy audio rate is limited only by its CPU write speed, such that 'native' frequencies are impractical on modern sound devices and must be downsampled). 'Sinc' produces the highest quality. 'Cosine' improves performance on low-end hardware.",
      NULL,
      NULL,
      {
         { "sinc", "Sinc" },
         { "cc",   "Cosine" },
         { NULL, NULL },
      },
#if (defined(PS2) || defined(PSP) || defined(VITA) || defined(_3DS) || defined(DINGUX))
      "cc"
#else
      "sinc"
#endif
   },
   {
      "gambatte_gb_hwmode",
      "Emulated Hardware (Restart Required)",
      NULL,
      "Specify which type of hardware to emulate. 'Auto' is recommended. Selecting 'GBA' unlocks extra features in certain 'GBA Enhanced' Game Boy Color games (Shantae, Wendy - Every Witch Way, Legend of Zelda: Oracle of Seasons/Ages...).",
      NULL,
      NULL,
      {
         { "Auto", NULL },
         { "GB",   NULL },
         { "GBC",  NULL },
         { "GBA",  NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "gambatte_gb_bootloader",
      "Use Official Bootloader (Restart Required)",
      NULL,
      "Enable support for official Game Boy and Game Boy Color bootloaders, with corresponding start-up logo animations.",
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "gambatte_up_down_allowed",
      "Allow Opposing Directions",
      NULL,
      "Enabling this will allow pressing/quickly alternating/holding both left and right (or up and down) directions at the same time. This may cause movement-based glitches.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "gambatte_turbo_period",
      "Turbo Button Period",
      NULL,
      "Specify the repeat interval (in frames) when holding down the Turbo A/B buttons.",
      NULL,
      NULL,
      {
         { "4",   NULL },
         { "5",   NULL },
         { "6",   NULL },
         { "7",   NULL },
         { "8",   NULL },
         { "9",   NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { "41",  NULL },
         { "42",  NULL },
         { "43",  NULL },
         { "44",  NULL },
         { "45",  NULL },
         { "46",  NULL },
         { "47",  NULL },
         { "48",  NULL },
         { "49",  NULL },
         { "50",  NULL },
         { "51",  NULL },
         { "52",  NULL },
         { "53",  NULL },
         { "54",  NULL },
         { "55",  NULL },
         { "56",  NULL },
         { "57",  NULL },
         { "58",  NULL },
         { "59",  NULL },
         { "60",  NULL },
         { "61",  NULL },
         { "62",  NULL },
         { "63",  NULL },
         { "64",  NULL },
         { "65",  NULL },
         { "66",  NULL },
         { "67",  NULL },
         { "68",  NULL },
         { "69",  NULL },
         { "70",  NULL },
         { "71",  NULL },
         { "72",  NULL },
         { "73",  NULL },
         { "74",  NULL },
         { "75",  NULL },
         { "76",  NULL },
         { "77",  NULL },
         { "78",  NULL },
         { "79",  NULL },
         { "80",  NULL },
         { "81",  NULL },
         { "82",  NULL },
         { "83",  NULL },
         { "84",  NULL },
         { "85",  NULL },
         { "86",  NULL },
         { "87",  NULL },
         { "88",  NULL },
         { "89",  NULL },
         { "90",  NULL },
         { "91",  NULL },
         { "92",  NULL },
         { "93",  NULL },
         { "94",  NULL },
         { "95",  NULL },
         { "96",  NULL },
         { "97",  NULL },
         { "98",  NULL },
         { "99",  NULL },
         { "100", NULL },
         { "101", NULL },
         { "102", NULL },
         { "103", NULL },
         { "104", NULL },
         { "105", NULL },
         { "106", NULL },
         { "107", NULL },
         { "108", NULL },
         { "109", NULL },
         { "110", NULL },
         { "111", NULL },
         { "112", NULL },
         { "113", NULL },
         { "114", NULL },
         { "115", NULL },
         { "116", NULL },
         { "117", NULL },
         { "118", NULL },
         { "119", NULL },
         { "120", NULL },
         { NULL, NULL },
      },
      "4"
   },
   {
      "gambatte_rumble_level",
      "Controller Rumble Strength",
      NULL,
      "Enables haptic feedback effects for supported games (Pokemon Pinball, Perfect Dark...).",
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "10"
   },
#ifdef HAVE_NETWORK
   {
      "gambatte_show_gb_link_settings",
      "Show Game Link Settings",
      NULL,
      "Enable configuration of networked Game Link (multiplayer) options. NOTE: Quick Menu may need to be toggled for this setting to take effect.",
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "gambatte_gb_link_mode",
      "Game Link Mode",
      "Link Mode",
      "When enabling networked Game Link functionality, specify whether current instance should run as a server or client.",
      NULL,
      "gb_link",
      {
         { "Not Connected",  NULL },
         { "Network Server", NULL },
         { "Network Client", NULL },
         { NULL, NULL },
      },
      "Not Connected"
   },
   {
      "gambatte_gb_link_network_port",
      "Network Link Port",
      "Port",
      "Specify port used for Game Link network communication.",
      NULL,
      "gb_link",
      {
         { "56400", NULL },
         { "56401", NULL },
         { "56402", NULL },
         { "56403", NULL },
         { "56404", NULL },
         { "56405", NULL },
         { "56406", NULL },
         { "56407", NULL },
         { "56408", NULL },
         { "56409", NULL },
         { "56410", NULL },
         { "56411", NULL },
         { "56412", NULL },
         { "56413", NULL },
         { "56414", NULL },
         { "56415", NULL },
         { "56416", NULL },
         { "56417", NULL },
         { "56418", NULL },
         { "56419", NULL },
         { "56420", NULL },
         { NULL, NULL },
      },
      "56400"
   },
   {
      "gambatte_gb_link_network_server_ip_1",
      "Network Link Server Address Pt. 01: x__.___.___.___",
      "Server Address Pt. 01: x__.___.___.___",
      "1st digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "1st digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_2",
      "Network Link Server Address Pt. 02: _x_.___.___.___",
      "Server Address Pt. 02: _x_.___.___.___",
      "2nd digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "2nd digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_3",
      "Network Link Server Address Pt. 03: __x.___.___.___",
      "Server Address Pt. 03: __x.___.___.___",
      "3rd digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "3rd digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_4",
      "Network Link Server Address Pt. 04: ___.x__.___.___",
      "Server Address Pt. 04: ___.x__.___.___",
      "4th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "4th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_5",
      "Network Link Server Address Pt. 05: ___._x_.___.___",
      "Server Address Pt. 05: ___._x_.___.___",
      "5th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "5th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_6",
      "Network Link Server Address Pt. 06: ___.__x.___.___",
      "Server Address Pt. 06: ___.__x.___.___",
      "6th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "6th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_7",
      "Network Link Server Address Pt. 07: ___.___.x__.___",
      "Server Address Pt. 07: ___.___.x__.___",
      "7th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "7th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_8",
      "Network Link Server Address Pt. 08: ___.___._x_.___",
      "Server Address Pt. 08: ___.___._x_.___",
      "8th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "8th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_9",
      "Network Link Server Address Pt. 09: ___.___.__x.___",
      "Server Address Pt. 09: ___.___.__x.___",
      "9th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "9th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_10",
      "Network Link Server Address Pt. 10: ___.___.___.x__",
      "Server Address Pt. 10: ___.___.___.x__",
      "10th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "10th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_11",
      "Network Link Server Address Pt. 11: ___.___.___._x_",
      "Server Address Pt. 11: ___.___.___._x_",
      "11th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "11th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "gambatte_gb_link_network_server_ip_12",
      "Network Link Server Address Pt. 12: ___.___.___.__x",
      "Server Address Pt. 12: ___.___.___.__x",
      "12th digit of remote Game Link network server IP address. Only used when 'Game Link Mode' is set to 'Network Client'.",
      "12th digit of remote Game Link network server IP address. Only used when 'Link Mode' is set to 'Network Client'.",
      "gb_link",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "0"
   },
#endif
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_us = {
   option_cats_us,
   option_defs_us
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

#ifndef HAVE_NO_LANGEXTRA
struct retro_core_options_v2 *options_intl[RETRO_LANGUAGE_LAST] = {
   &options_us,    /* RETRO_LANGUAGE_ENGLISH */
   // &options_ja,    /* RETRO_LANGUAGE_JAPANESE */
   // &options_fr,    /* RETRO_LANGUAGE_FRENCH */
   // &options_es,    /* RETRO_LANGUAGE_SPANISH */
   // &options_de,    /* RETRO_LANGUAGE_GERMAN */
   // &options_it,    /* RETRO_LANGUAGE_ITALIAN */
   // &options_nl,    /* RETRO_LANGUAGE_DUTCH */
   // &options_pt_br, /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   // &options_pt_pt, /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   // &options_ru,    /* RETRO_LANGUAGE_RUSSIAN */
   // &options_ko,    /* RETRO_LANGUAGE_KOREAN */
   // &options_cht,   /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   // &options_chs,   /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   // &options_eo,    /* RETRO_LANGUAGE_ESPERANTO */
   // &options_pl,    /* RETRO_LANGUAGE_POLISH */
   // &options_vn,    /* RETRO_LANGUAGE_VIETNAMESE */
   // &options_ar,    /* RETRO_LANGUAGE_ARABIC */
   // &options_el,    /* RETRO_LANGUAGE_GREEK */
   // &options_tr,    /* RETRO_LANGUAGE_TURKISH */
   // &options_sk,    /* RETRO_LANGUAGE_SLOVAK */
   // &options_fa,    /* RETRO_LANGUAGE_PERSIAN */
   // &options_he,    /* RETRO_LANGUAGE_HEBREW */
   // &options_ast,   /* RETRO_LANGUAGE_ASTURIAN */
   // &options_fi,    /* RETRO_LANGUAGE_FINNISH */
   // &options_id,    /* RETRO_LANGUAGE_INDONESIAN */
   // &options_sv,    /* RETRO_LANGUAGE_SWEDISH */
   // &options_uk,    /* RETRO_LANGUAGE_UKRAINIAN */
};
#endif

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb,
      bool *categories_supported)
{
   unsigned version  = 0;
#ifndef HAVE_NO_LANGEXTRA
   unsigned language = 0;
#endif

   if (!environ_cb || !categories_supported)
      return;

   *categories_supported = false;

   if (!environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version))
      version = 0;

   if (version >= 2)
   {
#ifndef HAVE_NO_LANGEXTRA
      struct retro_core_options_v2_intl core_options_intl;

      core_options_intl.us    = &options_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = options_intl[language];

      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2_INTL,
            &core_options_intl);
#else
      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2,
            &options_us);
#endif
   }
   else
   {
      size_t i, j;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_core_option_definition
            *option_v1_defs_us         = NULL;
#ifndef HAVE_NO_LANGEXTRA
      size_t num_options_intl          = 0;
      struct retro_core_option_v2_definition
            *option_defs_intl          = NULL;
      struct retro_core_option_definition
            *option_v1_defs_intl       = NULL;
      struct retro_core_options_intl
            core_options_v1_intl;
#endif
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine total number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      if (version >= 1)
      {
         /* Allocate US array */
         option_v1_defs_us = (struct retro_core_option_definition *)
               calloc(num_options + 1, sizeof(struct retro_core_option_definition));

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            struct retro_core_option_v2_definition *option_def_us = &option_defs_us[i];
            struct retro_core_option_value *option_values         = option_def_us->values;
            struct retro_core_option_definition *option_v1_def_us = &option_v1_defs_us[i];
            struct retro_core_option_value *option_v1_values      = option_v1_def_us->values;

            option_v1_def_us->key           = option_def_us->key;
            option_v1_def_us->desc          = option_def_us->desc;
            option_v1_def_us->info          = option_def_us->info;
            option_v1_def_us->default_value = option_def_us->default_value;

            /* Values must be copied individually... */
            while (option_values->value)
            {
               option_v1_values->value = option_values->value;
               option_v1_values->label = option_values->label;

               option_values++;
               option_v1_values++;
            }
         }

#ifndef HAVE_NO_LANGEXTRA
         if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
             (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH) &&
             options_intl[language])
            option_defs_intl = options_intl[language]->definitions;

         if (option_defs_intl)
         {
            /* Determine number of intl options */
            while (true)
            {
               if (option_defs_intl[num_options_intl].key)
                  num_options_intl++;
               else
                  break;
            }

            /* Allocate intl array */
            option_v1_defs_intl = (struct retro_core_option_definition *)
                  calloc(num_options_intl + 1, sizeof(struct retro_core_option_definition));

            /* Copy parameters from option_defs_intl array */
            for (i = 0; i < num_options_intl; i++)
            {
               struct retro_core_option_v2_definition *option_def_intl = &option_defs_intl[i];
               struct retro_core_option_value *option_values           = option_def_intl->values;
               struct retro_core_option_definition *option_v1_def_intl = &option_v1_defs_intl[i];
               struct retro_core_option_value *option_v1_values        = option_v1_def_intl->values;

               option_v1_def_intl->key           = option_def_intl->key;
               option_v1_def_intl->desc          = option_def_intl->desc;
               option_v1_def_intl->info          = option_def_intl->info;
               option_v1_def_intl->default_value = option_def_intl->default_value;

               /* Values must be copied individually... */
               while (option_values->value)
               {
                  option_v1_values->value = option_values->value;
                  option_v1_values->label = option_values->label;

                  option_values++;
                  option_v1_values++;
               }
            }
         }

         core_options_v1_intl.us    = option_v1_defs_us;
         core_options_v1_intl.local = option_v1_defs_intl;

         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_v1_intl);
#else
         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS, option_v1_defs_us);
#endif
      }
      else
      {
         /* Allocate arrays */
         variables  = (struct retro_variable *)calloc(num_options + 1,
               sizeof(struct retro_variable));
         values_buf = (char **)calloc(num_options, sizeof(char *));

         if (!variables || !values_buf)
            goto error;

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            const char *key                        = option_defs_us[i].key;
            const char *desc                       = option_defs_us[i].desc;
            const char *default_value              = option_defs_us[i].default_value;
            struct retro_core_option_value *values = option_defs_us[i].values;
            size_t buf_len                         = 3;
            size_t default_index                   = 0;

            values_buf[i] = NULL;

            /* Skip options that are irrelevant when using the
             * old style core options interface */
            if (strcmp(key, "gambatte_show_gb_link_settings") == 0)
               continue;

            if (desc)
            {
               size_t num_values = 0;

               /* Determine number of values */
               while (true)
               {
                  if (values[num_values].value)
                  {
                     /* Check if this is the default value */
                     if (default_value)
                        if (strcmp(values[num_values].value, default_value) == 0)
                           default_index = num_values;

                     buf_len += strlen(values[num_values].value);
                     num_values++;
                  }
                  else
                     break;
               }

               /* Build values string */
               if (num_values > 0)
               {
                  buf_len += num_values - 1;
                  buf_len += strlen(desc);

                  values_buf[i] = (char *)calloc(buf_len, sizeof(char));
                  if (!values_buf[i])
                     goto error;

                  strcpy(values_buf[i], desc);
                  strcat(values_buf[i], "; ");

                  /* Default value goes first */
                  strcat(values_buf[i], values[default_index].value);

                  /* Add remaining values */
                  for (j = 0; j < num_values; j++)
                  {
                     if (j != default_index)
                     {
                        strcat(values_buf[i], "|");
                        strcat(values_buf[i], values[j].value);
                     }
                  }
               }
            }

            variables[option_index].key   = key;
            variables[option_index].value = values_buf[i];
            option_index++;
         }

         /* Set variables */
         environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);
      }

error:
      /* Clean up */

      if (option_v1_defs_us)
      {
         free(option_v1_defs_us);
         option_v1_defs_us = NULL;
      }

#ifndef HAVE_NO_LANGEXTRA
      if (option_v1_defs_intl)
      {
         free(option_v1_defs_intl);
         option_v1_defs_intl = NULL;
      }
#endif

      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif

