// 函数: _Z15DomNotifyEffectb9DomEffect9PlayerWho6CardIDiiiiiii9ContextId
// 地址: 0xb19bd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x28 = arg12.q
int32_t fp = arg11
int32_t x19 = arg10
int32_t x23 = arg9
int32_t x24 = arg4
int32_t x25 = arg3
int32_t x26 = arg2

if ((arg1.d & 1) != 0)
    arg11.q = x28
    arg10 = fp
    arg9 = x19
    arg12.b = 1
    return ResolveEffect(zx.q(x26), zx.q(x25), zx.q(x24), zx.q(arg5), zx.q(arg6), zx.q(arg7), 
        zx.q(arg8), zx.q(x23)) __tailcall

int32_t x20 = *(gDomClient + 0x20640)
int32_t x8_1 = *(gDomClient + 0x20644)
int64_t x27

if (x20 s>= x8_1)
    int32_t x8_2
    
    if (x8_1 == 0)
        x8_2 = 0x10
    else
        x8_2 = x8_1 << 1
    
    x27 = XPooledCalloc(x8_2 * 0x38)
    int64_t x1_2 = *(gDomClient + 0x20638)
    
    if (x1_2 != 0)
        memcpy(x27, x1_2, sx.q(x20 * 0x38))
        XPooledFree(*(gDomClient + 0x20638), *(gDomClient + 0x20644) * 0x38)
    
    x20 = *(gDomClient + 0x20640)
    *(gDomClient + 0x20638) = x27
    *(gDomClient + 0x20644) = x8_2
else
    x27 = *(gDomClient + 0x20638)

*(gDomClient + 0x20640) = x20 + 1
int32_t* x8_7 = x27 + muls.dp.d(x20, 0x38)
*x8_7 = x26
x8_7[1] = x25
x8_7[2] = x24
x8_7[3] = arg5
x8_7[4] = arg6
x8_7[5] = arg7
x8_7[6] = arg8
x8_7[7] = x23
x8_7[8] = x19
x8_7[9] = fp
*(x8_7 + 0x28) = x28
x8_7[0xc].b = 0
