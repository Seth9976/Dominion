// 函数: _Z13ReallocateLogR9PlayerLogi
// 地址: 0x9b1020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg1

if (x21 == 0)
    int64_t result = XMalloc(arg2)
    *arg1 = result
    *(arg1 + 8) = arg2
    return result

*arg1 = 0
int64_t x0_1 = XMalloc(arg2)
int64_t x2 = sx.q(*(arg1 + 0xc))
*arg1 = x0_1
*(arg1 + 8) = arg2
memcpy(x0_1, x21, x2)
return XFree(x21) __tailcall
