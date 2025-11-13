// 函数: _ZNK5Botan12HKDF_Extract3kdfEPhmPKhmS3_mS3_m
// 地址: 0xd8992c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_68
__builtin_memset(&var_68, 0, 0x18)
int64_t* x0 = *(arg1 + 8)
uint64_t var_80
int64_t var_58

if (arg7 == 0)
    size_t x0_2 = (**x0)()
    __builtin_memset(&var_80, 0, 0x18)
    uint64_t x26_1
    
    if (x0_2 == 0)
        x26_1 = 0
    label_d899e0:
        Botan::SymmetricAlgorithm::set_key(&x0[1], x26_1)
        uint64_t x0_6 = var_80
        
        if (x0_6 != 0)
            operator delete(x0_6)
        
        goto label_d899f0
    
    if ((x0_2 & 0xffffffff80000000) == 0)
        uint64_t x0_4 = operator new(x0_2)
        int64_t x27_1 = x0_4 + x0_2
        x26_1 = x0_4
        var_80 = x0_4
        int64_t var_70_1 = x27_1
        memset(x0_4, 0, x0_2)
        int64_t var_78_1 = x27_1
        goto label_d899e0
else
    Botan::SymmetricAlgorithm::set_key(&x0[1], arg6)
label_d899f0:
    int64_t* x0_7 = *(arg1 + 8)
    (*(*x0_7 + 0x18))(x0_7, arg4, arg5)
    int64_t* x21_1 = *(arg1 + 8)
    int64_t x0_9 = (**x21_1)(x21_1)
    void* x1_3 = var_68
    void* var_60
    int64_t x8_8 = var_60 - x1_3
    
    if (x0_9 u> x8_8)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_68)
        x1_3 = var_68
    else if (x0_9 u< x8_8)
        var_60 = x1_3 + x0_9
    
    (*(*x21_1 + 0x20))(x21_1, x1_3)
    void* x21_2 = var_68
    uint8_t* result_1 = var_60 - x21_2
    uint8_t const* result
    
    result = result_1 u> arg3 ? arg3 : result_1
    
    if (result == 0)
        if (x21_2 == 0)
            return result
        
        goto label_d89a94
    
    if (arg2 != 0 && x21_2 != 0)
        memmove(arg2, x21_2, result)
    label_d89a94:
        void* var_60_1 = x21_2
        Botan::deallocate_memory(x21_2, var_58 - x21_2, 1)
        return result
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

int64_t* x0_15 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
uint64_t x8_15 = var_80

if (x8_15 != 0)
    operator delete(x8_15)

void* x0_17 = var_68

if (x0_17 != 0)
    void* var_60_2 = x0_17
    Botan::deallocate_memory(x0_17, var_58 - x0_17, 1)

sub_1101e04(x0_15)
noreturn
