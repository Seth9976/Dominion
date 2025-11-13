// 函数: _ZN5Botan4GMAC9start_msgEPKhm
// 地址: 0xd82f38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = Botan::allocate_memory(0x10, 1)
*x0 = 0
x0[1] = 0
void* var_40 = &x0[2]
void* var_38 = &x0[2]
int64_t* var_48 = x0
int64_t entry_x2

if (entry_x2 != 0xc)
    Botan::GHASH::ghash_update(*(arg1 + 0x18), &var_48, arg2)
    void* x0_2 = *(arg1 + 0x18)
    void* x8_2 = *(x0_2 + 0x68)
    
    if (x8_2 != *(x0_2 + 0x70))
        uint64_t x12_1 = *x0
        int64_t i = 0
        uint64_t x9_3 = 0
        uint64_t x11_1 = 0
        uint64_t x13_2 = _byteswap(x0[1])
        uint64_t x12_2 = _byteswap(x12_1)
        int64_t x13_3 = x13_2 ^ entry_x2 << 3
        
        do
            int64_t* x15_1 = x8_2 + i
            int64_t x14_1 = x12_2 s>> 0x3f
            i += 0x20
            int64_t x17_2 = x13_3 s>> 0x3f
            x12_2 <<= 1
            x13_3 <<= 1
            x11_1 = (*x15_1 & x14_1) ^ x11_1 ^ (x15_1[2] & x17_2)
            x9_3 = (x15_1[1] & x14_1) ^ x9_3 ^ (x15_1[3] & x17_2)
        while (i != 0x800)
        
        uint64_t x8_3 = _byteswap(x11_1)
        uint64_t x9_5 = _byteswap(x9_3)
        *x0 = x8_3
        x0[1] = x9_5
        goto label_d83038
else
    if (arg2 != 0)
        int32_t x8_1 = *(arg2 + 8)
        int64_t x9_1 = *arg2
        *(x0 + 0xf) = 1
        x0[1].d = x8_1
        *x0 = x9_1
    label_d83038:
        int64_t* x0_5 = Botan::allocate_memory(0x10, 1)
        *x0_5 = 0
        x0_5[1] = 0
        int64_t* x0_6 = *(arg1 + 0x10)
        (*(*x0_6 + 0x48))(x0_6, x0, x0_5, 1)
        void* x22_1 = *(arg1 + 0x18)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
            x22_1 + 0x50, x0_5)
        *(x22_1 + 0x28)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            x22_1 + 0x38, *(x22_1 + 0x20))
        arg1[0x40] = 1
        Botan::deallocate_memory(x0_5, 0x10, 1)
        return Botan::deallocate_memory(x0, 0x10, 1)
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

sub_c776cc(Botan::SymmetricAlgorithm::throw_key_not_set_error())
noreturn
