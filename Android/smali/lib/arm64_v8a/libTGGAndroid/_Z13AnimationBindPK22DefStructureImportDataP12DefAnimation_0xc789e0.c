// 函数: _Z13AnimationBindPK22DefStructureImportDataP12DefAnimation
// 地址: 0xc789e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*arg2) != 0)
    return 

void* x8 = *(arg2 + 0x18)
*arg2 = 1
uint64_t x9_1 = zx.q(*(x8 + 4))

if (x9_1.d s< 1)
    return 

uint64_t x10_1 = zx.q(*(arg1 + 0x10))

if (x10_1.d s<= 0)
    int64_t i = 0
    
    do
        void* x12_2 = *(x8 + 8) + i
        i += 0x18
        *(x12_2 + 0x10) = 0xffffffff
    while (x9_1 * 0x18 != i)
    
    return 

int64_t x11_1 = 0

do
    int32_t* x16_1 = *(x8 + 8)
    int64_t x14_1 = 0
    x16_1[x11_1 * 6 + 4] = 0xffffffff
    int32_t* x17_2 = *(arg1 + 0x18) + 0x70
    
    do
        if (*x17_2 == x16_1[x11_1 * 6])
            x16_1[x11_1 * 6 + 4] = x14_1.d
            break
        
        x14_1 += 1
        x17_2 = &x17_2[0x36]
    while (x10_1 != x14_1)
    
    x11_1 += 1
while (x11_1 != x9_1)
