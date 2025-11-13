// 函数: _ZNK5Botan3TLS12Client_Hello13offered_suiteEt
// 地址: 0xe49a64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* x8 = *(arg1 + 0x40)
int64_t x10_1 = *(arg1 + 0x48)
void* x9 = x10_1 - x8

if (x10_1 == x8)
    return 0

void* x11

x11 = x9 s>= 0 ? x9 : -ffffffffffffffff

void* x10 = x8 - x10_1
void* x11_1

x11_1 = x11 s< 1 ? x11 : 1

void* x9_1

x9_1 = x10 s> x9 ? x10 : x9

int64_t i_1 = x11_1 * (x9_1 u>> 1) - 1
uint32_t x11_2
uint32_t temp0_1
int64_t i

do
    x11_2 = zx.d(*x8)
    x8 = &x8[1]
    int16_t entry_x1
    temp0_1 = zx.d(entry_x1)
    
    if (x11_2 == temp0_1)
        break
    
    i = i_1
    i_1 -= 1
while (i != 0)
return zx.q(x11_2 == temp0_1 ? 1 : 0)
