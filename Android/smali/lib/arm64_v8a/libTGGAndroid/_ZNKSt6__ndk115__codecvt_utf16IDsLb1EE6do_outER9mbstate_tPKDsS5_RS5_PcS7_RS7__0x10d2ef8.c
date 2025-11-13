// 函数: _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_
// 地址: 0x10d2ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
struct __mbstate_t x8
x8.__count = arg1->__offset(0x10).d
x8.__value.__wch = arg1->__offset(0x14).d

if ((zx.d(arg1->__offset(0x18).b) & 2) == 0)
    goto label_10d2f28

int64_t result

if (arg7 - arg6 s>= 2)
    *arg6 = 0xfeff
    arg6 = &arg6[2]
label_10d2f28:
    
    if (arg3 u< arg4)
        int64_t x9_2 = arg7 - arg6
        result = 2
        
        do
            uint64_t x10_1 = zx.q(*arg3)
            
            if (((x10_1 u>> 0xb).d & 0x1fffff) == 0x1b)
                goto label_10d2f68
            
            if (x8 u< x10_1)
                goto label_10d2f68
            
            int64_t temp0_1 = x9_2
            x9_2 -= 2
            
            if (temp0_1 s< 2)
                goto label_10d2f14
            
            arg3 = &arg3[1]
            *arg6 = (x10_1.d).w
            arg6 = &arg6[2]
        while (arg3 u< arg4)
    
    result = 0
else
label_10d2f14:
    result = 1

label_10d2f68:
*arg5 = arg3
char** entry_x7
*entry_x7 = arg6
return result
