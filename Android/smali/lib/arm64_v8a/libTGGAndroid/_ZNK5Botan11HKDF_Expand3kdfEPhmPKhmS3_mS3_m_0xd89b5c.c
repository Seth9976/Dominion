// 函数: _ZNK5Botan11HKDF_Expand3kdfEPhmPKhmS3_mS3_m
// 地址: 0xd89b5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SymmetricAlgorithm::set_key(*(arg1 + 8) + 8, arg4)
void* var_80
__builtin_memset(&var_80, 0, 0x18)

if (arg3 == 0)
    return nullptr

void* result
void* var_78_1
void* var_78_2
int64_t var_70
char var_64
int64_t arg_0
void* x27_1

if (arg2 == 0)
    void* x8_19 = nullptr
    x27_1 = nullptr
    int32_t x26_2 = 1
    
    do
        int64_t* x0_10 = *(arg1 + 8)
        (*(*x0_10 + 0x18))(x0_10, x27_1, x8_19 - x27_1)
        int64_t* x0_11 = *(arg1 + 8)
        (*(*x0_11 + 0x18))(x0_11, arg8, arg_0)
        int64_t* x0_12 = *(arg1 + 8)
        (*(*x0_12 + 0x18))(x0_12, arg6, arg7)
        int64_t* x0_13 = *(arg1 + 8)
        var_64 = x26_2.b
        (*(*x0_13 + 0x18))(x0_13, &var_64, 1)
        int64_t* x25_1 = *(arg1 + 8)
        int64_t x0_15 = (**x25_1)(x25_1)
        void* x1_12 = var_80
        void* x8_29 = var_78_1 - x1_12
        
        if (x0_15 u> x8_29)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x1_12 = var_80
        else if (x0_15 u< x8_29)
            var_78_1 = x1_12 + x0_15
        
        (*(*x25_1 + 0x20))(x25_1, x1_12)
        x27_1 = var_80
        x8_19 = var_78_1
        uint8_t* x9_4 = x8_19 - x27_1
        uint8_t const* x9_5
        
        x9_5 = x9_4 u> arg3 ? arg3 : x9_4
        
        if (x9_5 != 0)
            goto label_d89e2c
        
        x26_2 += 1
    while ((x26_2 & 0xff) != 0)
    
    result = nullptr
    
    if (x27_1 != 0)
        var_78_2 = x27_1
        Botan::deallocate_memory(x27_1, var_70 - x27_1, 1)
else
    void* x26_1 = nullptr
    x27_1 = nullptr
    result = nullptr
    int32_t fp_1 = 1
    
    do
        int64_t* x0_1 = *(arg1 + 8)
        (*(*x0_1 + 0x18))(x0_1, x27_1, x26_1 - x27_1)
        int64_t* x0_2 = *(arg1 + 8)
        (*(*x0_2 + 0x18))(x0_2, arg8, arg_0)
        int64_t* x0_3 = *(arg1 + 8)
        (*(*x0_3 + 0x18))(x0_3, arg6, arg7)
        int64_t* x0_4 = *(arg1 + 8)
        var_64 = fp_1.b
        (*(*x0_4 + 0x18))(x0_4, &var_64, 1)
        int64_t* x27_2 = *(arg1 + 8)
        int64_t x0_6 = (**x27_2)(x27_2)
        void* x1_5 = var_80
        int64_t x8_12 = var_78_1 - x1_5
        
        if (x0_6 u> x8_12)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x1_5 = var_80
        else if (x0_6 u< x8_12)
            var_78_1 = x1_5 + x0_6
        
        (*(*x27_2 + 0x20))(x27_2, x1_5)
        x27_1 = var_80
        x26_1 = var_78_1
        void* x9_1 = arg3 - result
        void* x8_17 = x26_1 - x27_1
        void* x28_1
        
        x28_1 = x9_1 u< x8_17 ? x9_1 : x8_17
        
        if (x28_1 != 0)
            if (x27_1 == 0)
            label_d89e2c:
                sub_c776cc(Botan::assertion_failure(
                    "n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                noreturn
            
            memmove(arg2 + result, x27_1, x28_1)
        
        result += x28_1
        
        if (result == arg3)
            break
        
        fp_1 += 1
    while ((fp_1 & 0xff) != 0)
    
    if (x27_1 != 0)
        var_78_2 = x27_1
        Botan::deallocate_memory(x27_1, var_70 - x27_1, 1)
return result
