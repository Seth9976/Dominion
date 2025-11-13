// 函数: _Z18UI2GetOrAllocChildR3UI2i
// 地址: 0x1011d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x1970))

if (x8.d != 0)
    int64_t x9_2
    int32_t x10_1
    
    if (x8.d s> arg2)
        x10_1 = *(arg1 + (sx.q(arg2) << 2) + 0x1870)
        x9_2 = *gUI2
    
    if (x8.d s> arg2 && *(x9_2 + zx.q(x10_1.w) * 0x19a8 + 0x1658) == arg2)
    label_1011e40:
        
        if (x10_1 != 0)
            return x9_2 + mulu.dp.d(x10_1 & 0xffff, 0x19a8)
    else if (x8.d s>= 1)
        void* __offset(UI2, 0x1870) x10_2 = arg1 + 0x1870
        x9_2 = *gUI2
        
        while (true)
            int32_t x12_1 = *x10_2
            
            if (*(x9_2 + zx.q(x12_1.w) * 0x19a8 + 0x1658) == arg2)
                x10_1 = x12_1
                break
            
            uint64_t temp0_1 = x8
            x8 -= 1
            x10_2 += 4
            
            if (temp0_1 == 1)
                goto label_1011e58
        
        goto label_1011e40

label_1011e58:
void* result = UI2Alloc(arg1)
uint64_t x8_2 = zx.q(*(arg1 + 0x1970))
int32_t x24_1 = *(result + 0x19a0)

if (x8_2.d s>= 0x40)
    int64_t x22_1 = 0
    
    do
        *(*gUI2 + zx.q(*(arg1 + 0x1870 + (x22_1 << 2))) * 0x19a8 + 0x1658)
        XTrace("child i %d idx %d")
        x8_2 = sx.q(*(arg1 + 0x1970))
        x22_1 += 1
    while (x22_1 s< x8_2)

*(arg1 + 0x1970) = x8_2.d + 1
*(arg1 + (sx.q(x8_2.d) << 2) + 0x1870) = x24_1
void* i = result

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

XString::GetString()
XFormatString("just allocated, parent:%s")
XString::operator=(result + 0x1650)
XString::~XString()
*(result + 0x1658) = arg2
return result
