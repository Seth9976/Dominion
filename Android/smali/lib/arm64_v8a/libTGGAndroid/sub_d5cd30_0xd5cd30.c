// 函数: sub_d5cd30
// 地址: 0xd5cd30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
int128_t var_7c
__builtin_memset(&var_7c, 0, 0x24)
int32_t var_80 = 1
v0 = var_7c
int128_t var_6c
arg1[2].q = var_6c:0xc.q
*arg1 = var_80.o
arg1[1] = v0
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = memset(&var_80, 0, 0x28)
v0_1.q = 0
v0_1:8.q = 0
int128_t var_7c_1
__builtin_memset(&var_7c_1, 0, 0x24)
var_80 = 1
v1_1 = var_80.o
v0_1 = var_7c_1
int128_t var_6c_1
*(arg1 + 0x48) = var_6c_1:0xc.q
*(arg1 + 0x38) = v0_1
*(arg1 + 0x28) = v1_1
memset(&var_80, 0, 0x28)
__builtin_memset(&var_80, 0, 0x28)
__builtin_memset(&arg1[5], 0, 0x28)
memset(&var_80, 0, 0x28)
char x9_2 = arg3.b - ((arg3 & sx.d(arg3.b) s>> 7) << 1).b
int64_t i = 0
int32_t x9_5 = ((zx.d(x9_2) ^ 1) - 1) s>> 0x1f
int32_t x10_5 = ((zx.d(x9_2) ^ 2) - 1) s>> 0x1f
int32_t x11_2 = ((zx.d(x9_2) ^ 3) - 1) s>> 0x1f
int32_t x12_3 = ((zx.d(x9_2) ^ 4) - 1) s>> 0x1f
int32_t x13_3 = ((zx.d(x9_2) ^ 5) - 1) s>> 0x1f
int32_t x14_3 = ((zx.d(x9_2) ^ 6) - 1) s>> 0x1f
int32_t x15_3 = ((zx.d(x9_2) ^ 7) - 1) s>> 0x1f
int32_t x16_3 = ((zx.d(x9_2) ^ 8) - 1) s>> 0x1f

do
    void* x0_4 = arg1 + 0x28 + i
    int32_t* x1 = arg2 + i
    int32_t x2 = *(x0_4 - 0x28)
    int32_t x2_5 = ((*x1 & x9_5) | (x2 & not.d(x9_5))) ^ ((x1[0x1e] ^ x2) & x10_5)
        ^ ((x1[0x3c] ^ x2) & x11_2) ^ ((x1[0x5a] ^ x2) & x12_3)
    int32_t x2_9 = x2_5 ^ ((x1[0x78] ^ x2) & x13_3) ^ ((x1[0x96] ^ x2) & x14_3)
        ^ ((x1[0xb4] ^ x2) & x15_3) ^ ((x1[0xd2] ^ x2) & x16_3)
    *(x0_4 - 0x28) = x2_9
    int32_t x3_3 = *x0_4
    int32_t x2_15 = ((x1[0xa] & x9_5) | (x3_3 & not.d(x9_5))) ^ ((x1[0x28] ^ x3_3) & x10_5)
        ^ ((x1[0x46] ^ x3_3) & x11_2) ^ ((x1[0x64] ^ x3_3) & x12_3)
    int32_t x2_19 = x2_15 ^ ((x1[0x82] ^ x3_3) & x13_3) ^ ((x1[0xa0] ^ x3_3) & x14_3)
        ^ ((x1[0xbe] ^ x3_3) & x15_3) ^ ((x1[0xdc] ^ x3_3) & x16_3)
    *x0_4 = x2_19
    int32_t x3_6 = *(x0_4 + 0x28)
    int32_t x2_25 = ((x1[0x14] & x9_5) | (x3_6 & not.d(x9_5))) ^ ((x1[0x32] ^ x3_6) & x10_5)
        ^ ((x1[0x50] ^ x3_6) & x11_2) ^ ((x1[0x6e] ^ x3_6) & x12_3)
    i += 4
    int32_t x1_4 = x2_25 ^ ((x1[0x8c] ^ x3_6) & x13_3) ^ ((x1[0xaa] ^ x3_6) & x14_3)
        ^ ((x1[0xc8] ^ x3_6) & x15_3) ^ ((x1[0xe6] ^ x3_6) & x16_3)
    *(x0_4 + 0x28) = x1_4
while (i != 0x28)

