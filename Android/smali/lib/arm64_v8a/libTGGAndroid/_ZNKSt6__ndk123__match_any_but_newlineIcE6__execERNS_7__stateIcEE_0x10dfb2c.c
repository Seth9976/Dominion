// 函数: _ZNKSt6__ndk123__match_any_but_newlineIcE6__execERNS_7__stateIcEE
// 地址: 0x10dfb2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int32_t* entry_x1
char* x8 = *(entry_x1 + 0x10)

if (x8 != *(entry_x1 + 0x18))
    uint32_t x9_1 = zx.d(*x8)
    
    if (x9_1 != 0xd && x9_1 != 0xa)
        *entry_x1 = 0xfffffc1d
        *(entry_x1 + 0x10) = &x8[1]
        *(entry_x1 + 0x50) = *(arg1 + 8)
        return 

*entry_x1 = 0xfffffc1f
*(entry_x1 + 0x50) = 0
