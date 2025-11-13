// 函数: _Z16UI2TextboxActive9UI2HandleR7XString
// 地址: 0x1042a94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(gUI2 + 0x50)

if (x10 != 0)
    uint64_t x8_1 = zx.q(x10.w)
    
    if (x8_1.d u< *(gUI2 + 8))
        int64_t x9_1 = *gUI2
        
        if (*(x9_1 + x8_1 * 0x19a8 + 0x19a0) == x10 && *(x9_1 + x8_1 * 0x19a8 + 0x167c) == 3)
            void* x10_3 = x9_1 + x8_1 * 0x19a8
            
            while (true)
                x10_3 = *(x10_3 + 0x17d0)
                
                if (x10_3 == 0)
                    break
                
                if (*(x10_3 + 0x19a0) == arg1)
                    XString::operator=(arg2)
                    return 1

return 0
