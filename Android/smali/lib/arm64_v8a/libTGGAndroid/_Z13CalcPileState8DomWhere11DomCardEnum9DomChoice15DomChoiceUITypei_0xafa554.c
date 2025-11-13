// 函数: _Z13CalcPileState8DomWhere11DomCardEnum9DomChoice15DomChoiceUITypei
// 地址: 0xafa554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_4 = arg1
int64_t result = 2

if (arg1 s<= 0x3e9)
    if (x8_4 == 2)
        return result
    
    if (x8_4 == 3)
        return 7
    
    goto label_afa5c4

uint64_t x9_1 = zx.q(x8_4 - 0x3ea)

if (x9_1.d u> 0x67)
    if (x8_4 == 0x462)
        return result
    
label_afa5c4:
    
    if (arg2 == 0x1128 || arg2 == 0x1301)
        return 2
    
    if (arg2 == 0xd30 || arg2 == 0xd3d)
        return 3
    
    if (arg5 s> 5)
        return 2
    
    return 4

switch (x9_1)
    case 0
        return 1
    case 1
        if (arg4 - 0x33 u>= 2 && arg4 != 0x101)
            return 2
        
        return 6
    case 2, 0x63, 0x67
        return result
    case 3, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
            0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
            0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 
            0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 
            0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
            0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 
            0x5e, 0x5f, 0x60, 0x61, 0x62
        goto label_afa5c4
    case 4
        if (arg3 == 2)
            return 5
        
        if (arg4 == 0x27)
            return 0xb
        
        if ((arg4 & 0xffffffbf) == 0x3b)
            return 0xa
        
        if ((arg4 & 0xffffffef) == 0xa3)
            return 7
        
        return 4
    case 5, 6
        if (arg4 == 0x27)
            return 0xb
        
        if ((arg4 & 0xffffffbf) == 0x3b)
            return 0xa
        
        return 8
    case 0x64
        return 6
    case 0x65
        bool z_1
        
        if (arg4 == 0x125)
            z_1 = arg3 == 2
        else
            z_1 = false
        
        if (z_1)
            return 5
        
        return 4
    case 0x66
        bool z
        
        if (arg4 == 0x126)
            z = arg3 == 2
        else
            z = false
        
        if (z)
            return 5
        
        return 4
