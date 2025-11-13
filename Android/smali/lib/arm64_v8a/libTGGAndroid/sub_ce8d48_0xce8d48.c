// 函数: sub_ce8d48
// 地址: 0xce8d48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = arg2[1]
uint64_t x20 = _byteswap(*arg2)
uint64_t x21 = _byteswap(x9)
uint64_t x22
uint64_t x23

if (arg3 u< 0x18)
    x22 = 0
label_ce8d98:
    
    if (arg3 != 0x18)
        x23 = 0
    else
        x23 = not.q(x22)
else
    x22 = _byteswap(arg2[2])
    
    if (arg3 != 0x20)
        goto label_ce8d98
    
    x23 = _byteswap(arg2[3])

int64_t x16_1 = x20 ^ x22 ^ 0xa09e667f3bcc908b
int64_t x17_5 = *(&data_84af80 + ((x16_1 u>> 0x30 & 0xff) << 3))
    ^ *(&data_84a780 + (x16_1 u>> 0x35 & 0x7f8)) ^ *(&data_84b780 + ((x16_1 u>> 0x28 & 0xff) << 3))
    ^ *(&data_84bf80 + ((x16_1 u>> 0x20 & 0xff) << 3))
int64_t x17_8 = x17_5 ^ *(&data_84c780 + ((x16_1 u>> 0x18 & 0xff) << 3))
    ^ *(&data_84cf80 + ((x16_1 u>> 0x10 & 0xff) << 3))
    ^ *(&data_84d780 + ((x16_1 u>> 8 & 0xff) << 3))
int64_t x2_2 = x17_8 ^ *(&data_84df80 + ((x16_1 & 0xff) << 3))
int64_t x16_4 = x2_2 ^ x23
int64_t x17_10 = x16_4 ^ x21 ^ 0xb67ae8584caa73b2
int64_t x0_5 = *(&data_84af80 + ((x17_10 u>> 0x30 & 0xff) << 3))
    ^ *(&data_84a780 + (x17_10 u>> 0x35 & 0x7f8))
    ^ *(&data_84b780 + ((x17_10 u>> 0x28 & 0xff) << 3))
    ^ *(&data_84bf80 + ((x17_10 u>> 0x20 & 0xff) << 3))
int64_t x0_8 = x0_5 ^ *(&data_84c780 + ((x17_10 u>> 0x18 & 0xff) << 3))
    ^ *(&data_84cf80 + ((x17_10 u>> 0x10 & 0xff) << 3))
    ^ *(&data_84d780 + ((x17_10 u>> 8 & 0xff) << 3))
int64_t x4_6 = x0_8 ^ *(&data_84df80 + ((x17_10 & 0xff) << 3))
int64_t x0_9 = x4_6 ^ x22
int64_t x17_13 = x0_9 ^ 0xc6ef372fe94f82be
int64_t x1_5 = *(&data_84af80 + ((x17_13 u>> 0x30 & 0xff) << 3))
    ^ *(&data_84a780 + (x17_13 u>> 0x35 & 0x7f8))
    ^ *(&data_84b780 + ((x17_13 u>> 0x28 & 0xff) << 3))
    ^ *(&data_84bf80 + ((x17_13 u>> 0x20 & 0xff) << 3))
int64_t x1_8 = x1_5 ^ *(&data_84c780 + ((x17_13 u>> 0x18 & 0xff) << 3))
    ^ *(&data_84cf80 + ((x17_13 u>> 0x10 & 0xff) << 3))
    ^ *(&data_84d780 + ((x17_13 u>> 8 & 0xff) << 3))
int64_t x1_9 = x1_8 ^ *(&data_84df80 + ((x17_13 & 0xff) << 3))
int64_t x24_6 = x16_4 ^ x1_9
int64_t x17_16 = x24_6 ^ 0x54ff53a5f1d36f1c
int64_t x3_3 = *(&data_84af80 + ((x17_16 u>> 0x30 & 0xff) << 3))
    ^ *(&data_84a780 + (x17_16 u>> 0x35 & 0x7f8))
    ^ *(&data_84b780 + ((x17_16 u>> 0x28 & 0xff) << 3))
    ^ *(&data_84bf80 + ((x17_16 u>> 0x20 & 0xff) << 3))
