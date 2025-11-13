// 函数: _Z33WayOfTheButterfly_ShouldSmartplayR7DomGame9PlayerWho6CardID
// 地址: 0xb991bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CardWhat(arg1, zx.q(arg3))

if (x0 s<= 0xb00)
    if (x0 s<= 0x811)
        if (x0 != 0x418 && x0 != 0x507)
            return 1
    else if (x0 != 0x812 && x0 != 0x905 && x0 != 0x909)
        return 1
else if (x0 s<= 0xc19)
    uint64_t x8_1 = zx.q(x0 - 0xb01)
    
    if (x8_1.d u> 0x38 || (1 << x8_1 & 0x1fe000000000003) == 0)
        return 1
else if (x0 s<= 0xdff)
    if (x0 != 0xc1a && x0 != 0xd05)
        return 1
else if (x0 != 0xe00 && x0 != 0x1307 && x0 != 0x1305)
    return 1

return 0
