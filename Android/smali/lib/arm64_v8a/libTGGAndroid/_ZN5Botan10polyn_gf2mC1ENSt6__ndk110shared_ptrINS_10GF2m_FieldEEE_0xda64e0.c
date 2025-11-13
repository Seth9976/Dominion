// 函数: _ZN5Botan10polyn_gf2mC1ENSt6__ndk110shared_ptrINS_10GF2m_FieldEEE
// 地址: 0xda64e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
*arg1 = 0xffffffff
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int16_t* result = Botan::allocate_memory(1, 2)
*(x19 + 0x18) = &result[1]
*result = 0
*(x19 + 8) = result
*(x19 + 0x10) = &result[1]
int64_t* entry_x1
*(x19 + 0x20) = *entry_x1
int64_t x8_2 = entry_x1[1]
*(x19 + 0x28) = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

return result
