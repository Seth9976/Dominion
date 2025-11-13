// 函数: _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_
// 地址: 0x10d31e0
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
    
    while (arg6 u< arg7)
        uint64_t x14_1 = zx.q(*arg3)
        int32_t x13_2 = (x14_1 << 8).d & 0xfc00
        int64_t x12_1 = (-0xff01 & zx.q(arg3[1])) | (0xff & x14_1) << 8
        
        if (x13_2 == 0xd800)
            if (arg4 - arg3 s< 4)
                result = 1
                goto label_10d32d0
            
            uint32_t x13_4 = zx.d(arg3[2])
            
            if ((x13_4 & 0xfc) != 0xdc)
                result = 2
                goto label_10d32d0
            
            x12_1 = ((zx.q(x12_1.d << 0xa) & 0xffc00) | (zx.q(x13_4 << 8) & 0x300) | zx.q(arg3[3]))
                + 0x10000
            
            if (x9_2 u< x12_1)
                result = 2
                goto label_10d32d0
            
            result = 4
        else
            if (x13_2 == 0xdc00)
                result = 2
                goto label_10d32d0
            
            result = 2
            
            if (x9_2 u< x12_1)
                goto label_10d32d0
        
        arg3 = &arg3[result]
        *arg6 = x12_1.d
        arg6 = &arg6[1]
        
        if (arg3 u>= arg4 - 1)
            break

result = zx.q(arg3 u< arg4 ? 1 : 0)
label_10d32d0:
*arg5 = arg3
char32_t** entry_x7
*entry_x7 = arg6
return result
