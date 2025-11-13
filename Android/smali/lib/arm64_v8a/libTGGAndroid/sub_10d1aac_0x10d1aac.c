// 函数: sub_10d1aac
// 地址: 0x10d1aac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
*arg3 = arg1
*arg6 = arg4
char* x8 = *arg3

if ((arg8 & 4) != 0 && arg2 - x8 s>= 3 && zx.d(*x8) == 0xef && zx.d(x8[1]) == 0xbb
        && zx.d(x8[2]) == 0xbf)
    x8 = &x8[3]
    *arg3 = x8

if (x8 u< arg2)
    int32_t* x9_5 = *arg6
    
    while (true)
        if (x9_5 u< arg5)
            int32_t x12_1 = sx.d(*x8)
            uint64_t x10_1 = zx.q(x12_1.b)
            uint64_t x11_1 = zx.q(x12_1) & 0xff
            int64_t result
            
            if ((x12_1 & 0x80000000) != 0)
                if (x10_1.d u< 0xc2)
                    return 2
                
                if (x10_1.d u> 0xdf)
                    if (x10_1.d u> 0xef)
                        if (x10_1.d u> 0xf4)
                            return 2
                        
                        if (arg2 - x8 s>= 4)
                            uint64_t x13_2 = zx.q(x8[1])
                            uint32_t x12_5 = zx.d(x8[2])
                            uint64_t x11_7 = zx.q(x8[3])
                            
                            if (x10_1.d == 0xf4)
                                if ((x13_2.d & 0xf0) != 0x80 || (x12_5 & 0xc0) != 0x80
                                        || (x11_7.d & 0xc0) != 0x80)
                                    return 2
                            else if (x10_1.d != 0xf0)
                                if ((x13_2.d & 0xc0) != 0x80 || (x12_5 & 0xc0) != 0x80
                                        || (x11_7.d & 0xc0) != 0x80)
                                    return 2
                            else if (zx.d(x13_2.b + 0x70) u>= 0x30 || (x12_5 & 0xc0) != 0x80
                                    || (x11_7.d & 0xc0) != 0x80)
                                return 2
                            
                            int64_t x10_9 = (((((zx.q(x10_1.d << 0x12) & 0x1c0000)
                                | (x13_2 & 0x3f) << 0xc) & 0xfffffffffffff000)
                                | (zx.q(x12_5 << 6) & 0xfff)) & 0xffffffffffffffc0) | (x11_7 & 0x3f)
                            
                            if (x10_9 u> arg7)
                                return 2
                            
                            x11_1 = zx.q(x10_9.d)
                            result = 4
                            goto label_10d1b0c
                    else if (arg2 - x8 s>= 3)
                        uint64_t x13_1 = zx.q(x8[1])
                        uint64_t x12_4 = zx.q(x8[2])
                        
                        if (x11_1.d == 0xed)
                            if ((x13_1.d & 0xe0) != 0x80 || (x12_4.d & 0xc0) != 0x80)
                                return 2
                        else if (x11_1.d != 0xe0)
                            if ((x13_1.d & 0xc0) != 0x80 || (x12_4.d & 0xc0) != 0x80)
                                return 2
                        else if ((x13_1.d & 0xe0) != 0xa0 || (x12_4.d & 0xc0) != 0x80)
                            return 2
                        
                        x11_1 = (((zx.q(x10_1.d << 0xc) & 0xf000) | (x13_1 & 0x3f) << 6)
                            & 0xffffffffffffffc0) | (x12_4 & 0x3f)
                        
                        if (x11_1 u> arg7)
                            return 2
                        
                        result = 3
                        goto label_10d1b0c
                else if (arg2 - x8 s>= 2)
                    uint64_t x12_2 = zx.q(x8[1])
                    
                    if ((x12_2.d & 0xc0) != 0x80)
                        return 2
                    
                    x11_1 = (zx.q(x10_1.d << 6) & 0x7c0) | (x12_2 & 0x3f)
                    result = 2
                    
                    if (x11_1 u> arg7)
                        return result
                    
                    goto label_10d1b0c
            else
                if (x10_1 u> arg7)
                    return 2
                
                result = 1
            label_10d1b0c:
                *x9_5 = x11_1.d
                *arg3 = &x8[result]
                x9_5 = *arg6 + 4
                *arg6 = x9_5
                x8 = *arg3
                
                if (x8 u>= arg2)
                    break
                
                continue
        
        return 1

return 0
