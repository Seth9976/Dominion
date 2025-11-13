// 函数: sub_f36fdc
// 地址: 0xf36fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = **(arg1 + 0x10)
int64_t x10 = **(arg1 + 8)
int64_t x8_1 = *x19
uint64_t x20 = x10 u>> 5
int32_t x21 = 1 << x10.d
int64_t x9_3 = (x19[1] - x8_1) s>> 2

if (x9_3 u<= x20)
    int64_t x10_1 = x19[2]
    x19[3] = -1
    
    if (x20 u< (x10_1 - x8_1) s>> 2 || ((x20 + 1) & 0xffffffffffffff8) + 8 u> x9_3)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x19)
    else if (((x20 + 1) & 0xffffffffffffff8) + 8 u< x9_3)
        x19[1] = x8_1 + ((((x20 + 1) & 0xffffffffffffff8) + 8) << 2)
else
    int32_t x8_2 = *(x8_1 + (x20 << 2))
    x19[3] = -1
    x21 |= x8_2

*(*x19 + (x20 << 2)) = x21
return 0
