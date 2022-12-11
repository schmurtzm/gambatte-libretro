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
      " > Color Groups",
      "Choose a palette in the color group you have selected upside."
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_us[] = {
   {
      "gambatte_gb_colorization",
      "GB Colorization",
      NULL,
      "Enables colorization of Game Boy games. 'Auto' selects the 'best' (most colorful/appropriate) palette. 'GBC' selects game-specific Game Boy Color palette if defined, otherwise 'GBC - Dark Green'. 'SGB' selects game-specific Super Game Boy palette if defined, otherwise 'SGB - 1A'. 'internal / use color groups' uses 'Internal Palettes ordered by color groups' core option. 'Custom' loads user-created palette from system directory.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     "Auto" },
         { "GBC",      "GBC" },
         { "SGB",      "SGB" },
         { "internal", "internal / use color groups" },
         { "custom",   "custom / external file" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "gambatte_gb_internal_palette",
      "Current group color palette",
      NULL,
      "Select the main palette color group you want then select a palette in the color group of your choice below.",
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
      "Select a palette when 'group color' is set to 'Realistic GB'.",
      NULL,
      "gb_colors",
      {
         //realistic GB 
         { "Jeltron GB-DMG",               NULL },            //GB
         { "PixelShift 26 - GB Old",               NULL  },
         { "GB - DMG",               NULL  },    // Original Game Boy
         { "TWB64 022 - Greenscale Ver.",               NULL  },
         { "PixelShift 24 - GB New",               NULL  },
         { "PixelShift 19 - GB Backlight Yellow Dark",               NULL  },
         { "TWB64 028 - Game.com Ver.",               NULL  },
         { "PixelShift 03 - BGB 0.3 Emulator",               NULL  },
         { "PixelShift 12 - Game Boy Pocket Alt",               NULL  },
         { "TWB64 038 - Pokemon mini Ver.",               NULL  },
         { "TWB64 041 - Pocket Ver.",                NULL  },
         { "Sky Pop Ivory",          NULL   },   //GB
         { "PixelShift 04 - Camouflage",               NULL  },
         { "Hogwarts Goldius",             NULL   },	         // unicolor MARRON 
         { "TWB64 135 - Paris Gold",               NULL  },
         { "TWB64 017 - Superball Ivory",               NULL  },
         { "TWB64 127 - Lime Midori",               NULL  },
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
      "Select a palette when 'group color' is set to 'Blue'.",
      NULL,
      "gb_colors",
      {
         { "TWB64 157 - Disney Dream Blue",                 NULL   },
         { "TWB64 183 - Doraemon Blue",                 NULL   },
         { "PixelShift 15 - GB Backlight Blue",                 NULL   },
         { "TWB64 097 - Sword Art Cyan",                 NULL   },
         { "TWB64 111 - Aquatic Iro",                 NULL   },
         { "PixelShift 45 - Wish",                 NULL   },
         { "TWB64 099 - Blue Stripes Ver.",                 NULL   },
         { "TWB64 200 - TOKYO SKYTREE CLOUDY BLUE",                 NULL   },
         { NULL, NULL },
      },
      "TWB64 157 - Disney Dream Blue"
   },
   {
      "gambatte_gb_palette_brown",
      "Brown",
      NULL,
      "Select a palette when 'group color' is set to 'Brown'.",
      NULL,
      "gb_colors",
      {
         { "TWB64 194 - DK Barrel Brown",               NULL   },
         { "TWB64 122 - Survey Corps Brown",               NULL   },
         { "Teyvat Brown",             NULL   },		         // unicolor MARRON
         { "TWB64 118 - Fruity Orange",               NULL   },
         { "PixelShift 05 - Chocolate Bar",               NULL   },
         { NULL, NULL },
      },
      "TWB64 194 - DK Barrel Brown"
   },
   {
      "gambatte_gb_palette_gray",
      "Gray",
      NULL,
      "Select a palette when 'group color' is set to 'Gray'.",
      NULL,
      "gb_colors",
      {
         { "PixelShift 36 - Newspaper",                NULL  },
         { "TWB64 047 - Microvision Ver.",                NULL  },
         { "TWB64 085 - Perfected Ultra Instinct",                NULL  },
         { "TWB64 075 - Tamagotchi Ver.",                NULL  },
         { "TWB64 190 - Grand Ivory",                NULL  },
         { "PixelShift 16 - GB Backlight Faded",                NULL  },
         { "PixelShift 14 - Game & Watch Ball",               NULL  },
         { "PixelShift 39 - Silhouette",                NULL  },
         { "PixelShift 13 - Game Pocket Computer",               NULL   },
         { NULL, NULL },
      },
      "PixelShift 36 - Newspaper"
   },



   {
      "gambatte_gb_palette_green",
      "Green",
      NULL,
      "Select a palette when 'group color' is set to 'Green'.",
      NULL,
      "gb_colors",
      {
            { "PixelShift 09 - Gamate",               NULL   },
            { "TWB64 008 - Neon Green",               NULL   },
            { "TWB64 161 - Scarlett Green",               NULL   },
            { "TWB64 060 - Google Green",               NULL   },
            { "TWB64 158 - Xbox Green",               NULL  },
            { "TWB64 082 - Legendary Super Saiyan",               NULL  },
            { "PixelShift 30 - Glow In The Dark",               NULL   },
            { "TWB64 138 - Irish Green",               NULL   },
            { "TWB64 039 - Supervision Ver.",               NULL   },
            { "TWB64 065 - GameKing Ver.",               NULL   },
            { "Jeltron Greenscale",         NULL },    //GB
            { "SGB - 3H",               NULL  },
            { "TWB64 073 - Lemon-Lime Green",               NULL   },
            { "TWB64 091 - Pocket Tales Ver.",               NULL   },
            { "TWB64 048 - TI-83 Ver.",                NULL  },
            { "PixelShift 01 - Arctic Green",               NULL   },
            { "TWB64 053 - VMU Ver.",               NULL   },
         { NULL, NULL },
      },
      "PixelShift 09 - Gamate"
   },
   {
      "gambatte_gb_palette_inverted",
      "Inverted",
      NULL,
      "Select a palette when 'group color' is set to 'Inverted'.",
      NULL,
      "gb_colors",
      {
         { "PixelShift 37 - Pip-Boy",               NULL   },
         { "PixelShift 35 - MS-Dos",               NULL   },
         { "PixelShift 02 - Arduboy",               NULL   },
         { "GBC - Inverted",               NULL   },   // B + Right
         { "PixelShift 42 - Tron",               NULL   },
         { "Nightvision Green",          NULL  },    //inverted
         { "Virtual Vision",          NULL   },    //inverted
         { "Vulnerable Blue",             NULL   },		      // INVERTED BLUE
         { "SGB - 1G",               NULL   },
         { "SGB - 2G",               NULL   },
         { "SGB - 3G",               NULL   },
         { "SGB - 4G",               NULL   },
         { NULL, NULL },
      },
      "PixelShift 37 - Pip-Boy"
   },
   {
      "gambatte_gb_palette_multicolor",
      "Multicolor",
      NULL,
      "Select a palette when 'group color' is set to 'Multicolor'.",
      NULL,
      "gb_colors",
      {





         { "bandai namco tricolor",             NULL   },      // multicolor
         { "Funimation Melon", NULL },   //multicolor
         { "PixelShift 43 - Vaporwave",               NULL   },

         { "TWB64 133 - Moonlight Vision",               NULL   },
         { "champion s tunic",             NULL   },           // multicolor
         { "TWB64 068 - Bikini Bottom Ver.",               NULL   },
         { "TWB64 129 - Retro Bogeda",               NULL   },
         { "Ryuuguu Sunset",             NULL   },             // multicolor yellow pink
         { "GBC - Pastel Mix",               NULL   }, // Down

         { "Super Famicom Suprem",             NULL   },       // multicolor
         { "TWB64 072 - NASCAR Ver.",               NULL   },
         { "Doraemon Tricolor",             NULL   },          // multicolor
         { "TWB64 078 - Christmas Ver.",               NULL   },
         { "Winter Christmas",          NULL   },  //multicolor
         { "Classy Christmas",          NULL   },  //multicolor
         { "SGB - 3A",               NULL   },

         { "SGB - 4A",               NULL   },
         { "PixelShift 07 - Cotton Candy",               NULL   },
         { "PixelShift 38 - Pocket Girl",               NULL   },
         { "SGB - 3C",               NULL   },
         { "JPop Idol Sherbet",            NULL   },           // multicolor pink blue






         //{ "Special 2",               NULL   },
         { NULL, NULL },
      },
      "SGB - 4G"
   },
   {
      "gambatte_gb_palette_orange",
      "Orange",
      NULL,
      "Select a palette when 'group color' is set to 'Orange'.",
      NULL,
      "gb_colors",
      {
         { "Cheetos",         NULL },
         { "TWB64 147 - Value Orange",               NULL   },
         { "TWB64 018 - Crunchyroll Orange",               NULL   },
         { "PixelShift 17 - GB Backlight Orange",               NULL   },
         { "TWB64 020 - Nijigasaki Yellow",               NULL   },
         { "GBC - Orange",               NULL   },     // A + Down
         { "SGB - 2B",               NULL   },
         { "SGB - 3E",               NULL   },
         { "TWB64 081 - Camouflage Ver.",               NULL   },
         { NULL, NULL },
      },
      "Cheetos"
   },
   {
      "gambatte_gb_palette_pink",
      "Pink",
      NULL,
      "Select a palette when 'group color' is set to 'Pink'.",
      NULL,
      "gb_colors",
      {
         { "TWB64 019 - Muse Pink",               NULL   },
         { "TWB64 009 - Neon Pink",               NULL   },
         { "TWB64 174 - Barbie Pink",               NULL   },
         { "TWB64 187 - Susan G. Pink",               NULL   },
         { "TWB64 004 - Patrick Star Pink",               NULL   },
         { "TWB64 029 - Sanrio Pink",               NULL   },
         { "TWB64 113 - Sakura Pink",               NULL   },
         { "TWB64 079 - Cardcaptor Pink",               NULL   },
         { NULL, NULL },
      },
      "TWB64 113 - Sakura Pink"
   },
   {
      "gambatte_gb_palette_purple",
      "Purple",
      NULL,
      "Select a palette when 'group color' is set to 'Purple'.",
      NULL,
      "gb_colors",
      {
         { "TWB64 130 - Royal Blue",                 NULL   },
         { "TWB64 131 - Neon Purple",               NULL   },
         { "TWB64 148 - Liella Purple!",               NULL   },
         { "Advanced Indigo",             NULL   },            // unicolor Powerful purple
         { "TWB64 196 - Equestrian Purple",               NULL   },
         { "TWB64 110 - Yo-kai Purple",               NULL   },
         { "PixelShift 18 - GB Backlight White ",  NULL   },
         { "SGB - 4F",               NULL   },
         { "SGB - 4C",               NULL   },
         { "TWB64 114 - Wisteria Murasaki",               NULL   },
         { NULL, NULL },
      },
      "Advanced Indigo"
   },
   {
      "gambatte_gb_palette_red",
      "Red",
      NULL,
      "Select a palette when 'group color' is set to 'Red'.",
      NULL,
      "gb_colors",
      {
         { "TWB64 076 - Phantom Red",               NULL   },
         { "TWB64 171 - Berserk Blood",               NULL   },
         { "TWB64 180 - Team Rocket Red",               NULL   },
         { "TWB64 096 - Straw Hat Red",               NULL   },
         { "TWB64 115 - Oni Aka",               NULL   },
         { "SGB - 1F",               NULL   },
         { NULL, NULL },
      },
      "TWB64 076 - Phantom Red"
   },
   {
      "gambatte_gb_palette_yellow",
      "Yellow",
      NULL,
      "Select a palette when 'group color' is set to 'Yellow'.",
      NULL,
      "gb_colors",
      {
         { "TWB64 087 - Yellow Banana",               NULL   },
         { "TWB64 023 - Odyssey Gold",               NULL   },
         { "Kingdom Key Gold",          NULL   },    
         { "TWB64 014 - Builder Yellow",               NULL   },
         { "TWB64 003 - SpongeBob Yellow",               NULL   },
         { "TWB64 116 - Golden Kiiro",               NULL   },
         { "PixelShift 31 - Gold Bar",               NULL   },
         { "PixelShift 40 - Sunburst",               NULL   },
        
         { NULL, NULL },
      },
      "TWB64 087 - Yellow Banana"
   },

   /////////////////////////////////////===========================================================================================
   {
      "gambatte_gb_palette_others",
      "Others",
      NULL,
      "Select a palette when 'group color' is set to 'Others'.",
      NULL,
      "gb_colors",
      {
         // Maximum 128 items

         // realistic_gb
               { "SGB - 4H",               NULL   },
               { "TWB64 033 - Link's Awakening DX Ver.",               NULL   },
               { "TWB64 071 - Buttercup Green",               NULL   },
               { "TWB64 175 - Star Command Green",               NULL   },
               //{ "TWB64 125 - Ninja Turtle Green",               NULL   },
               { "TWB64 169 - Sailor Spinach Green",               NULL   },
               //{ "TWB64 063 - Dew Green",               NULL   },
               { "TWB64 155 - Yoshi Egg Green",               NULL   },
               //{ "TWB64 108 - Yo-kai Green",               NULL   },
               { "TWB64 013 - Golden Wild",               NULL   }, //green
               //{ "TWB64 168 - Swampy Ogre Green",               NULL   },
               { "TWB64 052 - Tokyo Midtown Ver.",               NULL   },
               { "TWB64 040 - DMG Ver.",               NULL   },
               //{ "TWB64 163 - Classic LCD",               NULL   },
               { "TWB64 173 - Gamebuino Classic Ver.",               NULL   },
               { "TWB64 176 - Nokia 3310 Ver.",               NULL   },
               //{ "TWB64 167 - Smurfy Blue",               NULL   },
               { "TWB64 090 - Super Saiyan Blue Evolved",               NULL   },
               { "TWB64 144 - Bobblun Blue",               NULL   },
               //{ "TWB64 109 - Yo-kai Blue",               NULL   },
               //{ "TWB64 043 - Miraitowa Blue",               NULL   },
               { "TWB64 001 - Aqours Blue",               NULL   },
               //{ "TWB64 184 - Fury Blue",               NULL   },
               //{ "TWB64 153 - HoloBlue",               NULL   },
               //{ "TWB64 006 - Neon Blue",               NULL   },
               //{ "TWB64 151 - ANA Sky Blue",               NULL   },
               { "TWB64 193 - Champion Blue",               NULL   },
               //{ "TWB64 093 - S.E.E.S. Blue",               NULL   },
               //{ "TWB64 192 - SEGA Tokyo Blue",               NULL   },
               //{ "TWB64 056 - Ticketmaster Azure",               NULL   },
               //{ "TWB64 142 - Pepsi Cola Blue",               NULL   },
               //{ "TWB64 159 - Sonic Mega Blue",               NULL   },
               { "TWB64 058 - Google Blue",               NULL   },
               { "TWB64 162 - Glitchy Blue",               NULL   },
               //{ "TWB64 126 - Slime Blue",               NULL   },
               //{ "TWB64 102 - CINDERELLA Blue",               NULL   },
               { "TWB64 136 - Beijing Blue",               NULL   },
               //{ "TWB64 120 - Miku Blue",               NULL   },
               { "TWB64 025 - Super Saiyan Blue",               NULL   },
               { "TWB64 198 - Niconico Sea Green",               NULL   },
               { "GB - Light",               NULL   },  // Original Game Boy Light
               { "TWB64 070 - Bubbles Blue",               NULL   },
               { "TWB64 105 - SHINY Sky Blue",               NULL   },
               //{ "TWB64 128 - Ghostly Aoi",               NULL   },
               { "PixelShift 27 - GBP Bivert",               NULL   },
               { "TWB64 074 - Mega Man V Ver.",               NULL   },
               { "TWB64 015 - Classic Blurple",               NULL   },
               { "TWB64 117 - Silver Shiro",               NULL   },
               { "GB - Pocket",               NULL   }, // Original Game Boy Pocket	
               { "TWB64 016 - 765 Production Ver.",               NULL   },
               { "TWB64 054 - Game Master Ver.",               NULL   },
               { "TWB64 165 - PocketStation Ver.",               NULL   },
               { "PixelShift 21 - GB Hunter",               NULL   },
               { "TWB64 149 - Olympic Silver",               NULL   },


         // gray
               { "TWB64 062 - Neo Geo Pocket Ver.",               NULL   }, // grey
               { "TWB64 002 - Anime Expo Ver.",               NULL   },
               { "GBC - Grayscale",               NULL   },  // B + Left
               { "SGB - 2H",               NULL   },
               //{ "TWB64 061 - WonderSwan Ver.",               NULL   },
               { "TWB64 080 - Pretty Guardian Gold",               NULL   },
               { "TWB64 164 - 3DS Virtual Console Ver.",               NULL   },
               { "PixelShift 11 - Game Boy Pocket",               NULL   },
               { "TWB64 067 - Digivice Ver.",               NULL   },// grey


         // green
               { "TWB64 195 - Evangelion Green",               NULL   },
               { "PixelShift 28 - GB Washed Yellow Backlight",               NULL   },
               { "TWB64 031 - Cosmo Green",               NULL   },
               { "TWB64 170 - Shenron Green",               NULL   },
               //{ "TWB64 177 - Clover Green",               NULL   },
               { "TWB64 186 - Puyo Puyo Green",               NULL   },
               { "TWB64 021 - Gamate Ver.",               NULL   }, // green
               //{ "TWB64 088 - Green Banana",               NULL   },
               { "PixelShift 08 - Easy Greens",               NULL   },
               { "TWB64 143 - Bubblun Green",               NULL   },
               { "PixelShift 22 - GB Kiosk",               NULL   },
               //{ "TWB64 094 - Game Awards Cyan",               NULL   },
               { "TWB64 098 - Deku Alpha Emerald",               NULL   },
               { "TWB64 112 - Tea Midori",               NULL   },  // green lite
               { "TWB64 145 - Baja Blast Storm",               NULL   },
               //{ "TWB64 055 - Android Green",               NULL   },
               //{ "TWB64 104 - SideM Green",               NULL   },
               { "TWB64 042 - Light Ver.",               NULL   },
               { "TWB64 123 - Island Green",               NULL   },
               { "PixelShift 10 - Game Boy Light",               NULL   },
               //{ "TWB64 189 - Plumbob Green",               NULL   },
               //{ "TWB64 124 - Mania Plus Green",               NULL  },
               //{ "Special 4 (TI-83 Legacy)",                NULL  },
               //{ "TWB64 146 - Olympic Gold",               NULL   },



         // inverted
         // multicolor
               { "SGB - 2D",               NULL   },
               { "TWB64 037 - Scooby-Doo Mystery Ver.",               NULL   },
               { "SGB - 2F",               NULL   },
               { "PixelShift 06 - CMYK",               NULL   },
               { "TWB64 027 - Nintendo Switch Lite Ver.",               NULL   },
               { "TWB64 106 - Angry Volcano Ver.",               NULL   },
               { "TWB64 077 - Halloween Ver.",               NULL   },
               { "SGB - 1D",               NULL   }, // names -> leave as colour
               { "SGB - 3D",               NULL   },// multicolor green lite pink
               { "GBC - Dark Green",               NULL   }, // A + Right (default GBC)
               { "GBC - Red",               NULL   },        // A + Up
               { "GBC - Blue",               NULL   },       // Left
               { "GBC - Dark Blue",               NULL   },  // A + Left
               { "Special 3",               NULL   },
               { "GBC - Yellow",               NULL   },     // B + Down
               { "PixelShift 33 - Gray Green Mix",               NULL   },
               { "TWB64 066 - Do The Dew Ver.",               NULL   },
               { "GBC - Green",               NULL   },      // Right
               { "PixelShift 34 - Missingno",               NULL   },
               { "PixelShift 41 - Technicolor",               NULL   },
               { "GBC - Brown",               NULL   },      // Up
               { "SGB - 3B",               NULL   },
               { "Gold Silver and Bronze",             NULL   },     // multicolor
               { "SGB - 2E",               NULL   },
               { "GBC - Dark Brown",               NULL   }, // B + Up
               { "Perfect Majin Emperor",             NULL   },      // multicolor salmon purple
               { "SGB - 3F",               NULL   },// multicolor purple pink
               { "PixelShift 20 - GB Bootleg",               NULL   },
               { "PixelShift 25 - GB Nuked",               NULL   },


         // orange
               { "SGB - 4E",               NULL   },
               { "TWB64 034 - Travel Wood",               NULL   },
               { "SGB - 2A",               NULL   },
               { "TWB64 050 - Labo Fawn",               NULL   },
               //{ "TWB64 103 - MILLION Yellow!",               NULL   },
               //{ "TWB64 059 - Google Yellow",               NULL   },
               { "TWB64 181 - SEIKO Timer Yellow",               NULL   },
               //{ "TWB64 132 - Neon Orange",               NULL   },
               //{ "TWB64 152 - Nijigasaki Orange",               NULL   },
               { "TWB64 160 - G4 Orange",               NULL   },
               //{ "TWB64 140 - Dragon Ball Orange",               NULL   },
               //{ "TWB64 185 - Rockstar Orange",               NULL   },
               { "TWB64 046 - Eevee Brown",               NULL   },
               { "TWB64 100 - Stone Orange",               NULL   },
               //{ "TWB64 036 - Game Grump Orange",               NULL   },
               //{ "TWB64 095 - Hokage Orange",               NULL   },
               //{ "TWB64 178 - Crash Orange",               NULL   },
               { "TWB64 011 - Nick Orange",               NULL   },
               //{ "TWB64 139 - Kakarot Orange",               NULL   },


         // pink

               { "TWB64 083 - Super Saiyan Rose",               NULL   },
               { "TWB64 172 - Super Star Pink",               NULL   },
               { "TWB64 119 - AKB48 Pink",               NULL   },
               { "TWB64 069 - Blossom Pink",               NULL   },
               { "TWB64 107 - Yo-kai Pink",               NULL   },
               { "TWB64 182 - PINK109",               NULL   },
               { "SGB - 1C",               NULL   }, // palettes have 'official'
               { "SGB - 2C",               NULL   },
               { "PixelShift 29 - Ghost",               NULL   },
               { "TWB64 032 - Wanda Pink",               NULL   },
              //{ "TWB64 044 - Someity Pink",               NULL   },
               { "TWB64 026 - Bizarre Pink",               NULL   },
               { "TWB64 024 - Super Saiyan God",               NULL   },
               { "TWB64 101 - 765PRO Pink",               NULL   }, // pink flashy
               { "TWB64 049 - Aegis Cherry",               NULL   },


         // purple
         // red
               { "PixelShift 32 - Grapefruit",               NULL   },
               { "SGB - 4B",               NULL   },
               { "SGB - 1H",               NULL   },
               { "SGB - 1A",               NULL   }, // 1-A (default SGB)	
               //{ "TWB64 035 - Pokemon Ver.",               NULL   },
               { "TWB64 199 - Duracell Copper",               NULL   },
               { "TWB64 150 - Olympic Bronze",               NULL   },
               { "TWB64 057 - Google Red",               NULL   },
               //{ "TWB64 086 - Saint Snow Red",               NULL   },
               { "TWB64 156 - Pokedex Red",               NULL   },
               //{ "TWB64 188 - Pizza Hut Red",               NULL   },
               //{ "TWB64 005 - Neon Red",               NULL   },
               //{ "TWB64 064 - Coca-Cola Red",               NULL   },
               //{ "TWB64 012 - Virtual Boy Ver.",               NULL   },
               { "PixelShift 44 - Virtual Boy",               NULL   },
               //{ "TWB64 010 - Mario Red",               NULL   },
               //{ "TWB64 121 - Fairy Tail Red",               NULL   },
               //{ "TWB64 154 - Wrestling Red",               NULL   },
               { "TWB64 197 - Autobot Red",               NULL   },
               //{ "TWB64 134 - Tokyo Red",               NULL   },


         // yellow
               { "TWB64 007 - Neon Yellow",               NULL   },
               { "TWB64 141 - Christmas Gold",               NULL   },
               { "TWB64 166 - Game and Gold",               NULL   },
               { "TWB64 084 - Super Saiyan",               NULL   },
               { "TWB64 089 - Super Saiyan 3",               NULL   },
               //{ "TWB64 179 - Famicom Disk Yellow",               NULL   },
               { "TWB64 092 - Investigation Yellow",               NULL   },
               //{ "TWB64 051 - MILLION LIVE GOLD!",               NULL   }, // yellow almost green
               { "TWB64 191 - Demon's Gold",               NULL   }, // yellow almost green
               //{ "TWB64 137 - Pac-Man Yellow",               NULL   },
               //{ "TWB64 045 - Pikachu Yellow",               NULL   },
               { "Special 1",               NULL   },
               { "PixelShift 23 - GB Kiosk 2",               NULL   },
               //{ "TWB64 030 - BANDAI NAMCO Ver.",               NULL   }, //yellow /orange
            



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

