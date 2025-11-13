// 函数: _ZNKSt6__ndk115__codecvt_utf16IwLb1EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_
// 地址: 0x10d29e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
struct __mbstate_t x8
x8.__count = arg1->__offset(0x18).d
x8.__value.__wch = arg1->__offset(0x1c).d

if ((zx.d(arg1->__offset(0x20).b) & 2) == 0)
    goto label_10d2a14

int64_t result

if (arg7 - arg6 s>= 2)
    *arg6 = 0xfeff
    arg6 = &arg6[2]
label_10d2a14:
    
    if (arg3 u< arg4)
        result = 2
        
        do
            uint64_t x11_1 = zx.q(*arg3)
            
            if (x11_1.d u>> 0xb == 0x1b)
                goto label_10d2aac
            
            if (x8 u< x11_1)
                goto label_10d2aac
            
            int64_t x12_2 = arg7 - arg6
            
            if (x11_1.d u>> 0x10 != 0)
                if (x12_2 s< 4)
                    goto label_10d2a00
                
                arg6[2] = (x11_1.d).b
                *arg6 =
                    (((x11_1.d u>> 0xa & 0x7c0) + 0x3fc0).b & 0xc0) | ((x11_1.d & 0xfc00) u>> 0xa).b
                arg6[1] = 0xd8 | (((x11_1.d u>> 0xa & 0x7c0) + 0x3fc0) u>> 8).b
                arg6[3] = 0xdc | ((x11_1.d & 0x300) u>> 8).b
                arg6 = &arg6[4]
            else
                if (x12_2 s< 2)
                    goto label_10d2a00
                
                *arg6 = (x11_1.d).w
                arg6 = &arg6[2]
            
            arg3 = &arg3[1]
        while (arg3 u< arg4)
    
    result = 0
else
label_10d2a00:
    result = 1

label_10d2aac:
*arg5 = arg3
char** entry_x7
*entry_x7 = arg6
return result
