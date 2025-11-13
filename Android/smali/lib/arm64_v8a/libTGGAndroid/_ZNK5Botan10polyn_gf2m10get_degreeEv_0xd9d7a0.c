// 函数: _ZNK5Botan10polyn_gf2m10get_degreeEv
// 地址: 0xd9d7a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
int64_t x10_1 = *(entry_x0 + 8)
int64_t x8 = *(entry_x0 + 0x10) - x10_1
uint32_t x11 = (x8 u>> 1).d
int64_t x9 = (x8 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x8_2 = (x11 & x11 s>> 0x1f) - 1

while (true)
    int64_t x11_1 = x9 - 1
    
    if (x9 s< 1)
        break
    
    uint32_t x12_1 = zx.d(*(x10_1 - 2 + (x9 << 1)))
    x9 = x11_1
    
    if (x12_1 != 0)
        x8_2 = x11_1.d
        break

*entry_x0 = x8_2
return zx.q(x8_2)
