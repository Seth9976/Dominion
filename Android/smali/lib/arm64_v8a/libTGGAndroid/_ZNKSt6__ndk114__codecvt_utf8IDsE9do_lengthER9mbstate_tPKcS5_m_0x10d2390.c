// 函数: _ZNKSt6__ndk114__codecvt_utf8IDsE9do_lengthER9mbstate_tPKcS5_m
// 地址: 0x10d2390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char const* x8 = arg3

if ((zx.d(arg1->__offset(0x18).b) & 4) != 0)
    x8 = arg3
    
    if (arg4 - arg3 s>= 3)
        x8 = arg3
        
        if (zx.d(*arg3) == 0xef)
            x8 = arg3
            
            if (zx.d(arg3[1]) == 0xbb)
                if (zx.d(arg3[2]) == 0xbf)
                    x8 = &arg3[3]
                else
                    x8 = arg3

int64_t entry_x4

if (entry_x4 != 0 && x8 u< arg4)
    struct __mbstate_t x9_2
    x9_2.__count = arg1->__offset(0x10).d
    x9_2.__value.__wch = arg1->__offset(0x14).d
    int64_t x10_1 = 1
    
    do
        int32_t x14_1 = sx.d(*x8)
        uint64_t x11_1 = zx.q(x14_1.b)
        int64_t x11_2
        
        if ((x14_1 & 0x80000000) != 0)
            if (x11_1.d u< 0xc2)
                break
            
            if (x11_1.d u> 0xdf)
                if (x11_1.d u> 0xef)
                    break
                
                if (arg4 - x8 s< 3)
                    break
                
                uint64_t x13_2 = zx.q(x8[1])
                uint64_t x12_4 = zx.q(x8[2])
                int32_t x14_2 = x14_1 & 0xff
                int32_t x14_4
                
                if (x14_2 == 0xed)
                    x14_4 = x13_2.d & 0xe0
                label_10d24a4:
                    
                    if (x14_4 != 0x80)
                        break
                else
                    if (x14_2 != 0xe0)
                        x14_4 = x13_2.d & 0xc0
                        goto label_10d24a4
                    
                    if ((x13_2.d & 0xe0) != 0xa0)
                        break
                
                if ((x12_4.d & 0xc0) != 0x80)
                    break
                
                if (x9_2 u< ((((zx.q(x11_1.d << 0xc) & 0xf000) | (x13_2 & 0x3f) << 6)
                        & 0xffffffffffffffc0) | (x12_4 & 0x3f)))
                    break
                
                x11_2 = 3
            else
                if (arg4 - x8 s< 2)
                    break
                
                uint64_t x12_2 = zx.q(x8[1])
                
                if ((x12_2.d & 0xc0) != 0x80)
                    break
                
                if (x9_2 u< ((zx.q(x11_1.d << 6) & 0x7c0) | (x12_2 & 0x3f)))
                    break
                
                x11_2 = 2
        else
            if (x9_2 u< x11_1)
                break
            
            x11_2 = 1
        
        x8 = &x8[x11_2]
        
        if (x10_1 u>= entry_x4)
            break
        
        x10_1 += 1
    while (x8 u< arg4)

return zx.q(x8.d - arg3.d)
