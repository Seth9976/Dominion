// 函数: _Z11IsBreakCharibRb
// 地址: 0xf6cdc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = 1
*arg3 = false

if (arg1 != 0xd && arg1 != 0x20)
    if (arg1 != 0x7b)
        if ((arg1 - 0x4e00) u>> 4 u>= 0x51b && arg1 - 0xff00 u>= 0xf0 && arg1 - 0x30a0 u>= 0x60
                && (arg1 & 0xffffffc0) != 0x3000 && arg1 - 0x3040 u>= 0x60)
            return 0
        
        int32_t x0_2 = IsInCharacterSet(arg1, 0x7256a7)
        
        if ((x0_2 & 1) == 0)
            *arg3 = true
        
        return (zx.q(x0_2) ^ 1) & 1
    
    x8 = not.d(arg2.d)

return zx.q(x8) & 1
