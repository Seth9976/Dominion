// 函数: _Z13NextStoreItemRK7GameDlc
// 地址: 0x9c5d00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int32_t x20

x20 = x8 == 3 ? 0 : x8

int32_t* var_18
int32_t x0_1 = GameSpecific_GetDlcs(zx.q(x20), &var_18)
int32_t x8_1 = *arg1
int64_t x9 = 0xffffffff

if (x8_1 != 3 && x0_1 s>= 1)
    int32_t* x10_1 = var_18
    x9 = 0
    
    while (*x10_1 != *(arg1 + 4))
        x9 += 1
        x10_1 = &x10_1[0x20]
        
        if (zx.q(x0_1) == x9)
            x9 = 0xffffffff
            break

int32_t* x10_2 = var_18
int32_t x11_2 = x9.d + 1

if (x11_2 s>= x0_1)
label_9c5da8:
    x11_2 = -1
else
    void* x9_3 = &x10_2[sx.q(x9.d) * 0x20 + 0x21]
    
    while ((*x9_3 | 4) == 7)
        x11_2 += 1
        x9_3 += 0x80
        
        if (x0_1 == x11_2)
            goto label_9c5da8

void* __offset(GameDlc, 0x4) x9_6

if (x11_2 == 0xffffffff)
    x9_6 = arg1 + 4
else
    x9_6 = &x10_2[sx.q(x11_2) * 0x20]

int32_t x0_2

x0_2 = x11_2 == 0xffffffff ? x8_1 : x20

return zx.q(x0_2) | zx.q(*x9_6) << 0x20
