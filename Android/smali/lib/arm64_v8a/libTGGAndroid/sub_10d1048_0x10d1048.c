// 函数: sub_10d1048
// 地址: 0x10d1048
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
*arg3 = arg1
*arg6 = arg4

if ((arg8 & 2) != 0)
    if (arg5 - arg4 s< 3)
        return 1
    
    *arg6 = &arg4[1]
    *arg4 = 0xef
    char* x8_3 = *arg6
    *arg6 = &x8_3[1]
    *x8_3 = 0xbb
    char* x8_4 = *arg6
    *arg6 = &x8_4[1]
    *x8_4 = 0xbf

int16_t* x10_5 = *arg3

if (x10_5 u>= arg2)
    return 0

while (true)
    uint64_t x9_3 = zx.q(*x10_5)
    
    if (x9_3 u<= arg7)
        if (x9_3.d u<= 0x7f)
            char* x10_6 = *arg6
            
            if (arg5 - x10_6 s< 1)
                return 1
            
            *arg6 = &x10_6[1]
            *x10_6 = (x9_3.d).b
            goto label_10d10f8
        
        char* x10_3
        char x11_3
        void* x12_1
        
        if (x9_3.d u<= 0x7ff)
            x10_3 = *arg6
            
            if (arg5 - x10_3 s< 2)
                return 1
            
            x12_1 = &x10_3[1]
            x11_3 = ((x9_3 u>> 6).b & 0xff) | 0xc0
        label_10d10d4:
            *arg6 = x12_1
            *x10_3 = x11_3
            char* x10_4 = *arg6
            *arg6 = &x10_4[1]
            *x10_4 = 0x80 | (x9_3.d & 0x3f).b
        label_10d10f8:
            x10_5 = *arg3 + 2
            *arg3 = x10_5
            
            if (x10_5 u>= arg2)
                return 0
            
            continue
        else
            if (((x9_3 u>> 0xb).d & 0x1fffff) u<= 0x1a)
            label_10d1220:
                char* x10_15 = *arg6
                
                if (arg5 - x10_15 s< 3)
                    return 1
                
                *arg6 = &x10_15[1]
                *x10_15 = ((x9_3 u>> 0xc).b & 0xff) | 0xe0
                x10_3 = *arg6
                x11_3 = 0x80 | ((x9_3.d & 0xfc0) u>> 6).b
                x12_1 = &x10_3[1]
                goto label_10d10d4
            
            if (((x9_3 u>> 0xa).d & 0x3fffff) u<= 0x36)
                if (arg2 - x10_5 s< 4)
                    return 1
                
                uint64_t x11_10 = zx.q(x10_5[1])
                
                if ((x11_10.d & 0xfc00) == 0xdc00)
                    if (arg5 - *arg6 s< 4)
                        return 1
                    
                    if (((zx.q(x9_3.d << 0xa) & 0xffc00) | (x11_10 & 0x3ff)) + 0x10000 u<= arg7)
                        *arg3 = &x10_5[1]
                        char* x12_9 = *arg6
                        *arg6 = &x12_9[1]
                        *x12_9 = (((x9_3.d u>> 6 & 0xf) + 1) u>> 2).b | 0xf0
                        char* x12_10 = *arg6
                        *arg6 = &x12_10[1]
                        *x12_10 = (((((x9_3.d u>> 6 & 0xf) + 1) & 3) << 4).b & 0xf0)
                            | ((x9_3.d & 0x3c) u>> 2).b | 0x80
                        char* x10_13 = *arg6
                        *arg6 = &x10_13[1]
                        *x10_13 =
                            (((x9_3.d & 3) << 4).b & 0xf0) | ((x11_10.d & 0x3c0) u>> 6).b | 0x80
                        char* x9_7 = *arg6
                        *arg6 = &x9_7[1]
                        *x9_7 = 0x80 | (x11_10.d & 0x3f).b
                        goto label_10d10f8
            else if (x9_3.d u>= 0xe000)
                goto label_10d1220
    
    return 2
