// 函数: _ZN15RegionAllocator11AllocRegionEiRK6TTFKey
// 地址: 0x1004178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x2
int32_t x8 = *entry_x2
int32_t x9 = entry_x2[1]
int32_t* i = *(*(arg1 + 0x48) + (((zx.q(x9) | zx.q(x8 << 8)) & zx.q(*(arg1 + 0x50))) << 3))
void* x19 = arg1

for (; i != 0; i = *(i + 0x18))
    if (x8 == *i && x9 == i[1] && *(entry_x2 + 8) == *(i + 8))
        int32_t x8_1 = *(x19 + 0x58)
        uint64_t x10_2 = zx.q(i[4].w)
        int64_t x11_2 = *(x19 + 0x20)
        *(x19 + 0x58) = x8_1 + 1
        void* x10_3 = x11_2 + x10_2 * 0x58
        int32_t j = *(x10_3 + 0x30)
        *(x10_3 + 0x2c) = x8_1
        
        while (j != 0)
            int64_t x12_5 = *(x19 + 0x20)
            uint64_t x11_3 = zx.q(j) & 0xffff
            
            if (*(x12_5 + mulu.dp.d(x11_3.d, 0x58) + 0x28) == 2)
                break
            
            *(x12_5 + mulu.dp.d(x11_3.d, 0x58) + 0x28) = 2
            void* x12_6 = x12_5 + x11_3 * 0x58
            j = *(x12_6 + 0x30)
            *(x12_6 + 0x2c) = x8_1
        
        break

void* x0_1
int128_t v0
x0_1, v0 = RegionAllocator::FindNewRegion(x19.d)
*(x0_1 + 0x28) = 1
*(x0_1 + 0x18) = *entry_x2
int32_t x8_2 = *(x19 + 0x58)
*(x19 + 0x58) = x8_2 + 1
int32_t i_1 = *(x0_1 + 0x30)
*(x0_1 + 0x2c) = x8_2

if (i_1 != 0)
    int32_t x8_3 = *(x19 + 0x58)
    
    do
        int64_t x12_7 = *(x19 + 0x20)
        uint64_t x11_4 = zx.q(i_1) & 0xffff
        
        if (*(x12_7 + mulu.dp.d(x11_4.d, 0x58) + 0x28) == 2)
            break
        
        *(x12_7 + mulu.dp.d(x11_4.d, 0x58) + 0x28) = 2
        void* x12_8 = x12_7 + x11_4 * 0x58
        i_1 = *(x12_8 + 0x30)
        *(x12_8 + 0x2c) = x8_3
    while (i_1 != 0)

int32_t x8_4 = *entry_x2
int32_t x9_2 = entry_x2[1]
int32_t x23 = *(x0_1 + 0x50)
uint64_t x22 = (zx.q(x9_2) | zx.q(x8_4 << 8)) & zx.q(*(x19 + 0x50))
int32_t* x10_5 = *(*(x19 + 0x48) + (x22 << 3))

if (x10_5 == 0)
label_100430c:
    int128_t* x0_2
    int128_t v0_1
    x0_2, v0_1 = XPooledMalloc(0x20)
    x0_2[1].d = x23
    uint64_t x9_3 = x22 << 3
    *x0_2 = *entry_x2
    *(x0_2 + 0x18) = *(*(x19 + 0x48) + x9_3)
    *(*(x19 + 0x48) + x9_3) = x0_2
    *(x19 + 0x54) += 1
else
    while (x8_4 != *x10_5 || x9_2 != x10_5[1] || *(entry_x2 + 8) != *(x10_5 + 8))
        x10_5 = *(x10_5 + 0x18)
        
        if (x10_5 == 0)
            goto label_100430c
    
    x10_5[4] = x23

*(x0_1 + 0xc)
return *(x0_1 + 4)
