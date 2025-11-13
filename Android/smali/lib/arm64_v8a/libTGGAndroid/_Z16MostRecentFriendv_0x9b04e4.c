// 函数: _Z16MostRecentFriendv
// 地址: 0x9b04e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x8 = zx.q(*(x0 + 0x5028))

if (x8.d s< 2)
    return x0 + 0x28

int32_t x9 = 0
void* x10 = x0 + 0x60
int64_t x11 = 1

do
    int64_t x12_1 = *x10
    x10 += 0x20
    
    if (x12_1 u> *(x0 + (sx.q(x9) << 5) + 0x40))
        x9 = x11.d
    
    x11 += 1
while (x8 != x11)

return x0 + (sx.q(x9) << 5) + 0x28
