// 函数: _ZNKSt6__ndk114__codecvt_utf8IDsE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_
// 地址: 0x10d21d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if ((zx.d(arg1->__offset(0x18).b) & 4) != 0 && arg4 - arg3 s>= 3 && zx.d(*arg3) == 0xef
        && zx.d(arg3[1]) == 0xbb && zx.d(arg3[2]) == 0xbf)
    arg3 = &arg3[3]

int64_t result

if (arg3 u>= arg4)
    result = 0
else
    if (arg6 u< arg7)
        struct __mbstate_t x8_5
        x8_5.__count = arg1->__offset(0x10).d
        x8_5.__value.__wch = arg1->__offset(0x14).d
        
        while (true)
            int32_t x10_1 = sx.d(*arg3)
            uint64_t x9_2 = zx.q(x10_1.b)
            int64_t x11_1
            
            if ((x10_1 & 0x80000000) != 0)
                int32_t x12_1 = x10_1 & 0xff
                
                if (x12_1 u< 0xc2)
                    result = 2
                    goto label_10d235c
                
                if (x9_2.d u<= 0xdf)
                    if (arg4 - arg3 s< 2)
                        break
                    
                    uint64_t x10_3 = zx.q(arg3[1])
                    
                    if ((x10_3.d & 0xc0) != 0x80)
                        result = 2
                        goto label_10d235c
                    
                    x9_2 = (zx.q(x9_2.d << 6) & 0x7c0) | (x10_3 & 0x3f)
                    
                    if (x8_5 u< x9_2)
                        result = 2
                        goto label_10d235c
                    
                    x11_1 = 2
                    goto label_10d2310
                
                if (x9_2.d u> 0xef)
                    result = 2
                    goto label_10d235c
                
                if (arg4 - arg3 s< 3)
                    break
                
                uint64_t x11_3 = zx.q(arg3[1])
                uint64_t x10_5 = zx.q(arg3[2])
                
                if (x12_1 == 0xed)
                    if ((x11_3.d & 0xe0) != 0x80 || (x10_5.d & 0xc0) != 0x80)
                        result = 2
                        goto label_10d235c
                else if (x12_1 != 0xe0)
                    if ((x11_3.d & 0xc0) != 0x80 || (x10_5.d & 0xc0) != 0x80)
                        result = 2
                        goto label_10d235c
                else if ((x11_3.d & 0xe0) != 0xa0 || (x10_5.d & 0xc0) != 0x80)
                    result = 2
                    goto label_10d235c
                
                x9_2 = (((-0xfc1 & x9_2 << 0xc) | (x11_3 & 0x3f) << 6) & 0xffffffffffffffc0)
                    | (x10_5 & 0x3f)
                
                if (x8_5 u< zx.q((x9_2.d).w))
                    result = 2
                    goto label_10d235c
                
                x11_1 = 3
                goto label_10d2310
            
            if (x8_5 u< x9_2)
                result = 2
                goto label_10d235c
            
            x11_1 = 1
        label_10d2310:
            int16_t* x10_6 = arg6
            arg3 = &arg3[x11_1]
            *x10_6 = (x9_2.d).w
            
            if (arg3 u>= arg4)
                result = 0
                arg6 = &arg6[1]
                goto label_10d235c
            
            arg6 = &x10_6[1]
            
            if (&x10_6[1] u>= arg7)
                result = 1
                arg6 = &x10_6[1]
                goto label_10d235c
    
    result = 1

label_10d235c:
*arg5 = arg3
char16_t** entry_x7
*entry_x7 = arg6
return result
