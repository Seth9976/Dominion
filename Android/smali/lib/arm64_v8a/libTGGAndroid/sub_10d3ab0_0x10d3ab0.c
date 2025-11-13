// 函数: sub_10d3ab0
// 地址: 0x10d3ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
*arg3 = arg1
*arg6 = arg4
char* x11 = *arg3

if ((arg8 & 4) != 0 && arg2 - x11 s>= 3 && zx.d(*x11) == 0xef && zx.d(x11[1]) == 0xbb
        && zx.d(x11[2]) == 0xbf)
    x11 = &x11[3]
    *arg3 = x11

if (x11 u< arg2)
    int32_t* x10_1 = *arg6
    
    while (true)
        if (x10_1 u< arg5)
            uint64_t x12_1 = zx.q(*x11)
            
            if (x12_1 u> arg7)
                return 2
            
            void* x10_2
            
            if ((x12_1.d & 0x80) == 0)
                *x10_1 = x12_1.d
                x10_2 = &x11[1]
            label_10d3b1c:
                *arg3 = x10_2
                x10_1 = *arg6 + 4
                *arg6 = x10_1
                x11 = *arg3
                
                if (x11 u>= arg2)
                    break
                
                continue
            else
                if (x12_1.d u< 0xc2)
                    return 2
                
                if (x12_1.d u> 0xdf)
                    if (x12_1.d u> 0xef)
                        if (x12_1.d u> 0xf4)
                            return 2
                        
                        if (arg2 - x11 s>= 4)
                            uint64_t x14_3 = zx.q(x11[1])
                            uint64_t x13_6 = zx.q(x11[2])
                            uint64_t x11_1 = zx.q(x11[3])
                            
                            if (x12_1.d == 0xf4)
                                if ((x14_3.d & 0xf0) != 0x80 || (x13_6.d & 0xc0) != 0x80
                                        || (x11_1.d & 0xc0) != 0x80)
                                    return 2
                            else if (x12_1.d != 0xf0)
                                if ((x14_3.d & 0xc0) != 0x80 || (x13_6.d & 0xc0) != 0x80
                                        || (x11_1.d & 0xc0) != 0x80)
                                    return 2
                            else if (zx.d(x14_3.b + 0x70) u>= 0x30 || (x13_6.d & 0xc0) != 0x80
                                    || (x11_1.d & 0xc0) != 0x80)
                                return 2
                            
                            if (arg5 - x10_1 s>= 8)
                                if (((((-0xfc1 & ((zx.q(x12_1.d << 0x12) & 0x1c0000)
                                        | (x14_3 & 0x3f) << 0xc)) | (x13_6 & 0x3f) << 6)
                                        & 0xffffffffffffffc0) | (x11_1 & 0x3f)) u> arg7)
                                    return 2
                                
                                int32_t x14_7 = (((0xfffff83f & (x14_3.d & 0xf) << 2) | (0x1f
                                    & ((x12_1.d << 2 & 0xfffffffc) | (x14_3.d & 0x30) u>> 4)) << 6)
                                    & 0xfffffffc) | (x13_6.d & 0x30) u>> 4
                                *x10_1 = (x14_7 - 0x40) | 0xd800
                                *arg6 = &x10_1[1]
                                x10_1[1] = (x11_1.d & 0x3f) | (0xf & x13_6.d) << 6 | 0xdc00
                                x10_2 = *arg3 + 4
                                goto label_10d3b1c
                    else if (arg2 - x11 s>= 3)
                        uint64_t x14_2 = zx.q(x11[1])
                        uint64_t x13_4 = zx.q(x11[2])
                        
                        if (x12_1.d == 0xed)
                            if ((x14_2.d & 0xe0) != 0x80 || (x13_4.d & 0xc0) != 0x80)
                                return 2
                        else if (x12_1.d != 0xe0)
                            if ((x14_2.d & 0xc0) != 0x80 || (x13_4.d & 0xc0) != 0x80)
                                return 2
                        else if ((x14_2.d & 0xe0) != 0xa0 || (x13_4.d & 0xc0) != 0x80)
                            return 2
                        
                        int64_t x12_8 = (((zx.q(x12_1.d << 0xc) & 0xf000) | (x14_2 & 0x3f) << 6)
                            & 0xffffffffffffffc0) | (x13_4 & 0x3f)
                        
                        if (x12_8 u> arg7)
                            return 2
                        
                        *x10_1 = x12_8.d
                        x10_2 = &x11[3]
                        goto label_10d3b1c
                else if (arg2 - x11 s>= 2)
                    uint64_t x13_2 = zx.q(x11[1])
                    
                    if ((x13_2.d & 0xc0) != 0x80)
                        return 2
                    
                    int64_t x12_4 = (zx.q(x12_1.d << 6) & 0x7c0) | (x13_2 & 0x3f)
                    
                    if (x12_4 u> arg7)
                        return 2
                    
                    *x10_1 = x12_4.d
                    x10_2 = &x11[2]
                    goto label_10d3b1c
        
        return 1

return 0
