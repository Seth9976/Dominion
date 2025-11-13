// 函数: sub_af9438
// 地址: 0xaf9438
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

if (arg2 s> 2)
    if (arg2 s<= 0xa)
        return sub_af9af8(arg2 * 3 - 8) __tailcall
    
    if (arg2 s> 0xd)
        if (arg2 s<= 0x15)
            return sub_af9af8(arg2 * 3 - 0x28) __tailcall
        
        x9 = (arg2 << 3) - 0xa9
    else
        x9 = (arg2 << 3) - 0x52
else
    x9 = 5 | (0x1fffffff & arg2) << 3

return 1 | zx.q(x9) << 0x20
