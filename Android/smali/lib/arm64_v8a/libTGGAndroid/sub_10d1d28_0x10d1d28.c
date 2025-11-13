// 函数: sub_10d1d28
// 地址: 0x10d1d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char* x8 = arg1

if ((arg5 & 4) != 0)
    x8 = arg1
    
    if (arg2 - arg1 s>= 3)
        x8 = arg1
        
        if (zx.d(*arg1) == 0xef)
            x8 = arg1
            
            if (zx.d(arg1[1]) == 0xbb)
                if (zx.d(arg1[2]) == 0xbf)
                    x8 = &arg1[3]
                else
                    x8 = arg1

if (arg3 != 0 && x8 u< arg2)
    int64_t x9_2 = 1
    
    do
        int32_t x13_1 = sx.d(*x8)
        uint64_t x10_1 = zx.q(x13_1.b)
        int64_t x10_2
        
        if ((x13_1 & 0x80000000) != 0)
            if (x10_1.d u< 0xc2)
                break
            
            if (x10_1.d u<= 0xdf)
                if (arg2 - x8 s< 2)
                    break
                
                uint64_t x11_2 = zx.q(x8[1])
                
                if ((x11_2.d & 0xc0) != 0x80)
                    break
                
                if (((zx.q(x10_1.d << 6) & 0x7c0) | (x11_2 & 0x3f)) u> arg4)
                    break
                
                x10_2 = 2
            else if (x10_1.d u> 0xef)
                if (x10_1.d u> 0xf4)
                    break
                
                if (arg2 - x8 s< 4)
                    break
                
                uint64_t x13_4 = zx.q(x8[1])
                uint32_t x12_3 = zx.d(x8[2])
                uint64_t x11_6 = zx.q(x8[3])
                int32_t x14_3
                
                if (x10_1.d == 0xf4)
                    x14_3 = x13_4.d & 0xf0
                label_10d1ebc:
                    
                    if (x14_3 != 0x80)
                        break
                else
                    if (x10_1.d != 0xf0)
                        x14_3 = x13_4.d & 0xc0
                        goto label_10d1ebc
                    
                    if (zx.d(x13_4.b + 0x70) u>= 0x30)
                        break
                
                if ((x12_3 & 0xc0) != 0x80)
                    break
                
                if ((x11_6.d & 0xc0) != 0x80)
                    break
                
                if (((((((zx.q(x10_1.d << 0x12) & 0x1c0000) | (x13_4 & 0x3f) << 0xc)
                        & 0xfffffffffffff000) | (zx.q(x12_3 << 6) & 0xfff)) & 0xffffffffffffffc0)
                        | (x11_6 & 0x3f)) u> arg4)
                    break
                
                x10_2 = 4
            else
                if (arg2 - x8 s< 3)
                    break
                
                uint64_t x12_2 = zx.q(x8[1])
                uint64_t x11_4 = zx.q(x8[2])
                int32_t x13_2 = x13_1 & 0xff
                int32_t x13_5
                
                if (x13_2 == 0xed)
                    x13_5 = x12_2.d & 0xe0
                label_10d1e78:
                    
                    if (x13_5 != 0x80)
                        break
                else
                    if (x13_2 != 0xe0)
                        x13_5 = x12_2.d & 0xc0
                        goto label_10d1e78
                    
                    if ((x12_2.d & 0xe0) != 0xa0)
                        break
                
                if ((x11_4.d & 0xc0) != 0x80)
                    break
                
                if (((((zx.q(x10_1.d << 0xc) & 0xf000) | (x12_2 & 0x3f) << 6) & 0xffffffffffffffc0)
                        | (x11_4 & 0x3f)) u> arg4)
                    break
                
                x10_2 = 3
        else
            if (x10_1 u> arg4)
                break
            
            x10_2 = 1
        
        x8 = &x8[x10_2]
        
        if (x9_2 u>= arg3)
            break
        
        x9_2 += 1
    while (x8 u< arg2)

return zx.q(x8.d - arg1.d)
