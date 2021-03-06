#define FONT_HEIGHT 8
#define FONT_WIDTH 8

const unsigned char font[] = {
////////////////////////////////////
  0x00, 0x0C, 0x1E, // [ π¬π¬Ήπ¬] \x00
  0x3E, 0x7C, 0x3E, // [π¬ββπ¬]
  0x1E, 0x0C, 0x00, // [ π¬π¬π¬] \x01
  0x00, 0x00, 0xFF, // [π¬­π¬­π¬­π¬­]
  0xFF, 0x18, 0x18, // [π¬π¬¨π¬π¬]
  0x18, 0x00, 0x00, // [ π¬π¬ ] \x02
  0x00, 0x00, 0x00, // [    ]
  0x00, 0xFF, 0xFF, // [π¬Ήπ¬Ήπ¬Ήπ¬Ή]
  0x18, 0x18, 0x18, // [ ββ ] \x03
  0x1F, 0x1F, 0x00, // [ π¬π¬π¬]
  0x00, 0x00, 0x18, // [ π¬π¬ ] \x04
  0x18, 0x18, 0xFF, // [π¬­π¬·π¬²π¬­]
  0xFF, 0x00, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x18, 0x18, // [ π¬¦π¬ ] \x05
  0x18, 0xF8, 0xF8, // [π¬Ήπ¬»β ]
  0x00, 0x00, 0x00, // [    ]
  0xC0, 0xE0, 0x70, // [π¬¬π¬±  ] \x06
  0x38, 0x1C, 0x0E, // [ π¬π¬Ίπ¬]
  0x07, 0x03, 0x03, // [  π¬β] \x07 \a
  0x07, 0x0E, 0x1C, // [ π¬π¬»π¬]
  0x38, 0x70, 0xE0, // [π¬΅π¬π¬ ]
  0xC0, 0x80, 0xC0, // [π¬΄   ] \x08 \b
  0xE0, 0xF0, 0xF8, // [βπ¬Ίπ¬ ]
  0xFC, 0xFE, 0xFF, // [βββπ¬±]
  0x00, 0x00, 0x00, // [    ] \x09 \t
  0x00, 0xF0, 0xF0, // [π¬Ήπ¬Ή  ]
  0xF0, 0xF0, 0xFF, // [ββπ¬­π¬­] \x0a \n
  0xFE, 0xFC, 0xF8, // [ββπ¬π¬]
  0xF0, 0xE0, 0xC0, // [βπ¬  ]
  0x80, 0x00, 0x00, // [π¬   ] \x0b \v
  0x00, 0x00, 0x0F, // [  π¬­π¬­]
  0x0F, 0x0F, 0x0F, // [  ββ]
  0x0F, 0x0F, 0x0F, // [  ββ] \x0c \f
  0x0F, 0x00, 0x00, // [  π¬π¬]
  0x00, 0x00, 0x03, // [   π¬­] \x0d \r
  0x03, 0x03, 0x03, // [   β]
  0x03, 0x03, 0x03, // [   β]
  0x03, 0xC0, 0xC0, // [π¬Ή  π¬] \x0e
  0xC0, 0xC0, 0xC0, // [β   ]
  0xC0, 0xC0, 0xC0, // [β   ]
  0xF0, 0xF0, 0xF0, // [ββ  ] \x0f
  0xF0, 0x00, 0x00, // [π¬π¬  ]
  0x00, 0x00,       // [    ]
////////////////////////////////////
  0x00, 0x18, 0x18, // [ π¬¦π¬ ] \x10
  0x5E, 0x66, 0x5E, // [βπ¬€π¬Έβ]
  0x18, 0x18, 0x00, // [ π¬π¬ ] \x11
  0x00, 0x00, 0xF8, // [π¬­π¬­π¬ ]
  0xF8, 0x18, 0x18, // [π¬π¬¨β ]
  0x18, 0x18, 0x18, // [ ββ ] \x12
  0x18, 0x18, 0x18, // [ ββ ]
  0x18, 0x18, 0x18, // [ ββ ]
  0x18, 0x18, 0x18, // [ ββ ] \x13
  0xFF, 0xFF, 0x18, // [π¬π¬¬π¬π¬]
  0x18, 0x18, 0x00, // [ π¬π¬ ] \x14
  0x38, 0x7C, 0x7C, // [π¬¦βπ¬Ί ]
  0x7C, 0x7C, 0x38, // [π¬βπ¬ ]
  0x00, 0xF0, 0xF0, // [π¬Ήπ¬Ή  ] \x15
  0xF0, 0xF0, 0xF0, // [ββ  ]
  0xF0, 0xF0, 0xF0, // [ββ  ]
  0xFF, 0xFF, 0x00, // [π¬π¬π¬π¬] \x16
  0x00, 0x00, 0x00, // [    ]
  0x00, 0x00, 0x18, // [ π¬π¬ ] \x17
  0x18, 0x18, 0xF8, // [π¬­π¬·β ]
  0xF8, 0x18, 0x18, // [π¬π¬¨β ]
  0x18, 0x18, 0x18, // [ ββ ] \x18
  0x18, 0x1F, 0x1F, // [ βπ¬Ίπ¬Ή]
  0x18, 0x18, 0x18, // [ ββ ]
  0xFF, 0xFF, 0xFF, // [ββββ] \x19
  0xFF, 0x00, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x00, 0x00, // [    ] \x1a
  0x00, 0x00, 0x1F, // [ π¬π¬­π¬­]
  0x1F, 0x18, 0x18, // [ βπ¬π¬]
  0x18, 0x00, 0x1F, // [ π¬ π¬?π¬­] \x1b
  0x1F, 0x75, 0x75, // [π¬¦π¬»π¬¨π¬¨]
  0x50, 0x50, 0x00, // [π¬π¬  ]
  0x00, 0x08, 0x0C, // [  π¬± ] \x1c
  0x7E, 0x7E, 0x0C, // [π¬π¬βπ¬]
  0x08, 0x00, 0x00, // [  π¬ ] \x1d
  0x10, 0x30, 0x7E, // [π¬π¬»π¬­π¬]
  0x7E, 0x30, 0x10, // [π¬π¬¬π¬π¬]
  0x00, 0x00, 0x08, // [  π¬ ] \x1e
  0x1C, 0x3E, 0x2A, // [ π¬π¬π¬]
  0x08, 0x08, 0x00, // [  π¬ ]
  0x00, 0x08, 0x08, // [  π¬ ] \x1f
  0x2A, 0x3E, 0x1C, // [ π¬ͺπ¬Ίπ¬]
  0x08, 0x00,       // [  π¬ ]
////////////////////////////////////
  0x00, 0x00, 0x00, // [    ] \x20  
  0x00, 0x00, 0x00, // [    ]
  0x00, 0x00, 0x00, // [    ] \x21 !
  0x00, 0x00, 0x5E, // [π¬π¬π¬­π¬]
  0x5E, 0x00, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x00, 0x0E, // [  π¬­π¬] \x22 "
  0x0E, 0x00, 0x00, // [  π¬π¬]
  0x0E, 0x0E, 0x00, // [  π¬π¬]
  0x24, 0x7E, 0x7E, // [π¬¦π¬Ίπ¬»π¬] \x23 #
  0x24, 0x24, 0x7E, // [π¬π¬²π¬·π¬]
  0x7E, 0x24, 0x00, // [π¬π¬π¬π¬] \x24 $
  0x24, 0x2E, 0x6B, // [π¬βπ¬π¬±]
  0x6B, 0x3A, 0x12, // [π¬π¬ͺπ¬π¬]
  0x00, 0x00, 0x66, // [π¬π¬π¬π¬] \x25 %
  0x36, 0x18, 0x0C, // [ π¬π¬³π¬]
  0x66, 0x62, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x30, 0x7A, // [π¬π¬Ήπ¬π¬] \x26 &
  0x4F, 0x5D, 0x37, // [π¬π¬΅π¬¬π¬Έ]
  0x72, 0x50, 0x00, // [π¬π¬ π¬] \x27 '
  0x00, 0x00, 0x0E, // [  π¬­π¬]
  0x0E, 0x00, 0x00, // [  π¬π¬]
  0x00, 0x00, 0x00, // [    ] \x28 (
  0x00, 0x3C, 0x7E, // [π¬π¬Ήπ¬Ήπ¬]
  0x66, 0x42, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x42, 0x66, // [π¬¦π¬π¬π¬] \x29 )
  0x7E, 0x3C, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x00, 0x08, // [  π¬ ] \x2a *
  0x2A, 0x3E, 0x1C, // [ π¬ͺπ¬Ίπ¬]
  0x1C, 0x3E, 0x2A, // [ π¬π¬π¬]
  0x08, 0x00, 0x08, // [  π¬ ] \x2b +
  0x08, 0x3E, 0x3E, // [ π¬Ήπ¬Ίπ¬]
  0x08, 0x08, 0x00, // [  π¬ ]
  0x00, 0x00, 0x80, // [π¬   ] \x2c ,
  0xE0, 0x60, 0x00, // [π¬π¬  ]
  0x00, 0x00, 0x00, // [    ] \x2d -
  0x08, 0x08, 0x08, // [  β ]
  0x08, 0x08, 0x08, // [  β ]
  0x00, 0x00, 0x00, // [    ] \x2e .
  0x00, 0x60, 0x60, // [π¬¦π¬  ]
  0x00, 0x00, 0x00, // [    ]
  0x00, 0x60, 0x30, // [π¬π¬±  ] \x2f /
  0x18, 0x0C, 0x06, // [ π¬π¬ͺπ¬]
  0x02, 0x00,       // [   π¬]
////////////////////////////////////
  0x00, 0x3C, 0x7E, // [π¬π¬Ήπ¬Ήπ¬] \x30 0
  0x52, 0x4A, 0x7E, // [βπ¬―π¬±β]
  0x3C, 0x00, 0x00, // [ π¬π¬ ] \x31 1
  0x40, 0x44, 0x7E, // [βπ¬­π¬΅π¬]
  0x7E, 0x40, 0x40, // [βπ¬π¬π¬]
  0x00, 0x00, 0x44, // [π¬ π¬ ] \x32 2
  0x66, 0x72, 0x5A, // [βπ¬ͺπ¬β]
  0x4E, 0x44, 0x00, // [π¬ π¬π¬]
  0x00, 0x22, 0x62, // [π¬π¬ π¬] \x33 3
  0x4A, 0x5E, 0x76, // [βπ¬΅π¬ͺβ]
  0x22, 0x00, 0x00, // [ π¬ π¬] \x34 4
  0x30, 0x38, 0x2C, // [ π¬π¬± ]
  0x7E, 0x7E, 0x20, // [π¬π¬π¬π¬]
  0x00, 0x00, 0x2E, // [ π¬π¬­π¬] \x35 5
  0x6E, 0x4A, 0x4A, // [βπ¬π¬β]
  0x7A, 0x32, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x3C, 0x7E, // [π¬π¬Ήπ¬Ήπ¬] \x36 6
  0x4A, 0x4A, 0x7A, // [βπ¬­ββ]
  0x30, 0x00, 0x00, // [ π¬  ] \x37 7
  0x02, 0x62, 0x72, // [π¬¦π¬± β]
  0x1A, 0x0E, 0x06, // [ π¬π¬ͺβ]
  0x00, 0x00, 0x34, // [ π¬­π¬ ] \x38 8
  0x7E, 0x4A, 0x4A, // [βπ¬π¬β]
  0x7E, 0x34, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x04, 0x4E, // [π¬ π¬΅π¬] \x39 9
  0x4A, 0x6A, 0x3E, // [π¬π¬±π¬²β]
  0x1C, 0x00, 0x00, // [ π¬π¬ ] \x3a :
  0x00, 0x00, 0x6C, // [π¬π¬π¬­ ]
  0x6C, 0x00, 0x00, // [π¬π¬π¬ ]
  0x00, 0x00, 0x00, // [    ] \x3b ;
  0x80, 0xEC, 0x6C, // [π¬ͺπ¬π¬Ή ]
  0x00, 0x00, 0x00, // [    ]
  0x00, 0x00, 0x08, // [  π¬ ] \x3c <
  0x1C, 0x36, 0x63, // [π¬π¬π¬π¬±]
  0x41, 0x00, 0x00, // [π¬  π¬] \x3d =
  0x24, 0x24, 0x24, // [ ββ ]
  0x24, 0x24, 0x24, // [ ββ ]
  0x00, 0x00, 0x41, // [π¬  π¬] \x3e >
  0x63, 0x36, 0x1C, // [π¬π¬ͺπ¬΅π¬]
  0x08, 0x00, 0x00, // [  π¬ ]
  0x00, 0x04, 0x06, // [  π¬¦π¬] \x3f ?
  0x52, 0x5A, 0x0E, // [π¬π¬π¬±β]
  0x04, 0x00,       // [  π¬ ]
////////////////////////////////////
  0x00, 0x3C, 0x7E, // [π¬π¬Ήπ¬Ήπ¬] \x40 @
  0x42, 0x5A, 0x5E, // [βπ¬¦π¬±β]
  0x5C, 0x00, 0x00, // [π¬π¬π¬ ] \x41 A
  0x78, 0x7C, 0x26, // [π¬π¬π¬ͺπ¬]
  0x26, 0x7C, 0x78, // [π¬¦π¬Ίπ¬π¬]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x42 B
  0x7E, 0x4A, 0x4A, // [βπ¬π¬β]
  0x7E, 0x34, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x3C, 0x7E, // [π¬π¬Ήπ¬Ήπ¬] \x43 C
  0x42, 0x42, 0x66, // [βπ¬π¬β]
  0x24, 0x00, 0x00, // [ π¬π¬ ] \x44 D
  0x7E, 0x7E, 0x42, // [βπ¬π¬β]
  0x66, 0x3C, 0x18, // [π¬π¬ͺπ¬π¬]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x45 E
  0x7E, 0x4A, 0x4A, // [βπ¬π¬β]
  0x4A, 0x42, 0x00, // [π¬ π¬π¬]
  0x00, 0x7E, 0x7E, // [π¬¦π¬Ήπ¬Ήπ¬] \x46 F
  0x0A, 0x0A, 0x0A, // [  ββ]
  0x02, 0x00, 0x00, // [   π¬] \x47 G
  0x3C, 0x7E, 0x42, // [π¬¦π¬π¬π¬]
  0x52, 0x72, 0x72, // [βπ¬» β]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x48 H
  0x7E, 0x08, 0x08, // [π¬π¬π¬π¬]
  0x7E, 0x7E, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x42, 0x42, // [π¬¦  π¬] \x49 I
  0x7E, 0x7E, 0x42, // [βπ¬π¬β]
  0x42, 0x00, 0x00, // [π¬  π¬] \x4a J
  0x20, 0x60, 0x40, // [π¬¦π¬  ]
  0x40, 0x7E, 0x3E, // [π¬π¬Ήπ¬Ήπ¬]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x4b K
  0x7E, 0x18, 0x3C, // [π¬π¬Έπ¬΄π¬]
  0x66, 0x42, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x7E, 0x7E, // [π¬¦π¬Ήπ¬Ήπ¬] \x4c L
  0x40, 0x40, 0x40, // [β   ]
  0x40, 0x00, 0x00, // [π¬   ] \x4d M
  0x7E, 0x7E, 0x0C, // [π¬π¬βπ¬]
  0x18, 0x0C, 0x7E, // [π¬π¬―π¬Ίπ¬]
  0x7E, 0x00, 0x7E, // [π¬ π¬°π¬°π¬] \x4e N
  0x7E, 0x1C, 0x38, // [π¬π¬Έπ¬π¬]
  0x7E, 0x7E, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x3C, 0x7E, // [π¬π¬Ήπ¬Ήπ¬] \x4f O
  0x42, 0x42, 0x7E, // [βπ¬­π¬­β]
  0x3C, 0x00,       // [ π¬π¬ ]
////////////////////////////////////
  0x00, 0x7E, 0x7E, // [π¬¦π¬Ήπ¬Ήπ¬] \x50 P
  0x12, 0x12, 0x1E, // [ βπ¬­β]
  0x0C, 0x00, 0x00, // [  π¬ ] \x51 Q
  0x3C, 0x7E, 0x42, // [π¬¦π¬π¬π¬]
  0x22, 0x7E, 0x5C, // [π¬¦π¬ͺπ¬Ήπ¬]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x52 R
  0x7E, 0x12, 0x32, // [π¬π¬Έπ¬β]
  0x7E, 0x4C, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x04, 0x4E, // [π¬ π¬΅π¬] \x53 S
  0x4A, 0x4A, 0x7A, // [βπ¬­ββ]
  0x30, 0x00, 0x00, // [ π¬  ] \x54 T
  0x02, 0x02, 0x7E, // [π¬π¬­π¬­β]
  0x7E, 0x02, 0x02, // [π¬π¬π¬β]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x55 U
  0x7E, 0x40, 0x40, // [βπ¬π¬π¬]
  0x7E, 0x7E, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x1E, 0x3E, // [ π¬΅π¬Ήπ¬] \x56 V
  0x60, 0x60, 0x3E, // [π¬π¬²π¬­π¬]
  0x1E, 0x00, 0x00, // [ π¬π¬π¬] \x57 W
  0x7E, 0x7E, 0x30, // [π¬βπ¬π¬]
  0x18, 0x30, 0x7E, // [π¬π¬»π¬?π¬]
  0x7E, 0x00, 0x66, // [π¬ π¬π¬‘π¬] \x58 X
  0x7E, 0x18, 0x18, // [π¬π¬¨π¬π¬]
  0x7E, 0x66, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x06, 0x0E, // [  π¬΅π¬] \x59 Y
  0x78, 0x78, 0x0E, // [π¬π¬π¬²π¬]
  0x06, 0x00, 0x00, // [  π¬π¬] \x5a Z
  0x62, 0x72, 0x5A, // [βπ¬ͺπ¬β]
  0x4E, 0x46, 0x42, // [β π¬β]
  0x00, 0x00, 0x00, // [    ] \x5b [
  0x00, 0x7E, 0x7E, // [π¬¦π¬Ήπ¬Ήπ¬]
  0x42, 0x42, 0x00, // [π¬  π¬]
  0x00, 0x06, 0x0C, // [  π¬΅π¬] \x5c \
  0x18, 0x30, 0x60, // [π¬π¬π¬ ]
  0x40, 0x00, 0x00, // [π¬   ] \x5d ]
  0x42, 0x42, 0x7E, // [βπ¬­π¬­β]
  0x7E, 0x00, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x00, 0x10, // [ π¬  ] \x5e ^
  0x18, 0x0C, 0x06, // [ π¬π¬ͺπ¬]
  0x0C, 0x18, 0x10, // [ π¬¦π¬ ]
  0x40, 0x40, 0x40, // [β   ] \x5f _
  0x40, 0x40, 0x40, // [β   ]
  0x40, 0x40,       // [π¬   ]
////////////////////////////////////
  0x00, 0x18, 0x3C, // [ π¬΅π¬± ] \x60 `
  0x7E, 0x7E, 0x3C, // [π¬ββπ¬]
  0x18, 0x00, 0x00, // [ π¬π¬ ] \x61 a
  0x20, 0x74, 0x54, // [π¬¦π¬ͺπ¬¦ ]
  0x54, 0x7C, 0x78, // [βπ¬»π¬ ]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x62 b
  0x7E, 0x48, 0x48, // [βπ¬π¬π¬]
  0x78, 0x30, 0x00, // [π¬π¬π¬ ]
  0x00, 0x38, 0x7C, // [π¬π¬Ήπ¬± ] \x63 c
  0x44, 0x44, 0x44, // [β β ]
  0x00, 0x00, 0x00, // [    ] \x64 d
  0x30, 0x78, 0x48, // [π¬¦π¬π¬ ]
  0x48, 0x7E, 0x7E, // [βπ¬Ήπ¬Ίπ¬]
  0x00, 0x00, 0x38, // [ π¬­π¬ ] \x65 e
  0x7C, 0x54, 0x54, // [βπ¬¨π¬¨ ]
  0x5C, 0x18, 0x00, // [π¬π¬π¬ ]
  0x00, 0x00, 0x08, // [  π¬ ] \x66 f
  0x7C, 0x7E, 0x0A, // [π¬π¬π¬π¬]
  0x0A, 0x00, 0x00, // [  π¬π¬] \x67 g
  0x98, 0xBC, 0xA4, // [βπ¬π¬ͺ ]
  0xA4, 0xFC, 0x7C, // [π¬ͺπ¬Ίπ¬» ]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x68 h
  0x7E, 0x08, 0x08, // [π¬π¬π¬π¬]
  0x78, 0x70, 0x00, // [π¬π¬π¬ ]
  0x00, 0x00, 0x48, // [π¬ π¬ ] \x69 i
  0x7A, 0x7A, 0x40, // [βπ¬π¬π¬]
  0x00, 0x00, 0x00, // [    ] \x6a j
  0x00, 0x80, 0x80, // [π¬   ]
  0x80, 0xFA, 0x7A, // [π¬ͺπ¬Ήπ¬π¬]
  0x00, 0x00, 0x7E, // [π¬π¬­π¬­π¬] \x6b k
  0x7E, 0x10, 0x38, // [π¬π¬Έπ¬π¬]
  0x68, 0x40, 0x00, // [π¬π¬π¬ ]
  0x00, 0x00, 0x42, // [π¬  π¬] \x6c l
  0x7E, 0x7E, 0x40, // [βπ¬π¬π¬]
  0x00, 0x00, 0x00, // [    ] \x6d m
  0x7C, 0x7C, 0x18, // [π¬π¬¬π¬ ]
  0x38, 0x1C, 0x7C, // [π¬π¬Έπ¬Ί ]
  0x78, 0x00, 0x7C, // [π¬ π¬°π¬? ] \x6e n
  0x7C, 0x04, 0x04, // [π¬π¬π¬¨ ]
  0x7C, 0x78, 0x00, // [π¬π¬π¬ ]
  0x00, 0x38, 0x7C, // [π¬π¬Ήπ¬± ] \x6f o
  0x44, 0x44, 0x7C, // [βπ¬­π¬· ]
  0x38, 0x00,       // [ π¬π¬ ]
////////////////////////////////////
  0x00, 0xFC, 0xFC, // [π¬Ήπ¬Ήπ¬Ή ] \x70 p
  0x24, 0x24, 0x3C, // [ π¬²π¬· ]
  0x18, 0x00, 0x00, // [ π¬π¬ ] \x71 q
  0x18, 0x3C, 0x24, // [ π¬π¬ͺ ]
  0x24, 0xFC, 0xFC, // [π¬Ήπ¬Ίπ¬» ]
  0x00, 0x00, 0x7C, // [π¬π¬­π¬­ ] \x72 r
  0x7C, 0x04, 0x04, // [π¬π¬π¬¨ ]
  0x0C, 0x08, 0x00, // [  π¬ ]
  0x00, 0x48, 0x5C, // [π¬¦π¬π¬± ] \x73 s
  0x54, 0x54, 0x74, // [βπ¬·β ]
  0x24, 0x00, 0x00, // [ π¬π¬ ] \x74 t
  0x04, 0x04, 0x3E, // [ π¬­π¬·π¬]
  0x7E, 0x44, 0x44, // [βπ¬π¬¨π¬]
  0x00, 0x00, 0x3C, // [ π¬­π¬­ ] \x75 u
  0x7C, 0x40, 0x40, // [βπ¬π¬ ]
  0x7C, 0x7C, 0x00, // [π¬π¬π¬ ]
  0x00, 0x1C, 0x3C, // [ π¬΅π¬Ή ] \x76 v
  0x60, 0x60, 0x3C, // [π¬π¬²π¬­ ]
  0x1C, 0x00, 0x00, // [ π¬π¬ ] \x77 w
  0x1C, 0x7C, 0x70, // [π¬¦π¬»π¬ ]
  0x38, 0x70, 0x7C, // [π¬¦βπ¬? ]
  0x1C, 0x00, 0x44, // [π¬π¬π¬‘ ] \x78 x
  0x6C, 0x38, 0x38, // [π¬π¬Ίπ¬ ]
  0x6C, 0x44, 0x00, // [π¬π¬π¬ ]
  0x00, 0x9C, 0xBC, // [π¬π¬΅π¬Ή ] \x79 y
  0xA0, 0xE0, 0x7C, // [π¬ͺπ¬²π¬­ ]
  0x3C, 0x00, 0x00, // [ π¬π¬ ] \x7a z
  0x44, 0x64, 0x74, // [βπ¬±β ]
  0x5C, 0x4C, 0x44, // [βπ¬π¬¬ ]
  0x00, 0x00, 0x18, // [ π¬π¬ ] \x7b {
  0x5C, 0x7E, 0x7E, // [βπ¬»βπ¬]
  0x5C, 0x18, 0x00, // [π¬π¬π¬ ]
  0x00, 0x00, 0x00, // [    ] \x7c |
  0xFF, 0xFF, 0x00, // [π¬π¬π¬π¬]
  0x00, 0x00, 0x00, // [    ] \x7d }
  0x3E, 0x3E, 0x0E, // [ π¬ββ]
  0x1E, 0x7A, 0x72, // [π¬¦π¬»π¬β]
  0x00, 0x00, 0x08, // [  π¬ ] \x7e ~
  0x1C, 0x3E, 0x7F, // [π¬π¬»βπ¬±]
  0x00, 0x00, 0x00, // [    ]
  0x00, 0x00, 0x00, // [    ] \x7f
  0x7F, 0x3E, 0x1C, // [π¬π¬¬βπ¬]
  0x08, 0x00,       // [  π¬ ]
////////////////////////////////////
  0xFF, 0xF3, 0xE1, // [βπ¬π¬π¬¬] \x80
  0xC1, 0x83, 0xC1, // [π¬΄  π¬«]
  0xE1, 0xF3, 0xFF, // [βπ¬Ίπ¬­π¬»] \x81
  0xFF, 0xFF, 0x00, // [π¬π¬π¬π¬]
  0x00, 0xE7, 0xE7, // [π¬Ήπ¬π¬¦π¬Ή]
  0xE7, 0xFF, 0xFF, // [βπ¬Ίπ¬»β] \x82
  0xFF, 0xFF, 0xFF, // [ββββ]
  0xFF, 0x00, 0x00, // [π¬π¬π¬π¬]
  0xE7, 0xE7, 0xE7, // [ββββ] \x83
  0xE0, 0xE0, 0xFF, // [βπ¬²π¬­π¬­]
  0xFF, 0xFF, 0xE7, // [βπ¬π¬¬β] \x84
  0xE7, 0xE7, 0x00, // [π¬π¬π¬π¬]
  0x00, 0xFF, 0xFF, // [π¬Ήπ¬Ήπ¬Ήπ¬Ή]
  0xFF, 0xE7, 0xE7, // [βπ¬π¬¨β] \x85
  0xE7, 0x07, 0x07, // [π¬π¬ββ]
  0xFF, 0xFF, 0xFF, // [ββββ]
  0x3F, 0x1F, 0x8F, // [π¬π¬ββ] \x86
  0xC7, 0xE3, 0xF1, // [βπ¬±π¬π¬¬]
  0xF8, 0xFC, 0xFC, // [ββπ¬Ί ] \x87
  0xF8, 0xF1, 0xE3, // [βπ¬π¬π¬΅]
  0xC7, 0x8F, 0x1F, // [π¬π¬π¬»β]
  0x3F, 0x7F, 0x3F, // [π¬βββ] \x88
  0x1F, 0x0F, 0x07, // [ π¬π¬¬β]
  0x03, 0x01, 0x00, // [   π¬]
  0xFF, 0xFF, 0xFF, // [ββββ] \x89
  0xFF, 0x0F, 0x0F, // [π¬π¬ββ]
  0x0F, 0x0F, 0x00, // [  π¬π¬] \x8a
  0x01, 0x03, 0x07, // [  π¬π¬»]
  0x0F, 0x1F, 0x3F, // [ π¬΅ββ]
  0x7F, 0xFF, 0xFF, // [π¬»βββ] \x8b
  0xFF, 0xFF, 0xF0, // [ββπ¬π¬]
  0xF0, 0xF0, 0xF0, // [ββ  ]
  0xF0, 0xF0, 0xF0, // [ββ  ] \x8c
  0xF0, 0xFF, 0xFF, // [ββπ¬Ήπ¬Ή]
  0xFF, 0xFF, 0xFC, // [βββπ¬] \x8d
  0xFC, 0xFC, 0xFC, // [βββ ]
  0xFC, 0xFC, 0xFC, // [βββ ]
  0xFC, 0x3F, 0x3F, // [π¬ββπ¬Ή] \x8e
  0x3F, 0x3F, 0x3F, // [ βββ]
  0x3F, 0x3F, 0x3F, // [ βββ]
  0x0F, 0x0F, 0x0F, // [  ββ] \x8f
  0x0F, 0xFF, 0xFF, // [π¬Ήπ¬Ήββ]
  0xFF, 0xFF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0xE7, 0xE7, // [βπ¬π¬¨β] \x90
  0xA1, 0x99, 0xA1, // [βπ¬π¬β]
  0xE7, 0xE7, 0xFF, // [βπ¬²π¬·β] \x91
  0xFF, 0xFF, 0x07, // [π¬π¬π¬¬β]
  0x07, 0xE7, 0xE7, // [π¬Ήπ¬ββ]
  0xE7, 0xE7, 0xE7, // [ββββ] \x92
  0xE7, 0xE7, 0xE7, // [ββββ]
  0xE7, 0xE7, 0xE7, // [ββββ]
  0xE7, 0xE7, 0xE7, // [ββββ] \x93
  0x00, 0x00, 0xE7, // [π¬­π¬π¬π¬­]
  0xE7, 0xE7, 0xFF, // [βπ¬²π¬·β] \x94
  0xC7, 0x83, 0x83, // [π¬ π¬β]
  0x83, 0x83, 0xC7, // [π¬² π¬β]
  0xFF, 0x0F, 0x0F, // [π¬π¬ββ] \x95
  0x0F, 0x0F, 0x0F, // [  ββ]
  0x0F, 0x0F, 0x0F, // [  ββ]
  0x00, 0x00, 0xFF, // [π¬­π¬­π¬­π¬­] \x96
  0xFF, 0xFF, 0xFF, // [ββββ]
  0xFF, 0xFF, 0xE7, // [βπ¬π¬¬β] \x97
  0xE7, 0xE7, 0x07, // [π¬π¬ββ]
  0x07, 0xE7, 0xE7, // [π¬Ήπ¬ββ]
  0xE7, 0xE7, 0xE7, // [ββββ] \x98
  0xE7, 0xE0, 0xE0, // [ββπ¬π¬]
  0xE7, 0xE7, 0xE7, // [ββββ]
  0x00, 0x00, 0x00, // [    ] \x99
  0x00, 0xFF, 0xFF, // [π¬Ήπ¬Ήπ¬Ήπ¬Ή]
  0xFF, 0xFF, 0xFF, // [ββββ] \x9a
  0xFF, 0xFF, 0xE0, // [βπ¬π¬π¬]
  0xE0, 0xE7, 0xE7, // [ββπ¬¦π¬Ή]
  0xE7, 0x00, 0x00, // [π¬π¬π¬π¬] \x9b
  0x00, 0x00, 0x00, // [    ]
  0x00, 0x00, 0x00, // [    ]
  0xFF, 0xF7, 0xF3, // [ββπ¬β] \x9c
  0x81, 0x81, 0xF3, // [π¬²π¬­ π¬·]
  0xF7, 0xFF, 0xFF, // [ββπ¬»β] \x9d
  0xEF, 0xCF, 0x81, // [π¬π¬π¬π¬¬]
  0x81, 0xCF, 0xEF, // [π¬Ίπ¬π¬Ήπ¬»]
  0xFF, 0xFF, 0xF7, // [ββπ¬¬β] \x9e
  0xE3, 0xC1, 0xD5, // [βπ¬π¬π¬¨]
  0xF7, 0xF7, 0xFF, // [ββπ¬·β]
  0xFF, 0xF7, 0xF7, // [ββπ¬¨β] \x9f
  0xD5, 0xC1, 0xE3, // [βπ¬π¬π¬·]
  0xF7, 0xFF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0xFF, 0xFF, // [ββββ] \xa0
  0xFF, 0xFF, 0xFF, // [ββββ]
  0xFF, 0xFF, 0xFF, // [ββββ] \xa1
  0xFF, 0xFF, 0xA1, // [π¬π¬π¬π¬¬]
  0xA1, 0xFF, 0xFF, // [π¬Ίπ¬Ίπ¬Ήπ¬»]
  0xFF, 0xFF, 0xF1, // [ββπ¬π¬¬] \xa2
  0xF1, 0xFF, 0xFF, // [ββπ¬Ήπ¬»]
  0xF1, 0xF1, 0xFF, // [ββπ¬­π¬·]
  0xDB, 0x81, 0x81, // [π¬π¬π¬π¬¨] \xa3
  0xDB, 0xDB, 0x81, // [π¬π¬π¬π¬¬]
  0x81, 0xDB, 0xFF, // [π¬Ίπ¬΅π¬±π¬»] \xa4
  0xDB, 0xD1, 0x94, // [π¬βπ¬π¬]
  0x94, 0xC5, 0xED, // [π¬Ίπ¬π¬·π¬¦]
  0xFF, 0xFF, 0x99, // [π¬π¬¬π¬π¬¬] \xa5
  0xC9, 0xE7, 0xF3, // [βπ¬±π¬π¬»]
  0x99, 0x9D, 0xFF, // [π¬²π¬·π¬Ίπ¬·]
  0xFF, 0xCF, 0x85, // [π¬π¬π¬¬π¬¬] \xa6
  0xB0, 0xA2, 0xC8, // [π¬²π¬π¬π¬]
  0x8D, 0xAF, 0xFF, // [π¬²π¬±βπ¬»] \xa7
  0xFF, 0xFF, 0xF1, // [ββπ¬π¬¬]
  0xF1, 0xFF, 0xFF, // [ββπ¬Ήπ¬»]
  0xFF, 0xFF, 0xFF, // [ββββ] \xa8
  0xFF, 0xC3, 0x81, // [π¬π¬π¬π¬¬]
  0x99, 0xBD, 0xFF, // [π¬²π¬»π¬Ίπ¬·]
  0xFF, 0xBD, 0x99, // [π¬π¬¬π¬π¬¨] \xa9
  0x81, 0xC3, 0xFF, // [π¬Ίπ¬­π¬­π¬»]
  0xFF, 0xFF, 0xF7, // [ββπ¬¬β] \xaa
  0xD5, 0xC1, 0xE3, // [βπ¬π¬π¬·]
  0xE3, 0xC1, 0xD5, // [βπ¬π¬π¬¨]
  0xF7, 0xFF, 0xF7, // [ββπ¬«β] \xab
  0xF7, 0xC1, 0xC1, // [βπ¬π¬π¬¨]
  0xF7, 0xF7, 0xFF, // [ββπ¬·β]
  0xFF, 0xFF, 0x7F, // [π¬¬βββ] \xac
  0x1F, 0x9F, 0xFF, // [π¬±π¬·ββ]
  0xFF, 0xFF, 0xFF, // [ββββ] \xad
  0xF7, 0xF7, 0xF7, // [ββββ]
  0xF7, 0xF7, 0xF7, // [ββββ]
  0xFF, 0xFF, 0xFF, // [ββββ] \xae
  0xFF, 0x9F, 0x9F, // [π¬π¬¨ββ]
  0xFF, 0xFF, 0xFF, // [ββββ]
  0xFF, 0x9F, 0xCF, // [π¬΄π¬ββ] \xaf
  0xE7, 0xF3, 0xF9, // [βπ¬Ίπ¬π¬¬]
  0xFD, 0xFF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0xC3, 0x81, // [π¬π¬π¬π¬¬] \xb0
  0xAD, 0xB5, 0x81, // [βπ¬π¬β]
  0xC3, 0xFF, 0xFF, // [βπ¬Ήπ¬Ήβ] \xb1
  0xBF, 0xBB, 0x81, // [βπ¬π¬π¬¬]
  0x81, 0xBF, 0xBF, // [βπ¬Ήπ¬Ήπ¬»]
  0xFF, 0xFF, 0xBB, // [π¬βπ¬β] \xb2
  0x99, 0x8D, 0xA5, // [βπ¬π¬ͺβ]
  0xB1, 0xBB, 0xFF, // [π¬²βπ¬±π¬»]
  0xFF, 0xDD, 0x9D, // [π¬π¬¨βπ¬¨] \xb3
  0xB5, 0xA1, 0x89, // [βπ¬π¬β]
  0xDD, 0xFF, 0xFF, // [βπ¬»βπ¬»] \xb4
  0xCF, 0xC7, 0xD3, // [βπ¬π¬β]
  0x81, 0x81, 0xDF, // [π¬²π¬π¬­π¬·]
  0xFF, 0xFF, 0xD1, // [βπ¬¬π¬π¬¬] \xb5
  0x91, 0xB5, 0xB5, // [βπ¬»π¬¦β]
  0x85, 0xCD, 0xFF, // [π¬Ίπ¬­π¬»π¬·]
  0xFF, 0xC3, 0x81, // [π¬π¬π¬π¬¬] \xb6
  0xB5, 0xB5, 0x85, // [βπ¬ββ]
  0xCF, 0xFF, 0xFF, // [βπ¬Ήββ] \xb7
  0xFD, 0x9D, 0x8D, // [π¬π¬ββ]
  0xE5, 0xF1, 0xF9, // [βπ¬Ίπ¬β]
  0xFF, 0xFF, 0xCB, // [βπ¬π¬β] \xb8
  0x81, 0xB5, 0xB5, // [βπ¬Ήπ¬¦β]
  0x81, 0xCB, 0xFF, // [π¬Ίπ¬­π¬±π¬»]
  0xFF, 0xFB, 0xB1, // [π¬βπ¬π¬¬] \xb9
  0xB5, 0x95, 0xC1, // [π¬²π¬π¬β]
  0xE3, 0xFF, 0xFF, // [βπ¬Ίπ¬Ήβ] \xba
  0xFF, 0xFF, 0x93, // [π¬π¬¬π¬β]
  0x93, 0xFF, 0xFF, // [π¬Ίπ¬»π¬Ήβ]
  0xFF, 0xFF, 0xFF, // [ββββ] \xbb
  0x7F, 0x13, 0x93, // [π¬π¬¨π¬β]
  0xFF, 0xFF, 0xFF, // [ββββ]
  0xFF, 0xFF, 0xF7, // [ββπ¬¬β] \xbc
  0xE3, 0xC9, 0x9C, // [π¬π¬π¬±π¬]
  0xBE, 0xFF, 0xFF, // [π¬Ίββπ¬Ί] \xbd
  0xDB, 0xDB, 0xDB, // [ββββ]
  0xDB, 0xDB, 0xDB, // [ββββ]
  0xFF, 0xFF, 0xBE, // [π¬ββπ¬] \xbe
  0x9C, 0xC9, 0xE3, // [π¬Ίπ¬π¬π¬΅]
  0xF7, 0xFF, 0xFF, // [ββπ¬»β]
  0xFF, 0xFB, 0xF9, // [ββπ¬π¬¬] \xbf
  0xAD, 0xA5, 0xF1, // [π¬²π¬²π¬β]
  0xFB, 0xFF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0xC3, 0x81, // [π¬π¬π¬π¬¬] \xc0
  0xBD, 0xA5, 0xA1, // [βπ¬π¬β]
  0xA3, 0xFF, 0xFF, // [π¬Ίπ¬Ίπ¬Ήβ] \xc1
  0x87, 0x83, 0xD9, // [π¬²π¬π¬π¬¬]
  0xD9, 0x83, 0x87, // [π¬π¬π¬π¬»]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xc2
  0x81, 0xB5, 0xB5, // [βπ¬Ήπ¬¦β]
  0x81, 0xCB, 0xFF, // [π¬Ίπ¬­π¬±π¬»]
  0xFF, 0xC3, 0x81, // [π¬π¬π¬π¬¬] \xc3
  0xBD, 0xBD, 0x99, // [βπ¬¬π¬β]
  0xDB, 0xFF, 0xFF, // [βπ¬»π¬Ίβ] \xc4
  0x81, 0x81, 0xBD, // [βπ¬­π¬­β]
  0x99, 0xC3, 0xE7, // [π¬Ίπ¬π¬π¬»]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xc5
  0x81, 0xB5, 0xB5, // [βπ¬Ήπ¬¦β]
  0xB5, 0xBD, 0xFF, // [π¬²βπ¬»π¬·]
  0xFF, 0x81, 0x81, // [π¬π¬π¬π¬¨] \xc6
  0xF5, 0xF5, 0xF5, // [ββββ]
  0xFD, 0xFF, 0xFF, // [βββπ¬»] \xc7
  0xC3, 0x81, 0xBD, // [π¬π¬­π¬­π¬¨]
  0xAD, 0x8D, 0x8D, // [βπ¬ββ]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xc8
  0x81, 0xF7, 0xF7, // [π¬Ίπ¬Ήπ¬¦π¬»]
  0x81, 0x81, 0xFF, // [π¬²π¬­π¬­π¬·]
  0xFF, 0xBD, 0xBD, // [π¬ββπ¬¨] \xc9
  0x81, 0x81, 0xBD, // [βπ¬­π¬­β]
  0xBD, 0xFF, 0xFF, // [π¬Ίββπ¬»] \xca
  0xDF, 0x9F, 0xBF, // [π¬π¬·ββ]
  0xBF, 0x81, 0xC1, // [π¬²π¬π¬π¬¨]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xcb
  0x81, 0xE7, 0xC3, // [π¬Ίπ¬π¬π¬»]
  0x99, 0xBD, 0xFF, // [π¬²π¬»π¬Ίπ¬·]
  0xFF, 0x81, 0x81, // [π¬π¬π¬π¬¨] \xcc
  0xBF, 0xBF, 0xBF, // [ββββ]
  0xBF, 0xFF, 0xFF, // [π¬Ίβββ] \xcd
  0x81, 0x81, 0xF3, // [π¬²π¬­ π¬·]
  0xE7, 0xF3, 0x81, // [π¬π¬π¬π¬¬]
  0x81, 0xFF, 0x81, // [π¬π¬π¬π¬«] \xce
  0x81, 0xE3, 0xC7, // [π¬Ίπ¬π¬π¬»]
  0x81, 0x81, 0xFF, // [π¬²π¬­π¬­π¬·]
  0xFF, 0xC3, 0x81, // [π¬π¬π¬π¬¬] \xcf
  0xBD, 0xBD, 0x81, // [βπ¬π¬β]
  0xC3, 0xFF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0x81, 0x81, // [π¬π¬π¬π¬¨] \xd0
  0xED, 0xED, 0xE1, // [ββπ¬β]
  0xF3, 0xFF, 0xFF, // [ββπ¬Ήβ] \xd1
  0xC3, 0x81, 0xBD, // [π¬π¬­π¬­π¬¨]
  0xDD, 0x81, 0xA3, // [π¬π¬π¬π¬·]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xd2
  0x81, 0xED, 0xCD, // [π¬Ίπ¬π¬Ήβ]
  0x81, 0xB3, 0xFF, // [π¬²π¬Ήπ¬­π¬»]
  0xFF, 0xFB, 0xB1, // [π¬βπ¬π¬¬] \xd3
  0xB5, 0xB5, 0x85, // [βπ¬ββ]
  0xCF, 0xFF, 0xFF, // [βπ¬Ήββ] \xd4
  0xFD, 0xFD, 0x81, // [π¬π¬π¬β]
  0x81, 0xFD, 0xFD, // [π¬Ίπ¬Ήπ¬Ήβ]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xd5
  0x81, 0xBF, 0xBF, // [βπ¬Ήπ¬Ήπ¬»]
  0x81, 0x81, 0xFF, // [π¬²π¬­π¬­π¬·]
  0xFF, 0xE1, 0xC1, // [βπ¬π¬π¬¨] \xd6
  0x9F, 0x9F, 0xC1, // [π¬²π¬π¬π¬¬]
  0xE1, 0xFF, 0xFF, // [βπ¬Ίπ¬Ήπ¬»] \xd7
  0x81, 0x81, 0xCF, // [π¬² π¬­π¬·]
  0xE7, 0xCF, 0x81, // [π¬π¬π¬π¬¬]
  0x81, 0xFF, 0x99, // [π¬π¬©π¬π¬«] \xd8
  0x81, 0xE7, 0xE7, // [π¬Ίπ¬π¬¦π¬»]
  0x81, 0x99, 0xFF, // [π¬²π¬΅π¬±π¬·]
  0xFF, 0xF9, 0xF1, // [ββπ¬π¬¨] \xd9
  0x87, 0x87, 0xF1, // [π¬²π¬­π¬π¬¬]
  0xF9, 0xFF, 0xFF, // [ββπ¬Ίπ¬»] \xda
  0x9D, 0x8D, 0xA5, // [βπ¬π¬¬β]
  0xB1, 0xB9, 0xBD, // [ββπ¬±β]
  0xFF, 0xFF, 0xFF, // [ββββ] \xdb
  0xFF, 0x81, 0x81, // [π¬π¬π¬π¬¨]
  0xBD, 0xBD, 0xFF, // [π¬²ββπ¬·]
  0xFF, 0xF9, 0xF3, // [ββπ¬π¬Έ] \xdc
  0xE7, 0xCF, 0x9F, // [π¬π¬π¬»β]
  0xBF, 0xFF, 0xFF, // [π¬Ίβββ] \xdd
  0xBD, 0xBD, 0x81, // [βπ¬π¬β]
  0x81, 0xFF, 0xFF, // [π¬Ίπ¬Ήπ¬Ήπ¬»]
  0xFF, 0xFF, 0xEF, // [βπ¬ββ] \xde
  0xE7, 0xF3, 0xF9, // [βπ¬Ίπ¬π¬¬]
  0xF3, 0xE7, 0xEF, // [βπ¬π¬΅β]
  0xBF, 0xBF, 0xBF, // [ββββ] \xdf
  0xBF, 0xBF, 0xBF, // [ββββ]
  0xBF, 0xBF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0xE7, 0xC3, // [βπ¬π¬β] \xe0
  0x81, 0x81, 0xC3, // [π¬²  π¬·]
  0xE7, 0xFF, 0xFF, // [βπ¬Ίπ¬»β] \xe1
  0xDF, 0x8B, 0xAB, // [π¬π¬π¬β]
  0xAB, 0x83, 0x87, // [βπ¬π¬β]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xe2
  0x81, 0xB7, 0xB7, // [βπ¬Ήπ¬¦π¬»]
  0x87, 0xCF, 0xFF, // [π¬Ίπ¬­π¬»β]
  0xFF, 0xC7, 0x83, // [π¬π¬π¬β] \xe3
  0xBB, 0xBB, 0xBB, // [ββββ]
  0xFF, 0xFF, 0xFF, // [ββββ] \xe4
  0xCF, 0x87, 0xB7, // [π¬π¬­π¬¨β]
  0xB7, 0x81, 0x81, // [βπ¬π¬π¬¨]
  0xFF, 0xFF, 0xC7, // [βπ¬π¬¬β] \xe5
  0x83, 0xAB, 0xAB, // [βπ¬π¬β]
  0xA3, 0xE7, 0xFF, // [π¬Ίπ¬²π¬΅β]
  0xFF, 0xFF, 0xF7, // [ββπ¬¬β] \xe6
  0x83, 0x81, 0xF5, // [π¬²π¬­π¬π¬¨]
  0xF5, 0xFF, 0xFF, // [ββπ¬»π¬»] \xe7
  0x67, 0x43, 0x5B, // [βπ¬π¬β]
  0x5B, 0x03, 0x83, // [π¬π¬π¬β]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xe8
  0x81, 0xF7, 0xF7, // [π¬Ίπ¬Ήπ¬¦π¬»]
  0x87, 0x8F, 0xFF, // [π¬²π¬­π¬»β]
  0xFF, 0xFF, 0xB7, // [π¬βπ¬¬β] \xe9
  0x85, 0x85, 0xBF, // [βπ¬­π¬·π¬·]
  0xFF, 0xFF, 0xFF, // [ββββ] \xea
  0xFF, 0x7F, 0x7F, // [π¬¨βββ]
  0x7F, 0x05, 0x85, // [π¬π¬π¬¨π¬¨]
  0xFF, 0xFF, 0x81, // [π¬π¬π¬π¬¬] \xeb
  0x81, 0xEF, 0xC7, // [π¬Ίπ¬π¬©π¬»]
  0x97, 0xBF, 0xFF, // [π¬²π¬»π¬»β]
  0xFF, 0xFF, 0xBD, // [π¬ββπ¬¬] \xec
  0x81, 0x81, 0xBF, // [βπ¬­π¬­π¬·]
  0xFF, 0xFF, 0xFF, // [ββββ] \xed
  0x83, 0x83, 0xE7, // [π¬²π¬π¬β]
  0xC7, 0xE3, 0x83, // [π¬π¬π¬β]
  0x87, 0xFF, 0x83, // [π¬π¬π¬β] \xee
  0x83, 0xFB, 0xFB, // [π¬Ίπ¬Ήπ¬β]
  0x83, 0x87, 0xFF, // [π¬²π¬­π¬΅β]
  0xFF, 0xC7, 0x83, // [π¬π¬π¬β] \xef
  0xBB, 0xBB, 0x83, // [βπ¬π¬β]
  0xC7, 0xFF,       // [π¬π¬π¬π¬]
////////////////////////////////////
  0xFF, 0x03, 0x03, // [π¬π¬π¬β] \xf0
  0xDB, 0xDB, 0xC3, // [βπ¬π¬β]
  0xE7, 0xFF, 0xFF, // [βπ¬Ίπ¬»β] \xf1
  0xE7, 0xC3, 0xDB, // [βπ¬π¬β]
  0xDB, 0x03, 0x03, // [π¬π¬π¬β]
  0xFF, 0xFF, 0x83, // [π¬π¬π¬β] \xf2
  0x83, 0xFB, 0xFB, // [π¬Ίπ¬Ήπ¬β]
  0xF3, 0xF7, 0xFF, // [ββπ¬΅β]
  0xFF, 0xB7, 0xA3, // [π¬π¬π¬β] \xf3
  0xAB, 0xAB, 0x8B, // [βπ¬ββ]
  0xDB, 0xFF, 0xFF, // [βπ¬»π¬Ίβ] \xf4
  0xFB, 0xFB, 0xC1, // [βπ¬π¬π¬¬]
  0x81, 0xBB, 0xBB, // [βπ¬Ήπ¬π¬»]
  0xFF, 0xFF, 0xC3, // [βπ¬π¬β] \xf5
  0x83, 0xBF, 0xBF, // [βπ¬Ήπ¬Ήβ]
  0x83, 0x83, 0xFF, // [π¬²π¬­π¬­β]
  0xFF, 0xE3, 0xC3, // [βπ¬π¬β] \xf6
  0x9F, 0x9F, 0xC3, // [π¬²π¬π¬β]
  0xE3, 0xFF, 0xFF, // [βπ¬Ίπ¬Ήβ] \xf7
  0xE3, 0x83, 0x8F, // [π¬π¬π¬­β]
  0xC7, 0x8F, 0x83, // [π¬ π¬β]
  0xE3, 0xFF, 0xBB, // [π¬π¬Ίπ¬β] \xf8
  0x93, 0xC7, 0xC7, // [π¬Ίπ¬π¬¦β]
  0x93, 0xBB, 0xFF, // [π¬²π¬»π¬±β]
  0xFF, 0x63, 0x43, // [π¬¨π¬π¬β] \xf9
  0x5F, 0x1F, 0x83, // [π¬π¬π¬β]
  0xC3, 0xFF, 0xFF, // [βπ¬Ήπ¬Ήβ] \xfa
  0xBB, 0x9B, 0x8B, // [βπ¬ββ]
  0xA3, 0xB3, 0xBB, // [βπ¬Ίπ¬β]
  0xFF, 0xFF, 0xE7, // [βπ¬π¬¬β] \xfb
  0xA3, 0x81, 0x81, // [βπ¬ π¬¨]
  0xA3, 0xE7, 0xFF, // [π¬Ίπ¬²π¬΅β]
  0xFF, 0xFF, 0xFF, // [ββββ] \xfc
  0x00, 0x00, 0xFF, // [π¬­π¬­π¬­π¬­]
  0xFF, 0xFF, 0xFF, // [ββββ] \xfd
  0xC1, 0xC1, 0xF1, // [βπ¬­ β]
  0xE1, 0x85, 0x8D, // [π¬π¬π¬΅β]
  0xFF, 0xFF, 0xF7, // [ββπ¬¬β] \xfe
  0xE3, 0xC1, 0x80, // [π¬π¬ π¬]
  0xFF, 0xFF, 0xFF, // [ββββ]
  0xFF, 0xFF, 0xFF, // [ββββ] \xff
  0x80, 0xC1, 0xE3, // [π¬Ίπ¬ π¬΅]
  0xF7, 0xFF,       // [π¬π¬π¬π¬]
};
