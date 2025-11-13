// 函数: _Z25UI2GetOrAllocSpecialChildR3UI2i
// 地址: 0x1011d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = arg1 + (sx.q(arg2) << 2)
int32_t x8 = *(x9 + 0x1978)

if (x8 == 0)
    void* x0 = UI2Alloc(arg1)
    *(x0 + 0x198c) = 1
    x8 = *(x0 + 0x19a0)
    *(x9 + 0x1978) = x8

return *gUI2 + mulu.dp.d(x8 & 0xffff, 0x19a8)
