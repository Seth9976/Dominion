// 函数: _ZNK5Botan21Curve25519_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xd0ba20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
uint8_t* x0
int128_t v0
int128_t v1
x0, v0, v1 = operator new(0x20)
v0.q = 0
v0:8.q = 0
__builtin_memset(x0, 0, 0x20)
v1 = data_7b0130
uint8_t* x1 = *(arg1 + 0x20)
int128_t var_50 = data_7b0120
int128_t var_40 = v1
Botan::curve25519_donna(x0, x1, &var_50)
char* x8_1 = *(arg1 + 8)
int32_t x20_1

if (*(arg1 + 0x10) - x8_1 != 0x20 || zx.d(*x0) != zx.d(*x8_1) || zx.d(x0[1]) != zx.d(x8_1[1])
        || zx.d(x0[2]) != zx.d(x8_1[2]) || zx.d(x0[3]) != zx.d(x8_1[3])
        || zx.d(x0[4]) != zx.d(x8_1[4]) || zx.d(x0[5]) != zx.d(x8_1[5])
        || zx.d(x0[6]) != zx.d(x8_1[6]) || zx.d(x0[7]) != zx.d(x8_1[7])
        || zx.d(x0[8]) != zx.d(x8_1[8]) || zx.d(x0[9]) != zx.d(x8_1[9])
        || zx.d(x0[0xa]) != zx.d(x8_1[0xa]) || zx.d(x0[0xb]) != zx.d(x8_1[0xb])
        || zx.d(x0[0xc]) != zx.d(x8_1[0xc]) || zx.d(x0[0xd]) != zx.d(x8_1[0xd])
        || zx.d(x0[0xe]) != zx.d(x8_1[0xe]) || zx.d(x0[0xf]) != zx.d(x8_1[0xf])
        || zx.d(x0[0x10]) != zx.d(x8_1[0x10]) || zx.d(x0[0x11]) != zx.d(x8_1[0x11])
        || zx.d(x0[0x12]) != zx.d(x8_1[0x12]) || zx.d(x0[0x13]) != zx.d(x8_1[0x13])
        || zx.d(x0[0x14]) != zx.d(x8_1[0x14]) || zx.d(x0[0x15]) != zx.d(x8_1[0x15])
        || zx.d(x0[0x16]) != zx.d(x8_1[0x16]) || zx.d(x0[0x17]) != zx.d(x8_1[0x17])
        || zx.d(x0[0x18]) != zx.d(x8_1[0x18]) || zx.d(x0[0x19]) != zx.d(x8_1[0x19])
        || zx.d(x0[0x1a]) != zx.d(x8_1[0x1a]) || zx.d(x0[0x1b]) != zx.d(x8_1[0x1b])
        || zx.d(x0[0x1c]) != zx.d(x8_1[0x1c]) || zx.d(x0[0x1d]) != zx.d(x8_1[0x1d])
        || zx.d(x0[0x1e]) != zx.d(x8_1[0x1e]))
    x20_1 = 0
else
    x20_1 = zx.d(x0[0x1f]) == zx.d(x8_1[0x1f]) ? 1 : 0

operator delete(x0)

if (*(x21 + 0x28) == x8)
    return zx.q(x20_1)

__stack_chk_fail()
noreturn
