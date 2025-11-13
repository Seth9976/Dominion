// 函数: sub_10d15c0
// 地址: 0x10d15c0
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
    int64_t x9_2 = 0
    
    do
        uint64_t x10_1 = zx.q(*x8)
        
        if (x10_1 u> arg4)
            break
        
        if ((x10_1.d & 0x80) != 0)
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
                
                x8 = &x8[2]
            else if (x10_1.d u> 0xef)
                if (x10_1.d u> 0xf4)
                    break
                
                if (arg3 - x9_2 u< 2)
                    break
                
                if (arg2 - x8 s< 4)
                    break
                
                uint64_t x13_2 = zx.q(x8[1])
                uint64_t x12_3 = zx.q(x8[2])
                uint64_t x11_7 = zx.q(x8[3])
                int32_t x14_3
                
                if (x10_1.d == 0xf4)
                    x14_3 = x13_2.d & 0xf0
                label_10d1758:
                    
                    if (x14_3 != 0x80)
                        break
                else
                    if (x10_1.d != 0xf0)
                        x14_3 = x13_2.d & 0xc0
                        goto label_10d1758
                    
                    if (zx.d(x13_2.b + 0x70) u>= 0x30)
                        break
                
                if ((x12_3.d & 0xc0) != 0x80)
                    break
                
                if ((x11_7.d & 0xc0) != 0x80)
                    break
                
                if (((((-0xfc1 & ((zx.q(x10_1.d << 0x12) & 0x1c0000) | (x13_2 & 0x3f) << 0xc))
                        | (x12_3 & 0x3f) << 6) & 0xffffffffffffffc0) | (x11_7 & 0x3f)) u> arg4)
                    break
                
                x9_2 += 1
                x8 = &x8[4]
            else
                if (arg2 - x8 s< 3)
                    break
                
                uint64_t x12_2 = zx.q(x8[1])
                uint64_t x11_4 = zx.q(x8[2])
                int32_t x13_3
                
                if (x10_1.d == 0xed)
                    x13_3 = x12_2.d & 0xe0
                label_10d1714:
                    
                    if (x13_3 != 0x80)
                        break
                else
                    if (x10_1.d != 0xe0)
                        x13_3 = x12_2.d & 0xc0
                        goto label_10d1714
                    
                    if ((x12_2.d & 0xe0) != 0xa0)
                        break
                
                if ((x11_4.d & 0xc0) != 0x80)
                    break
                
                if (((((zx.q(x10_1.d << 0xc) & 0xf000) | (x12_2 & 0x3f) << 6) & 0xffffffffffffffc0)
                        | (x11_4 & 0x3f)) u> arg4)
                    break
                
                x8 = &x8[3]
        else
            x8 = &x8[1]
        
        x9_2 += 1
        
        if (x9_2 u>= arg3)
            break
    while (x8 u< arg2)

return zx.q(x8.d - arg1.d)
