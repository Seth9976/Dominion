// 函数: _ZN5Botan9XMSS_Hash1fERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERKS5_S8_
// 地址: 0xed5a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *arg1
int64_t x1 = *(arg1 + 0x10)
(*(*x0 + 0x18))(x0, x1, *(arg1 + 0x18) - x1)
int64_t* x0_1 = *arg1
char var_24 = 0
(*(*x0_1 + 0x18))(x0_1, &var_24, 1)
int64_t* x0_2 = *arg1
int64_t x1_2 = *arg3
(*(*x0_2 + 0x18))(x0_2, x1_2, *(arg3 + 8) - x1_2)
int64_t* x0_3 = *arg1
int64_t* entry_x3
int64_t x1_3 = *entry_x3
(*(*x0_3 + 0x18))(x0_3, x1_3, entry_x3[1] - x1_3)
int64_t* x20_1 = *arg1
int64_t x0_5 = (**x20_1)(x20_1)
int64_t x1_4 = *arg2
int64_t x8_11 = *(arg2 + 8) - x1_4

if (x0_5 u> x8_11)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x1_4 = *arg2
else if (x0_5 u< x8_11)
    *(arg2 + 8) = x1_4 + x0_5

return (*(*x20_1 + 0x20))(x20_1, x1_4)
