// 函数: _Z6InGameR7DomGame11DomCardEnum
// 地址: 0xaef400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x1528))

if (x8.d s< 1)
    return 0

if (*(arg1 + 0x1a70) == arg2)
    return 1

void* __offset(DomGame, 0x1ad8) x9_1 = arg1 + 0x1ad8
int64_t x11 = 1
int64_t x10_1
int32_t x11_1

do
    x10_1 = x11
    
    if (x8 == x11)
        break
    
    x11_1 = *x9_1
    x9_1 += 0x68
    x11 = x10_1 + 1
while (x11_1 != arg2)
return zx.q(x10_1 u< x8 ? 1 : 0)
