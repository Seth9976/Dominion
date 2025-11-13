// 函数: _Z16GfxCardSetReveal9PlayerWho6CardID14DomRevealState
// 地址: 0xb4ee84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gDomClient + 0x205e0)
int32_t i

do
    i = *(x8 + 0x21d0)
    x8 += 0x21d8
while (i u< 0x10000)
void* x8_1 = x8 - 0x21d8

while (*(x8_1 + 0x2c) != 0 || *(x8_1 + 0x98) != arg2 || zx.d(*(x8_1 + 0x168)) != 0)
    void* x11_4 = x8_1 + 0x43a8
    int32_t j
    
    do
        j = *x11_4
        x8_1 += 0x21d8
        x11_4 += 0x21d8
    while (j u< 0x10000)

*(x8_1 + (sx.q(arg1.d) << 2) + 0xe4) = arg3
