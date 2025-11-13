// 函数: _Z31Topdeck_ShouldSmartplay_DeclineR7DomGame9PlayerWho6CardID
// 地址: 0xb99004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CardWhat(arg1, zx.q(arg3))

if (x0 s> 0x501)
    if (x0 s<= 0x80a)
        if (x0 != 0x502 && x0 != 0x601 && x0 != 0x70c)
            return 0
    else if (x0 s> 0x1021)
        if (x0 != 0x1022 && x0 != 0x130e)
            return 0
    else if (x0 != 0x80b && x0 != 0xd0e)
        return 0
else if (x0 s<= 0x101)
    if (x0 != 0x100)
        if (x0 == 0x101)
            return zx.q(not.d(PlayerHasInheritance(arg1, zx.q(arg2)))) & 1
        
        return 0
else if (x0 - 0x102 u>= 3 && x0 != 0x209 && x0 != 0x311)
    return 0

return 1
