// 函数: _ZNKSt6__ndk123__match_any_but_newlineIwE6__execERNS_7__stateIwEE
// 地址: 0x10dfb7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int32_t* entry_x1
int32_t* x8 = *(entry_x1 + 0x10)

if (x8 != *(entry_x1 + 0x18))
    int32_t x9_1 = *x8
    
    if (x9_1 - 0x2028 u>= 2 && x9_1 != 0xd && x9_1 != 0xa)
        *entry_x1 = 0xfffffc1d
        *(entry_x1 + 0x10) = &x8[1]
        *(entry_x1 + 0x50) = *(arg1 + 8)
        return 

*entry_x1 = 0xfffffc1f
*(entry_x1 + 0x50) = 0
