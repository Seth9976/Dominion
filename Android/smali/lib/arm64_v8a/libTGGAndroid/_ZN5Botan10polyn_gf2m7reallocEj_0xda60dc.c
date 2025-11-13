// 函数: _ZN5Botan10polyn_gf2m7reallocEj
// 地址: 0xda60dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
void* result
int32_t entry_x1
int64_t x20
int64_t x21_1

if (entry_x1 == 0)
    x20 = 0
    x21_1 = 0
    result = *(x19 + 8)
    
    if (result != 0)
    label_da612c:
        int64_t x8_1 = *(x19 + 0x18)
        *(x19 + 0x10) = result
        result = Botan::deallocate_memory(result, (x8_1 - result) s>> 1, 2)
else
    uint64_t x21 = zx.q(entry_x1)
    int64_t x0_1 = Botan::allocate_memory(x21, 2)
    uint64_t x2_1 = x21 << 1
    x20 = x0_1
    x21_1 = x0_1 + x2_1
    memset(x0_1, 0, x2_1)
    result = *(x19 + 8)
    
    if (result != 0)
        goto label_da612c

*(x19 + 8) = x20
*(x19 + 0x10) = x21_1
*(x19 + 0x18) = x21_1
return result
