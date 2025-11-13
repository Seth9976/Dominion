// 函数: _Z20UI2GetTableTransform9UI2HandlePKciP5Vec2I
// 地址: 0x1042950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = UI2SelectByName(arg1, arg2, 0xffffffff)
void* x8 = *gUI2
void* x11

if (result.d == 0)
    x11 = x8
else
    x11 = x8 + mulu.dp.d(result.d & 0xffff, 0x19a8)

uint64_t i_1 = zx.q(*(x11 + 0x1970))
int128_t* entry_x8

if (i_1.d == 0)
    v0 = *(TI + 0x10)
    *entry_x8 = *TI
    entry_x8[1] = v0
    return result

int32_t x10 = arg3 & not.d(arg3 s>> 0x1f)
uint64_t x12_2

if (i_1.d s> x10)
    x12_2 = zx.q(*(x11 + (zx.q(x10) << 2) + 0x1870))

if (i_1.d s> x10 && *(x8 + x12_2 * 0x19a8 + 0x1658) == x10)
    goto label_1042a28

uint64_t x9_2

if (i_1.d s< 1)
    x12_2 = 0
label_1042a28:
    x9_2 = zx.q(x12_2.d)
    
    if (arg4 != 0)
    label_1042a40:
        *arg4 = *(x8 + x9_2 * 0x19a8 + 0x14fc)
else
    void* x11_1 = x11 + 0x1870
    uint64_t i
    
    do
        uint64_t x13_3 = zx.q(*x11_1)
        
        if (*(x8 + x13_3 * 0x19a8 + 0x1658) == x10)
            x9_2 = zx.q(x13_3.d)
            
            if (arg4 != 0)
                goto label_1042a40_1
            
            goto label_1042a48
        
        i = i_1
        i_1 -= 1
        x11_1 += 4
    while (i != 1)
    x9_2 = 0
    
    if (arg4 != 0)
    label_1042a40_1:
        *arg4 = *(x8 + x9_2 * 0x19a8 + 0x14fc)

label_1042a48:
void* x8_1 = x8 + x9_2 * 0x19a8
v0 = *(x8_1 + 0x16c0)
*entry_x8 = *(x8_1 + 0x16b0)
entry_x8[1] = v0
return result
