// 函数: _ZNKSt6__ndk120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf13a84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
char* x8_2 = *(entry_x1 + 0x10)

if (x8_2 == *(entry_x1 + 0x18) || zx.d(*x8_2) != zx.d(*(arg1 + 0x28)))
    *entry_x1 = 0xfffffc1f
    *(entry_x1 + 0x50) = 0
    return 

*entry_x1 = 0xfffffc1d
*(entry_x1 + 0x10) = &x8_2[1]
*(entry_x1 + 0x50) = *(arg1 + 8)
