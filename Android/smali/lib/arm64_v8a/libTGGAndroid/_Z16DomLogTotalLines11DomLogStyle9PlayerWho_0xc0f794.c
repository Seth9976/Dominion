// 函数: _Z16DomLogTotalLines11DomLogStyle9PlayerWho
// 地址: 0xc0f794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result

if (arg1 - 2 u< 2)
    int64_t x9_2 = sx.q(*(gLog + 0x10))
    
    if (x9_2.d == 0)
        return 0
    
    int64_t x8_2 = x9_2 << 6
    result = 0
    int32_t x9_5 = ((x8_2 - -0x3fffffffc0) u>> 6).d + 1
    int32_t* x10_3 = *(gLog + 8) + 8
    
    while (*x10_3 != 4)
        result = zx.q(result.d + 1)
        int64_t temp0_1 = x8_2
        x8_2 -= 0x40
        x10_3 = &x10_3[0x10]
        
        if (temp0_1 == 0x40)
            return zx.q(x9_5)
else
    if (arg1 == 0)
        return zx.q(*(gLog + 0x10))
    
    if (arg1 != 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return DomLogLastSetupLine() __tailcall
    
    result = zx.q(*(gLog + 0x10))
    
    if (result.d != 0)
        void* x9_1 = *(gLog + 8)
        int64_t i_2 = sx.q(result.d) << 6
        int32_t x11_1 = 0
        int32_t* x10_1 = x9_1 + 0x24
        int64_t i_1 = i_2
        int64_t i
        
        do
            if (x10_1[-7] == 6 && *x10_1 == 0)
                x11_1 = x10_1[-2]
            
            i = i_1
            i_1 -= 0x40
            x10_1 = &x10_1[0x10]
        while (i != 0x40)
        
        if (x11_1 s>= 2)
            int32_t x10_4 = 0
            
            if (result.d != 0)
                int32_t x12_3 = ((i_2 - -0x3fffffffc0) u>> 6).d + 1
                void* x9_6 = x9_1 + 0x24
                
                while (*(x9_6 - 0x1c) != 6 || *x9_6 != 0 || *(x9_6 - 8) != x11_1 - 1)
                    x10_4 += 1
                    int64_t i_3 = i_2
                    i_2 -= 0x40
                    x9_6 += 0x40
                    
                    if (i_3 == 0x40)
                        x10_4 = x12_3
                        break
            
            return zx.q(result.d - x10_4)

return result
