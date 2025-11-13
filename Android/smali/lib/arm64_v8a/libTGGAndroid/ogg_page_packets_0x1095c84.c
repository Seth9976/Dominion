// 函数: ogg_page_packets
// 地址: 0x1095c84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_2 = *arg1
uint64_t x8 = zx.q(*(x9_2 + 0x1a))

if (x8 == 0)
    return 0

int32_t result
int64_t i_4

if (x8.d != 1)
    i_4 = x8 & 0xfe
    int32_t x11_1 = 0
    int32_t x12_1 = 0
    void* x13_1 = x9_2 + 0x1c
    int64_t i_3 = i_4
    int64_t i
    
    do
        uint32_t x15_1 = zx.d(*(x13_1 - 1))
        uint32_t x16_1 = zx.d(*x13_1)
        x13_1 += 2
        
        if (x15_1 != 0xff)
            x11_1 += 1
        
        if (x16_1 != 0xff)
            x12_1 += 1
        
        i = i_3
        i_3 -= 2
    while (i != 2)
    result = x12_1 + x11_1
    
    if (i_4 != x8)
        goto label_1095cf0
else
    i_4 = 0
    result = 0
label_1095cf0:
    void* x9_1 = x9_2 + i_4 + 0x1b
    int64_t i_2 = x8 - i_4
    int64_t i_1
    
    do
        uint32_t x10 = zx.d(*x9_1)
        x9_1 += 1
        
        if (x10 != 0xff)
            result += 1
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
