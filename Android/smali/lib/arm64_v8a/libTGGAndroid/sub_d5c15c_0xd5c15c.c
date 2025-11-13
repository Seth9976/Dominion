// 函数: sub_d5c15c
// 地址: 0xd5c15c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
int128_t v1

if ((zx.d(data_23eca30) & 1) == 0)
    int32_t x0_5
    int128_t v0
    x0_5, v0, v1 = __cxa_guard_acquire(&data_23eca30)
    
    if (x0_5 != 0)
        __builtin_memcpy(&var_50, 
            "\x59\xf1\xb2\xfe\x0a\xe5\xa6\xff\x7b\xdd\x2a\xfe\x1e\x14\xd4\x00\x52\x80\x03\x00\x30\xd1\x"
        "f3\x00\x77\x79\x40\xff\x32\xe3\x9c\xff\x00\x6e\xc5\x01\x67\x1b\x90\x00", 
            0x28)
        Botan::FE_25519::FE_25519(0x23ecdb0)
        __cxa_atexit(Botan::FE_25519::~FE_25519, 0x23ecdb0, &data_1122730)
        v0, v1 = __cxa_guard_release(&data_23eca30)

int128_t v0_1 = arg2[1] + *(arg2 + 0x38)
var_50 = *arg2 + *(arg2 + 0x28)
int128_t var_40 = v0_1
v0_1.q = *(arg2 + 0x48)
v1.q = arg2[2].q
*arg1 = var_50
arg1[1] = var_40
arg1[2].q = v1.q + v0_1.q
int128_t v0_3
int128_t v1_1
v0_3, v1_1 = memset(&var_50, 0, 0x28)
int128_t v0_4 = *(arg2 + 0x38) - arg2[1]
var_50 = *(arg2 + 0x28) - *arg2
int128_t var_40_1 = v0_4
v0_4.q = *(arg2 + 0x48)
v1_1.q = arg2[2].q
int64_t var_30_1 = (v0_4 - v1_1).q
int128_t v0_5 = var_50
*(arg1 + 0x48) = var_30_1
*(arg1 + 0x38) = var_40_1
*(arg1 + 0x28) = v0_5
int128_t v0_6
int128_t v1_2
v0_6, v1_2 = memset(&var_50, 0, 0x28)
v0_6 = arg2[6]
arg1[7].q = arg2[7].q
arg1[5] = arg2[5]
arg1[6] = v0_6
int128_t v0_7
int128_t v1_3
v0_7, v1_3 = Botan::FE_25519::mul(arg2 + 0x78, 0x23ecdb0)
v1_3 = var_50
*(arg1 + 0x98) = var_30_1
*(arg1 + 0x88) = var_40_1
*(arg1 + 0x78) = v1_3
return memset(&var_50, 0, 0x28)
