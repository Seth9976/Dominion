// 函数: _Z15PileAdjustCardsR6DomGfxPKS_b
// 地址: 0xaed654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0x8c)
int32_t x8 = *(arg1 + 0x5c)

if (x22 == 0)
    if (x8 s> 0x44c)
        if (x8 == 0x44d)
            x22 = 3
        else if (x8 != 0x44e)
        label_aed83c:
            
            if (x8 - 0x452 u< 0x22)
                x22 = 3
            else
                x22 = 0
        else
            x22 = 4
    else if (x8 == 0x3e9)
        x22 = 2
    else
        if (x8 != 0x3ea)
            goto label_aed83c
        
        x22 = 0

char x0_1 = PileIsStacked(zx.q(*(arg1 + 0x58)), zx.q(x8), *(arg1 + 0x6c))
uint64_t x1_1 = zx.q(*(arg1 + 0x5c))
int32_t x25 = x22 != 4 ? 1 : 0
bool x2_1 = (((x22 & 0xfffffffe) == 2 ? 1 : 0).b | x0_1) & x25.b & (x22 != 1 ? 1 : 0).b
uint64_t x0_2 = zx.q(*(arg1 + 0x58))
*(arg1 + 0x90) = x2_1
int32_t x0_3 = PileIsSorted(x0_2, x1_1, x2_1)
uint64_t x1_2 = zx.q(*(arg1 + 0x90))
uint64_t x0_4 = zx.q(*(arg1 + 0x21d0))
int32_t x8_5 = (x22 == 1 ? 1 : 0) | ((x22 != 2 ? 1 : 0) & ((x22 == 3 ? 1 : 0) | x0_3) & x25)
int32_t x9_6

if (*(arg1 + 0x5c) == 0x3ea)
    x9_6 = 3
else
    x9_6 = 2

uint64_t x2_2

if (x8_5 != 0)
    x2_2 = zx.q(x9_6)
else
    x2_2 = 0

*(arg1 + 0x91) = x8_5.b
DomGfx* result = PileUpdateStacking(x0_4, x1_2, x2_2)
int32_t i = *(arg1 + 0x70)

if (*(arg1 + 0x5c) - 6 u> 0x42)
label_aed78c:
    
    if (i != 0)
        int32_t x21_1 = 0
        
        do
            result = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
            int32_t x10_1 = *(result + 0x154)
            i = *(result + 0x213c)
            int32_t x8_11
            
            if (zx.d(*(result + 0x150)) == 0)
                x8_11 = 0
            else
                x8_11 = *(result + 0x144)
            
            *(result + 0xbc) = x8_11
            *(result + 0xc0) = x8_11
            *(result + 0xb4) = x21_1
            *(result + 0xb8) = x10_1
            *(result + 0xb0) = x10_1
            
            if (result != arg2)
                result = DomMove_Adjust(result, arg3 & 1)
            
            x21_1 += 1
        while (i != 0)
else
    int32_t x8_8 = *(arg1 + 0x30)
    
    if (x8_8 == 0xd3d || x8_8 == 0x1301 || x8_8 == 0x1128)
        goto label_aed78c
    
    if (x8_8 == 0x70d || x8_8 == 0x718 || x8_8 == 0xd30)
        goto label_aed78c

return result
