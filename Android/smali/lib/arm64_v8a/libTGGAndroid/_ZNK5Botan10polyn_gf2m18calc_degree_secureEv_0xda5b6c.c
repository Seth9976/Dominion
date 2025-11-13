// 函数: _ZNK5Botan10polyn_gf2m18calc_degree_secureEv
// 地址: 0xda5b6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
int64_t x10_1 = *(entry_x0 + 8)
int64_t x9 = *(entry_x0 + 0x10) - x10_1

if ((x9 u>> 1).d s< 1)
    *entry_x0 = 0
    return 0

int32_t x8_1 = 0
int64_t i_1 = (x9 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x12 = 0xffff
int64_t i

do
    int32_t x13_2
    
    if (zx.d(*(x10_1 - 2 + (i_1 << 1))) == 0)
        x13_2 = 0
    else
        x13_2 = 0xffff
    
    i = i_1
    i_1 -= 1
    x8_1 |= x12 & i_1.d & x13_2
    x12 &= not.d(x13_2)
while (i s> 1)
*entry_x0 = x8_1
return zx.q(x8_1)
