// 函数: _Z14MergeFancyFontR15FancyStringDataRKS_
// 地址: 0x1024f3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x10) == 0 && *(arg2 + 0x60) == 0)
    float v0 = *(arg2 + 0x2c)
    
    if (not(v0 == 0f))
        *(arg1 + 0x2c) = v0 * *(arg1 + 0x90)
    
    if (zx.d(*(arg2 + 0x23)) != 0 && zx.d(*(arg1 + 0x8c)) == 0)
        *(arg1 + 0x20) = *(arg2 + 0x20)
    
    if (zx.d(*(arg2 + 0x27)) != 0 && zx.d(*(arg1 + 0x8c)) == 0)
        *(arg1 + 0x24) = *(arg2 + 0x24)

int32_t x8_1 = *(arg2 + 0x70)

if (x8_1 != 0)
    *(arg1 + 0x70) = x8_1

int32_t x8_2 = *(arg2 + 0x1c)

if (x8_2 != 0)
    *(arg1 + 0x1c) = x8_2

int64_t x8_3 = *(arg2 + 8)
int64_t x8_4
void* __offset(FancyStringData, 0x78) x8_5

if (x8_3 == 0)
    x8_4 = *(arg2 + 0x78)
    
    if (x8_4 != 0)
    label_1024f88:
        *(arg1 + 0x78) = x8_4
        x8_5 = arg1 + 8
        *(arg1 + 0x80) = *(arg2 + 0x80)
        *(arg1 + 0x84) = *(arg2 + 0x84)
        goto label_1024fa0
else
    *(arg1 + 8) = x8_3
    x8_4 = *(arg2 + 0x78)
    
    if (x8_4 != 0)
        goto label_1024f88
    
    x8_5 = arg1 + 0x78
label_1024fa0:
    *x8_5 = 0
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x38) = *(arg2 + 0x38)
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
