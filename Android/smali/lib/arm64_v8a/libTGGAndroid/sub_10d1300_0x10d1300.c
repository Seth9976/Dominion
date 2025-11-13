// 函数: sub_10d1300
// 地址: 0x10d1300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
*arg3 = arg1
*arg6 = arg4
char* x12 = *arg3

if ((arg8 & 4) != 0 && arg2 - x12 s>= 3 && zx.d(*x12) == 0xef && zx.d(x12[1]) == 0xbb
        && zx.d(x12[2]) == 0xbf)
    x12 = &x12[3]
    *arg3 = x12

if (x12 u< arg2)
    int16_t* x11_1 = *arg6
    
    while (true)
        if (x11_1 u< arg5)
            uint64_t x13_1 = zx.q(*x12)
            
            if (x13_1 u> arg7)
                return 2
            
            void* x11_2
            
            if ((x13_1.d & 0x80) == 0)
                *x11_1 = (x13_1.d).w
                x11_2 = &x12[1]
            label_10d1370:
                *arg3 = x11_2
                x11_1 = *arg6 + 2
                *arg6 = x11_1
                x12 = *arg3
                
                if (x12 u>= arg2)
                    break
                
                continue
            else
                if (x13_1.d u< 0xc2)
                    return 2
                
                if (x13_1.d u> 0xdf)
                    if (x13_1.d u> 0xef)
                        if (x13_1.d u> 0xf4)
                            return 2
                        
                        if (arg2 - x12 s>= 4)
                            uint64_t x15_3 = zx.q(x12[1])
                            uint64_t x14_6 = zx.q(x12[2])
                            uint64_t x12_1 = zx.q(x12[3])
                            
                            if (x13_1.d == 0xf4)
                                if ((x15_3.d & 0xf0) != 0x80 || (x14_6.d & 0xc0) != 0x80
                                        || (x12_1.d & 0xc0) != 0x80)
                                    return 2
                            else if (x13_1.d != 0xf0)
                                if ((x15_3.d & 0xc0) != 0x80 || (x14_6.d & 0xc0) != 0x80
                                        || (x12_1.d & 0xc0) != 0x80)
                                    return 2
                            else if (zx.d(x15_3.b + 0x70) u>= 0x30 || (x14_6.d & 0xc0) != 0x80
                                    || (x12_1.d & 0xc0) != 0x80)
                                return 2
                            
                            if (arg5 - x11_1 s>= 4)
                                if (((((-0xfc1 & ((zx.q(x13_1.d << 0x12) & 0x1c0000)
                                        | (x15_3 & 0x3f) << 0xc)) | (x14_6 & 0x3f) << 6)
                                        & 0xffffffffffffffc0) | (x12_1 & 0x3f)) u> arg7)
                                    return 2
                                
                                int16_t x15_7 = (((0xf83f & ((x15_3.d & 0xf) << 2).w) | ((0x1f
                                    & ((x13_1.d << 2 & 0xfffffffc) | (x15_3.d & 0x30) u>> 4)) << 6).w)
                                    & 0xfffc) | ((x14_6.d & 0x30) u>> 4).w
                                *x11_1 = (x15_7 + 0x3fc0) | 0xd800
                                *arg6 = &x11_1[1]
                                x11_1[1] = (x12_1.w & 0x3f) | ((0xf & x14_6.d) << 6).w | 0xdc00
                                x11_2 = *arg3 + 4
                                goto label_10d1370
                    else if (arg2 - x12 s>= 3)
                        uint64_t x15_2 = zx.q(x12[1])
                        uint64_t x14_4 = zx.q(x12[2])
                        
                        if (x13_1.d == 0xed)
                            if ((x15_2.d & 0xe0) != 0x80 || (x14_4.d & 0xc0) != 0x80)
                                return 2
                        else if (x13_1.d != 0xe0)
                            if ((x15_2.d & 0xc0) != 0x80 || (x14_4.d & 0xc0) != 0x80)
                                return 2
                        else if ((x15_2.d & 0xe0) != 0xa0 || (x14_4.d & 0xc0) != 0x80)
                            return 2
                        
                        int16_t x13_7 = (((0xf03f & (x13_1 << 0xc).w) | ((x15_2 & 0x3f) << 6).w)
                            & 0xffc0) | (x14_4 & 0x3f).w
                        
                        if (arg7 u< zx.q(x13_7))
                            return 2
                        
                        *x11_1 = x13_7
                        x11_2 = &x12[3]
                        goto label_10d1370
                else if (arg2 - x12 s>= 2)
                    uint64_t x14_2 = zx.q(x12[1])
                    
                    if ((x14_2.d & 0xc0) != 0x80)
                        return 2
                    
                    int64_t x13_4 = (zx.q(x13_1.d << 6) & 0x7c0) | (x14_2 & 0x3f)
                    
                    if (x13_4 u> arg7)
                        return 2
                    
                    *x11_1 = (x13_4.d).w
                    x11_2 = &x12[2]
                    goto label_10d1370
        
        return 1

return 0
