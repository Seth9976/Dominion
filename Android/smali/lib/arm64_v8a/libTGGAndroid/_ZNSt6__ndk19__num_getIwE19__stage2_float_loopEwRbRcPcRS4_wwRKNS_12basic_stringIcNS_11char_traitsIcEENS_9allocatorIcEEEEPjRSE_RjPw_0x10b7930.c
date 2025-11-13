// 函数: _ZNSt6__ndk19__num_getIwE19__stage2_float_loopEwRbRcPcRS4_wwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjPw
// 地址: 0x10b7930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if (arg1 != arg6)
    uint64_t x11_7
    
    if (arg1 == arg7)
        uint64_t x11_6 = zx.q(*arg8)
        
        if ((x11_6.d & 1) == 0)
            x11_7 = x11_6 u>> 1
        else
            x11_7 = *(arg8 + 8)
    
    if (arg1 != arg7 || x11_7 == 0)
        void* x12_5 = &arg12[0x20]
        
        if (*arg12 == arg1)
            x12_5 = &arg12[0]
        else if (arg12[1] == arg1)
            x12_5 = &arg12[1]
        else if (arg12[2] == arg1)
            x12_5 = &arg12[2]
        else if (arg12[3] == arg1)
            x12_5 = &arg12[3]
        else if (arg12[4] == arg1)
            x12_5 = &arg12[4]
        else if (arg12[5] == arg1)
            x12_5 = &arg12[5]
        else if (arg12[6] == arg1)
            x12_5 = &arg12[6]
        else if (arg12[7] == arg1)
            x12_5 = &arg12[7]
        else if (arg12[8] == arg1)
            x12_5 = &arg12[8]
        else if (arg12[9] == arg1)
            x12_5 = &arg12[9]
        else if (arg12[0xa] == arg1)
            x12_5 = &arg12[0xa]
        else if (arg12[0xb] == arg1)
            x12_5 = &arg12[0xb]
        else if (arg12[0xc] == arg1)
            x12_5 = &arg12[0xc]
        else if (arg12[0xd] == arg1)
            x12_5 = &arg12[0xd]
        else if (arg12[0xe] == arg1)
            x12_5 = &arg12[0xe]
        else if (arg12[0xf] == arg1)
            x12_5 = &arg12[0xf]
        else if (arg12[0x10] == arg1)
            x12_5 = &arg12[0x10]
        else if (arg12[0x11] == arg1)
            x12_5 = &arg12[0x11]
        else if (arg12[0x12] == arg1)
            x12_5 = &arg12[0x12]
        else if (arg12[0x13] == arg1)
            x12_5 = &arg12[0x13]
        else if (arg12[0x14] == arg1)
            x12_5 = &arg12[0x14]
        else if (arg12[0x15] == arg1)
            x12_5 = &arg12[0x15]
        else if (arg12[0x16] == arg1)
            x12_5 = &arg12[0x16]
        else if (arg12[0x17] == arg1)
            x12_5 = &arg12[0x17]
        else if (arg12[0x18] == arg1)
            x12_5 = &arg12[0x18]
        else if (arg12[0x19] == arg1)
            x12_5 = &arg12[0x19]
        else if (arg12[0x1a] == arg1)
            x12_5 = &arg12[0x1a]
        else if (arg12[0x1b] == arg1)
            x12_5 = &arg12[0x1b]
        else if (arg12[0x1c] == arg1)
            x12_5 = &arg12[0x1c]
        else if (arg12[0x1d] == arg1)
            x12_5 = &arg12[0x1d]
        else if (arg12[0x1e] == arg1)
            x12_5 = &arg12[0x1e]
        else if (arg12[0x1f] == arg1)
            x12_5 = &arg12[0x1f]
        
        int64_t x12_7 = x12_5 - arg12
        
        if (x12_7 s<= 0x7c)
            uint32_t x11_12 = zx.d(*(std::__ndk1::__num_get_base::__src + (x12_7 s>> 2)))
            int64_t x13_37 = ror.q(x12_7 - 0x58, 2)
            
            if (x13_37 u< 2)
                *arg3 = 0x50
            label_10b7d08:
                uint8_t* x9_4 = *arg5
                *arg5 = &x9_4[1]
                *x9_4 = x11_12.b
                
                if (x12_7 s<= 0x54)
                    *arg11 += 1
                
                return 0
            
            if (x13_37 - 2 u> 1)
                int32_t x13_39 = x11_12 & 0x5f
                
                if (x13_39 == zx.d(*arg3))
                    *arg3 = x13_39.b | 0x80
                    
                    if (zx.d(*arg2) != 0)
                        *arg2 = false
                        uint64_t x13_42 = zx.q(*arg8)
                        uint64_t x13_43
                        
                        if ((x13_42.d & 1) == 0)
                            x13_43 = x13_42 u>> 1
                        else
                            x13_43 = *(arg8 + 8)
                        
                        if (x13_43 != 0)
                            uint32_t* x13_44 = *arg10
                            
                            if (x13_44 - arg9 s<= 0x9f)
                                uint32_t x10_9 = *arg11
                                *arg10 = &x13_44[1]
                                *x13_44 = x10_9
                
                goto label_10b7d08
            
            uint8_t* x8_2 = *arg5
            
            if (x8_2 == arg4 || (zx.d(x8_2[-1]) & 0x5f) == (zx.d(*arg3) & 0x7f))
                *arg5 = &x8_2[1]
                *x8_2 = x11_12.b
                return 0
    else if (zx.d(*arg2) != 0)
        uint32_t* x11_9 = *arg10
        
        if (x11_9 - arg9 s> 0x9f)
            return 0
        
        uint32_t x10_4 = *arg11
        *arg10 = &x11_9[1]
        *x11_9 = x10_4
        *arg11 = 0
        return 0
else if (zx.d(*arg2) != 0)
    *arg2 = false
    char* x11_2 = *arg5
    *arg5 = &x11_2[1]
    *x11_2 = 0x2e
    uint64_t x11_3 = zx.q(*arg8)
    uint64_t x11_4
    
    if ((x11_3.d & 1) == 0)
        x11_4 = x11_3 u>> 1
    else
        x11_4 = *(arg8 + 8)
    
    if (x11_4 != 0)
        uint32_t* x11_5 = *arg10
        
        if (x11_5 - arg9 s<= 0x9f)
            uint32_t x8_1 = *arg11
            *arg10 = &x11_5[1]
            *x11_5 = x8_1
    
    return 0

return 0xffffffff
