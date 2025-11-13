// 函数: _ZN5Botan10polyn_gf2m7gcd_auxERS0_S1_
// 地址: 0xda77a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::polyn_gf2m& x21 = arg2
Botan::polyn_gf2m* x20_1

while (true)
    int64_t x10_1 = *(x21 + 8)
    x20_1 = arg1
    int64_t x8_1 = *(x21 + 0x10) - x10_1
    uint32_t x11_1 = (x8_1 u>> 1).d
    int64_t x9_1 = (x8_1 & 0x1fffffffe) << 0x1f s>> 0x20
    int32_t x8_3 = (x11_1 & x11_1 s>> 0x1f) - 1
    
    while (true)
        int64_t x11_2 = x9_1 - 1
        
        if (x9_1 s< 1)
            break
        
        uint32_t x12_1 = zx.d(*(x10_1 - 2 + (x9_1 << 1)))
        x9_1 = x11_2
        
        if (x12_1 != 0)
            x8_3 = x11_2.d
            break
    
    *x21 = x8_3
    
    if (x8_3 == 0xffffffff)
        break
    
    Botan::polyn_gf2m::remainder(x20_1, x21)
    arg1 = x21
    x21 = x20_1

int32_t* entry_x8
*entry_x8 = *x20_1
int64_t result =
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&entry_x8[2])
*(entry_x8 + 0x20) = *(x20_1 + 0x20)
int64_t x8_6 = *(x20_1 + 0x28)
*(entry_x8 + 0x28) = x8_6

if (x8_6 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_6 + 8) + 1, x8_6 + 8)
    while (i != 0)

return result
