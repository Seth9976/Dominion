// 函数: _ZN5Botan17hkdf_expand_labelERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKhmS8_SA_mm
// 地址: 0xd89ebc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_b8
char const* const x0_13

if (arg7 u>= 0x10000)
    x0_13 = "HKDF-Expand-Label requested output too large"
else if ((zx.d(*arg4) & 1) != 0 && *(arg4 + 8) u>= 0x100)
    x0_13 = "HKDF-Expand-Label label too long"
else if (arg6 u>= 0x100)
    x0_13 = "HKDF-Expand-Label hash too long"
else
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "HMAC(", arg1)
    uint8_t var_98
    int128_t* x0_1
    int128_t v0_1
    x0_1, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_98)
    void* x8_2 = x0_1[1].q
    int128_t var_80 = *x0_1
    __builtin_memset(x0_1, 0, 0x18)
    int16_t var_b0 = 0
    Botan::MessageAuthenticationCode::create_or_throw(&var_80, &var_b0)
    
    if ((zx.d(var_b0.b) & 1) == 0)
        if ((zx.d(var_80.b) & 1) != 0)
            goto label_d89ff8
        
        goto label_d89f7c
    
    void* var_a0
    operator delete(var_a0)
    void* var_88
    
    if ((zx.d(var_80.b) & 1) == 0)
    label_d89f7c:
        
        if ((zx.d(var_98) & 1) != 0)
            operator delete(var_88)
    else
    label_d89ff8:
        operator delete(x8_2)
        
        if ((zx.d(var_98) & 1) != 0)
            operator delete(var_88)
    int64_t var_68_1 = 0
    uint64_t* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    int64_t* var_68
    var_b8 = var_68
    var_98.q = _vtable_for_Botan::HKDF_Expand + 0x10
    int64_t* var_90_1 = var_68
    uint64_t x23_2
    uint64_t x27_1
    
    if (arg7 == 0)
        x23_2 = 0
        x27_1 = 0
    else
        uint64_t x0_5 = Botan::allocate_memory(arg7, 1)
        x23_2 = x0_5 + arg7
        x27_1 = x0_5
        *entry_x8 = x0_5
        entry_x8[2] = x23_2
        memset(x0_5, 0, arg7)
        entry_x8[1] = x23_2
    
    uint64_t x24_2 = zx.q(*arg4)
    size_t x8_9 = *(arg4 + 8)
    __builtin_memset(&var_80, 0, 0x18)
    size_t x28_1
    
    if ((x24_2.d & 1) == 0)
        x28_1 = x24_2 u>> 1
    else
        x28_1 = x8_9
    
    int64_t x20_2
    uint64_t fp_1
    
    if (x28_1 == -4)
        x20_2 = 0
        fp_1 = 0
    label_d8a070:
        *(fp_1 + 1) = (arg7.d).b
        *fp_1 = (arg7 u>> 8).b
        *(fp_1 + 2) = (x28_1.d).b
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x1) x1_3
        
        if ((x24_2.d & 1) != 0)
            x1_3 = *(arg4 + 0x10)
        else
            x1_3 = arg4 + 1
        
        if (x28_1 == 0)
            goto label_d8a0a4
        
        if (x1_3 != 0)
            memmove(fp_1 + 3, x1_3, x28_1)
        label_d8a0a4:
            *(x28_1 + fp_1 + 3) = (arg6.d).b
            int64_t var_e0 = x20_2 - fp_1
            Botan::HKDF_Expand::kdf(&var_98, x27_1, x23_2 - x27_1, arg2, arg3, arg5, arg6, fp_1)
            void* result = var_80.q
            
            if (result != 0)
                var_80:8.q = result
                result = operator delete(result)
            
            if (var_b8 == 0)
                return result
            
            return (*(*var_b8 + 0x10))(var_b8)
    else
        if (((x28_1 + 4) & 0xffffffff80000000) == 0)
            uint64_t x0_9 = operator new(x28_1 + 4)
            x20_2 = x0_9 + x28_1 + 4
            fp_1 = x0_9
            var_80.q = x0_9
            int64_t var_70_2 = x20_2
            memset(x0_9, 0, x28_1 + 4)
            var_80:8.q = x20_2
            goto label_d8a070
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    x0_13 = "HKDF-Expand-Label label too long"

int64_t* x0_14 = Botan::throw_invalid_argument(x0_13, "hkdf_expand_label", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")

if (var_b8 != 0)
    (*(*var_b8 + 0x10))()

sub_1101e04(x0_14)
noreturn
