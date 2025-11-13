// 函数: _Z26ControllerUpdateClickStateR10ControllerRK17ButtonSourceCacheiRK17InputHitResultAny
// 地址: 0xc81310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_460
int64_t result = ControllerGetClickState(arg1, &var_460)

if (result.d s>= 1)
    uint64_t i_1 = zx.q(result.d)
    void* x25_1 = &var_460 | 4
    uint64_t i
    
    do
        int64_t x10_2 = sx.q(*(x25_1 - 4))
        uint32_t x8_3
        uint64_t x9_3
        
        if (x10_2.d s>= 0x24)
            void* x9_1 = x10_2 + arg2
            void* x8_2
            
            if (*x25_1 == 0)
                x8_2 = x9_1 + 0x24
            else
                x8_2 = x9_1 + 0x2c
            
            x8_3 = zx.d(*x8_2)
            x9_3 = 0
        else
            int64_t x11_1 = x10_2 & 0xffffffff
            x8_3 = zx.d(*(arg2 + x11_1))
            x9_3 = 0
            
            if (x10_2.d u<= 6 && (1 << x10_2.d & 0x43) != 0)
                x9_3 = zx.q(*(arg2 + x11_1 + 0x24)) << 8
        
        result = ClickStateUpdate(*(x25_1 + 4), (x8_3 != 0 ? 1 : 0).b, (x9_3 != 0 ? 1 : 0).b, arg3, 
            arg4, arg1 + 0xa5ec, arg1 + 0xa5f4)
        i = i_1
        i_1 -= 1
        x25_1 += 0x10
    while (i != 1)

return result
