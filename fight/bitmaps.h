#ifndef BITMAP_H
#define BITMAP_H


const unsigned char PROGMEM KICK[] =
{
// width, height,
32, 32,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xf8, 0xf0, 0xfc, 0xf8, 0xff, 0xd9, 0xff, 0xdb, 0xff, 0xc3, 0xff, 0x1b, 0xff, 0xdb, 0xff, 0xd8, 0xff, 0x10, 0xfc, 
0xe0, 0xf8, 0x00, 0xf0, 0x00, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0xf1, 0xe0, 0xff, 0xfa, 0xff, 0xda, 0xff, 0xea, 0xff, 0x32, 0xff, 0x22, 0xff, 0x7a, 0xff, 0xf0, 0xff, 0xe2, 0xff, 
0xc3, 0xf7, 0x83, 0xe7, 0x03, 0xc7, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1f, 0xff, 0x0f, 0x3f, 0x03, 0x1f, 0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x80, 0xe0, 0xc0, 0xf0, 0xe0, 0xf8, 0x70, 0xfc, 0x38, 0xff, 0xf9, 0xff, 0xfb, 0xff, 0x83, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0x70, 0xff, 
0xe0, 0xf8, 0xc0, 0xf0, 0x80, 0xe0, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x06, 0x0f, 0x05, 0xcf, 0x83, 0xcf, 0x81, 0xc7, 0x80, 0xf3, 0x20, 0xff, 0xe9, 0xff, 0xfd, 0xff, 0x7d, 0xff, 0x39, 0xff, 0x03, 0xff, 0xf7, 0xff, 0xe0, 0xff, 
0xc0, 0xf3, 0x81, 0xe7, 0x02, 0xc7, 0x03, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0f, 0x1f, 0x07, 0x1f, 0x03, 0x0f, 0x00, 0x07, 0x01, 0x03, 0x00, 0x03, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x47, 0xff, 0x03, 0xef, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 02
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xe0, 0xf8, 0xf0, 0xf8, 0xf0, 0xf8, 0xf0, 0xf8, 0xf0, 0xf8, 0xe0, 0xf8, 
0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0xe0, 0x40, 0xf0, 0xe0, 0xf8, 0x70, 0xfc, 0x38, 0xff, 0x1c, 0xff, 0xfd, 0xff, 0xfd, 0xff, 0xfd, 0xff, 0xfd, 0xff, 0xfc, 0xff, 
0x6c, 0xff, 0x1c, 0xfe, 0x98, 0xfe, 0x80, 0xfc, 0xc0, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf8, 0x70, 0xfc, 0x38, 0xfc, 0x30, 0x7f, 0x06, 0x7f, 0x0f, 0x1f, 0x07, 0x1f, 0x00, 0x0f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x03, 0x01, 0x03, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x03, 0xdf, 0x8d, 0xff, 0xfd, 0xff, 0xfe, 0xff, 
0xfe, 0xff, 0x07, 0xff, 0x03, 0x0f, 0x03, 0x07, 0x01, 0x07, 0x01, 0x03, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x76, 0xff, 0x77, 0xff, 0x77, 0xff, 0x03, 0xff, 
0x00, 0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 03
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x80, 0xe0, 0xc0, 0xf0, 0xe0, 0xf8, 0x70, 0xfc, 0x38, 0xff, 0xf9, 0xff, 0xfb, 0xff, 0x83, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0x70, 0xff, 
0xe0, 0xf8, 0xc0, 0xf0, 0x80, 0xe0, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x06, 0x0f, 0x05, 0xcf, 0x83, 0xcf, 0x81, 0xc7, 0x80, 0xf3, 0x20, 0xff, 0xe9, 0xff, 0xfd, 0xff, 0x7d, 0xff, 0x39, 0xff, 0x03, 0xff, 0xf7, 0xff, 0xe0, 0xff, 
0xc0, 0xf3, 0x81, 0xe7, 0x02, 0xc7, 0x03, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0f, 0x1f, 0x07, 0x1f, 0x03, 0x0f, 0x00, 0x07, 0x01, 0x03, 0x00, 0x03, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x47, 0xff, 0x03, 0xef, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 04
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xf8, 0xf0, 0xfc, 0xf8, 0xff, 0xd9, 0xff, 0xdb, 0xff, 0xc3, 0xff, 0x1b, 0xff, 0xdb, 0xff, 0xd8, 0xff, 0x10, 0xfc, 
0xe0, 0xf8, 0x00, 0xf0, 0x00, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0xf1, 0xe0, 0xff, 0xfa, 0xff, 0xda, 0xff, 0xea, 0xff, 0x32, 0xff, 0x22, 0xff, 0x7a, 0xff, 0xf0, 0xff, 0xe2, 0xff, 
0xc3, 0xf7, 0x83, 0xe7, 0x03, 0xc7, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1f, 0xff, 0x0f, 0x3f, 0x03, 0x1f, 0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM WALK[] =
{
// width, height,
32, 32,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xf8, 0xf0, 0xfc, 0xf8, 0xff, 0xd9, 0xff, 0xdb, 0xff, 0xc3, 0xff, 0x1b, 0xff, 0xdb, 0xff, 0xd8, 0xff, 0x10, 0xfc, 
0xe0, 0xf8, 0x00, 0xf0, 0x00, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0xf1, 0xe0, 0xff, 0xfa, 0xff, 0xda, 0xff, 0xea, 0xff, 0x32, 0xff, 0x22, 0xff, 0x7a, 0xff, 0xf0, 0xff, 0xe2, 0xff, 
0xc3, 0xf7, 0x83, 0xe7, 0x03, 0xc7, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1f, 0xff, 0x0f, 0x3f, 0x03, 0x1f, 0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf8, 0xf0, 0xff, 0xb9, 0xff, 0xbb, 0xff, 0x83, 0xff, 0x3b, 0xff, 0xbb, 0xff, 0xb8, 0xff, 0x30, 0xfc, 
0xe0, 0xf8, 0x00, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf3, 0x61, 0xff, 0xfd, 0xff, 0xdd, 0xff, 0xed, 0xff, 0x31, 0xff, 0x60, 0xff, 0xfd, 0xff, 0xe1, 0xff, 0x02, 0xf7, 
0x03, 0x87, 0x03, 0x07, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x70, 0xf8, 0x60, 0xfe, 0x5c, 0xff, 0x5f, 0xff, 0x0f, 0xff, 0x07, 0x1f, 0x03, 0x0f, 0x00, 0xff, 0x77, 0xff, 0x6f, 0xff, 0x4f, 0xff, 
0x40, 0xff, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 02
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf8, 0xf0, 0xf8, 0xb0, 0xff, 0xb9, 0xff, 0xbb, 0xff, 0x03, 0xff, 0xbb, 0xff, 0xbb, 0xff, 0x38, 0xff, 0xf0, 0xfc, 
0xe0, 0xf8, 0x80, 0xf8, 0xb0, 0xf8, 0x30, 0xf8, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x01, 0x03, 0x01, 0xff, 0xfd, 0xff, 0xdd, 0xff, 0xed, 0xff, 0x70, 0xff, 0x21, 0xff, 0xfd, 0xff, 0xc0, 0xff, 0x03, 0xe7, 
0x03, 0x07, 0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0xff, 0x77, 0xff, 0x6f, 0xff, 0x6f, 0xff, 0x60, 0xff, 0x4f, 0xff, 0x07, 0xff, 0x02, 0x0f, 
0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 03
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf8, 0xf0, 0xff, 0xb9, 0xff, 0xbb, 0xff, 0x83, 0xff, 0x3b, 0xff, 0xbb, 0xff, 0xb8, 0xff, 0x30, 0xfc, 
0xe0, 0xf8, 0x00, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf3, 0x61, 0xff, 0xfd, 0xff, 0xdd, 0xff, 0xed, 0xff, 0x31, 0xff, 0x60, 0xff, 0xfd, 0xff, 0xe1, 0xff, 0x02, 0xf7, 
0x03, 0x87, 0x03, 0x07, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x70, 0xf8, 0x60, 0xfe, 0x5c, 0xff, 0x5f, 0xff, 0x0f, 0xff, 0x07, 0x1f, 0x03, 0x0f, 0x00, 0xff, 0x77, 0xff, 0x6f, 0xff, 0x4f, 0xff, 
0x40, 0xff, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM PUNCH[] =
{
// width, height,
32, 32,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xf8, 0xf0, 0xfc, 0xf8, 0xff, 0xd9, 0xff, 0xdb, 0xff, 0x83, 0xff, 0x3b, 0xff, 0xbb, 0xff, 0xb8, 0xff, 0x30, 0xfc, 
0xe0, 0xf8, 0xe0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf8, 0xd0, 0xf8, 0x30, 0xf8, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x80, 0xff, 0xf9, 0xff, 0xd9, 0xff, 0xe9, 0xff, 0x31, 0xff, 0x20, 0xff, 0x79, 0xff, 0xf1, 0xff, 0xe0, 0xfb, 
0xc0, 0xf1, 0x80, 0xe1, 0x00, 0xc1, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1e, 0xff, 0x0f, 0x3f, 0x07, 0x1f, 0x03, 0x0f, 0x01, 0x07, 0x00, 0x03, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 
0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf8, 0xf0, 0xfc, 0xb8, 0xff, 0x39, 0xff, 0xbb, 0xff, 0x83, 0xff, 0x3b, 0xff, 0xfb, 0xff, 
0xf8, 0xff, 0x38, 0xfc, 0x38, 0x7c, 0x38, 0x7c, 0x38, 0x7c, 0x18, 0x7c, 0x38, 0x7c, 0x38, 0x7c, 0x00, 0x7c, 0x18, 0x3c, 0x18, 0x3c, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc1, 0x80, 0xe3, 0xc1, 0xf7, 0xe3, 0xff, 0xfb, 0xff, 0xd8, 0xff, 0xe9, 0xff, 0x71, 0xff, 0x20, 0xff, 0x7b, 0xff, 
0xf1, 0xff, 0xe0, 0xfb, 0xc0, 0xf0, 0x80, 0xe0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1f, 0xff, 0x0f, 0x3f, 0x07, 0x1f, 0x03, 0x0f, 0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 
0x76, 0xff, 0x6f, 0xff, 0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 02
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xf8, 0xf0, 0xfc, 0xf8, 0xff, 0xd9, 0xff, 0xdb, 0xff, 0x83, 0xff, 0x3b, 0xff, 0xbb, 0xff, 0xb8, 0xff, 0x30, 0xfc, 
0xe0, 0xf8, 0xe0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf8, 0xd0, 0xf8, 0x30, 0xf8, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x80, 0xff, 0xf9, 0xff, 0xd9, 0xff, 0xe9, 0xff, 0x31, 0xff, 0x20, 0xff, 0x79, 0xff, 0xf1, 0xff, 0xe0, 0xfb, 
0xc0, 0xf1, 0x80, 0xe1, 0x00, 0xc1, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1e, 0xff, 0x0f, 0x3f, 0x07, 0x1f, 0x03, 0x0f, 0x01, 0x07, 0x00, 0x03, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 03
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xf0, 0xe0, 0xf0, 0xe0, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xf8, 0xf0, 0xfc, 0xf8, 0xff, 0xd9, 0xff, 0xdb, 0xff, 0xc3, 0xff, 0x1b, 0xff, 0xdb, 0xff, 0xd8, 0xff, 0x10, 0xfc, 
0xe0, 0xf8, 0x00, 0xf0, 0x00, 0xf0, 0x60, 0xf0, 0x60, 0xf0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0xf1, 0xe0, 0xff, 0xfa, 0xff, 0xda, 0xff, 0xea, 0xff, 0x32, 0xff, 0x22, 0xff, 0x7a, 0xff, 0xf0, 0xff, 0xe2, 0xff, 
0xc3, 0xf7, 0x83, 0xe7, 0x03, 0xc7, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfe, 0x74, 0xff, 0x6e, 0xff, 0x1f, 0xff, 0x0f, 0x3f, 0x03, 0x1f, 0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0xfc, 0x78, 0xff, 0x76, 0xff, 0x6f, 0xff, 
0x67, 0xff, 0x43, 0xff, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const unsigned char PROGMEM JUMP[] =
{
// width, height,
32, 32,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0xc0, 0x80, 0xfe, 0x9c, 0xff, 0xbe, 0xff, 0x3e, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0x80, 0xff, 0x00, 0xc0, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0xc0, 0xf8, 0xd0, 0xfc, 0x18, 0xfe, 0x3c, 0x7f, 0x1e, 0x7f, 0x0f, 0x3f, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 
0x8e, 0xff, 0x9c, 0xff, 0xb8, 0xfe, 0x18, 0xfc, 0xd0, 0xfc, 0xc0, 0xf8, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0xe0, 0xc0, 0xfc, 0xf8, 0xff, 0xfe, 0xff, 0x76, 0xff, 0x1a, 0xff, 0x0c, 0xff, 0xc4, 0xff, 0xd6, 0xff, 0xde, 0xff, 0x3f, 0xff, 
0x3f, 0xff, 0x1f, 0x7f, 0x03, 0x3f, 0x00, 0x07, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xe0, 0x40, 0xf0, 0x60, 0xf8, 0x70, 0xfc, 0x78, 0xff, 0x37, 0xff, 0x07, 0x7f, 0x03, 0x0f, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x01, 0x07, 0x03, 0x07, 0x03, 0x07, 
0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0xc0, 0x80, 0xfe, 0x9c, 0xff, 0xbe, 0xff, 0x3e, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0x80, 0xff, 0x00, 0xc0, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x70, 0xfe, 0x7c, 0xff, 0x7f, 0xff, 0x6f, 0xff, 0x0f, 0xff, 0x6f, 0xff, 0x6f, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0x1f, 0x7f, 
0x3e, 0x7f, 0x38, 0x7f, 0x38, 0x7c, 0x38, 0x7c, 0x30, 0x7c, 0x00, 0x78, 0x30, 0x78, 0x30, 0x78, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x80, 0xf0, 0xe0, 0xf8, 0xf0, 0xff, 0xfc, 0xff, 0x7f, 0xff, 0x37, 0xff, 0x1b, 0x7f, 0x1d, 0x3f, 0x19, 0x7f, 0x3f, 0xff, 0x3f, 0xff, 0xfc, 0xff, 0xf8, 0xfe, 
0xf0, 0xfc, 0xe0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe0, 0x40, 0xf8, 0x70, 0xff, 0x7b, 0xff, 0x3b, 0xff, 0x1b, 0x7f, 0x01, 0x3f, 0x00, 0x03, 0x00, 0x00, 0x00, 0x78, 0x30, 0xf8, 0x70, 0xff, 0x76, 0xff, 0x6f, 0xff, 0x47, 0xff, 0x03, 0xef, 
0x01, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const unsigned char PROGMEM ENEMY1_WALK[] =
{
// width, height,
20, 32,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
0xf0, 0xf8, 0x50, 0xf8, 0x10, 0xf8, 0xb0, 0xf8, 0xe0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x80, 0xf8, 0x70, 0xfc, 0x08, 0xfe, 0xc4, 0xff, 
0x92, 0xff, 0x21, 0xff, 0x10, 0xff, 0x21, 0xff, 0x92, 0xff, 0xe4, 0xff, 0x88, 0xfe, 0x30, 0xfc, 0xc0, 0xf8, 0x00, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x07, 0x03, 0xc7, 0x81, 0xf7, 0xe1, 0xff, 0xf8, 0xff, 
0x7f, 0xff, 0x3d, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0xff, 0x06, 0xff, 0x07, 0x0f, 0x00, 0x0f, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x43, 0xff, 0x67, 0xff, 0x6f, 0xff, 
0x6e, 0xff, 0x00, 0xff, 0x01, 0xe7, 0x43, 0xff, 0x67, 0xff, 0x6f, 0xff, 0x6e, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
0xf0, 0xf8, 0x50, 0xf8, 0x10, 0xf8, 0xb0, 0xf8, 0xe0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x58, 0xff, 
0xa4, 0xff, 0x13, 0xff, 0x20, 0xff, 0x93, 0xff, 0x24, 0xff, 0xd8, 0xff, 0x20, 0xf8, 0x00, 0xf0, 0xc0, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x06, 0x8f, 0x06, 0xff, 0xf0, 0xff, 
0xfd, 0xff, 0xff, 0xff, 0x70, 0xff, 0x36, 0xff, 0x06, 0xff, 0x03, 0x3f, 0x01, 0x07, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x07, 0xef, 0x47, 0xff, 
0x6f, 0xff, 0x0f, 0xff, 0x4c, 0xff, 0x6d, 0xff, 0x70, 0xff, 0x70, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// FRAME 02
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
0xf0, 0xf8, 0x50, 0xf8, 0x10, 0xf8, 0xb0, 0xf8, 0xe0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xe0, 0x00, 0xf1, 
0x60, 0xff, 0xbb, 0xff, 0x48, 0xff, 0x1b, 0xff, 0x00, 0xff, 0x80, 0xf9, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x0c, 0x1f, 0x0e, 0xff, 0xc5, 0xff, 
0xf2, 0xff, 0xf9, 0xff, 0x78, 0xff, 0x36, 0xff, 0x00, 0xff, 0x02, 0xdf, 0x0f, 0x1f, 0x0c, 0x1f, 0x00, 0x1e, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x40, 0xf8, 0x60, 0xfe, 0x6c, 0xff, 0x6f, 0xff, 
0x0f, 0xff, 0xe0, 0xff, 0xc6, 0xff, 0x0f, 0xff, 0x4e, 0xff, 0x64, 0xff, 0x70, 0xfe, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 

// FRAME 03
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
0xf0, 0xf8, 0x50, 0xf8, 0x10, 0xf8, 0xb0, 0xf8, 0xe0, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x10, 0xfd, 
0xa0, 0xff, 0x93, 0xff, 0x00, 0xff, 0xbb, 0xff, 0x70, 0xff, 0xc0, 0xf9, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x06, 0xcf, 0x84, 0xef, 0x41, 0xff, 
0x0c, 0xff, 0xee, 0xff, 0xe5, 0xff, 0xf2, 0xff, 0x01, 0xff, 0x00, 0x83, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x03, 0x00, 0x07, 
0x03, 0xef, 0x47, 0xff, 0x6f, 0xff, 0x6c, 0xff, 0x60, 0xff, 0x03, 0xff, 0x06, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
};


const unsigned char PROGMEM TILE[] =
{
// width, height,
8, 8,
// TILE 00
0x00, 0x00, 0x00, 0x28, 0x14, 0x00, 0x00, 0x00, 
// TILE 01
0x74, 0x36, 0x17, 0x47, 0x67, 0x77, 0x73, 0x71, 
// TILE 02
0xff, 0xab, 0x55, 0xab, 0x55, 0xab, 0x55, 0xff, 
// TILE 03
0xff, 0xaa, 0x52, 0xa8, 0x55, 0xaa, 0x55, 0xff, 
// TILE 04
0xff, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x00, 
// TILE 05
0xff, 0x95, 0x8b, 0x85, 0x83, 0x81, 0x81, 0xff, 
// TILE 06
0xab, 0xd5, 0xab, 0xd5, 0xab, 0xd5, 0xab, 0xd5, 
// TILE 07
0x00, 0xc0, 0xa0, 0xd0, 0xa8, 0xd4, 0xaa, 0xd5, 
// TILE 08
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 09
0x04, 0x04, 0xff, 0x04, 0x04, 0x04, 0xff, 0x04, 
// TILE 10
0xff, 0x81, 0x81, 0xad, 0xa5, 0xb5, 0x81, 0x81, 
// TILE 11
0xbd, 0x91, 0xbd, 0x81, 0x81, 0xbd, 0xa5, 0xbd, 
// TILE 12
0x81, 0x81, 0xbd, 0x95, 0x9d, 0x81, 0x81, 0xff, 
// TILE 13
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
// TILE 14
0x37, 0x3f, 0x37, 0xf7, 0xf7, 0x37, 0x3f, 0x37, 
// TILE 15
0xfe, 0x2a, 0x96, 0x0a, 0x26, 0x02, 0x0a, 0x02, 
// TILE 16
0xff, 0x00, 0x10, 0xf2, 0x1c, 0x16, 0x1c, 0x12, 
// TILE 17
0x02, 0x02, 0x7a, 0x4a, 0x6a, 0x5a, 0x4a, 0x7a, 
// TILE 18
0x1c, 0xff, 0x13, 0x00, 0x00, 0xf0, 0x88, 0xf6, 
// TILE 19
0x02, 0x02, 0x02, 0x62, 0x7a, 0x6a, 0x0a, 0xfe, 
// TILE 20
0xa1, 0xa1, 0xf6, 0x88, 0xf0, 0x00, 0x00, 0xff, 
};
#endif
