// 函数: _Z25WayOfTheMouse_SetupFilter11DomCardEnum
// 地址: 0xa8c9e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if (arg1 s> 0xc0e)
    if (x19 s> 0xf05)
        uint64_t x9_1 = zx.q(x19 - 0x1201)
        
        if ((x9_1.d u<= 0x3c && (1 << x9_1 & 0x1000000000000011) != 0) || x19 == 0xf06
                || x19 == 0x1024)
            return 0
    else
        if (x19 == 0xd04 || x19 == 0xe02)
            return 0
        
        if (x19 == 0xc0f || x19 == 0xd01)
            return 0
else if (x19 s> 0x502)
    if ((x19 - 0xb01 u<= 8 && (1 << (x19 - 0xb01) & 0x107) != 0) || x19 == 0x503 || x19 == 0x604)
        return 0
else if (x19 == 0x202 || x19 == 0x31b || x19 == 0x400)
    return 0

if ((PregameCostBetween(zx.q(x19), 2, 3) & 1) != 0 && (PregameCardIs(zx.q(x19), 4) & 1) != 0)
    return (zx.q(PregameCardIs(zx.q(x19), 0x80)) ^ 1) & 1

return 0
