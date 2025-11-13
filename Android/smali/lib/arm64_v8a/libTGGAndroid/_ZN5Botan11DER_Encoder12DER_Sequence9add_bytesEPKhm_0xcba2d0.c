// 函数: _ZN5Botan11DER_Encoder12DER_Sequence9add_bytesEPKhm
// 地址: 0xcba2d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_48
size_t entry_x2

if (*arg1 != 0x11)
    var_48 = arg2
    size_t var_40_2 = entry_x2
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&arg1[8], &var_48)
    return 

__builtin_memset(&var_48, 0, 0x18)
int64_t var_40_1
int64_t var_38_1
uint64_t* x8_1
uint64_t x22_1

if (entry_x2 != 0)
    if ((entry_x2 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t x0_1 = Botan::allocate_memory(entry_x2, 1)
    int64_t x23_1 = x0_1 + entry_x2
    x22_1 = x0_1
    var_48 = x0_1
    var_38_1 = x23_1
    memcpy(x0_1, arg2, entry_x2)
    var_40_1 = x23_1
    x8_1 = *(arg1 + 0x28)
    
    if (x8_1 u>= *(arg1 + 0x30))
        goto label_cba390
    
    goto label_cba340

x22_1 = 0
x8_1 = *(arg1 + 0x28)

if (x8_1 u< *(arg1 + 0x30))
label_cba340:
    x8_1[1] = 0
    x8_1[2] = 0
    *x8_1 = x22_1
    x8_1[1] = var_40_1
    x8_1[2] = var_38_1
    *(arg1 + 0x28) = &x8_1[3]
else
label_cba390:
    std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
        &arg1[0x20])
    arg1 = var_48
    
    if (arg1 != 0)
        uint8_t const* var_40_3 = arg1
        Botan::deallocate_memory(arg1, var_38_1 - arg1, 1)