uint128_t v1_2 = vnegq_s32(arg1[5])
uint128_t v0_3 = vnegq_s32(arg1[6])
var_80.o = v1_2
var_7c_1 = v0_3
v0_3.q = arg1[7].q
var_6c_1:0xc.q = vneg_s32(v0_3).q
v1_2 = var_7c_1
int128_t var_b0 = var_80.o
int64_t var_90 = var_6c_1:0xc.q
uint128_t v0_5
uint128_t v1_3
uint128_t v2
int128_t v3
v0_5, v1_3, v2, v3 = memset(&var_80, 0, 0x28)
int32_t x8_3 = *arg1
int32_t x9_6 = *(arg1 + 4)
int32_t x10_6 = *(arg1 + 0x28)
int32_t x11_3 = *(arg1 + 0x2c)
int32_t x12_4 = *(arg1 + 8)
int32_t x13_4 = *(arg1 + 0xc)
int32_t x14_4 = arg1[3].d
int32_t x15_4 = *(arg1 + 0x34)
int32_t x16_4 = arg1[1].d
int32_t x17_2 = *(arg1 + 0x14)
int32_t x0_6 = *(arg1 + 0x38)
int32_t x1_5 = *(arg1 + 0x3c)
int32_t x6_10 = (x10_6 ^ x8_3) & ((not.d(arg3) u>> 7 & 1) - 1)
int32_t x7_10 = (x11_3 ^ x9_6) & ((not.d(arg3) u>> 7 & 1) - 1)
int32_t x20_2 = (x14_4 ^ x12_4) & ((not.d(arg3) u>> 7 & 1) - 1)
int32_t x23_10 = (x15_4 ^ x13_4) & ((not.d(arg3) u>> 7 & 1) - 1)
int32_t x24_10 = (x0_6 ^ x16_4) & ((not.d(arg3) u>> 7 & 1) - 1)
int32_t x25_7 = (x1_5 ^ x17_2) & ((not.d(arg3) u>> 7 & 1) - 1)
*arg1 = x6_10 ^ x8_3
*(arg1 + 4) = x7_10 ^ x9_6
*(arg1 + 0x28) = x6_10 ^ x10_6
*(arg1 + 0x2c) = x7_10 ^ x11_3
int32_t x8_5 = var_b0.d
int32_t x9_8 = var_b0:4.d
*(arg1 + 8) = x20_2 ^ x12_4
*(arg1 + 0xc) = x23_10 ^ x13_4
arg1[3].d = x20_2 ^ x14_4
*(arg1 + 0x34) = x23_10 ^ x15_4
arg1[1].d = x24_10 ^ x16_4
*(arg1 + 0x14) = x25_7 ^ x17_2
*(arg1 + 0x38) = x24_10 ^ x0_6
*(arg1 + 0x3c) = x25_7 ^ x1_5
v3.q = arg1[2].q
v0_5.d = (not.d(arg3) u>> 7 & 1) - 1
v0_5:4.d = (not.d(arg3) u>> 7 & 1) - 1
v0_5:8.d = (not.d(arg3) u>> 7 & 1) - 1
v0_5:0xc.d = (not.d(arg3) u>> 7 & 1) - 1
int32_t x2_29 = *(arg1 + 0x18)
int32_t x3_13 = *(arg1 + 0x1c)
int32_t x4_10 = arg1[4].d
int32_t x5_9 = *(arg1 + 0x44)
uint128_t v1_4 = vbslq_s8(v0_5, var_b0, *(arg1 + 0x58))
v2 = *(arg1 + 0x48)
*(arg1 + 0x58) = v1_4
int128_t v1_5
v1_5:8.d = x8_5
v1_5:0xc.d = x9_8
int32_t x26_1 = (x4_10 ^ x2_29) & ((not.d(arg3) u>> 7 & 1) - 1)
int32_t x21_2 = (x5_9 ^ x3_13) & ((not.d(arg3) u>> 7 & 1) - 1)
int128_t v1_7 = (v2 ^ v1_5) & v0_5
*(arg1 + 0x18) = x26_1 ^ x2_29
*(arg1 + 0x1c) = x21_2 ^ x3_13
arg1[4].d = x26_1 ^ x4_10
*(arg1 + 0x44) = x21_2 ^ x5_9
arg1[2].q = v1_7.q ^ v3.q
*(arg1 + 0x48) = v1_7 ^ v2
*(arg1 + 0x68) = vbslq_s8(v0_5, v1_2, *(arg1 + 0x68))
return memset(&var_b0, 0, 0x28)
