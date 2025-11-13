// 函数: _Z25UIStateElementGroupUpdateR14UIStateElementRK9UIElementf
// 地址: 0x1054e1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1
void* __offset(UIStateElement, 0x14) x8

if (*(arg1 + 0x10) s> x9)
    x8 = arg1 + 0x14
else
    x8 = arg2 + 0x44

int32_t x10_1 = *(arg1 + 0x70)
float v3 = *(arg1 + 0x74)

if (zx.d(*x8) != 0)
    arg3 = fneg(arg3)

float v1 = *(arg1 + 0x1c) + arg3
*(arg1 + 0x1c) = v1

if (x10_1 == 0)
    arg3 = float.s(*(arg2 + 0x70))
else
    arg3 = v3

void* __offset(UIStateElement, 0x160) x8_3

if (*(arg1 + 0x15c) s> x9)
    x8_3 = arg1 + 0x160
else
    x8_3 = arg2 + 0x6c

int32_t x8_4 = *x8_3

if (not(v1 >= 0f))
    v1 = 0f
    *(arg1 + 0x1c) = 0

arg3 = (v1 * float.s(0x447a0000) - arg3) / (arg3 + float.s(x8_4) - arg3)
v1 = 0f

if (not(arg3 <= 0f))
    v1 = fconvert.s(1f)
    
    if (not(arg3 >= v1))
        v1 = arg3 + 0f

*(arg1 + 0x18) = v1
