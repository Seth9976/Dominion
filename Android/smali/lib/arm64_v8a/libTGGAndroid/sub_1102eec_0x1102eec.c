// 函数: sub_1102eec
// 地址: 0x1102eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_c8
void var_90

if (sub_1102604(arg1, arg3, &var_90, &var_c8) == 0)
    int32_t var_6e0[0x6]
    memset(&var_6e0, 0, 0x618)
    
    if ((sub_11031b8(arg1, &var_90, &var_c8, arg2, 4, &var_6e0) & 1) != 0)
        int64_t x0_5 = sub_110446c(arg1, &var_6e0, arg4)
        int64_t var_8f0[0x1f]
        memcpy(&var_8f0, arg4, 0x210)
        int64_t i = 0
        int64_t x23_1 = 0
        void var_6c8
        int32_t* x24_1 = &var_6c8
        
        do
            int32_t x9_2 = *x24_1
            char var_96
            char const* const x2_7
            char const* const x3_6
            int64_t (* x19_1)()
            
            if (x9_2 == 0)
                uint64_t x8_3 = zx.q(var_96)
                
                if (i == x8_3)
                    if (x8_3.d == 0x22)
                        x23_1 = *(arg4 + 0x108)
                    else
                        if (x8_3.d u> 0x1f)
                            x2_7 = "getRegister"
                        label_110319c:
                            x19_1 = __sF + 0x130
                            x3_6 = "unsupported arm64 register"
                            goto label_11031a8
                        
                        x23_1 = *(arg4 + (x8_3 << 3))
            else
                int32_t x8_1 = i.d & 0x7fffffe0
                
                if (x8_1 != 0x40)
                    if (i == zx.q(var_96))
                        x23_1 = sub_1104550(arg1, arg4, x0_5, x24_1)
                    else if (i != 0x22)
                        if (x8_1 == 0x20)
                            return 0xffffe672
                        
                        int64_t x0_15 = sub_1104550(arg1, arg4, x0_5, x24_1)
                        
                        if (i u> 0x1f)
                            x2_7 = "setRegister"
                            goto label_110319c
                        
                        var_8f0[i] = x0_15
                    else
                        int64_t var_7e8_1 = sub_1104550(arg1, arg4, x0_5, x24_1)
                else if (x9_2 == 5)
                    var_8f0[i - 0x1e] = *sub_11049a8(*(x24_1 + 8), arg1, arg4, x0_5)
                else
                    if (x9_2 != 2)
                        x2_7 = "getSavedFloatRegister"
                        x19_1 = __sF + 0x130
                        x3_6 = "unsupported restore location for float register"
                    label_11031a8:
                        fprintf(x19_1, "libunwind: %s - %s\n", x2_7, x3_6)
                        fflush(x19_1)
                        abort()
                        noreturn
                    
                    var_8f0[i - 0x1e] = *(*(x24_1 + 8) + x0_5)
            i += 1
            x24_1 = &x24_1[4]
        while (i != 0x60)
        
        int64_t var_7f8_1 = x0_5
        char var_98
        *arg5 = var_98
        int64_t var_4a0
        
        if (x23_1 != 0 && var_4a0 != 0)
            char var_95
            int64_t x17_1
            
            if (zx.d(var_95) == 0)
                x17_1 = x23_1
            else
                x17_1 = x23_1
            
            x23_1 = x17_1
        
        int64_t var_7f0_1 = x23_1
        memcpy(arg4, &var_8f0, 0x210)
        return 1

return 0xffffe66e
