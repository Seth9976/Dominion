// 函数: sub_af9424
// 地址: 0xaf9424
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

if (arg2 s<= 2)
    x9 = 4 | (0x1fffffff & arg2) << 3
else if (arg2 s> 5)
    if (arg2 s<= 0xd)
        return sub_af9af8(arg2 * 3 - 0x11) __tailcall
    
    if (arg2 s> 0x10)
        if (arg2 s<= 0x18)
            return sub_af9af8(arg2 * 3 - 0x31) __tailcall
        
        x9 = (arg2 << 3) - 0xc1
    else
        x9 = (arg2 << 3) - 0x6a
else
    x9 = (arg2 << 3) - 0x13

return 1 | zx.q(x9) << 0x20