uint64_t* x16_9 = *arg1
int64_t x3_6 = x3_3 ^ *(&data_84c780 + ((x17_16 u>> 0x18 & 0xff) << 3))
    ^ *(&data_84cf80 + ((x17_16 u>> 0x10 & 0xff) << 3))
    ^ *(&data_84d780 + ((x17_16 u>> 8 & 0xff) << 3))
void* x17_18 = arg1[1] - x16_9
int64_t x3_7 = x3_6 ^ *(&data_84df80 + ((x17_16 & 0xff) << 3))
int64_t x25_1 = x3_7 ^ x0_9
int64_t result = x17_18 s>> 3
int64_t x8_35
int64_t x9_10

if (arg3 != 0x10)
    int64_t x3_8 = x3_7 ^ x4_6
    int64_t x4_7 = x3_8 ^ 0x10e527fade682d1d
    int64_t x1_14 = x1_9 ^ x2_2 ^ *(&data_84a780 + (x4_7 u>> 0x35 & 0x7f8))
        ^ *(&data_84af80 + ((x4_7 u>> 0x30 & 0xff) << 3))
        ^ *(&data_84b780 + ((x4_7 u>> 0x28 & 0xff) << 3))
    int64_t x1_17 = x1_14 ^ *(&data_84bf80 + ((x4_7 u>> 0x20 & 0xff) << 3))
        ^ *(&data_84c780 + ((x4_7 u>> 0x18 & 0xff) << 3))
        ^ *(&data_84cf80 + ((x4_7 u>> 0x10 & 0xff) << 3))
    int64_t x26_3 = x1_17 ^ *(&data_84d780 + ((x4_7 u>> 8 & 0xff) << 3))
        ^ *(&data_84df80 + ((x4_7 & 0xff) << 3))
    int64_t x1_19 = x26_3 ^ 0xb05688c2b3e6c1fd
    int64_t x8_9 = *(&data_84a780 + (x1_19 u>> 0x35 & 0x7f8)) ^ x3_8
        ^ *(&data_84af80 + ((x1_19 u>> 0x30 & 0xff) << 3))
        ^ *(&data_84b780 + ((x1_19 u>> 0x28 & 0xff) << 3))
        ^ *(&data_84bf80 + ((x1_19 u>> 0x20 & 0xff) << 3))
        ^ *(&data_84c780 + ((x1_19 u>> 0x18 & 0xff) << 3))
        ^ *(&data_84cf80 + ((x1_19 u>> 0x10 & 0xff) << 3))
    int64_t x27_4 = x8_9 ^ *(&data_84d780 + ((x1_19 u>> 8 & 0xff) << 3))
        ^ *(&data_84df80 + ((x1_19 & 0xff) << 3))
    
    if (result u<= 0x21)
        result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(arg1)
        x16_9 = *arg1
    else if (x17_18 != 0x110)
        arg1[1] = &x16_9[0x22]
    
    *x16_9 = x20
    int64_t x10_3 = (x23 << 0x40 | x22) u>> 0x22
    *(*arg1 + 8) = x21
    *(*arg1 + 0x10) = x27_4
    *(*arg1 + 0x18) = x26_3
    *(*arg1 + 0x20) = (x22 << 0x40 | x23) u>> 0x31
    *(*arg1 + 0x28) = (x23 << 0x40 | x22) u>> 0x31
    *(*arg1 + 0x30) = (x25_1 << 0x40 | x24_6) u>> 0x31
    *(*arg1 + 0x38) = (x24_6 << 0x40 | x25_1) u>> 0x31
    int64_t x9_15 = (x22 << 0x40 | x23) u>> 0x22
    *(*arg1 + 0x40) = x9_15
    *(*arg1 + 0x48) = x10_3
    *(*arg1 + 0x50) = (x27_4 << 0x40 | x26_3) u>> 0x22
    *(*arg1 + 0x58) = (x26_3 << 0x40 | x27_4) u>> 0x22
    *(*arg1 + 0x60) = (x20 << 0x40 | x21) u>> 0x13
    *(*arg1 + 0x68) = (x21 << 0x40 | x20) u>> 0x13
    *(*arg1 + 0x70) = (x25_1 << 0x40 | x24_6) u>> 0x13
    *(*arg1 + 0x78) = (x24_6 << 0x40 | x25_1) u>> 0x13
    *(*arg1 + 0x80) = (x20 << 0x40 | x21) u>> 4
    *(*arg1 + 0x88) = (x21 << 0x40 | x20) u>> 4
    *(*arg1 + 0x90) = (x22 << 0x40 | x23) u>> 4
    *(*arg1 + 0x98) = (x23 << 0x40 | x22) u>> 4
    *(*arg1 + 0xa0) = (x27_4 << 0x40 | x26_3) u>> 4
    *(*arg1 + 0xa8) = (x26_3 << 0x40 | x27_4) u>> 4
    *(*arg1 + 0xb0) = (x21 << 0x40 | x20) u>> 0x33
    *(*arg1 + 0xb8) = (x20 << 0x40 | x21) u>> 0x33
    *(*arg1 + 0xc0) = (x24_6 << 0x40 | x25_1) u>> 0x33
    *(*arg1 + 0xc8) = (x25_1 << 0x40 | x24_6) u>> 0x33
    *(*arg1 + 0xd0) = x10_3
    *(*arg1 + 0xd8) = x9_15
    *(*arg1 + 0xe0) = (x24_6 << 0x40 | x25_1) u>> 0x22
    *(*arg1 + 0xe8) = (x25_1 << 0x40 | x24_6) u>> 0x22
    *(*arg1 + 0xf0) = (x21 << 0x40 | x20) u>> 0x11
    *(*arg1 + 0xf8) = (x20 << 0x40 | x21) u>> 0x11
    x8_35 = (x27_4 << 0x40 | x26_3) u>> 0x11
    *(*arg1 + 0x100) = (x26_3 << 0x40 | x27_4) u>> 0x11
    x9_10 = 0x21
