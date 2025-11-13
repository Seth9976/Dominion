// 函数: _ZN5Botan14SIV_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xe26d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = *arg2
int64_t x8 = *(arg2 + 8)
char var_b8
char var_58
void* var_48
int64_t entry_x2

if (x8 - x24 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1183d)
    Botan::assertion_failure("sz >= tag_size()", "We have the tag", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x11847)
else
    int64_t x2 = *(arg1 + 0x48)
    
    if (*(arg1 + 0x50) != x2)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t*> >(
            arg2, x24 + entry_x2, x2)
        *(arg1 + 0x50) = *(arg1 + 0x48)
        x24 = *arg2
        x8 = *(arg2 + 8)
    
    if (x8 - entry_x2 - x24 u<= 0xf)
        Botan::assertion_failure("sz >= tag_size()", "We have the tag", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x11847)
    else
        uint64_t x23_1 = *(arg1 + 0x78)
        char* result_1
        __builtin_memset(&result_1, 0, 0x18)
        char* var_a0
        int64_t var_90
        void* var_68_1
        void* var_60_1
        char* result_8
        void* x25_1
        
        if (x23_1 != 0)
            if ((x23_1 & 0xffffffff80000000) == 0)
                char* result_3 = Botan::allocate_memory(x23_1, 1)
                x25_1 = &result_3[x23_1]
                result_8 = result_3
                result_1 = result_3
                var_60_1 = x25_1
                memcpy(result_3, x24 + entry_x2, x23_1)
                var_68_1 = x25_1
                x24 = *arg2
                x8 = *(arg2 + 8)
                goto label_e26e50
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_e27140:
            int64_t* x0_16 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::exception::~exception()
            
            if ((zx.d(var_58) & 1) != 0)
                operator delete(var_48)
            
            int128_t var_b7
            
            if ((zx.d(var_b8) & 1) != 0)
                operator delete(var_b7:0xf.q)
            __cxa_free_exception(arg1)
            
            if (var_a0 != 0)
                char* var_98_2 = var_a0
                Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)
            
            char* result_4 = result_1
            
            if (result_4 != 0)
                char* result_7 = result_4
                Botan::deallocate_memory(result_4, var_60_1 - result_4, 1)
            
            sub_1101e04(x0_16)
            noreturn
        
        result_8 = nullptr
        x25_1 = nullptr
    label_e26e50:
        uint64_t x23_2 = x25_1 - result_8
        
        if (x8 - x24 != x23_2 + entry_x2)
            void* var_88_1
            __builtin_memset(&var_88_1, 0, 0x18)
            void* var_78_1
            void* x8_3
            void* x22_1
            
            if (x23_2 == 0)
                x8_3 = nullptr
                x22_1 = nullptr
            else
                if ((x23_2 & 0xffffffff80000000) != 0)
                    goto label_e27140
                
                void* x0_3 = Botan::allocate_memory(x23_2, 1)
                char* result_5 = result_1
                x22_1 = x0_3
                var_88_1 = x0_3
                size_t x23_3 = var_68_1 - result_5
                x8_3 = x0_3
                var_78_1 = x0_3 + x23_2
                
                if (x23_3 s>= 1)
                    memcpy(x22_1, result_5, x23_3)
                    x8_3 = x22_1 + x23_3
                
                void* var_80_1 = x8_3
            
            void* x9_6 = *(arg1 + 0x78) + x22_1
            char x11_2 = *(x9_6 - 4) & 0x7f
            *(x9_6 - 8) &= 0x7f
            *(x9_6 - 4) = x11_2
            int64_t* x0_5 = *(arg1 + 0x20)
            (*(*x0_5 + 0x40))(x0_5, x22_1, x8_3 - x22_1)
            void* x0_6 = var_88_1
            
            if (x0_6 != 0)
                void* var_80_2 = x0_6
                Botan::deallocate_memory(x0_6, var_78_1 - x0_6, 1)
            
            int64_t* x0_7 = *(arg1 + 0x20)
            void* x2_4 = *arg2 + entry_x2
            void* x8_6 = var_68_1 - result_1
            (*(*x0_7 + 0x30))(x0_7, x2_4 + x8_6, x2_4, *(arg2 + 8) - x2_4 - x8_6)
            x24 = *arg2
            *(arg2 + 8)
            goto label_e26f68
        
    label_e26f68:
        Botan::SIV_Mode::S2V(arg1, x24 + entry_x2)
        char* result_6 = result_1
        var_58 = 0
        int64_t var_98
        void* i_1 = var_98 - var_a0
        
        if (var_98 != var_a0)
            char* x10_6 = var_a0
            void* i
            
            do
                char x11_4 = *x10_6
                x10_6 = &x10_6[1]
                char x12_2 = *result_6
                result_6 = &result_6[1]
                i = i_1
                i_1 -= 1
                var_58 |= x12_2 ^ x11_4
            while (i != 1)
        
        uint32_t x8_9 = zx.d(var_58)
        
        if (((x8_9 - 1) & not.d(x8_9) & 0x80) != 0)
            int64_t x8_11 = *arg2
            int64_t x9_15 = *(arg2 + 8) - x8_11
            char* var_98_1
            
            if (x9_15 u> 0xf)
                *(arg2 + 8) = x9_15 + x8_11 - 0x10
                
                if (var_a0 != 0)
                    var_98_1 = var_a0
                    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)
            else
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
                
                if (var_a0 != 0)
                    var_98_1 = var_a0
                    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)
            char* result = result_1
            
            if (result == 0)
                return result
            
            char* result_2 = result
            return Botan::deallocate_memory(result, var_60_1 - result, 1)

void** x0_11 = __cxa_allocate_exception(0x20)
__builtin_strncpy(&var_b8, "(SIV tag check failed", 0x16)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_b8)
*x0_11 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_11[1])

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

*x0_11 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
