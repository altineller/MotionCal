#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/mstream.h>

static unsigned char png_checkgreen[4220] = {
0x89,0x50,0x4E,0x47,0x0D,0x0A,0x1A,0x0A,0x00,0x00,0x00,0x0D,
0x49,0x48,0x44,0x52,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,
0x08,0x06,0x00,0x00,0x00,0xE2,0x98,0x77,0x38,0x00,0x00,0x00,
0x06,0x62,0x4B,0x47,0x44,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,
0xBD,0xA7,0x93,0x00,0x00,0x00,0x09,0x70,0x48,0x59,0x73,0x00,
0x00,0x0B,0x13,0x00,0x00,0x0B,0x13,0x01,0x00,0x9A,0x9C,0x18,
0x00,0x00,0x00,0x07,0x74,0x49,0x4D,0x45,0x07,0xE2,0x01,0x17,
0x0F,0x2E,0x34,0x46,0x19,0xEC,0x1B,0x00,0x00,0x10,0x09,0x49,
0x44,0x41,0x54,0x78,0xDA,0xED,0x9D,0x79,0x74,0x54,0x55,0x9E,
0xC7,0x3F,0xEF,0x55,0x55,0x16,0x83,0x84,0x88,0x25,0x8B,0x15,
0xF6,0x45,0x10,0x6C,0x50,0x12,0x02,0x42,0x88,0x22,0x2A,0x84,
0xA6,0x39,0xD3,0xEA,0x0C,0xAD,0x0D,0x2A,0x1E,0x64,0xBA,0xD4,
0x06,0x59,0x14,0x04,0xFB,0xA8,0x23,0xD0,0xD2,0xC3,0x88,0x4C,
0x74,0x04,0x97,0xC6,0xD1,0xC6,0x9E,0x1E,0x54,0x44,0x23,0xB8,
0x00,0x06,0x85,0x12,0x12,0xD6,0x18,0x08,0x60,0x80,0x90,0x20,
0xF0,0x58,0x92,0x40,0x96,0x5A,0x5E,0xBD,0xF9,0xE3,0xBD,0x62,
0x8A,0x22,0x4B,0x2D,0xAF,0x2A,0xBC,0xE0,0xF7,0x9C,0x9C,0x93,
0x93,0x54,0xDD,0x7A,0xF5,0xFD,0xDD,0xFB,0xDB,0xEE,0xBD,0xBF,
0x9F,0x40,0x33,0xC1,0x9A,0x93,0x81,0x64,0x77,0x04,0xFE,0x4D,
0x00,0x4C,0x80,0x08,0xC4,0x03,0xFD,0x80,0x5B,0x80,0x3E,0x40,
0x37,0x20,0x15,0x68,0x07,0xB4,0x01,0x12,0x03,0x86,0x74,0x02,
0x67,0x81,0x53,0x40,0x19,0x50,0x02,0xEC,0x07,0xF6,0x00,0x7B,
0x81,0x1A,0x40,0x01,0x64,0xC9,0xEE,0x50,0x9A,0x7A,0x96,0x58,
0x41,0x68,0x6E,0xE2,0xAD,0x39,0x19,0x66,0x20,0x09,0x68,0x05,
0xA4,0x03,0xA3,0x80,0x4C,0xE0,0x66,0x9D,0x3F,0xBA,0x18,0xD8,
0x08,0x7C,0x05,0x14,0x00,0x15,0x40,0xB5,0x64,0x77,0x78,0x9A,
0x53,0x10,0x42,0x33,0x12,0x9F,0xA2,0xCD,0xE8,0x74,0x60,0x3C,
0x70,0x0F,0x60,0x8E,0xD1,0xE3,0x78,0x80,0x0D,0xC0,0x47,0x80,
0x03,0x28,0x93,0xEC,0x8E,0x33,0xCD,0x21,0x08,0xA1,0x19,0x88,
0xEF,0x01,0x0C,0x04,0xC6,0x6A,0x3F,0xD7,0xD1,0xBC,0xA8,0x02,
0x3E,0x03,0xD6,0x02,0x05,0x92,0xDD,0x71,0x30,0x96,0x82,0x10,
0xA2,0x49,0x3C,0x70,0xF1,0x0B,0x58,0x73,0x32,0xFA,0x02,0xD9,
0xDA,0xCF,0x08,0xAE,0x4C,0x7C,0xAF,0x09,0xE3,0x33,0xC9,0xEE,
0x28,0x8C,0x85,0x20,0x84,0x68,0xCF,0x7A,0x6B,0x4E,0x46,0x2A,
0x30,0x19,0x18,0x03,0xA4,0x61,0x0C,0xEC,0xD6,0x56,0xC4,0x9B,
0x92,0xDD,0x51,0x66,0x98,0x15,0x10,0x40,0xBC,0x08,0x4C,0x01,
0x1E,0x03,0x7E,0x15,0x43,0xFD,0xAE,0x17,0xDC,0x9A,0x17,0xB5,
0x42,0xB2,0x3B,0x96,0x45,0x6B,0x25,0x44,0x6B,0x05,0xF4,0x06,
0x96,0x6A,0xAA,0x26,0x01,0x63,0xA3,0x46,0xF3,0x9A,0xA6,0x4A,
0x76,0x47,0x51,0xA0,0x6A,0x8D,0x14,0xA2,0x9E,0xFA,0x5E,0xFB,
0x7D,0x32,0xB0,0x4D,0xF3,0x6A,0x8C,0x4E,0x3E,0xC0,0x35,0xC0,
0x30,0x60,0x9B,0x35,0x27,0x63,0xB6,0x64,0x77,0x20,0xD9,0x1D,
0x97,0x7C,0xE7,0x66,0x5B,0x01,0x01,0x2A,0x27,0x11,0x78,0x07,
0xF8,0x17,0x5A,0x2E,0x14,0x60,0x3D,0x30,0x41,0xB2,0x3B,0x2A,
0xF4,0x50,0x4B,0x82,0x4E,0xE4,0xF7,0xD4,0xBC,0x87,0x5E,0x5C,
0x1D,0x28,0x06,0x26,0x4A,0x76,0xC7,0xB6,0xFA,0x3C,0xBE,0xA8,
0x0B,0xC0,0x47,0xBE,0x96,0x3A,0xB8,0x07,0x58,0xA5,0xA5,0x07,
0xAE,0x26,0x9C,0x04,0x9E,0x04,0x56,0x4B,0x76,0x87,0x37,0x5C,
0x21,0x88,0x11,0x90,0x6F,0x01,0x1E,0x01,0xFE,0xF7,0x2A,0x24,
0x1F,0xD4,0x9C,0xD4,0x0A,0x60,0xAA,0x35,0x27,0xC3,0x12,0xAE,
0x1A,0x32,0x85,0x49,0xBE,0x19,0xB0,0x03,0x8B,0xB5,0x1C,0x4E,
0x0B,0x54,0xF6,0x0A,0x42,0xD3,0x0A,0x22,0x01,0x18,0x09,0xD4,
0x26,0x65,0xDB,0x1C,0x92,0xDD,0xA1,0x58,0x73,0x32,0xA8,0xC9,
0x2D,0xD3,0x7F,0x05,0x04,0xCC,0x7C,0x3B,0xF0,0x62,0x4B,0x24,
0x5F,0x56,0xBC,0xD4,0x79,0x9C,0x28,0x5E,0x19,0xB7,0xEC,0xC6,
0xAB,0x28,0xC1,0x08,0xE1,0x25,0xE0,0xD9,0xFA,0xBC,0x42,0x5D,
0x56,0x40,0x80,0xCE,0x9F,0xA4,0xCD,0xFC,0x6B,0x5B,0x1A,0xF9,
0x2E,0xD9,0xCD,0x75,0xF1,0xD7,0x32,0x6B,0xD0,0xC3,0x3C,0x9B,
0xFE,0x38,0x6D,0x2C,0xD7,0xB0,0xE7,0xF4,0x01,0x64,0xC5,0x8B,
0x20,0x34,0xBA,0x1A,0xCC,0xC0,0xF0,0xA4,0x6C,0x5B,0xAD,0x64,
0x77,0x6C,0x4D,0xCA,0xB6,0x05,0xBD,0x0A,0x82,0x12,0x80,0x6F,
0xB0,0xA4,0x6C,0xDB,0xBD,0xC0,0xBB,0x2D,0x71,0xE6,0x3B,0x65,
0x17,0x99,0x1D,0x07,0xF0,0xE6,0xA8,0x17,0x19,0xDB,0xE3,0x2E,
0x3A,0x27,0xDB,0xC8,0xEC,0x94,0x4E,0x9D,0xEB,0x02,0xDB,0x4E,
0x15,0x05,0xCB,0xE5,0xF0,0xA4,0x6C,0x5B,0x99,0x64,0x77,0xEC,
0x0E,0x56,0x15,0x99,0x82,0x99,0xFD,0x35,0xB9,0x65,0x3E,0x57,
0x73,0x3D,0xD0,0xBA,0x25,0x11,0xEF,0x55,0x14,0x64,0xC5,0xC3,
0xF3,0x83,0xA7,0xB0,0x38,0x6B,0x2E,0xB6,0xD6,0x1D,0x31,0x89,
0x2A,0x2D,0xA2,0x60,0x62,0x44,0xA7,0x21,0xD4,0xD6,0x55,0xB2,
0xF5,0x64,0x21,0xA2,0xD0,0xA4,0x4D,0xB0,0x00,0x23,0x93,0xB2,
0x6D,0x79,0x92,0xDD,0x71,0x2C,0x18,0x21,0x08,0x41,0xAA,0xA0,
0x44,0x60,0x57,0x4B,0xF3,0xF3,0x65,0x45,0xA6,0x53,0xAB,0x1B,
0x78,0xE7,0xEE,0x05,0x0C,0xEC,0x70,0x4B,0xA3,0xAF,0x7D,0x21,
0x6F,0x31,0x4B,0xF7,0xFC,0x03,0xB3,0x18,0x94,0xD2,0x28,0x05,
0xD2,0x24,0xBB,0xE3,0x54,0x53,0x81,0x9A,0x18,0x4C,0x7A,0x41,
0x8B,0x70,0x7B,0xB5,0xB4,0x99,0xFF,0xCF,0x3D,0x46,0xF1,0xDD,
0x84,0x0F,0x9B,0x24,0x1F,0xE0,0x4F,0x99,0xB3,0xF8,0xE3,0x2D,
0x0F,0xE0,0x55,0xBC,0x28,0x34,0x69,0x98,0x53,0x81,0xF7,0x7D,
0x71,0x41,0x63,0x46,0xD9,0xD4,0x94,0xDE,0xD7,0x72,0x3B,0x73,
0x5B,0x8A,0x6B,0x09,0x60,0x4D,0x68,0xC3,0xCB,0x43,0x9F,0x60,
0xCE,0xD0,0x27,0x89,0x33,0xC5,0x05,0xFD,0xFE,0xAC,0xCE,0x43,
0x71,0xBA,0xCE,0x53,0x70,0x6A,0x3F,0xB2,0x22,0x37,0x66,0x98,
0x05,0xE0,0xC6,0xA4,0x6C,0x9B,0x58,0x93,0x5B,0x96,0xA7,0xA9,
0xF0,0x7A,0xD5,0x91,0xA9,0x09,0xBD,0xDF,0x5B,0x0B,0xB4,0xE2,
0x5B,0xC2,0x8C,0x17,0x05,0x81,0xC1,0xED,0x6E,0xE6,0xD5,0x3B,
0xE6,0x32,0xBA,0xC7,0xC8,0xB0,0xC6,0x19,0xD1,0x69,0x08,0x82,
0xD7,0x4D,0xFE,0xC9,0x22,0x9C,0xB2,0x1B,0x51,0x10,0x1B,0xF3,
0x8C,0xBA,0x27,0x65,0xDB,0xF2,0x6B,0x72,0xCB,0x4A,0x1B,0xB2,
0x05,0xA6,0x46,0x5C,0x4E,0x11,0xF8,0x6F,0xF4,0xDF,0x1C,0x6F,
0x16,0xF2,0x2D,0xA2,0x89,0x07,0x7A,0x8E,0x62,0x51,0xE6,0x4C,
0xFA,0x5C,0x1F,0x99,0x36,0x4D,0xEF,0x38,0x00,0x51,0x91,0xD9,
0x25,0x15,0x53,0x27,0xBB,0x1B,0x33,0xCE,0xC9,0x40,0x9B,0xA4,
0x6C,0xDB,0x97,0x35,0xB9,0x65,0x75,0xF5,0xAD,0x82,0xC6,0x02,
0xB1,0x29,0x40,0x56,0x4B,0x20,0x3F,0xCE,0x64,0xE6,0xE9,0x5B,
0x27,0xB2,0x30,0x73,0x16,0xB6,0xD6,0x37,0x46,0x3C,0xA6,0x59,
0x34,0xF3,0xC4,0x6D,0x8F,0xF0,0x68,0xDF,0xF1,0xC4,0x8B,0xE6,
0xA6,0x6C,0x42,0x36,0x70,0x5F,0x43,0x79,0x22,0xB1,0x81,0xD9,
0x9F,0x8A,0xBA,0x93,0x95,0x60,0x78,0xF2,0x05,0x91,0x85,0xC3,
0xA6,0xF3,0x74,0xDA,0x64,0x5A,0xC5,0xEB,0x17,0xBE,0xC4,0x99,
0xE2,0xB8,0xAB,0xCB,0xED,0xB4,0xBB,0xE6,0xBA,0xA6,0xA2,0xE5,
0x78,0x60,0x8A,0x35,0x27,0xA3,0x5B,0x7D,0x51,0xF2,0x25,0x02,
0xF0,0x93,0xD0,0x64,0xD4,0x6D,0x44,0x63,0xEB,0x7C,0x45,0x61,
0xF9,0xA8,0x17,0x98,0x78,0xF3,0x3F,0x61,0x12,0x75,0xDE,0x11,
0x55,0x14,0xF2,0xCA,0xB6,0x73,0xB2,0xE6,0x6C,0x30,0xF1,0x41,
0x1A,0x30,0xCE,0x97,0xB4,0xF3,0x17,0x82,0x18,0xE8,0x76,0x6A,
0xA7,0x17,0xC6,0x60,0xBC,0x3D,0xDC,0x4B,0xBD,0x1D,0x45,0xE6,
0xFD,0x31,0x7F,0x66,0x4C,0x8F,0x91,0x4D,0xA5,0x11,0x42,0xC6,
0xD9,0xDA,0xB3,0x4C,0xFD,0x72,0x1E,0xCB,0x76,0xAD,0xC2,0xAD,
0xC8,0xC1,0x24,0xED,0x00,0xFE,0x08,0x74,0x68,0x32,0x10,0xB3,
0xE6,0x64,0xCC,0x02,0x5E,0x31,0x2E,0xF9,0xE0,0xF2,0xD4,0xB1,
0xF2,0xDE,0x85,0xFC,0xBA,0xC7,0xA8,0x8B,0x51,0xAD,0x5E,0xC8,
0x3F,0xBE,0x93,0x29,0x5F,0xFD,0x89,0x63,0xD5,0xA7,0x82,0x25,
0xDE,0x1F,0x76,0x60,0xB9,0xFF,0x69,0x3C,0x31,0x60,0xF6,0xF7,
0xD0,0x8C,0x86,0x61,0xC9,0x77,0x7A,0x9C,0x2C,0xCE,0x9C,0xC1,
0xD8,0x1E,0x23,0x75,0x25,0xDF,0xAB,0x28,0xFC,0x57,0xC1,0x4A,
0xEE,0xF9,0x68,0x4A,0xB8,0xE4,0x03,0x3C,0x4D,0x40,0x12,0x53,
0x08,0x98,0xFD,0xF7,0x03,0xFF,0x63,0x54,0xF2,0x3D,0x5E,0x0F,
0x8F,0xF7,0xBB,0x8F,0xF9,0x43,0x9F,0x20,0x29,0x2E,0x49,0xB7,
0xB1,0x4F,0xD7,0x9C,0x66,0xFA,0x86,0x97,0xF8,0xA4,0x24,0x8F,
0x44,0x73,0xC4,0x7E,0xC9,0x78,0x60,0x8D,0xCF,0xE6,0x8A,0x7E,
0xB3,0x3F,0xC5,0xC8,0xB3,0x5F,0xF6,0xCA,0x8C,0xB4,0xA5,0xF1,
0xE4,0x6D,0x13,0x75,0x23,0x5F,0xF6,0xCA,0x6C,0x29,0xCB,0x67,
0xF4,0xEA,0xC7,0x58,0x7B,0x64,0x8B,0x1E,0xE4,0x03,0x4C,0xF3,
0xB7,0xBD,0x66,0x3F,0xCF,0x27,0x15,0x18,0x67,0xD4,0xA4,0x5A,
0xB7,0xE4,0x8E,0xCC,0x48,0x9B,0xCC,0x8D,0xD7,0x76,0xD0,0x65,
0xCC,0x0B,0xAE,0x6A,0x56,0x15,0xAD,0x61,0xE1,0xF6,0x15,0x54,
0x38,0xAB,0x89,0xD3,0xCF,0x8B,0xCA,0x02,0xBA,0x4A,0x76,0xC7,
0x4F,0xBE,0x70,0xD9,0xB7,0xC5,0x98,0x0E,0xA4,0x18,0xD1,0xDD,
0x6C,0x65,0xB9,0x86,0xC7,0xFB,0x3F,0xC0,0x90,0x1B,0x6F,0xD3,
0x65,0xCC,0xE3,0x17,0x4E,0xB0,0x64,0xFB,0xDB,0x7C,0xB0,0x3F,
0x17,0xA7,0xEC,0x0E,0x36,0x03,0x1A,0x0A,0x26,0x01,0xCF,0x5B,
0x73,0x32,0x2E,0x2E,0x85,0x24,0x4D,0x37,0x19,0x0E,0x26,0x41,
0xE4,0x4E,0x5B,0x1A,0x0F,0xF7,0xBF,0x4F,0x97,0xF1,0xF6,0x9F,
0x3E,0xC0,0x53,0xDF,0xBC,0xC4,0x5F,0x8B,0x3E,0xC5,0xE5,0xF5,
0x44,0x83,0x7C,0x80,0x87,0x2E,0xDA,0x00,0xED,0x0F,0xAD,0x50,
0x8F,0x97,0x18,0x0E,0x37,0x24,0xA6,0x30,0x7F,0xC8,0x1F,0xB0,
0x84,0x90,0xD5,0x6C,0x08,0x3F,0x94,0xEF,0x60,0xF2,0x97,0xF3,
0xD9,0x70,0x6C,0x1B,0x82,0x20,0x60,0x12,0xC4,0x68,0x3D,0x76,
0x57,0x2D,0xDE,0x42,0xD4,0xF6,0x79,0xD3,0x8D,0x18,0x78,0x09,
0x82,0xC0,0xB4,0x81,0x0F,0xD2,0x2D,0xA5,0x6B,0xC4,0x63,0x7D,
0x53,0xF2,0x2D,0x93,0xD6,0xCD,0x61,0xFF,0xB9,0xC3,0x98,0x45,
0x73,0xB8,0x6E,0x66,0x28,0x18,0xE7,0x8B,0x03,0x4C,0xA8,0xD7,
0x82,0x0C,0x17,0xED,0x0E,0x68,0xDB,0x93,0xC9,0x03,0x7E,0x17,
0xF1,0x58,0x9F,0x1E,0x58,0xC7,0xC4,0xF5,0xF3,0x38,0xE3,0xAC,
0xC4,0x24,0x98,0x62,0xF5,0x15,0xEE,0xF5,0x19,0x61,0x11,0xF5,
0x4E,0x96,0xE1,0x1C,0xFF,0x57,0xEF,0x98,0x13,0xF1,0x30,0x1F,
0x14,0xAE,0x66,0x7A,0xDE,0x5F,0xB4,0xA0,0x28,0xA6,0x57,0xE6,
0x06,0xF8,0x56,0x40,0x3C,0x51,0xCC,0xF9,0x07,0xB1,0x7D,0x17,
0x32,0xDC,0x5E,0x0F,0x8F,0xF4,0x1D,0x4B,0x1F,0xEB,0x4D,0x11,
0x92,0xFF,0x11,0x33,0x36,0x2F,0x69,0xAE,0x29,0x64,0xB1,0xE6,
0x64,0x0C,0x32,0xA3,0x5E,0x05,0xD5,0x5D,0x37,0xA7,0xB6,0x6A,
0x47,0xBB,0xC4,0xEB,0x38,0x5E,0x2D,0x51,0x5E,0x2D,0x05,0x7B,
0xD2,0x2C,0x08,0xB7,0xD3,0x4B,0x4A,0x5C,0x2B,0x9E,0xCD,0xB0,
0x47,0x34,0xCE,0x9A,0xE2,0x75,0x3C,0xB7,0x65,0x19,0xB2,0x57,
0xD6,0x3D,0x59,0x17,0xAC,0x03,0x07,0x0C,0x34,0xA3,0xDE,0xC3,
0xD5,0x6F,0xC6,0x2B,0x0A,0x03,0xAD,0xBD,0x79,0xED,0x8E,0xE7,
0xE8,0x7D,0x7D,0x4F,0x76,0x9F,0x2C,0x64,0x49,0xFE,0x5F,0xF9,
0xFA,0x98,0xA3,0xA9,0x2D,0xBC,0xA0,0xE0,0x94,0x5D,0x3C,0x33,
0xF4,0x09,0xAE,0x4B,0x0C,0x3F,0x64,0xF9,0xFA,0x70,0x1E,0x73,
0xBF,0x5F,0x4A,0x95,0xAB,0x3A,0x5A,0x6E,0x66,0xB0,0x02,0xE8,
0x67,0x4A,0xCA,0xB6,0xFD,0x1E,0xD0,0xE5,0xB6,0x81,0x57,0x51,
0xE8,0x99,0x6C,0xE3,0x2F,0x59,0xCF,0x70,0x4B,0xBB,0xBE,0x00,
0xB4,0x6F,0x75,0x03,0xA3,0xBB,0x0E,0x27,0x4E,0x34,0x51,0x7C,
0xB6,0x84,0x4A,0x57,0x75,0xD8,0xEE,0x9D,0xDB,0xEB,0xA1,0x4F,
0x4A,0x67,0x16,0x8E,0x98,0x1D,0x76,0x5A,0x20,0xFF,0xE7,0x3D,
0xCC,0xCA,0x5B,0x4C,0x49,0x55,0x39,0x16,0x53,0xB3,0x3A,0x7E,
0x02,0x50,0x21,0xA2,0xDE,0x40,0xD7,0x85,0xFC,0xB6,0x09,0xAD,
0x59,0x34,0x7C,0x06,0x83,0x3A,0x5C,0xBA,0x97,0x93,0x60,0x49,
0x64,0x7A,0xDA,0x63,0x2C,0xC9,0x9A,0xC3,0x2D,0x6D,0xBB,0x53,
0xE3,0xA9,0x0B,0x4B,0x19,0xB9,0x64,0x17,0xD3,0x6E,0x9D,0x44,
0x72,0x7C,0x78,0x67,0xC3,0x4A,0xAB,0xCA,0x79,0x71,0xCB,0x32,
0x8A,0xCE,0x96,0x10,0x67,0xB2,0x34,0xBB,0x17,0x0D,0x74,0x12,
0xB5,0x1C,0x50,0xC4,0x86,0xD6,0x22,0x08,0x2C,0xCD,0x9A,0xC3,
0x88,0xCE,0x43,0x1A,0xF6,0xBB,0xBA,0x65,0x91,0x73,0xD7,0x0B,
0xDC,0x9D,0x9A,0x4E,0xA5,0xAB,0x3A,0x24,0x9B,0xE0,0x94,0xDD,
0xDC,0xDE,0x61,0x00,0x99,0xA9,0x83,0xC3,0x52,0x63,0xD5,0xEE,
0x6A,0x5E,0xF9,0xE1,0x4D,0x36,0x1F,0xDF,0x79,0x25,0x90,0xEF,
0xC3,0xF5,0x22,0xEA,0x39,0xF7,0x88,0x50,0xEB,0xAE,0x23,0xE7,
0xCE,0xF9,0xDC,0xDB,0xFD,0x8E,0x26,0x5F,0xDB,0xCF,0xDA,0x9B,
0x25,0x77,0xCE,0x63,0x7C,0xB7,0x11,0x54,0xB9,0xAA,0x83,0x16,
0x81,0xA2,0xC8,0x4C,0xBA,0x79,0x3C,0x1D,0x5B,0xB5,0x0B,0x63,
0x75,0x7A,0x59,0xF5,0xE3,0x27,0xAC,0x3A,0xB0,0x0E,0x53,0x6C,
0x82,0xAC,0x60,0xD1,0x5A,0x24,0xC2,0xCB,0x15,0x55,0xCE,0x0B,
0x2C,0xC9,0x9C,0xC9,0xB8,0x5E,0x77,0x07,0xFD,0x9E,0x2E,0xC9,
0xA9,0x2C,0x18,0x3E,0x93,0x91,0xB6,0xDB,0xA8,0xF1,0x38,0x83,
0x50,0x3D,0x6E,0x86,0x75,0x1C,0x48,0x46,0xC7,0x81,0x10,0x86,
0xC7,0x52,0x78,0x6A,0x1F,0xF3,0xB7,0xE6,0x20,0x20,0x04,0xB3,
0x7F,0x1B,0x4B,0x24,0x88,0x5C,0x5E,0x75,0x24,0x68,0x5C,0x70,
0xD7,0x30,0x77,0xD0,0x64,0x26,0xF6,0xBF,0x0F,0x73,0x88,0xE9,
0xDA,0x6E,0x29,0x9D,0x79,0x69,0xD8,0x74,0xFA,0xA6,0x74,0xC1,
0xED,0x95,0x1B,0x8B,0xB7,0x10,0x05,0x18,0xDB,0x2D,0x8B,0xEE,
0x29,0x5D,0x42,0xB7,0x1B,0x1E,0x27,0x53,0xBF,0x9C,0x8F,0xCB,
0xEB,0x89,0xD8,0x03,0x8B,0x06,0xC2,0x7E,0xA2,0x3A,0xD9,0xC5,
0x83,0xBD,0xEE,0xE1,0xA9,0xB4,0x47,0x48,0x08,0xD3,0x23,0x19,
0xD8,0xBE,0x3F,0xB3,0xD3,0x1E,0x23,0x25,0x2E,0xA9,0xC1,0xA3,
0x1D,0xB2,0x57,0xE6,0x56,0x6B,0x1F,0xB2,0x52,0x07,0x87,0xF5,
0x19,0x0B,0xB6,0xE6,0xF0,0x63,0xC5,0xD1,0x58,0xA6,0x18,0xA2,
0x2F,0x00,0xAF,0xE2,0xA5,0x8D,0xE5,0x1A,0xA6,0x0C,0x78,0x88,
0x36,0x09,0xC9,0x11,0x3D,0xC0,0x6F,0x7B,0x8F,0x66,0xC2,0x4D,
0x63,0x10,0x05,0xEA,0x8D,0x99,0x4D,0x82,0x40,0xA6,0x2D,0x8D,
0xBE,0xD6,0xDE,0xA1,0xBB,0x9C,0xC7,0x77,0xF2,0xDA,0xEE,0xBF,
0x11,0xAF,0x43,0xA6,0xF4,0x8A,0x12,0x80,0x80,0x80,0xDB,0x2B,
0x73,0xB4,0xF2,0x98,0x1E,0x61,0x33,0x53,0x7F,0x35,0x81,0x81,
0xD6,0x9B,0x50,0x02,0x56,0x81,0xAC,0x78,0xE9,0x9E,0x9C,0xCA,
0xB8,0x20,0x8C,0x7B,0x7D,0xAA,0x67,0xFA,0xA6,0x45,0xFA,0x9F,
0x07,0x8A,0x82,0x00,0x9C,0xA1,0x73,0x26,0x50,0xEB,0x75,0xF3,
0xE7,0x6D,0xCB,0x59,0x73,0x60,0x7D,0xC4,0x0F,0x91,0x9A,0x6C,
0xE3,0xE1,0xBE,0xE3,0x69,0x65,0x49,0xBC,0x24,0x77,0x64,0x11,
0x4C,0xA4,0xB7,0xEF,0xCF,0x80,0xF6,0xFD,0x43,0x1E,0xF3,0xD5,
0xFC,0x77,0x28,0xAE,0x28,0xBD,0x92,0x3C,0x9E,0x7A,0x4D,0x9C,
0x88,0x5A,0xE6,0x2B,0x64,0xC4,0x89,0x66,0x0E,0x54,0x96,0x31,
0x2B,0x6F,0x31,0xAF,0xEF,0x58,0x09,0x4A,0x64,0x49,0xB7,0x09,
0x37,0xFF,0x86,0xF4,0xF6,0xFD,0x10,0xB5,0x45,0xA9,0xA0,0xD0,
0x26,0xA1,0x35,0x0F,0xF6,0x19,0x1B,0xF2,0x58,0xFB,0x4E,0x1F,
0xE0,0xBD,0x7D,0x6B,0x31,0x00,0x9C,0x22,0x20,0x85,0xFB,0xEE,
0x78,0x53,0x1C,0xA7,0xEB,0xAA,0x78,0xF9,0x87,0xE5,0xCC,0xDC,
0xB8,0x80,0x3A,0x77,0x6D,0x44,0x81,0xE1,0xEC,0x41,0x8F,0x12,
0xAF,0xA5,0x07,0x44,0x41,0xE4,0x56,0x6B,0x6F,0x06,0x87,0xB1,
0xCF,0xFB,0x6A,0xC1,0x4A,0xA4,0xDA,0x0A,0x23,0x08,0xE0,0xBC,
0x88,0x7A,0x9D,0x26,0x6C,0x98,0x45,0x13,0x2E,0xAF,0xCC,0x7B,
0xFB,0xD7,0x32,0x31,0x77,0x36,0x27,0xCE,0x9F,0xB8,0xE8,0x3E,
0x86,0x8A,0x41,0x1D,0x07,0x72,0x77,0xA7,0x0C,0x6D,0x85,0x59,
0x98,0xDC,0xEF,0xB7,0x21,0x8F,0xB1,0xEE,0xA7,0x8D,0x6C,0x2E,
0x2F,0x40,0x56,0xBC,0x46,0x10,0xC0,0x19,0x11,0x38,0x1C,0xB9,
0x1D,0x15,0x00,0x81,0x4D,0xE5,0xF9,0xFC,0xEE,0xF3,0x99,0xEC,
0x3D,0x55,0x14,0xB6,0xE6,0x7D,0x26,0xFD,0x71,0x64,0x45,0xA6,
0x67,0xB2,0x8D,0x91,0x5D,0x43,0xDB,0x27,0xAA,0x71,0x55,0xF3,
0x61,0x71,0x2E,0x27,0x82,0x3B,0x30,0xDB,0xEC,0xFA,0x1F,0x38,
0x2A,0xA2,0x16,0x25,0xD2,0x0D,0x7B,0xCF,0x1E,0x62,0xF2,0xFA,
0xE7,0xD8,0x5C,0xBA,0x25,0xAC,0xF7,0xF7,0x6C,0xDB,0x9D,0xDF,
0x74,0xC9,0x64,0x4A,0xFF,0xFB,0x43,0x7E,0xEF,0x17,0x87,0xBF,
0x65,0x73,0x79,0xC1,0x15,0x19,0x70,0xD5,0x17,0xE2,0x00,0x07,
0x4D,0x49,0xD9,0xB6,0x78,0xE0,0x51,0xBD,0x46,0x15,0x10,0x38,
0xE3,0xAC,0xE2,0xBB,0xF2,0x1D,0xF4,0x68,0x6D,0xA3,0x7B,0x4A,
0xE7,0x90,0xC7,0xE8,0xD3,0xB6,0x1B,0x43,0x6D,0x83,0x42,0x3A,
0xDB,0x79,0xBA,0xFA,0x0C,0x39,0x3B,0xDF,0x27,0x5F,0xDA,0x8F,
0x45,0x34,0xC4,0xF9,0x02,0x37,0xF0,0x9E,0x88,0x5A,0xD4,0x54,
0x57,0x98,0x04,0x91,0xD2,0x0B,0x27,0x79,0x6A,0xE3,0xCB,0xAC,
0x2B,0xD9,0x14,0xF2,0xFB,0x7B,0xB5,0xED,0x11,0xF2,0x31,0x93,
0xAD,0x3F,0xEF,0x64,0xFD,0xD1,0xEF,0x89,0x13,0x2D,0x18,0x04,
0x5E,0x60,0x97,0x88,0x5A,0x92,0xAB,0x58,0xEF,0xD1,0x2D,0xA2,
0x99,0x9F,0x6B,0xCE,0x30,0x7D,0xE3,0x42,0xBE,0x3A,0x9C,0x17,
0xD5,0x6F,0x72,0xBA,0xE6,0x2C,0xAB,0x0F,0xAC,0xA7,0xCA,0x5D,
0x6B,0x04,0xDD,0x7F,0xD1,0x05,0x05,0x0A,0x44,0xCD,0x18,0x6C,
0x8C,0xC6,0x27,0xC4,0x99,0x2C,0x1C,0xAF,0x39,0xC3,0x53,0x1B,
0x5E,0x8E,0xAA,0x10,0x76,0x9D,0x2A,0xE2,0xF3,0xC3,0xDF,0x92,
0x68,0x36,0xD4,0x65,0xCE,0x22,0xC9,0xEE,0xF0,0x88,0x9A,0x31,
0xF8,0x2A,0x5A,0x9F,0x12,0xAF,0x09,0x61,0xDA,0xC6,0x85,0x6C,
0x3A,0xBA,0x45,0xF7,0xF1,0x2F,0xB8,0xAA,0x59,0xB9,0x77,0x35,
0xB5,0xB2,0xFB,0x4A,0x8F,0x7A,0x03,0x91,0x0B,0x20,0x6A,0x85,
0xAC,0x0B,0x34,0xA3,0x10,0x35,0x21,0x94,0xD7,0x48,0x3C,0xBD,
0x69,0x11,0xF9,0xC7,0x77,0xEA,0xE8,0xC7,0x29,0x14,0x4A,0xFB,
0xC9,0x3D,0xFA,0x9D,0xD1,0x66,0x3F,0xC0,0xC7,0xBE,0x5C,0x10,
0xA8,0x85,0xAC,0x37,0x44,0xF3,0xD3,0xE2,0x44,0x0B,0x47,0xCE,
0x9F,0x60,0xDA,0xC6,0x85,0x1C,0x39,0x77,0x54,0x1F,0x01,0x28,
0x0A,0x6F,0xEC,0x7C,0x1F,0xB7,0xE2,0x35,0xDA,0xEC,0x3F,0x2A,
0xD9,0x1D,0x45,0xFE,0x02,0xA8,0xF6,0x49,0x24,0x9A,0x30,0x8B,
0x26,0x8A,0x2B,0x4A,0xF9,0xC3,0x37,0x2F,0x50,0xED,0xAA,0x8E,
0x78,0xBC,0x7D,0x52,0x31,0x6B,0x8F,0x7C,0x77,0x45,0xA7,0x9B,
0x1B,0xC0,0xDF,0x41,0xBD,0x1A,0x26,0x02,0x68,0x97,0xC6,0x1C,
0xA8,0x85,0xAC,0xA3,0x0A,0x41,0x10,0xD8,0x21,0xED,0x67,0xFA,
0x86,0x7F,0x8B,0x78,0xAC,0xFF,0xC8,0x7F,0x07,0x2F,0x18,0x6B,
0xEE,0xAB,0x58,0xA1,0xF1,0xFE,0xFF,0x57,0x94,0x50,0x9B,0x1E,
0x7C,0x16,0x93,0x10,0x50,0x51,0x58,0x7F,0x74,0x0B,0x4B,0xB7,
0xBF,0x1D,0xFE,0x1A,0xAE,0x28,0xE5,0xA3,0x9F,0x36,0xE9,0x79,
0x73,0x25,0x56,0xD8,0x82,0xDA,0x5C,0x02,0x9F,0x11,0x46,0x93,
0xC6,0x19,0xD4,0x82,0xD5,0x51,0x87,0x00,0x5C,0xF0,0xD4,0xF1,
0x6E,0xD1,0x27,0x7C,0x73,0x64,0x73,0x58,0x63,0x2C,0xC9,0x7F,
0x1B,0x41,0x14,0x31,0x20,0x96,0xE1,0x97,0xAB,0xBC,0xE4,0x9A,
0xAA,0xE6,0x0D,0x7D,0x1F,0x8B,0xA7,0x30,0x09,0x22,0x25,0x95,
0xE5,0xFC,0xE7,0xCE,0x0F,0x38,0x56,0x59,0x1E,0xD2,0x7B,0xA5,
0x0B,0x12,0xFF,0x38,0xF8,0x75,0x34,0x2F,0x50,0x44,0x0B,0x65,
0x40,0xAE,0x7F,0x0B,0x15,0x9F,0x0D,0xF0,0xAD,0x82,0x83,0xB1,
0x52,0x43,0x00,0x09,0xE6,0x78,0x36,0x1C,0xDB,0xC6,0x8A,0x3D,
0x1F,0x52,0xE7,0xA9,0x0B,0x7E,0x0A,0xED,0x58,0x89,0xAC,0x28,
0x46,0x9C,0xFD,0xFF,0x0E,0x5C,0xB2,0x69,0x72,0x59,0xA9,0x02,
0x4D,0x00,0xBB,0x63,0xF5,0x44,0x66,0x93,0x85,0x77,0x7F,0xFC,
0x84,0xF5,0x25,0xDF,0x06,0x75,0x94,0xBD,0xA2,0xB6,0x82,0x8F,
0x4B,0x36,0x46,0xE5,0xD8,0x7B,0x94,0x51,0x0A,0xAC,0x91,0xEC,
0x0E,0x77,0xBD,0xB5,0x22,0xFC,0x56,0x41,0xA1,0x66,0x0B,0xDC,
0xB1,0x52,0x45,0x55,0xEE,0x1A,0x16,0x6E,0x5B,0xCE,0x91,0x8A,
0xA6,0xF7,0x86,0x56,0x16,0xAE,0xE6,0x9C,0xF3,0xBC,0x11,0x67,
0xFF,0x6B,0x9A,0x0A,0xA2,0xDE,0x15,0x10,0xB0,0x0A,0xDE,0x44,
0xE7,0x7D,0x82,0xC6,0x23,0xE5,0x38,0x0A,0xCF,0x96,0xB0,0xC0,
0xF1,0x06,0x5E,0x6F,0xC3,0x3B,0x59,0x4E,0x77,0x0D,0x9F,0x1F,
0xC9,0xC3,0x29,0xBB,0x8C,0x46,0x7E,0x01,0xB0,0xD6,0x37,0xFB,
0xFD,0xEB,0x06,0xD5,0x5B,0xAE,0x46,0x6B,0xDB,0xB1,0x02,0x35,
0x53,0x1A,0x13,0x24,0x9A,0xE3,0x59,0x7D,0x68,0x03,0x7F,0xDF,
0xB7,0xA6,0xC1,0xD7,0x7C,0x7A,0x68,0x03,0x47,0x2A,0x8F,0x1B,
0x8D,0x7C,0x19,0x78,0x5B,0xB2,0x3B,0x0E,0xD4,0xF7,0xCF,0xCB,
0xDC,0x08,0xBF,0x2A,0xE0,0xCB,0x34,0xC9,0xC5,0x44,0xD9,0xAA,
0xE7,0x36,0x45,0xE6,0x7E,0xBF,0x94,0x93,0xDA,0xBE,0x72,0x20,
0x72,0x8F,0xE4,0x71,0xC6,0x59,0x69,0xB4,0xB4,0xC3,0xE7,0xC0,
0x87,0x3E,0x6E,0x03,0xAB,0x66,0x5D,0x26,0x80,0x80,0x17,0x4C,
0x8D,0xE5,0x2A,0x10,0x05,0x81,0xF3,0xEE,0x5A,0xA6,0x7C,0x39,
0xFF,0xF2,0xE8,0xA5,0x6C,0x3B,0x3F,0x9E,0x3E,0x64,0xB4,0xB8,
0xB7,0x14,0x78,0x5D,0xB2,0x3B,0xCE,0x35,0xF8,0x9D,0x1B,0xFA,
0x87,0x26,0xAD,0x22,0xD4,0x22,0xDD,0x4A,0xEC,0x84,0x20,0xB2,
0xE5,0xE4,0x5E,0xDE,0xDA,0xF5,0xC1,0x25,0x7F,0xFF,0xA6,0x74,
0x2B,0x87,0x2A,0x8F,0x19,0xC9,0xF7,0x77,0x01,0xAB,0x24,0xBB,
0x63,0x7D,0x03,0x93,0xBB,0x71,0x01,0xF8,0x4A,0x6B,0x49,0x76,
0xC7,0x2B,0xA8,0x25,0x8B,0x63,0x06,0x01,0x81,0x45,0xDB,0xDF,
0xE1,0xA7,0xB3,0x6A,0xC4,0xBE,0xF3,0x44,0x21,0x9B,0x8E,0x6D,
0x37,0x9A,0xE3,0xB9,0x19,0x98,0x17,0xE0,0xDC,0x5C,0xEE,0x86,
0x07,0x39,0xD8,0x04,0xD4,0x64,0x5D,0xEF,0x58,0x3D,0x7D,0x95,
0xBB,0x86,0xDF,0x7F,0xF1,0x0C,0x0F,0xF6,0xF9,0x35,0x1B,0x8F,
0xFD,0xC0,0x0E,0xE3,0x6C,0xB6,0x03,0x1C,0x02,0xEC,0x92,0xDD,
0xE1,0x69,0xAA,0x74,0x71,0x93,0x0A,0xD5,0xAF,0x92,0x62,0x3A,
0xF0,0x29,0x3A,0xDC,0xA8,0x09,0x16,0x6E,0xAF,0x87,0x3A,0x8F,
0x8B,0x38,0x93,0x85,0x78,0x93,0x61,0x36,0xDB,0xCF,0xA1,0xF6,
0x97,0xF9,0xCC,0x9A,0x93,0x21,0x04,0x76,0x6E,0x0D,0x59,0x00,
0x01,0xC2,0xB8,0x5F,0x73,0x4F,0x93,0xF9,0x05,0xF5,0xC1,0x03,
0xFC,0xAB,0x64,0x77,0xBC,0x15,0x6C,0x77,0x25,0x31,0x48,0xE2,
0x7D,0xBF,0xAE,0x46,0xAD,0x23,0x5D,0xF7,0x0B,0xD7,0xF5,0x62,
0x86,0x64,0x77,0xBC,0x15,0x92,0xD3,0x11,0xCC,0x8B,0xFC,0x0C,
0xB2,0x57,0x5B,0x01,0xCF,0x13,0xC6,0xB1,0xF6,0x96,0x4E,0x3E,
0xF0,0x46,0x43,0xFE,0x7E,0x44,0x02,0x08,0xB0,0x07,0x6E,0xD4,
0xAC,0xDE,0x8B,0x9A,0xAB,0xF5,0x0B,0x34,0xF2,0xEB,0x4B,0x35,
0x34,0xED,0xF1,0x85,0x28,0x00,0x7F,0x7F,0xD6,0x9A,0x93,0x31,
0x03,0xB5,0x81,0x4D,0xE2,0x55,0x4A,0xBC,0xC7,0x9F,0xFC,0xF0,
0x5C,0xEE,0x30,0xE0,0x2F,0x08,0x6B,0x4E,0xC6,0x24,0xD4,0x5D,
0x9E,0x6B,0xAF,0x32,0xF2,0xCF,0x01,0xB3,0x7D,0x3A,0x3F,0xDC,
0x96,0x86,0x11,0xB5,0x32,0xF4,0x13,0xC2,0xED,0xC0,0xDF,0x50,
0x6F,0xDD,0x0B,0x57,0x01,0xF9,0x87,0x80,0xE9,0x92,0xDD,0xF1,
0x59,0x24,0xE4,0xA3,0x07,0x59,0x7E,0x71,0xC2,0x0D,0xA8,0x6D,
0x3B,0x86,0xD3,0x32,0xBA,0xA8,0x36,0x94,0x5E,0xD8,0xAC,0x05,
0x59,0xC5,0x7A,0xB4,0xB6,0xD5,0x65,0xB6,0x06,0x34,0xF6,0x9C,
0x8F,0x5A,0xFA,0xBE,0x53,0x0B,0x23,0xBF,0x14,0xB5,0x67,0xE6,
0x3C,0x2D,0xC2,0x6D,0x32,0xC8,0x8A,0x99,0x00,0xEA,0x11,0xC2,
0x30,0x60,0x3A,0x6A,0x25,0x5E,0xA3,0xB7,0x3F,0x91,0x51,0x53,
0xCA,0xAF,0xFB,0x12,0x6B,0x7A,0x76,0xD6,0x8E,0x66,0x4B,0xF3,
0x36,0xA8,0x9D,0x23,0xA6,0x60,0x9C,0x5E,0xF2,0x81,0x28,0x00,
0xDE,0x06,0x3E,0xF4,0xA5,0x94,0xF5,0x6E,0x6B,0xAE,0xBB,0xC1,
0x0C,0x7C,0x40,0xAD,0x73,0xC4,0x38,0xD4,0xFA,0xF9,0x5D,0x0C,
0xA4,0x6E,0x5E,0x43,0xDD,0x46,0x3C,0x10,0xCD,0x0F,0x8A,0x9A,
0xC7,0x12,0xB0,0x1A,0x2C,0xA8,0xCD,0x0B,0xC6,0xA2,0x96,0x70,
0xEF,0x7E,0x85,0x12,0x5F,0xA6,0x05,0x99,0x6B,0x80,0x32,0x9F,
0x6F,0xAF,0x77,0x1F,0xF9,0x98,0x08,0xA0,0x01,0x41,0x98,0xB5,
0x78,0x21,0x13,0xB5,0x8A,0x78,0xD6,0x15,0x42,0xFC,0x16,0x2D,
0x96,0xC9,0x05,0x6A,0x63,0x41,0x7C,0xCC,0x04,0xD0,0x40,0x04,
0xED,0x4B,0x83,0x74,0x45,0x2D,0x64,0xFD,0x90,0xF6,0x7B,0x2C,
0x71,0x14,0xF5,0x94,0xF2,0x0A,0xD4,0xB3,0x9A,0x8A,0xCF,0xAB,
0x89,0x05,0xF1,0x31,0x15,0x40,0x53,0x02,0xD1,0xFE,0xD6,0x57,
0xB3,0x15,0xA3,0x51,0x1B,0x08,0x59,0x50,0x2B,0x0B,0xFA,0x7E,
0x42,0x7D,0x56,0x45,0xF3,0x60,0x64,0xD4,0x0B,0x71,0x75,0x40,
0x11,0xF0,0x05,0xF0,0xB1,0xEF,0x7C,0x7E,0x73,0xA3,0xD9,0xA3,
0xD6,0x86,0xBC,0x0A,0x6B,0x4E,0xC6,0x20,0xE0,0x56,0xD4,0xA2,
0xB2,0xBD,0xB4,0xB8,0xE2,0x7A,0xD4,0x6E,0xAE,0x09,0x0D,0x10,
0xEE,0x04,0xCE,0x03,0x67,0xB4,0x19,0x7E,0x10,0x28,0x44,0x6D,
0x44,0x5A,0xE0,0xDF,0xBB,0x25,0x1A,0x1E,0x4D,0x38,0xF8,0x3F,
0xC0,0x7F,0x59,0x7A,0x2A,0xEC,0x9D,0x08,0x00,0x00,0x00,0x00,
0x49,0x45,0x4E,0x44,0xAE,0x42,0x60,0x82};
static unsigned char png_checkempty[953] = {
0x89,0x50,0x4E,0x47,0x0D,0x0A,0x1A,0x0A,0x00,0x00,0x00,0x0D,
0x49,0x48,0x44,0x52,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,
0x08,0x06,0x00,0x00,0x00,0xE2,0x98,0x77,0x38,0x00,0x00,0x03,
0x80,0x49,0x44,0x41,0x54,0x78,0xDA,0xED,0x9D,0x3D,0x6E,0x1B,
0x31,0x10,0x85,0x87,0x5C,0xD8,0x88,0xE0,0x2A,0xC5,0x56,0x29,
0x52,0x19,0x42,0xF6,0x12,0xA9,0x55,0x04,0x39,0x6B,0xB0,0x01,
0x7C,0x84,0xDC,0x80,0x82,0x05,0xDF,0xC0,0x02,0xB6,0x12,0x20,
0x40,0x4D,0x9A,0x0D,0xA0,0x18,0xFA,0xE1,0x90,0x43,0x0E,0x97,
0x7C,0x53,0xDB,0xF2,0xF2,0x7D,0x9C,0xC7,0x21,0x57,0x1E,0x12,
0x21,0x10,0x08,0x84,0x5A,0x98,0xD2,0x1F,0xF0,0xF3,0x8F,0x6F,
0xDF,0x89,0xA8,0x8F,0xF8,0x08,0x37,0x8D,0x5B,0x07,0x00,0x7E,
0x62,0x0F,0x44,0x34,0x64,0xF8,0x53,0xC5,0x40,0x31,0x0D,0x89,
0x5E,0x24,0x0C,0xD3,0xA8,0xE8,0xC5,0xC0,0x30,0x10,0x5E,0x17,
0x84,0x81,0xF0,0xBA,0x20,0x4C,0x06,0xF1,0x37,0x44,0xF4,0xB4,
0xE0,0x4A,0xF1,0x30,0x8D,0xDB,0x97,0xC5,0x01,0x58,0xF0,0xAC,
0xCF,0x9A,0x0D,0x06,0xB3,0x5E,0x37,0x1B,0x4C,0x02,0xF1,0x7F,
0x12,0xD1,0x83,0xD6,0x4C,0xCC,0x90,0x79,0xA7,0x69,0xDC,0xFE,
0x2A,0x12,0x40,0x02,0xF1,0x45,0xD2,0x3E,0x01,0x14,0x31,0x08,
0xA6,0x40,0xF1,0x93,0x56,0x1E,0x82,0x30,0x44,0x20,0x98,0x42,
0xC4,0x57,0xD9,0x8D,0x0A,0xC0,0x88,0x86,0x60,0x94,0xC5,0x2F,
0xE2,0x4C,0x26,0x12,0x44,0x14,0x04,0xA3,0x24,0x7E,0xD2,0xDA,
0x5A,0xA1,0x7A,0x0B,0x86,0xD0,0x29,0x88,0xEF,0xA6,0x71,0xFB,
0xA7,0xC4,0x1A,0xF3,0xB8,0xDB,0xBF,0xAD,0xD6,0x3D,0x11,0xFF,
0xF8,0xBB,0x5B,0xAD,0xFB,0xE7,0xE3,0x6E,0xFF,0x9A,0x25,0x03,
0x02,0xC5,0x17,0x2D,0xDF,0x32,0x64,0x43,0x96,0x31,0x76,0x10,
0xFF,0x6A,0x36,0xBC,0xAE,0xD6,0xFD,0x33,0x53,0x23,0x76,0x26,
0x74,0x4C,0xF1,0x37,0x44,0xF4,0xA9,0x76,0xF1,0x05,0x20,0x7C,
0x3D,0xEE,0xF6,0x6F,0xA2,0x00,0xE6,0x4A,0xE1,0x4B,0x2B,0xE2,
0x47,0x42,0x78,0x5C,0xAD,0x7B,0x3A,0xEE,0xF6,0xEF,0xF7,0x7E,
0xD0,0x32,0x3E,0x74,0x68,0x4D,0xFC,0x7F,0x31,0x8F,0xE3,0xC4,
0xFC,0xB5,0x41,0x2C,0x03,0x66,0xEB,0x79,0x6C,0x51,0xFC,0x98,
0x4C,0xF0,0xB1,0xA2,0xCE,0x43,0x7C,0xAE,0xF5,0x54,0x27,0x7E,
0x04,0x84,0xBB,0x56,0x64,0xA5,0x52,0xA9,0x76,0xF1,0x23,0xEC,
0x68,0x08,0x5E,0x03,0xE6,0xD9,0xCF,0x7D,0xB8,0xEA,0x83,0x3B,
0xCE,0x5B,0x3A,0x5A,0xC1,0xD9,0xEF,0xA8,0xAD,0x70,0x12,0x59,
0x60,0x85,0x66,0xFF,0xA1,0xE4,0x6F,0x9F,0x25,0xCA,0x02,0x47,
0x44,0x87,0xD8,0x2C,0xB0,0x12,0xB3,0xBF,0xC4,0x83,0xB5,0x4C,
0x10,0x5E,0x62,0xB3,0xC0,0x66,0x4E,0xC5,0xD6,0xAD,0xC8,0x0F,
0x00,0xC7,0x7E,0x5A,0xB3,0x9E,0x98,0xF1,0x5F,0xD2,0xD5,0x46,
0xDA,0x4F,0xEB,0xB3,0x9F,0xAB,0x83,0x37,0x00,0xCC,0xFE,0x4C,
0x3A,0xD8,0xD8,0xDA,0x1F,0xC1,0x8B,0x8F,0xFA,0x5A,0xD8,0x8F,
0xAE,0x0D,0x59,0x8D,0xB4,0x83,0x0D,0xC9,0x96,0xA1,0x08,0xE9,
0x32,0x14,0xF6,0x93,0x6F,0x4F,0x60,0x43,0x16,0x60,0xD8,0x4F,
0x9C,0x2E,0xE7,0x3A,0xDB,0xD0,0xE3,0x07,0x44,0x54,0x0C,0x58,
0x03,0x16,0xBE,0x06,0x20,0x14,0x01,0xC0,0xFF,0x05,0xF5,0x61,
0x03,0xC0,0x02,0x2C,0xAB,0x0F,0x2C,0x08,0x6B,0x00,0x00,0x20,
0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x5E,0x81,0x17,0x36,0xB2,
0xFA,0x84,0x64,0x00,0x00,0x08,0xEA,0x03,0x0B,0xC2,0x1A,0x00,
0x00,0xE7,0x81,0x63,0x86,0x3C,0xE1,0x2E,0x02,0x08,0x79,0xA1,
0x80,0xE0,0xEB,0x72,0xAE,0x73,0xA8,0x05,0x01,0x80,0x90,0x2E,
0x58,0x03,0x96,0xBA,0x08,0xC3,0x86,0x64,0xF4,0xB0,0xB7,0x16,
0x08,0xD8,0x50,0x12,0xFB,0x71,0x37,0x01,0xE0,0x85,0x4B,0xDA,
0xF8,0xA8,0xAF,0xD5,0x48,0x3B,0xD8,0xCF,0x7D,0x00,0xB0,0xA1,
0x0C,0xF6,0x73,0x15,0x40,0xEC,0x3F,0x1D,0x60,0xF6,0xFB,0xD9,
0x8F,0x54,0x19,0x3A,0x60,0xF6,0xA7,0x29,0x43,0x39,0x59,0xB0,
0x69,0x74,0xF6,0x73,0xC6,0xED,0x58,0x00,0x98,0xD5,0xD0,0x53,
0x6B,0x56,0x34,0x8F,0xD7,0xBB,0xBD,0xD9,0x35,0x3D,0x6D,0x08,
0x35,0x58,0x11,0x7B,0xBC,0x2E,0x68,0x27,0xCC,0xDD,0x13,0xCC,
0xDD,0xB4,0x5A,0x98,0xFD,0xAC,0x71,0xDE,0xD2,0xD1,0xC6,0xD0,
0xBB,0x10,0x0F,0xB5,0x43,0x08,0x68,0xD9,0xE6,0x42,0x17,0xE1,
0x73,0x7A,0x07,0x40,0x08,0x12,0xFF,0x6E,0x0B,0x07,0xEB,0x99,
0x42,0xDC,0x56,0x04,0xD5,0x41,0x08,0x69,0x56,0xE8,0xA3,0x9B,
0x95,0x4A,0xA5,0x9A,0x21,0x04,0x76,0x8A,0xF4,0xD2,0xCB,0x32,
0x68,0x72,0xAD,0xA8,0x0A,0x08,0x81,0xE2,0x7B,0x77,0x8F,0x61,
0xB5,0xAD,0x9C,0x3B,0xCB,0x26,0xEF,0xA5,0xB9,0x70,0xF1,0x4F,
0xD3,0xB8,0xFD,0xED,0x2D,0x0E,0xF7,0xA1,0x72,0x35,0x34,0x5D,
0xB0,0xF8,0xAC,0x6E,0x5A,0x26,0xF3,0x03,0x12,0x15,0x7E,0xB5,
0x60,0x44,0x27,0xF5,0xA0,0x7E,0x79,0xE8,0x9E,0xFE,0xFF,0x78,
0xB2,0x77,0x4F,0xC7,0xFD,0x01,0xB4,0xE0,0xFB,0x03,0x84,0x20,
0xA8,0x81,0xA8,0xE2,0x06,0x0D,0x41,0x08,0x59,0x60,0x54,0x79,
0x87,0x4C,0x02,0x08,0xA2,0x30,0x9A,0xB8,0x45,0x29,0x21,0x04,
0x16,0x94,0xA6,0xEF,0x11,0x13,0xA8,0x26,0x4A,0x0F,0xF1,0xEA,
0xAD,0x4B,0xF1,0x94,0x11,0x77,0xB1,0x94,0x1C,0x49,0xEE,0xBE,
0xC1,0x6D,0xAA,0xCA,0x7B,0x96,0x2E,0xF5,0xD3,0x2F,0x3C,0x1B,
0x92,0xDF,0xF8,0x84,0x1B,0xB5,0x95,0xF7,0x25,0xB8,0x53,0x5E,
0x79,0x43,0x68,0xB4,0x47,0x5C,0x00,0x0C,0xD5,0xE3,0x10,0x53,
0xD2,0xF4,0xCB,0x08,0xA3,0x98,0x13,0x59,0x43,0x85,0x87,0x00,
0x14,0x87,0xAF,0xDC,0x23,0x10,0xA5,0xC6,0x5F,0x4A,0xA7,0x09,
0x3F,0x2B,0x6E,0xC0,0x34,0x00,0x00,0x00,0x00,0x49,0x45,0x4E,
0x44,0xAE,0x42,0x60,0x82};
static unsigned char png_checkemptygray[943] = {
0x89,0x50,0x4E,0x47,0x0D,0x0A,0x1A,0x0A,0x00,0x00,0x00,0x0D,
0x49,0x48,0x44,0x52,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,
0x08,0x06,0x00,0x00,0x00,0xE2,0x98,0x77,0x38,0x00,0x00,0x03,
0x76,0x49,0x44,0x41,0x54,0x78,0xDA,0xED,0x9D,0xBF,0x6A,0x1C,
0x31,0x10,0xC6,0x47,0x5A,0x6C,0x02,0xAE,0x03,0x82,0x14,0xA9,
0xDC,0x6C,0xE3,0x47,0x48,0x7D,0x55,0x9E,0x35,0x10,0xF0,0x23,
0xA4,0x56,0x23,0x30,0xF8,0x05,0x44,0xEA,0xAB,0xAE,0x49,0xB3,
0x86,0x8B,0xB9,0x3F,0x1A,0x69,0xA4,0xD1,0x4A,0xDF,0xD4,0xF6,
0x79,0xF5,0xFD,0x34,0x9F,0x46,0xDA,0xF3,0x88,0x08,0x81,0x40,
0x20,0xD4,0xC2,0xF4,0xFE,0x80,0x2F,0x2F,0x2F,0x3F,0x88,0xE8,
0x6B,0xC1,0x47,0x04,0xEF,0x7D,0x00,0x80,0x34,0xB1,0x57,0x22,
0x5A,0x1B,0xFC,0xA9,0x6E,0xA0,0x98,0x89,0x44,0xEF,0x12,0x86,
0x99,0x54,0xF4,0x6E,0x60,0x18,0x08,0xAF,0x0B,0xC2,0x40,0x78,
0x5D,0x10,0xA6,0x81,0xF8,0x07,0x22,0x7A,0xDA,0x71,0xA5,0x78,
0xF4,0xDE,0xBF,0xEE,0x0E,0xC0,0x8E,0x67,0x7D,0xD3,0x6C,0x30,
0x98,0xF5,0xBA,0xD9,0x60,0x2A,0x88,0xFF,0x93,0x88,0x1E,0xB4,
0x66,0x62,0x83,0xCC,0x3B,0x79,0xEF,0x7F,0x75,0x09,0xA0,0x82,
0xF8,0x22,0x69,0x5F,0x01,0x8A,0x18,0x04,0xD3,0xA1,0xF8,0x55,
0x2B,0x0F,0x41,0x18,0x22,0x10,0x4C,0x27,0xE2,0xAB,0xEC,0x46,
0x05,0x60,0x14,0x43,0x30,0xCA,0xE2,0x77,0x71,0x26,0x53,0x08,
0xA2,0x08,0x82,0x51,0x12,0xBF,0x6A,0x6D,0xAD,0x50,0xBD,0x65,
0x43,0x58,0x14,0xC4,0x0F,0xDE,0xFB,0x3F,0x3D,0xD6,0x98,0x31,
0xC6,0x77,0xE7,0x1C,0x11,0xFF,0xF8,0x7B,0x71,0xCE,0x3D,0xC7,
0x18,0xDF,0x9A,0x64,0x40,0xA6,0xF8,0xA2,0xE5,0x5B,0x83,0x6C,
0x68,0x32,0xC6,0x05,0xE2,0x5F,0xCD,0x86,0x37,0xE7,0xDC,0x33,
0x53,0x23,0x76,0x26,0x2C,0x4C,0xF1,0x0F,0x44,0xF4,0x65,0x74,
0xF1,0x05,0x20,0x7C,0x8F,0x31,0xBE,0x8B,0x02,0xD8,0x2A,0x85,
0x6F,0xB3,0x88,0x5F,0x08,0xE1,0xD1,0x39,0x47,0x31,0xC6,0xBF,
0xF7,0x7E,0xD0,0x32,0x3E,0x74,0x9D,0x4D,0xFC,0x8F,0xD8,0xC6,
0x71,0x62,0xFE,0xDA,0x2A,0x96,0x01,0x9B,0xF5,0x3C,0xCE,0x28,
0x7E,0x49,0x26,0xA4,0x58,0xD1,0x92,0x20,0x3E,0xD7,0x7A,0x86,
0x13,0xBF,0x00,0xC2,0x5D,0x2B,0xB2,0x52,0xA9,0x34,0xBA,0xF8,
0x05,0x76,0xB4,0x66,0xAF,0x01,0xDB,0xEC,0xE7,0x3E,0xDC,0xF0,
0xC1,0x1D,0xE7,0x2D,0x1D,0xAD,0xE0,0xEC,0x0F,0x34,0x57,0x04,
0x89,0x2C,0xB0,0x42,0xB3,0xFF,0xD8,0xF3,0xB7,0xCF,0x2A,0x65,
0x41,0x20,0xA2,0x63,0x69,0x16,0x58,0x89,0xD9,0xDF,0xE3,0xC1,
0x5A,0x23,0x08,0xAF,0xA5,0x59,0x60,0x1B,0xA7,0xE2,0xEC,0x56,
0x94,0x06,0x80,0x63,0x3F,0xB3,0x59,0x4F,0xC9,0xF8,0x2F,0xE9,
0x6A,0x0B,0xED,0x67,0xF6,0xD9,0xCF,0xD5,0x21,0x19,0x00,0x66,
0x7F,0x23,0x1D,0x6C,0x69,0xED,0x8F,0xE0,0xC5,0x67,0x7D,0x2D,
0xEC,0x47,0xD7,0x86,0xAC,0x46,0xDA,0xC1,0x86,0x64,0xCB,0x50,
0x84,0x74,0x19,0x0A,0xFB,0x69,0xB7,0x27,0xB0,0x39,0x0B,0x30,
0xEC,0xA7,0x4C,0x97,0x73,0x9D,0x6D,0xEE,0xF1,0x03,0xA2,0x28,
0x56,0xAC,0x01,0x3B,0x5F,0x03,0x10,0x8A,0x00,0xE0,0xFF,0x82,
0xFA,0xB0,0x01,0x60,0x01,0x96,0xD5,0x07,0x16,0x84,0x35,0x00,
0x00,0x10,0x00,0x00,0x00,0x08,0x00,0x00,0x80,0xA4,0xC0,0x0B,
0x1B,0x59,0x7D,0x72,0x32,0x00,0x00,0x04,0xF5,0x81,0x05,0x61,
0x0D,0x00,0x80,0xF3,0xC0,0x31,0x43,0x9B,0x08,0x17,0x01,0xE4,
0xBC,0x50,0x40,0xF0,0x75,0x39,0xD7,0x39,0xD7,0x82,0x00,0x40,
0x48,0x17,0xAC,0x01,0x7B,0x5D,0x84,0x61,0x43,0x32,0x7A,0xD8,
0x5B,0x0B,0x04,0x6C,0xA8,0x8A,0xFD,0x84,0x9B,0x00,0xF0,0xC2,
0xA5,0x6E,0x7C,0xD6,0xD7,0x6A,0xA4,0x1D,0xEC,0xE7,0x3E,0x00,
0xD8,0x50,0x03,0xFB,0xB9,0x0A,0xA0,0xF4,0x9F,0x0E,0x30,0xFB,
0xD3,0xEC,0x47,0xAA,0x0C,0x5D,0x31,0xFB,0xEB,0x94,0xA1,0x9C,
0x2C,0x38,0x4C,0x3A,0xFB,0x39,0xE3,0x0E,0x2C,0x00,0xCC,0x6A,
0xE8,0x69,0x36,0x2B,0xDA,0xC6,0x9B,0xDC,0xDE,0xEC,0x9A,0x9E,
0x36,0x87,0x1A,0xAC,0x88,0x3D,0xDE,0x90,0xB5,0x13,0xE6,0xEE,
0x09,0xB6,0x6E,0x5A,0x33,0xCC,0x7E,0xD6,0x38,0x6F,0xE9,0x68,
0x4B,0xE8,0x5D,0x88,0x87,0xD1,0x21,0x64,0xB4,0x6C,0x0B,0xB9,
0x8B,0xF0,0x39,0xBD,0x23,0x20,0x64,0x89,0x7F,0xB7,0x85,0x83,
0x4D,0x4C,0x21,0x6E,0x2B,0x82,0xE1,0x20,0xE4,0x34,0x2B,0x4C,
0xD1,0xCD,0x4A,0xA5,0xD2,0xC8,0x10,0x32,0x3B,0x45,0x26,0xE9,
0x65,0x19,0x34,0xB9,0x56,0x34,0x04,0x84,0x4C,0xF1,0x93,0xBB,
0xC7,0xB0,0xDA,0x56,0x6E,0x9D,0x65,0xAB,0xF7,0xD2,0xDC,0xB9,
0xF8,0x27,0xEF,0xFD,0xEF,0x64,0x71,0xB8,0x0F,0xD5,0xAA,0xA1,
0xE9,0x8E,0xC5,0x67,0x75,0xD3,0x32,0x8D,0x1F,0x90,0xA8,0xF3,
0xAB,0x05,0x0B,0x3A,0xA9,0x67,0xF5,0xCB,0x43,0xF7,0xF4,0xFF,
0xC7,0xD3,0xBC,0x7B,0x3A,0xEE,0x0F,0xA0,0x1D,0xDF,0x1F,0x20,
0x04,0x41,0x0D,0xC4,0x10,0x37,0x68,0x08,0x42,0x68,0x02,0x63,
0xC8,0x3B,0x64,0x2A,0x40,0x10,0x85,0x31,0xC5,0x2D,0x4A,0x15,
0x21,0xB0,0xA0,0x4C,0x7D,0x8F,0x98,0x40,0x35,0xD1,0x7B,0x88,
0x57,0x6F,0x4B,0x8D,0xA7,0x2C,0xB8,0x8B,0xA5,0xE7,0xA8,0x72,
0xF7,0x0D,0x6E,0x53,0x55,0xDE,0xB3,0x2C,0xB5,0x9F,0x7E,0xE7,
0xD9,0x50,0xFD,0xC6,0x27,0xDC,0xA8,0xAD,0xBC,0x2F,0xC1,0x9D,
0xF2,0xCA,0x1B,0x42,0xA3,0x3D,0xE2,0x0E,0x60,0xA8,0x1E,0x87,
0x98,0x9E,0xA6,0x5F,0x43,0x18,0xDD,0x9C,0xC8,0x1A,0xEA,0x3C,
0x04,0xA0,0x04,0x7C,0xE5,0x1E,0x81,0xE8,0x35,0xFE,0x01,0x88,
0x4B,0x09,0x33,0x94,0xB9,0x41,0x11,0x00,0x00,0x00,0x00,0x49,
0x45,0x4E,0x44,0xAE,0x42,0x60,0x82};

static const unsigned char *png_image_list[] = {
png_checkgreen,
png_checkempty,
png_checkemptygray
};

static const char *png_image_name[] = {
"checkgreen.png",
"checkempty.png",
"checkemptygray.png"
};

static const unsigned int png_image_size[] = {
4220,
953,
943
};

static wxBitmap * image_list[] = {
NULL,
NULL,
NULL
};

wxBitmap MyBitmap(size_t index)
{
	if (index >= 3 || index < 0) return wxNullBitmap;
	wxBitmap *p = image_list[index];
	if (p) return *p;
	wxMemoryInputStream istream(png_image_list[index], png_image_size[index]);
	wxImage img(istream, wxBITMAP_TYPE_PNG);
	p = new wxBitmap(img);
	return *p;
}

wxBitmap MyBitmap(const char *name)
{
	for (size_t i=0; i < 3; i++) {
		if (strcmp(name, png_image_name[i]) == 0) return MyBitmap(i);
	}
	return wxNullBitmap;
}
