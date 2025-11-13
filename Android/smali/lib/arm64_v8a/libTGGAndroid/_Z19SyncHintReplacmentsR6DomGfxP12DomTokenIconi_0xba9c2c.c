// 函数: _Z19SyncHintReplacmentsR6DomGfxP12DomTokenIconi
// 地址: 0xba9c2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 0xe0)

if (x10 == 0)
    goto label_ba9cc8

int64_t x8_1 = 0
int64_t x9_1 = *(gDomClient + 0x205e0)
uint64_t x22_1 = zx.q(arg3) & zx.q(not.d(arg3 s>> 0x1f))

while (true)
    if (x22_1 != x8_1)
        uint64_t x10_1 = zx.q(x10) & 0xffff
        
        if (*(x9_1 + x10_1 * 0x21d8 + 0x23c) != *(arg2 + (x8_1 << 2)))
            x22_1 = zx.q(x8_1.d)
        else
            x10 = *(x9_1 + x10_1 * 0x21d8 + 0x244)
            x8_1 += 1
            
            if (x10 == 0)
                break
            
            continue
    
    ClearAllHintReplacements(arg1)
    
    if (*(arg1 + 0xe0) == 0)
        goto label_ba9cc8
    
    goto label_ba9cb8

x22_1 = zx.q(x8_1.d)
label_ba9cb8:

if (x22_1.d == arg3)
    return 

ClearAllHintReplacements(arg1)
label_ba9cc8:

if (arg3 s< 1)
    return 

uint64_t i_1 = zx.q(arg3)
uint64_t i

do
    DomGfx* x0_3 = DomGfxCreate_Hint(arg1, 0x23, 0, zx.q(*(arg2 - 4 + (i_1 << 2))), 0)
    PileAddTokenSlot(x0_3, arg1, 0)
    int32_t x9_2 = *(x0_3 + 0x21d0)
    i = i_1
    i_1 -= 1
    *(x0_3 + 0x244) = *(arg1 + 0xe0)
    *(arg1 + 0xe0) = x9_2
while (i s> 1)
