// 函数: _ZN5Botan13GOST_28147_89C1ERKNS_20GOST_28147_89_ParamsE
// 地址: 0xd83574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::GOST_28147_89 + 0x10
*(arg1 + 8) = 0
int64_t x0 = operator new(0x1000)
int64_t x20 = x0
*(arg1 + 8) = x0
*(arg1 + 0x18) = x0 + 0x1000
int64_t result = memset(x0, 0, 0x1000)
int64_t x8_1 = 0
int64_t x9 = 0xc00
*(arg1 + 0x10) = x0 + 0x1000
__builtin_memset(arg1 + 0x20, 0, 0x18)

while (true)
    int64_t* entry_x1
    void* x10_1 = *entry_x1
    uint64_t x12_1 = x8_1 u>> 2
    int64_t x11_2 = zx.q(x9.d - 0xc00) & 0x3c
    int64_t x13_1 = x12_1 & 0x1ffffffffffffffc
    *(x20 + x9 - 0xc00) =
        zx.d(((zx.d(*(x10_1 + x13_1)) << 0x20 | zx.d(*(x10_1 + x11_2)) << 0x18) u>> 0x1c).b) << 0xb
    void* x10_6 = *entry_x1
    *(*(arg1 + 8) + x9 - 0x800) = zx.d(((zx.d(*(x10_6 + (x13_1 | 1))) << 0x20
        | zx.d(*(x10_6 + (x11_2 | 1))) << 0x18) u>> 0x1c).b) << 0x13
    void* x10_11 = *entry_x1
    *(*(arg1 + 8) + x9 - 0x400) = ror.d(
        zx.d(((zx.d(*(x10_11 + (x13_1 | 2))) << 0x20 | zx.d(*(x10_11 + (x11_2 | 2))) << 0x18)
            u>> 0x1c).b), 
        5)
    void* x10_16 = *entry_x1
    *(*(arg1 + 8) + x9) = zx.d(((zx.d(*(x10_16 + (x12_1 | 3))) << 0x20
        | zx.d(*(x10_16 + (x11_2 | 3))) << 0x18) u>> 0x1c).b) << 3
    
    if (x9 == 0xffc)
        break
    
    x20 = *(arg1 + 8)
    x8_1 += 1
    x9 += 4

return result
