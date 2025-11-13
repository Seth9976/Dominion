// 函数: sub_f315c0
// 地址: 0xf315c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::FPE_FE1, 3567237152u>(*(arg1 + 8))
uint8_t* x0_3 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
*(arg1 + 0x20)
Botan::FPE_FE1::decrypt(x0_1, x0_3, *(arg1 + 0x18))
uint32_t* x0_6 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
uint32_t* var_48

if (x0_6 != &var_48)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(x0_6, 
        var_48)

int64_t var_30
*(x0_6 + 0x18) = var_30
int32_t var_28
x0_6[8] = var_28
uint32_t* x0_8 = var_48

if (x0_8 != 0)
    uint32_t* var_40_1 = x0_8
    int64_t var_38
    Botan::deallocate_memory(x0_8, (var_38 - x0_8) s>> 2, 4)

return 0
