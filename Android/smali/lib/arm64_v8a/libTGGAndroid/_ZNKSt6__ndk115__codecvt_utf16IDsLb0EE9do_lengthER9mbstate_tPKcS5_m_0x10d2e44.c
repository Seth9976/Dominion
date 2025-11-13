// 函数: _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE9do_lengthER9mbstate_tPKcS5_m
// 地址: 0x10d2e44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char const* x8 = arg3

if ((zx.d(arg1->__offset(0x18).b) & 4) != 0)
    x8 = arg3
    
    if (arg4 - arg3 s>= 2)
        x8 = arg3
        
        if (zx.d(*arg3) == 0xfe)
            if (zx.d(arg3[1]) == 0xff)
                x8 = &arg3[2]
            else
                x8 = arg3

int64_t entry_x4

if (entry_x4 != 0 && x8 u< arg4 - 1)
    struct __mbstate_t x10
    x10.__count = arg1->__offset(0x10).d
    x10.__value.__wch = arg1->__offset(0x14).d
    int64_t x11_1 = 1
    bool cond:2_1
    
    do
        uint32_t x12_1 = zx.d(*x8)
        
        if ((x12_1 & 0xf8) == 0xd8)
            break
        
        if (x10 u< ((-0xff01 & zx.q(x8[1])) | zx.q(x12_1.b) << 8))
            break
        
        x8 = &x8[2]
        
        if (x8 u>= arg4 - 1)
            break
        
        cond:2_1 = x11_1 u< entry_x4
        x11_1 += 1
    while (cond:2_1)

return zx.q(x8.d - arg3.d)
