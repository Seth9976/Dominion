// 函数: _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_
// 地址: 0x10d2d88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if ((zx.d(arg1->__offset(0x18).b) & 4) != 0 && arg4 - arg3 s>= 2 && zx.d(*arg3) == 0xfe
        && zx.d(arg3[1]) == 0xff)
    arg3 = &arg3[2]

uint64_t result

if (arg3 u< arg4 - 1)
    struct __mbstate_t x9_2
    x9_2.__count = arg1->__offset(0x10).d
    x9_2.__value.__wch = arg1->__offset(0x14).d
    result = 2
    
    while (arg6 u< arg7)
        uint32_t x11_1 = zx.d(*arg3)
        
        if ((x11_1 & 0xf8) == 0xd8)
            goto label_10d2e10
        
        int64_t x10_3 = (-0xff01 & zx.q(arg3[1])) | zx.q(x11_1.b) << 8
        
        if (x9_2 u< x10_3)
            goto label_10d2e10
        
        arg3 = &arg3[2]
        *arg6 = (x10_3.d).w
        arg6 = &arg6[1]
        
        if (arg3 u>= arg4 - 1)
            break

result = zx.q(arg3 u< arg4 ? 1 : 0)
label_10d2e10:
*arg5 = arg3
char16_t** entry_x7
*entry_x7 = arg6
return result
