// 函数: _Z22EntitlementLookupByDLC7DLCType
// 地址: 0x9e32d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = arg1
void* const result = &data_7a9764
int64_t x8_1

if (arg1 s<= 0xff)
    if (x8_2 u> 0x11)
        return result
    
    x8_1 = 0
    
    switch (x8_2)
        case 1
            x8_1 = 3
        case 2
            x8_1 = 5
        case 3
            x8_1 = 7
        case 4
            x8_1 = 0xa
        case 5
            x8_1 = 0xb
        case 6
            x8_1 = 0xe
        case 7
            x8_1 = 0x11
        case 8
            x8_1 = 0x14
        case 9
            x8_1 = 0x15
        case 0xa
            x8_1 = 0x18
        case 0xb
            x8_1 = 0x19
        case 0xc
            x8_1 = 0x1a
        case 0xd
            x8_1 = 0x1b
        case 0xe
            x8_1 = 0x1c
        case 0xf
            x8_1 = 0x1d
        case 0x10
            x8_1 = 0x1e
        case 0x11
            x8_1 = 0x1f
else if (x8_2 s>= 0x5000)
    if (x8_2 s< 0x9000)
        if (x8_2 s>= 0x8000)
            if (x8_2 == 0x8000)
                x8_1 = 0x10
            else
                if (x8_2 != 0x8001)
                    return result
                
                x8_1 = 0xf
        else if (x8_2 == 0x5000)
            x8_1 = 0x13
        else
            if (x8_2 != 0x5001)
                return result
            
            x8_1 = 0x12
    else if (x8_2 s< 0x100000)
        if (x8_2 == 0x9000)
            x8_1 = 0x17
        else
            if (x8_2 != 0x9001)
                return result
            
            x8_1 = 0x16
    else if (x8_2 == 0x100000)
        x8_1 = 0x24
    else if (x8_2 == 0x100001)
        x8_1 = 0x25
    else
        if (x8_2 != 0x100002)
            return result
        
        x8_1 = 0x26
else if (x8_2 s< 0x2000)
    if (x8_2 s> 0x101)
        if (x8_2 == 0x102)
            x8_1 = 0x22
        else
            if (x8_2 != 0x1000)
                return result
            
            x8_1 = 4
    else if (x8_2 == 0x100)
        x8_1 = 0x20
    else
        if (x8_2 != 0x101)
            return result
        
        x8_1 = 0x21
else if (x8_2 s<= 0x3000)
    if (x8_2 == 0x2000)
        x8_1 = 6
    else
        if (x8_2 != 0x3000)
            return result
        
        x8_1 = 9
else if (x8_2 == 0x3001)
    x8_1 = 8
else if (x8_2 == 0x4000)
    x8_1 = 0xd
else
    if (x8_2 != 0x4001)
        return result
    
    x8_1 = 0xc

return &data_7a9764 + x8_1 * 0x10c
