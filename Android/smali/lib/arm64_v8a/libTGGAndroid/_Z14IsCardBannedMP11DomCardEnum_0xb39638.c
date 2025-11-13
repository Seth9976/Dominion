// 函数: _Z14IsCardBannedMP11DomCardEnum
// 地址: 0xb39638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
void* x0 = GetActiveProfile()
uint64_t x8 = zx.q(*(x0 + 0x6454))

if (x8.d s< 1)
    return 0

if (*(x0 + 0x5964) == i)
    return 1

int64_t x12 = 0
int64_t x11_1

do
    x11_1 = x12
    
    if (x8 - 1 == x12)
        break
    
    x12 = x11_1 + 1
while (*(x0 + 0x5968 + (x11_1 << 2)) != i)

return zx.q(x11_1 + 1 u< x8 ? 1 : 0)
