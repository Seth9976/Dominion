// 函数: _ZNKSt6__ndk114__codecvt_utf8IDsE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_
// 地址: 0x10d20cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
struct __mbstate_t x8
x8.__count = arg1->__offset(0x10).d
x8.__value.__wch = arg1->__offset(0x14).d

if ((zx.d(arg1->__offset(0x18).b) & 2) == 0)
    goto label_10d210c

int64_t result

if (arg7 - arg6 s>= 3)
    *arg6 = 0xbbef
    arg6[2] = 0xbf
    arg6 = &arg6[3]
label_10d210c:
    
    if (arg3 u< arg4)
        result = 2
        
        do
            uint64_t x9_4 = zx.q(*arg3)
            
            if (((x9_4 u>> 0xb).d & 0x1fffff) == 0x1b)
                goto label_10d21c8
            
            if (x8 u< x9_4)
                goto label_10d21c8
            
            if (x9_4.d u> 0x7f)
                int64_t x10_3 = arg7 - arg6
                void* x9_3
                
                if (x9_4.d u> 0x7ff)
                    if (x10_3 s< 3)
                        goto label_10d20e8
                    
                    x9_3 = &arg6[3]
                    *arg6 = (x9_4.d u>> 0xc).b | 0xe0
                    arg6[1] = 0x80 | ((x9_4.d & 0xfc0) u>> 6).b
                    arg6[2] = 0x80 | (x9_4.d & 0x3f).b
                else
                    if (x10_3 s< 2)
                        goto label_10d20e8
                    
                    *arg6 = (x9_4.d u>> 6).b | 0xc0
                    x9_3 = &arg6[2]
                    arg6[1] = 0x80 | (x9_4.d & 0x3f).b
                
                arg6 = x9_3
            else
                if (arg7 - arg6 s< 1)
                    goto label_10d20e8
                
                *arg6 = (x9_4.d).b
                arg6 = &arg6[1]
            
            arg3 = &arg3[1]
        while (arg3 u< arg4)
    
    result = 0
else
label_10d20e8:
    result = 1

label_10d21c8:
*arg5 = arg3
char** entry_x7
*entry_x7 = arg6
return result
