// 函数: _Z17IsCardInSelection6CardID
// 地址: 0xb21f44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x2056c))

if (x9.d s< 1)
    return 0

if (*(gDomClient + 0x1f8ec) == arg1)
    return 1

int64_t x13 = 0
int64_t x12_1

do
    x12_1 = x13
    
    if (x9 - 1 == x13)
        break
    
    x13 = x12_1 + 1
while (*(gDomClient + (x12_1 << 2) + 0x1f8f0) != arg1)

return zx.q(x12_1 + 1 u< x9 ? 1 : 0)
