// 函数: _Z18DontDrawCount0CardRK6DomGfxS1_
// 地址: 0xafe070
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x1f8e4)
uint64_t x10_1

if (x8 != 0)
    x10_1 = zx.q(x8.w)

void* const x8_1
int32_t x9_2

if (x8 != 0 && x10_1.d u< *(gDomClient + 0x205e8))
    void* x9_1 = *(gDomClient + 0x205e0) + x10_1 * 0x21d8
    
    if (*(x9_1 + 0x21d0) == x8)
        x8_1 = x9_1
    else
        x8_1 = nullptr
    
    x9_2 = *(arg1 + 0xa4)
    
    if (x9_2 != 0x3eb)
        goto label_afe100
    
    goto label_afe0d4

x8_1 = nullptr
x9_2 = *(arg1 + 0xa4)

if (x9_2 == 0x3eb)
label_afe0d4:
    
    if (*(arg2 + 0x70) != *(arg1 + 0x21d0))
    label_afe13c:
        
        if (*(arg1 + 0xc0) == 0 && *(arg1 + 0x1f78) == 0)
            return 1
    else if (x8_1 != 0 && *(x8_1 + 0x5c) == 0x3eb)
    label_afe130:
        
        if (*(x8_1 + 0x58) == *(arg1 + 0xa0))
            goto label_afe13c
else
label_afe100:
    
    if (x9_2 != 0x3ec || *(arg2 + 0x70) != *(arg1 + 0x21d0))
        goto label_afe13c
    
    if (x8_1 != 0 && *(x8_1 + 0x5c) == 0x3ec)
        goto label_afe130

return 0
