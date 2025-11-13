// 函数: _ZN5Botan14SIV_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xe26798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg2
int64_t entry_x2

if (*(arg2 + 8) - x8 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1182b)
else
    *(arg1 + 0x50)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t*> >(
        arg2, x8 + entry_x2, *(arg1 + 0x48))
    *(arg1 + 0x50) = *(arg1 + 0x48)
    *(arg2 + 8)
    Botan::SIV_Mode::S2V(arg1, *arg2 + entry_x2)
    void* result_1
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
        arg2, *arg2 + entry_x2, result_1)
    void* result = result_1
    int64_t var_40
    uint64_t x23_1 = var_40 - result
    
    if (*(arg2 + 8) - *arg2 == x23_1 + entry_x2)
    label_e26910:
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_38
        return Botan::deallocate_memory(result, var_38 - result, 1)
    
    void* var_60_1
    __builtin_memset(&var_60_1, 0, 0x18)
    void* var_50_1
    void* x8_7
    void* x22_1
    
    if (x23_1 == 0)
        x8_7 = nullptr
        x22_1 = nullptr
    label_e2688c:
        void* x9_7 = *(arg1 + 0x78) + x22_1
        char x11_2 = *(x9_7 - 4) & 0x7f
        *(x9_7 - 8) &= 0x7f
        *(x9_7 - 4) = x11_2
        int64_t* x0_6 = *(arg1 + 0x20)
        (*(*x0_6 + 0x40))(x0_6, x22_1, x8_7 - x22_1)
        void* x0_7 = var_60_1
        
        if (x0_7 != 0)
            void* var_58_3 = x0_7
            Botan::deallocate_memory(x0_7, var_50_1 - x0_7, 1)
        
        int64_t* x0_8 = *(arg1 + 0x20)
        void* x8_10 = var_40 - result_1
        void* x9_11 = *arg2
        void* x1_6 = x9_11 + x8_10 + entry_x2
        (*(*x0_8 + 0x30))(x0_8, x1_6, x1_6, *(arg2 + 8) - (x9_11 + entry_x2 + x8_10))
        result = result_1
        goto label_e26910
    
    if ((x23_1 & 0xffffffff80000000) == 0)
        void* x0_4 = Botan::allocate_memory(x23_1, 1)
        x22_1 = x0_4
        var_60_1 = x0_4
        void* var_58_1 = x0_4
        size_t x23_2 = var_40 - result_1
        x8_7 = x0_4
        var_50_1 = x0_4 + x23_1
        
        if (x23_2 s>= 1)
            memcpy(x22_1, result_1, x23_2)
            x8_7 = x22_1 + x23_2
        
        void* var_58_2 = x8_7
        goto label_e2688c

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
