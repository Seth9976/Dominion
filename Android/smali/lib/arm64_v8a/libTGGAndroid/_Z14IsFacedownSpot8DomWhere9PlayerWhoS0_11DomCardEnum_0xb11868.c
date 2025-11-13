// 函数: _Z14IsFacedownSpot8DomWhere9PlayerWhoS0_11DomCardEnum
// 地址: 0xb11868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s> 0x45e)
    if (arg1 == 0x45f)
        return zx.q(arg2 != arg3 ? 1 : 0)
    
    if (arg1 == 0x474)
        if (arg4 s> 0xe0c)
            if (arg4 - 0x1100 u< 2 || arg4 == 0x1302 || arg4 == 0xe0d)
                return zx.q(arg2 != arg3 ? 1 : 0)
        else
            if (arg4 == 0xc15 || arg4 == 0xd16)
                return zx.q(arg2 != arg3 ? 1 : 0)
            
            if (arg4 == 0x401 || arg4 == 0xb08)
                return zx.q(arg2 != arg3 ? 1 : 0)
else if (arg1 != 2 && arg1 == 0x3ed)
    return 1

return 0
