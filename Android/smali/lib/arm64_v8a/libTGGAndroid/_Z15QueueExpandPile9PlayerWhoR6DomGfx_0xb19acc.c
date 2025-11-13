// 函数: _Z15QueueExpandPile9PlayerWhoR6DomGfx
// 地址: 0xb19acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(gDomClient + 0x20640)
int32_t x8 = *(gDomClient + 0x20644)
int32_t x22 = *(arg2 + 0x21d0)
int32_t x19 = arg1.d
int64_t x20

if (x23 s>= x8)
    int32_t x24_1
    
    if (x8 == 0)
        x24_1 = 0x10
    else
        x24_1 = x8 << 1
    
    arg1 = XPooledCalloc(x24_1 * 0x38)
    int64_t x1 = *(gDomClient + 0x20638)
    x20 = arg1
    
    if (x1 != 0)
        memcpy(x20, x1, sx.q(x23 * 0x38))
        XPooledFree(*(gDomClient + 0x20638), *(gDomClient + 0x20644) * 0x38)
    
    x23 = *(gDomClient + 0x20640)
    *(gDomClient + 0x20638) = x20
    *(gDomClient + 0x20644) = x24_1
else
    x20 = *(gDomClient + 0x20638)

*(gDomClient + 0x20640) = x23 + 1
int32_t* x8_5 = x20 + muls.dp.d(x23, 0x38)
*x8_5 = 0x22
x8_5[1] = x19
x8_5[2] = 0
x8_5[3] = x22
__builtin_memset(&x8_5[4], 0, 0x21)
