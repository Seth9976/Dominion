// 函数: _Z15NetMessageAllocv
// 地址: 0xf835dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gNetwork
int32_t x9 = *(x8 + 0x90)

if (x9 == 0)
    return XCalloc(0xed70) __tailcall

void* x0 = *(x8 + 0x88)
void* x10 = *(x0 + 0x10)
*(x8 + 0x88) = x10

if (x10 == 0)
    *(x8 + 0x80) = 0
else
    *(x10 + 8) = 0
    x9 = *(x8 + 0x90)

int64_t result = *x0
*(x8 + 0x90) = x9 - 1
XPooledFree(x0, 0x18)
return result
