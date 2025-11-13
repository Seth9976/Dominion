// 函数: _Z18GetSplitPileSource11DomCardEnum
// 地址: 0xc027c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1
uint64_t result = 0

if (arg1 s> 0x1019)
    uint64_t x9_1 = zx.q(x8 - 0x101a)
    
    if (x9_1.d u> 0x1c)
        if (x8 == 0x1305)
            return zx.q(*(&data_80245c + 7 * 0x48))
        
        if (x8 != 0x1306)
            return result
        
        return zx.q(*(&data_80245c + 3 * 0x48))
    
    switch (x9_1)
        case 0, 1, 2, 3
            return zx.q(*(&data_80245c + 8 * 0x48))
        case 4, 9, 0xe, 0x13, 0x18
            return result
        case 5, 6, 7, 8
            return zx.q(*(&data_80245c + 9 * 0x48))
        case 0xa, 0xb, 0xc, 0xd
            return zx.q(*(&data_80245c + 0xa * 0x48))
        case 0xf, 0x10, 0x11, 0x12
            return zx.q(*(&data_80245c + 0xb * 0x48))
        case 0x14, 0x15, 0x16, 0x17
            return zx.q(*(&data_80245c + 0xc * 0x48))
        case 0x19, 0x1a, 0x1b, 0x1c
            return zx.q(*(&data_80245c + 0xd * 0x48))
else
    uint64_t x9 = zx.q(x8 - 0xc04)
    
    if (x9.d u> 0x2d)
        if (x8 - 0x92f u>= 0xa)
            return result
        
        return zx.q(*(&data_80245c + 0))
    
    switch (x9)
        case 0, 1
            return zx.q(*(&data_80245c + 2 * 0x48))
        case 2
            return zx.q(*(&data_80245c + 3 * 0x48))
        case 3, 6, 9, 0xa, 0xb, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25
            return result
        case 4, 5
            return zx.q(*(&data_80245c + 4 * 0x48))
        case 7, 8
            return zx.q(*(&data_80245c + 5 * 0x48))
        case 0xc, 0xd
            return zx.q(*(&data_80245c + 6 * 0x48))
        case 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d
            return zx.q(*(&data_80245c + 0x48))
