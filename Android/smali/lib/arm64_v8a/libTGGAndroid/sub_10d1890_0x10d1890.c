// 函数: sub_10d1890
// 地址: 0x10d1890
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

int32_t* x8_7 = *arg3

if (x8_7 u>= arg2)
    return 0

while (true)
    uint64_t x8_8 = zx.q(*x8_7)
    
    if (x8_8.d u>> 0xb == 0x1b || x8_8 u> arg7)
        return 2
    
    if (x8_8.d u> 0x7f)
        char* x9_2
        char x10_4
        void* x11_2
        
        if (x8_8.d u> 0x7ff)
            char* x9_1 = *arg6
            void* x10_10 = arg5 - x9_1
            char x10_3
            void* x11_1
            
            if (x8_8.d u>> 0x10 != 0)
                if (x10_10 s< 4)
                    return 1
                
                *arg6 = &x9_1[1]
                *x9_1 = (x8_8.d u>> 0x12).b | 0xf0
                x9_1 = *arg6
                x10_3 = 0x80 | ((x8_8.d & 0x3f000) u>> 0xc).b
                x11_1 = &x9_1[1]
            else
                if (x10_10 s< 3)
                    return 1
                
                x11_1 = &x9_1[1]
                x10_3 = (x8_8.d u>> 0xc).b | 0xe0
            
            *arg6 = x11_1
            *x9_1 = x10_3
            x9_2 = *arg6
            x10_4 = 0x80 | ((x8_8.d & 0xfc0) u>> 6).b
            x11_2 = &x9_2[1]
        else
            x9_2 = *arg6
            
            if (arg5 - x9_2 s< 2)
                return 1
            
            x11_2 = &x9_2[1]
            x10_4 = (x8_8.d u>> 6).b | 0xc0
        
        *arg6 = x11_2
        *x9_2 = x10_4
        char* x9_3 = *arg6
        *arg6 = &x9_3[1]
        *x9_3 = 0x80 | (x8_8.d & 0x3f).b
    else
        char* x9_5 = *arg6
        
        if (arg5 - x9_5 s< 1)
            return 1
        
        *arg6 = &x9_5[1]
        *x9_5 = (x8_8.d).b
    
    x8_7 = *arg3 + 4
    *arg3 = x8_7
    
    if (x8_7 u>= arg2)
        return 0
