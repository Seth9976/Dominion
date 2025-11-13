// 函数: sub_100e458
// 地址: 0x100e458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_14 = zx.d(*arg1)

if (x8_14 s> 0x4e)
    if (x8_14 == 0x4f)
        if (zx.d(arg1[1]) == 0x54 && zx.d(arg1[2]) == 0x54 && zx.d(arg1[3]) == 0x4f)
            return 1
    else if (x8_14 == 0x74)
        uint32_t x8_3 = zx.d(arg1[1])
        
        if (x8_3 == 0x72)
            if (zx.d(arg1[2]) == 0x75 && zx.d(arg1[3]) == 0x65)
                return 1
        else if (x8_3 == 0x79 && zx.d(arg1[2]) == 0x70 && zx.d(arg1[3]) == 0x31)
            return 1
else if (x8_14 == 0)
    if (zx.d(arg1[1]) == 1 && zx.d(arg1[2]) == 0 && zx.d(arg1[3]) == 0)
        return 1
else if (x8_14 == 0x31 && zx.d(arg1[1]) == 0 && zx.d(arg1[2]) == 0 && zx.d(arg1[3]) == 0)
    return 1

return 0
