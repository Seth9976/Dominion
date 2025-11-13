// 函数: _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE9do_lengthER9mbstate_tPKcS5_m
// 地址: 0x10d3030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char const* x8 = arg3
int64_t entry_x4

if ((zx.d(arg1->__offset(0x18).b) & 4) == 0)
label_10d3060:
    
    if (entry_x4 != 0)
    label_10d3068:
        
        if (x8 u< arg4 - 1)
            struct __mbstate_t x10
            x10.__count = arg1->__offset(0x10).d
            x10.__value.__wch = arg1->__offset(0x14).d
            int64_t x11_1 = 1
            bool cond:2_1
            
            do
                uint32_t x13_1 = zx.d(x8[1])
                
                if ((x13_1 & 0xf8) == 0xd8)
                    break
                
                if (x10 u< ((-0xff01 & zx.q(*x8)) | zx.q(x13_1.b) << 8))
                    break
                
                if (&x8[2] u>= arg4 - 1)
                    return zx.q((&x8[2]).d - arg3.d)
                
                cond:2_1 = x11_1 u< entry_x4
                x11_1 += 1
                x8 = &x8[2]
            while (cond:2_1)
else
    x8 = arg3
    
    if (arg4 - arg3 s< 2)
        goto label_10d3060
    
    x8 = arg3
    
    if (zx.d(*arg3) != 0xff)
        goto label_10d3060
    
    if (zx.d(arg3[1]) == 0xfe)
        x8 = &arg3[2]
    else
        x8 = arg3
    
    if (entry_x4 != 0)
        goto label_10d3068
return zx.q(x8.d - arg3.d)
