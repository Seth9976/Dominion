// 函数: _ZN5Botan8PointGFpC1ERKNS_8CurveGFpE
// 地址: 0xd2caf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
*arg1 = *entry_x1
int64_t x8_1 = entry_x1[1]
*(arg1 + 8) = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

__builtin_memset(arg1 + 0x10, 0, 0x18)
*(arg1 + 0x28) = -1
*(arg1 + 0x30) = 1
void* x0_1 = (*(**entry_x1 + 0x60))()
int64_t result =
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x38)
*(arg1 + 0x50) = *(x0_1 + 0x18)
int32_t x8_6 = *(x0_1 + 0x20)
__builtin_memset(arg1 + 0x60, 0, 0x18)
*(arg1 + 0x78) = -1
*(arg1 + 0x80) = 1
*(arg1 + 0x58) = x8_6
return result
