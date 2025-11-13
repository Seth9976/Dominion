// 函数: _Z13base64_decodePKciPhi
// 地址: 0xc8387c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8

if (arg2 s< 1)
    x8 = 0
else
    uint64_t i_4 = zx.q(arg2)
    int32_t x11_1
    int64_t i_6
    
    if (arg2 != 1)
        i_6 = i_4 & 0xfffffffe
        int32_t x11_2 = 0
        int32_t x12_1 = 0
        void* x13_1 = &arg1[1]
        int64_t i_5 = i_6
        int64_t i
        
        do
            uint64_t x15_1 = zx.q(*(x13_1 - 1))
            uint64_t x16_1 = zx.q(*x13_1)
            x13_1 += 2
            
            if (zx.d(*(&data_8280fc + x15_1)) != 0x80)
                x11_2 += 1
            
            if (zx.d(*(&data_8280fc + x16_1)) != 0x80)
                x12_1 += 1
            
            i = i_5
            i_5 -= 2
        while (i != 2)
        x11_1 = x12_1 + x11_2
        
        if (i_6 != i_4)
            goto label_c838f8
    else
        i_6 = 0
        x11_1 = 0
    label_c838f8:
        void* x12_2 = &arg1[i_6]
        int64_t i_3 = i_4 - i_6
        int64_t i_1
        
        do
            uint64_t x13_2 = zx.q(*x12_2)
            x12_2 += 1
            
            if (zx.d(*(&data_8280fc + x13_2)) != 0x80)
                x11_1 += 1
            
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    x8 = 0
    
    if (x11_1 != 0 && (x11_1 & 3) == 0)
        x8 = (x11_1 u>> 2) * 3
        
        if (arg2 s>= 1)
            int32_t x11_3 = 0
            int32_t x13_4 = 0
            uint64_t i_2
            
            do
                uint64_t x15_3 = zx.q(*arg1)
                uint32_t x14_1 = zx.d(*(&data_8280fc + x15_3))
                
                if (x14_1 != 0x80)
                    char var_4
                    (&var_4)[sx.q(x13_4)] = x14_1.b
                    x13_4 += 1
                    
                    if (x15_3.d == 0x3d)
                        x11_3 += 1
                    
                    if (x13_4 == 4)
                        char var_3
                        uint32_t x13_5 = zx.d(var_3)
                        *arg3 = (x13_5 u>> 4).b | var_4 << 2
                        char var_2
                        uint32_t x14_4 = zx.d(var_2)
                        arg3[1] = (x14_4 u>> 2).b | (x13_5 << 4).b
                        char var_1
                        arg3[2] = var_1 | (x14_4 << 6).b
                        
                        if (x11_3 != 0)
                            if (x11_3 - 1 u< 2)
                                break
                            
                            pthread_kill(pthread_self(), 6)
                            XString* x0_2
                            XString* x1
                            x0_2, x1 = XNoReturn()
                            return CryptoKeyPair(x0_2, x1) __tailcall
                        
                        arg3 = &arg3[3]
                        x13_4 = x11_3
                
                i_2 = i_4
                i_4 -= 1
                arg1 = &arg1[1]
            while (i_2 != 1)

return zx.q(x8)
