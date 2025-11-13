// 函数: _Z15GetGalleryCards12DomExpansioniRPK11DomCardEnumR24KingdomViewEntryCategory
// 地址: 0xb39434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = 0
char const* const x23 = "OOOOOO@OOOOCOOF"
int64_t x24_1
int32_t x10_1

do
    x24_1 = x8
    x10_1 = *(&data_7ef624 + x8 * 0x1044)
    x8 = x24_1 + 1
    x23 = &x23[0x1044]
while (x10_1 != arg1)
int64_t x20 = 0
int32_t x25 = 0
int32_t x26 = 0

while (true)
    int32_t x9_1 = *(&data_7ef624 + x24_1 * 0x1044 + muls.dp.d(x20.d, 0x104) + (sx.q(x25) << 2) + 8)
    int64_t x8_4 = sx.q(x20.d)
    uint64_t result
    
    if (x9_1 == 0)
        x25 = 0
        result = 0
    
    if (x9_1 == 0 && *(&data_7ef624 + x24_1 * 0x1044 + x8_4 * 0x104 + 0x10c) == 0)
        return result
    
    if (x9_1 == 0)
        x20 = x8_4 + 1
    else
        x20 = x8_4
    
    int64_t x19_1 = x20 * 0x104
    int64_t x27_1 = zx.q(x25) << 0x20 s>> 0x1e
    result = 0
    int64_t x8_9
    
    if ((IsLandscape(zx.q(*(&data_7ef624 + x24_1 * 0x1044 + x19_1 + x27_1 + 8)), 0x18) & 1) != 0)
        x8_9 = 9
    else
        x8_9 = 8
    
    while (true)
        if (*(x23 + x19_1 + x27_1 + (result << 2)) == 0)
            if (x26 != arg2)
                x25 = 0
                result = 0
                x20 = zx.q(x20.d + 1)
            
            break
        
        result += 1
        
        if (x8_9 == result)
            result = zx.q(x8_9.d)
            break
    
    if (x26 == arg2)
        int32_t x9_5 = *(&data_7ef624 + x24_1 * 0x1044 + muls.dp.d(x20.d, 0x104) + 4)
        *arg3 = &(&data_7ef624 + x24_1 * 0x1044 + muls.dp.d(x20.d, 0x104) + 4)[sx.q(x25) + 1]
        *arg4 = x9_5
        return result
    
    x26 += 1
    x25 += result.d
