// 函数: _Z23TokenGetCharacteristics12DomTokenTypeP21AbilityCharacteristic
// 地址: 0xbcf0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s> 0xaff)
    uint64_t x8_1 = zx.q(arg1 - 0xb00)
    
    if (x8_1.d u<= 0xa)
        switch (x8_1)
            case 0, 0xa
                *arg2 = 9
                return 1
            case 3
                *arg2 = 0xd
                return 1
            case 4
                *arg2 = 4
                return 1
            case 5
                *arg2 = 0x11
                return 1
    else if (arg1 == 0xc00)
        *arg2 = 0x160000000f
        return 2
else if (arg1 == 0x400)
    *arg2 = 0xa
    return 1

*arg2 = 0x10
return 1
