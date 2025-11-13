// 函数: _ZNKSt6__ndk115__codecvt_utf16IwLb1EE9do_lengthER9mbstate_tPKcS5_m
// 地址: 0x10d2bec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char const* i = arg3

if ((zx.d(arg1->__offset(0x20).b) & 4) != 0)
    i = arg3
    
    if (arg4 - arg3 s>= 2)
        i = arg3
        
        if (zx.d(*arg3) == 0xff)
            if (zx.d(arg3[1]) == 0xfe)
                i = &arg3[2]
            else
                i = arg3

int64_t entry_x4

if (entry_x4 != 0 && i u< arg4 - 1)
    struct __mbstate_t x10
    x10.__count = arg1->__offset(0x18).d
    x10.__value.__wch = arg1->__offset(0x1c).d
    int64_t x11_1 = 1
    
    do
        uint32_t x16_1 = zx.d(i[1])
        int32_t x15_2 = x16_1 << 8 & 0xfc00
        int32_t x14_2 = (0xffff00ff & zx.d(*i)) | (0xff & x16_1) << 8
        
        if (x15_2 == 0xd800)
            if (arg4 - i s< 4)
                break
            
            uint32_t x15_4 = zx.d(i[3])
            
            if ((x15_4 & 0xfc) != 0xdc)
                break
            
            if (x10 u< ((zx.q(x14_2 << 0xa) & 0xffc00) | (zx.q(x15_4 << 8) & 0x300) | zx.q(i[2]))
                    + 0x10000)
                break
            
            i = &i[4]
            
            if (x11_1 u>= entry_x4)
                break
        else
            if (x15_2 == 0xdc00)
                break
            
            if (x10 u< zx.q(x14_2))
                break
            
            i = &i[2]
            
            if (x11_1 u>= entry_x4)
                break
        
        x11_1 += 1
    while (i u< arg4 - 1)

return zx.q(i.d - arg3.d)
