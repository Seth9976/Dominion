// 函数: _ZNSt6__ndk19__num_getIcE19__stage2_float_loopEcRbRcPcRS4_ccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjS4_
// 地址: 0x10b714c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint32_t x11 = zx.d(arg1)

if (x11 != zx.d(arg6))
    uint64_t x11_7
    
    if (x11 == zx.d(arg7))
        uint64_t x11_6 = zx.q(*arg8)
        
        if ((x11_6.d & 1) == 0)
            x11_7 = x11_6 u>> 1
        else
            x11_7 = *(arg8 + 8)
    
    if (x11 != zx.d(arg7) || x11_7 == 0)
        void* x12_5 = &arg12[0x20]
        
        if (zx.d(*arg12) == zx.d(arg1))
            x12_5 = &arg12[0]
        else if (zx.d(arg12[1]) == zx.d(arg1))
            x12_5 = &arg12[1]
        else if (zx.d(arg12[2]) == zx.d(arg1))
            x12_5 = &arg12[2]
        else if (zx.d(arg12[3]) == zx.d(arg1))
            x12_5 = &arg12[3]
        else if (zx.d(arg12[4]) == zx.d(arg1))
            x12_5 = &arg12[4]
        else if (zx.d(arg12[5]) == zx.d(arg1))
            x12_5 = &arg12[5]
        else if (zx.d(arg12[6]) == zx.d(arg1))
            x12_5 = &arg12[6]
        else if (zx.d(arg12[7]) == zx.d(arg1))
            x12_5 = &arg12[7]
        else if (zx.d(arg12[8]) == zx.d(arg1))
            x12_5 = &arg12[8]
        else if (zx.d(arg12[9]) == zx.d(arg1))
            x12_5 = &arg12[9]
        else if (zx.d(arg12[0xa]) == zx.d(arg1))
            x12_5 = &arg12[0xa]
        else if (zx.d(arg12[0xb]) == zx.d(arg1))
            x12_5 = &arg12[0xb]
        else if (zx.d(arg12[0xc]) == zx.d(arg1))
            x12_5 = &arg12[0xc]
        else if (zx.d(arg12[0xd]) == zx.d(arg1))
            x12_5 = &arg12[0xd]
        else if (zx.d(arg12[0xe]) == zx.d(arg1))
            x12_5 = &arg12[0xe]
        else if (zx.d(arg12[0xf]) == zx.d(arg1))
            x12_5 = &arg12[0xf]
        else if (zx.d(arg12[0x10]) == zx.d(arg1))
            x12_5 = &arg12[0x10]
        else if (zx.d(arg12[0x11]) == zx.d(arg1))
            x12_5 = &arg12[0x11]
        else if (zx.d(arg12[0x12]) == zx.d(arg1))
            x12_5 = &arg12[0x12]
        else if (zx.d(arg12[0x13]) == zx.d(arg1))
            x12_5 = &arg12[0x13]
        else if (zx.d(arg12[0x14]) == zx.d(arg1))
            x12_5 = &arg12[0x14]
        else if (zx.d(arg12[0x15]) == zx.d(arg1))
            x12_5 = &arg12[0x15]
        else if (zx.d(arg12[0x16]) == zx.d(arg1))
            x12_5 = &arg12[0x16]
        else if (zx.d(arg12[0x17]) == zx.d(arg1))
            x12_5 = &arg12[0x17]
        else if (zx.d(arg12[0x18]) == zx.d(arg1))
            x12_5 = &arg12[0x18]
        else if (zx.d(arg12[0x19]) == zx.d(arg1))
            x12_5 = &arg12[0x19]
        else if (zx.d(arg12[0x1a]) == zx.d(arg1))
            x12_5 = &arg12[0x1a]
        else if (zx.d(arg12[0x1b]) == zx.d(arg1))
            x12_5 = &arg12[0x1b]
        else if (zx.d(arg12[0x1c]) == zx.d(arg1))
            x12_5 = &arg12[0x1c]
        else if (zx.d(arg12[0x1d]) == zx.d(arg1))
            x12_5 = &arg12[0x1d]
        else if (zx.d(arg12[0x1e]) == zx.d(arg1))
            x12_5 = &arg12[0x1e]
        else if (zx.d(arg12[0x1f]) == zx.d(arg1))
            x12_5 = &arg12[0x1f]
        
        int64_t x12_7 = x12_5 - arg12
        
        if (x12_7 s<= 0x1f)
            uint32_t x11_11 = zx.d(*(std::__ndk1::__num_get_base::__src + x12_7))
            uint8_t* x8_2
            
            if (x12_7 - 0x16 u< 2)
                *arg3 = 0x50
                x8_2 = *arg5
            label_10b7520:
                *arg5 = &x8_2[1]
                *x8_2 = x11_11.b
                return 0
            
            if (x12_7 - 0x18 u> 1)
                int32_t x13_38 = x11_11 & 0x5f
                
                if (x13_38 == zx.d(*arg3))
                    *arg3 = x13_38.b | 0x80
                    
                    if (zx.d(*arg2) != 0)
                        *arg2 = false
                        uint64_t x13_41 = zx.q(*arg8)
                        uint64_t x13_42
                        
                        if ((x13_41.d & 1) == 0)
                            x13_42 = x13_41 u>> 1
                        else
                            x13_42 = *(arg8 + 8)
                        
                        if (x13_42 != 0)
                            uint32_t* x13_43 = *arg10
                            
                            if (x13_43 - arg9 s<= 0x9f)
                                uint32_t x10_8 = *arg11
                                *arg10 = &x13_43[1]
                                *x13_43 = x10_8
                
                uint8_t* x9_4 = *arg5
                *arg5 = &x9_4[1]
                *x9_4 = x11_11.b
                
                if (x12_7 s<= 0x15)
                    *arg11 += 1
                
                return 0
            
            x8_2 = *arg5
            
            if (x8_2 == arg4 || (zx.d(x8_2[-1]) & 0x5f) == (zx.d(*arg3) & 0x7f))
                goto label_10b7520
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
