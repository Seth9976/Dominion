// 函数: _Z26UI2GetOrAllocTemplateChildR3UI2i
// 地址: 0x1011cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1974)

if (x8 == 0)
    void* x0 = UI2Alloc(arg1)
    x8 = *(x0 + 0x19a0)
    *(x0 + 5) = 1
    *(arg1 + 0x1974) = x8

return *gUI2 + mulu.dp.d(x8 & 0xffff, 0x19a8)
