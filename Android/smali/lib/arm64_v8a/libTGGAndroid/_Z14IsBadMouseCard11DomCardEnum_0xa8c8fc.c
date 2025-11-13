// 函数: _Z14IsBadMouseCard11DomCardEnum
// 地址: 0xa8c8fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1

if (arg1 s> 0xc0e)
    if (x8 s> 0xf05)
        uint64_t x9_1 = zx.q(x8 - 0x1201)
        
        if ((x9_1.d u> 0x3c || (1 << x9_1 & 0x1000000000000011) == 0) && x8 != 0xf06
                && x8 != 0x1024)
            return 0
    else if (x8 s> 0xd03)
        if (x8 != 0xd04 && x8 != 0xe02)
            return 0
    else if (x8 != 0xc0f && x8 != 0xd01)
        return 0
else if (x8 s> 0x502)
    if ((x8 - 0xb01 u> 8 || (1 << (x8 - 0xb01) & 0x107) == 0) && x8 != 0x503 && x8 != 0x604)
        return 0
else if (x8 != 0x202 && x8 != 0x31b && x8 != 0x400)
    return 0

return 1
