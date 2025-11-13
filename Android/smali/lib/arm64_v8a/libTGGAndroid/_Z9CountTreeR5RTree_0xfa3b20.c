// 函数: _Z9CountTreeR5RTree
// 地址: 0xfa3b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CountAttached(*arg1)
void* i = *(arg1 + 8)

if (i == 0)
    return zx.q(x0_1)

int32_t x9 = 0

do
    i = *(i + 0x20)
    x9 += 1
while (i != 0)

return zx.q(x9 + x0_1)
