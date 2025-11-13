// 函数: _ZN5Botan3TLS24write_unencrypted_recordERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEhNS0_16Protocol_VersionEmPKhm
// 地址: 0xe5e114
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_70
char var_58
void* var_48

if (zx.d(arg2) == 0x17)
    void** x0_10 = __cxa_allocate_exception(0x20)
    int64_t x0_11
    int128_t v0_1
    x0_11, v0_1 = operator new(0x40)
    int64_t var_60_1 = x0_11
    var_70 = data_71ac10
    __builtin_strncpy(x0_11, "Writing an unencrypted TLS application data record", 0x33)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Internal error: ", &var_70)
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    *x0_10 = _vtable_for_Botan::Internal_Error + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
    noreturn

sub_e78480(arg1, arg2, zx.q(arg3), arg4)

if (arg6 u>= 0x10000)
    Botan::assertion_failure("len_field == len16", "No truncation", "append_u16_len", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x14e6a)
else
    uint8_t* x22_1 = *(arg1 + 8)
    int64_t x8_1 = *(arg1 + 0x10)
    void* x22_2
    
    if (x22_1 u>= x8_1)
        void* x23_1 = *arg1
        size_t x22_3 = x22_1 - x23_1
        
        if (x22_3 + 1 s>= 0)
            void* x8_3 = x8_1 - x23_1
            int64_t x11_1 = x8_3 << 1
            int64_t x9_2
            
            if (x11_1 u< x22_3 + 1)
                x9_2 = x22_3 + 1
            else
                x9_2 = x11_1
            
            int64_t x24_1
            
            x24_1 = x8_3 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
            
            int64_t x0_1
            size_t x2_1
            
            if (x24_1 == 0)
                x0_1 = 0
                x2_1 = x22_3
            else
                x0_1 = Botan::allocate_memory(x24_1, 1)
                x23_1 = *arg1
                x2_1 = *(arg1 + 8) - x23_1
            
            char* x22_4 = x0_1 + x22_3
            void* x24_2 = x22_4 - x2_1
            *x22_4 = (arg6 u>> 8).b
            x22_2 = &x22_4[1]
            
            if (x2_1 s>= 1)
                memcpy(x24_2, x23_1, x2_1)
            
            int64_t x8_6 = *(arg1 + 0x10)
            *arg1 = x24_2
            *(arg1 + 8) = x22_2
            *(arg1 + 0x10) = x0_1 + x24_1
            
            if (x23_1 != 0)
                Botan::deallocate_memory(x23_1, x8_6 - x23_1, 1)
                x22_2 = *(arg1 + 8)
            
            goto label_e5e20c
    else
        *x22_1 = (arg6 u>> 8).b
        x22_2 = &x22_1[1]
        *(arg1 + 8) = x22_2
    label_e5e20c:
        int64_t x8_7 = *(arg1 + 0x10)
        void* x22_5
        
        if (x22_2 u< x8_7)
            *x22_2 = (arg6.d).b
            x22_5 = x22_2 + 1
            *(arg1 + 8) = x22_5
            return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t const*>(
                arg1, x22_5, arg5) __tailcall
        
        void* x23_2 = *arg1
        void* x22_6 = x22_2 - x23_2
        
        if (x22_6 + 1 s>= 0)
            void* x8_8 = x8_7 - x23_2
            uint64_t x11_2 = x8_8 << 1
            uint64_t x9_4
            
            if (x11_2 u< x22_6 + 1)
                x9_4 = x22_6 + 1
            else
                x9_4 = x11_2
            
            uint64_t x24_3
            
            x24_3 = x8_8 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
            
            void* const x0_5
            void* x2_2
            
            if (x24_3 == 0)
                x0_5 = nullptr
                x2_2 = x22_6
            else
                x0_5 = Botan::allocate_memory(x24_3, 1)
                x23_2 = *arg1
                x2_2 = *(arg1 + 8) - x23_2
            
            char* x22_7 = x0_5 + x22_6
            int64_t x24_4 = x22_7 - x2_2
            *x22_7 = (arg6.d).b
            x22_5 = &x22_7[1]
            
            if (x2_2 s>= 1)
                memcpy(x24_4, x23_2, x2_2)
            
            int64_t x8_10 = *(arg1 + 0x10)
            *arg1 = x24_4
            *(arg1 + 8) = x22_5
            *(arg1 + 0x10) = x0_5 + x24_3
            
            if (x23_2 != 0)
                Botan::deallocate_memory(x23_2, x8_10 - x23_2, 1)
                x22_5 = *(arg1 + 8)
            
            return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t const*>(
                arg1, x22_5, arg5) __tailcall

int64_t* x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
std::exception::~exception()

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)
__cxa_free_exception(arg5)
sub_1101e04(x0_17)
noreturn
