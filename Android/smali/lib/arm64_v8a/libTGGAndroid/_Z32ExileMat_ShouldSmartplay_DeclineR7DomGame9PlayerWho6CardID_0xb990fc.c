// 函数: _Z32ExileMat_ShouldSmartplay_DeclineR7DomGame9PlayerWho6CardID
// 地址: 0xb990fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CardWhat(arg1, zx.q(arg3))

if (x0 s<= 0x70b)
    if (x0 s> 0x208)
        if (x0 s> 0x501)
            if (x0 != 0x502 && x0 != 0x601)
                return 0
        else if (x0 != 0x209 && x0 != 0x311)
            return 0
    else if (x0 - 0x100 u>= 5)
        return 0
else if (x0 s> 0xd0d)
    if (x0 != 0xd0e && x0 != 0x130e && x0 != 0x1022)
        return 0
else if (x0 - 0x924 u>= 5 && x0 != 0x70c && x0 != 0x80b)
    return 0

return 1
