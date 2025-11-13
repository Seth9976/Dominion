// 函数: _ZN7XString6AppendEPKc
// 地址: 0x1064a3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1

if (zx.d(*entry_x1) == 0)
    return 

char* x8_1 = *arg1

if (x8_1 != 0 && zx.d(*x8_1) != 0)
    int64_t x22 = sx.q(*(x8_1 - 8))
    int32_t x0_1 = strlen(entry_x1)
    sub_10648a8(arg1, x22.d + x0_1, 1)
    return memcpy(*arg1 + x22, entry_x1, sx.q(x0_1 + 1)) __tailcall

int32_t x0_6 = strlen(entry_x1)
int64_t* x0_8
int128_t v0_1
x0_8, v0_1 = XPooledMalloc(x0_6 + 0x11)
v0_1.q = 0x1fafafafa
x0_8[1].d = x0_6
*(x0_8 + 0xc) = x0_6 + 1
*x0_8 = 0x1fafafafa
*arg1 = &x0_8[2]
return strcpy(&x0_8[2], entry_x1, v0_1) __tailcall
