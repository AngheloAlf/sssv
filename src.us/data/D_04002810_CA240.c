#include <ultra64.h>

Vtx D_040027C0_CA1F0[5] = {
#include "data/inc/D_040027C0_CA1F0.inc.c"
};
extern Gfx D_01003780_3D050[];

Gfx D_04002810_CA240[] = {
    gsSPDisplayList(D_01003780_3D050),
    gsSPVertex(D_040027C0_CA1F0, 5, 0),
    gsSP2Triangles(0, 2, 4, 0, 1, 3, 4, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Vtx D_01003780_CA268[5] = {
#include "data/inc/D_01003780_CA268.inc.c"
};

u8 D_4002888_CA2B8[] = {
    0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x37, 0x80,
    0x04, 0x00, 0x14, 0x4F, 0x04, 0x00, 0x28, 0x38,
    0xB1, 0x00, 0x04, 0x08, 0x00, 0x02, 0x06, 0x08,
    0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
