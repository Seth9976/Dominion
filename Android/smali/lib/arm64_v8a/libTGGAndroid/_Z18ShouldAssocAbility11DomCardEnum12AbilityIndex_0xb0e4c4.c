// 函数: _Z18ShouldAssocAbility11DomCardEnum12AbilityIndex
// 地址: 0xb0e4c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = arg1

if (arg1 s<= 0xf00)
    if (x8_2 s> 0xc14)
        uint64_t x9_5 = zx.q(x8_2 - 0xd05)
        
        if (x9_5.d u<= 0x2a && (1 << x9_5 & 0x40000020103) != 0)
            return 1
        
        uint64_t x9_7 = zx.q(x8_2 - 0xe04)
        
        if ((x9_7.d u> 0x2b || (1 << x9_7 & 0x80000000201) == 0) && x8_2 != 0xc15)
            return 0
        
        return 1
    
    if (x8_2 s> 0x71e)
        if ((x8_2 - 0xb08 u> 0x1b || (1 << (x8_2 - 0xb08) & 0xa010005) == 0) && x8_2 != 0x71f
                && x8_2 != 0x80d)
            return 0
        
        return 1
    
    if ((x8_2 - 0x604 u> 0x1a || (1 << (x8_2 - 0x604) & 0x4001011) == 0)
            && (x8_2 - 0x401 u> 0x1d || (1 << (x8_2 - 0x401) & 0x28000001) == 0))
        return 0
    
    return 1

if (x8_2 s> 0x111c)
    if (x8_2 s> 0x1234)
        if ((x8_2 - 0x1302 u> 0xa || (1 << (x8_2 - 0x1302) & 0x601) == 0) && x8_2 != 0x1235
                && x8_2 != 0x1510)
            return 0
        
        return 1
    
    if (x8_2 - 0x111d u> 0x11)
        if (x8_2 == 0x1225)
            return 1
        
        return 0
    
    if ((1 << (x8_2 - 0x111d) & 0x20011) != 0 || x8_2 == 0x1225)
        return 1
    
    return 0

uint64_t x9_2 = zx.q(x8_2 - 0xf01)

if (x9_2.d u> 0x46)
    uint64_t x9_11 = zx.q(x8_2 - 0x1000)
    
    if ((x9_11.d u> 0x3a || (1 << x9_11 & 0x400000000004401) == 0) && x8_2 != 0x104c)
        return 0
    
    return 1

switch (x9_2)
    case 0
        return zx.q(arg2 != 0x16 ? 1 : 0)
    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x13, 0x15, 0x16, 
            0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
            0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
            0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x41, 0x42, 0x43, 
            0x44, 0x45
        return 0
    case 0x12, 0x14, 0x1d, 0x2d, 0x40, 0x46
        return 1
