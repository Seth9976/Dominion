// 函数: _Z14DlcToExpansion6DomDLC
// 地址: 0x9e2f04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = arg1
uint64_t result = 0

if (arg1 s> 0x3000)
    if (x8_2 s<= 0x5000)
        if (x8_2 == 0x3001)
            return zx.q(*(&data_7a9fc4 + 0xc))
        
        if (x8_2 != 0x4001)
            return result
        
        return zx.q(*(&data_7aa3f4 + 0xc))
    
    if (x8_2 == 0x5001)
        return zx.q(*(&data_7aaa3c + 0xc))
    
    if (x8_2 == 0x8001)
        return zx.q(*(&data_7aa718 + 0xc))
    
    if (x8_2 != 0x9001)
        return result
    
    return zx.q(*(&data_7aae6c + 0xc))

uint64_t x8 = zx.q(x8_2 - 1)

if (x8.d u> 0x10)
    return result

switch (x8)
    case 0
        return zx.q(*(&data_7a9a88 + 0xc))
    case 1
        return zx.q(*(&data_7a9ca0 + 0xc))
    case 2, 4, 5, 6, 8
        return result
    case 3
        return zx.q(*(&data_7aa1dc + 0xc))
    case 7
        return zx.q(*(&data_7aac54 + 0xc))
    case 9
        return zx.q(*(&data_7ab084 + 0xc))
    case 0xa
        return zx.q(*(&data_7ab190 + 0xc))
    case 0xb
        return zx.q(*(&data_7ab29c + 0xc))
    case 0xc
        return zx.q(*(&data_7ab3a8 + 0xc))
    case 0xd
        return zx.q(*(&data_7ab4b4 + 0xc))
    case 0xe
        return zx.q(*(&data_7ab5c0 + 0xc))
    case 0xf
        return zx.q(*(&data_7ab6cc + 0xc))
    case 0x10
        return zx.q(*(&data_7ab7d8 + 0xc))