else
    if (result u<= 0x19)
        result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(arg1)
        x16_9 = *arg1
    else if (x17_18 != 0xd0)
        arg1[1] = &x16_9[0x1a]
    
    *x16_9 = x20
    int64_t x10_1 = (x24_6 << 0x40 | x25_1) u>> 0x22
    *(*arg1 + 8) = x21
    *(*arg1 + 0x10) = x25_1
    *(*arg1 + 0x18) = x24_6
    *(*arg1 + 0x20) = (x20 << 0x40 | x21) u>> 0x31
    *(*arg1 + 0x28) = (x21 << 0x40 | x20) u>> 0x31
    *(*arg1 + 0x30) = (x25_1 << 0x40 | x24_6) u>> 0x31
    *(*arg1 + 0x38) = (x24_6 << 0x40 | x25_1) u>> 0x31
    int64_t x9_6 = (x25_1 << 0x40 | x24_6) u>> 0x22
    *(*arg1 + 0x40) = x9_6
    *(*arg1 + 0x48) = x10_1
    *(*arg1 + 0x50) = (x20 << 0x40 | x21) u>> 0x13
    *(*arg1 + 0x58) = (x21 << 0x40 | x20) u>> 0x13
    *(*arg1 + 0x60) = (x25_1 << 0x40 | x24_6) u>> 0x13
    *(*arg1 + 0x68) = (x21 << 0x40 | x20) u>> 4
    *(*arg1 + 0x70) = (x25_1 << 0x40 | x24_6) u>> 4
    *(*arg1 + 0x78) = (x24_6 << 0x40 | x25_1) u>> 4
    *(*arg1 + 0x80) = (x21 << 0x40 | x20) u>> 0x33
    *(*arg1 + 0x88) = (x20 << 0x40 | x21) u>> 0x33
    *(*arg1 + 0x90) = (x21 << 0x40 | x20) u>> 0x22
    *(*arg1 + 0x98) = (x20 << 0x40 | x21) u>> 0x22
    *(*arg1 + 0xa0) = x10_1
    *(*arg1 + 0xa8) = x9_6
    *(*arg1 + 0xb0) = (x21 << 0x40 | x20) u>> 0x11
    *(*arg1 + 0xb8) = (x20 << 0x40 | x21) u>> 0x11
    x8_35 = (x25_1 << 0x40 | x24_6) u>> 0x11
    *(*arg1 + 0xc0) = (x24_6 << 0x40 | x25_1) u>> 0x11
    x9_10 = 0x19

*(*arg1 + (x9_10 << 3)) = x8_35
return result
