// 函数: _Z9PileOther8DomWhere9ContextIdR6DomGfx
// 地址: 0xb928cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gDomClient + 0x205e0)
void* x10 = x8
int32_t i

do
    i = *(x10 + 0x21d0)
    x10 += 0x21d8
while (i u< 0x10000)
void* x10_1 = x10 - 0x21d8

while (*(x10_1 + 0x2c) != 3 || *(x10_1 + 0x58) != *(arg3 + 0xa0) || *(x10_1 + 0x5c) != arg1
        || *(x10_1 + 0x60) != arg2)
    void* x13_5 = x10_1 + 0x43a8
    int32_t i_1
    
    do
        i_1 = *x13_5
        x10_1 += 0x21d8
        x13_5 += 0x21d8
    while (i_1 u< 0x10000)

void* x11 = x10_1 + 0x70
void* result

do
    int32_t x11_1 = *x11
    
    if (x11_1 == 0)
        return 0
    
    result = x8 + zx.q(x11_1.w) * 0x21d8
    x11 = result + 0x213c
while (result == arg3)

return result
