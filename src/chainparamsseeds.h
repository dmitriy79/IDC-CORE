#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x2d,0x4d,0x88,0xff}, 31569},
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x5f,0xb3,0xe9,0xa9}, 31569},
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x50,0xf0,0x1e,0xac}, 31569},
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x95,0x1c,0xc0,0xa6}, 31569},
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xee,0xbc,0x59}, 31569},
        {{0x20,0x01,0x19,0xf0,0x44,0x01,0x11,0xe6,0x54,0x00,0x02,0xff,0xfe,0x0b,0x69,0x83}, 31569},
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4d,0xde,0x3c,0xc5}, 31569}
};

static SeedSpec6 pnSeed6_test[] = {
        {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc7,0xf7,0x15,0x2c}, 25838}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
