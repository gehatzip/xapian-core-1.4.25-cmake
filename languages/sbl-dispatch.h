/** @file
 *  @brief Map string to language code
 */
/* Warning: This file is generated by ./languages/collate-sbl - do not modify directly! */
/* Copyright (C) 2007,2012,2013,2015 Olly Betts
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef XAPIAN_INCLUDED_SBL_DISPATCH_H
#define XAPIAN_INCLUDED_SBL_DISPATCH_H

enum sbl_code {
    NONE = 0,
    ARABIC = 1,
    ARMENIAN = 2,
    BASQUE = 3,
    CATALAN = 4,
    DANISH = 5,
    DUTCH = 6,
    EARLYENGLISH = 7,
    ENGLISH = 8,
    FINNISH = 9,
    FRENCH = 10,
    GERMAN = 11,
    GERMAN2 = 12,
    GREEK = 13,
    HUNGARIAN = 14,
    INDONESIAN = 15,
    IRISH = 16,
    ITALIAN = 17,
    KRAAIJ_POHLMANN = 18,
    LITHUANIAN = 19,
    LOVINS = 20,
    NEPALI = 21,
    NORWEGIAN = 22,
    PORTER = 23,
    PORTUGUESE = 24,
    ROMANIAN = 25,
    RUSSIAN = 26,
    SPANISH = 27,
    SWEDISH = 28,
    TAMIL = 29,
    TURKISH = 30
};

static const unsigned char tab[] = {
    15, // 0

    1,0, (266&255),(266>>8), 1,0, (0&255),(0>>8), (37&255),(37>>8), (136&255),(136>>8), (193&255),(193>>8), (62&255),(62>>8),
    (81&255),(81>>8), (102&255),(102>>8), 1,0, (6&255),(6>>8), 1,0, 1,0, (20&255),(20>>8), // # 30

    (1 - 1), // 31
    NONE, 'n','o','n','e',

    (1 - 1), // 37
    EARLYENGLISH, 'e','a','r','l','y','e','n','g','l','i','s','h',

    (1 - 1), // 51
    KRAAIJ_POHLMANN, 'k','r','a','a','i','j','_','p','o','h','l','m','a','n','n',

    (4 - 1), // 68
    DUTCH, 'd','u','t','c','h',
    GREEK, 'g','r','e','e','k',
    IRISH, 'i','r','i','s','h',
    TAMIL, 't','a','m','i','l',

    (2 - 1), // 93
    ARMENIAN, 'a','r','m','e','n','i','a','n',
    ROMANIAN, 'r','o','m','a','n','i','a','n',

    (2 - 1), // 112
    HUNGARIAN, 'h','u','n','g','a','r','i','a','n',
    NORWEGIAN, 'n','o','r','w','e','g','i','a','n',

    (3 - 1), // 133
    INDONESIAN, 'i','n','d','o','n','e','s','i','a','n',
    LITHUANIAN, 'l','i','t','h','u','a','n','i','a','n',
    PORTUGUESE, 'p','o','r','t','u','g','u','e','s','e',

    (8 - 1), // 167
    ARABIC, 'a','r','a','b','i','c',
    BASQUE, 'b','a','s','q','u','e',
    DANISH, 'd','a','n','i','s','h',
    FRENCH, 'f','r','e','n','c','h',
    GERMAN, 'g','e','r','m','a','n',
    LOVINS, 'l','o','v','i','n','s',
    NEPALI, 'n','e','p','a','l','i',
    PORTER, 'p','o','r','t','e','r',

    (9 - 1), // 224
    CATALAN, 'c','a','t','a','l','a','n',
    ENGLISH, 'e','n','g','l','i','s','h',
    FINNISH, 'f','i','n','n','i','s','h',
    GERMAN2, 'g','e','r','m','a','n','2',
    ITALIAN, 'i','t','a','l','i','a','n',
    RUSSIAN, 'r','u','s','s','i','a','n',
    SPANISH, 's','p','a','n','i','s','h',
    SWEDISH, 's','w','e','d','i','s','h',
    TURKISH, 't','u','r','k','i','s','h',

    (27 - 1),
    ARABIC, 'a','r',
    CATALAN, 'c','a',
    DANISH, 'd','a',
    GERMAN, 'd','e',
    ENGLISH, 'e','n',
    SPANISH, 'e','s',
    BASQUE, 'e','u',
    FINNISH, 'f','i',
    FRENCH, 'f','r',
    IRISH, 'g','a',
    GREEK, 'g','r',
    HUNGARIAN, 'h','u',
    ARMENIAN, 'h','y',
    INDONESIAN, 'i','d',
    ITALIAN, 'i','t',
    LITHUANIAN, 'l','t',
    NORWEGIAN, 'n','b',
    NEPALI, 'n','e',
    DUTCH, 'n','l',
    NORWEGIAN, 'n','n',
    NORWEGIAN, 'n','o',
    PORTUGUESE, 'p','t',
    ROMANIAN, 'r','o',
    RUSSIAN, 'r','u',
    SWEDISH, 's','v',
    TAMIL, 't','a',
    TURKISH, 't','r'
};

#define LANGSTRING "arabic armenian basque catalan danish dutch earlyenglish english finnish french german german2 greek hungarian indonesian irish italian kraaij_pohlmann lithuanian lovins nepali norwegian porter portuguese romanian russian spanish swedish tamil turkish"

#endif
