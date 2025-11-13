// 函数: sub_f35e04
// 地址: 0xf35e04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 8)
Botan::BigInt* x19 = **(arg1 + 0x10)
uint32_t* var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t var_30 = -1
int32_t var_28 = 1
Botan::vartime_divide(Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*x21), 
    Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x21[1]), x19, &var_48)
uint32_t* x0_6 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(x21[2])

if (x0_6 != &var_48)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(x0_6, 
        var_48)

*(x0_6 + 0x18) = var_30
x0_6[8] = var_28
uint32_t* x0_8 = var_48

if (x0_8 != 0)
    uint32_t* var_40_1 = x0_8
    int64_t var_38
    Botan::deallocate_memory(x0_8, (var_38 - x0_8) s>> 2, 4)

return 0
