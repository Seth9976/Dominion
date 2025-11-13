// 函数: _ZNK5Botan10KDF1_180333kdfEPhmPKhmS3_mS3_m
// 地址: 0xd93ed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_80
__builtin_memset(&var_80, 0, 0x18)

if (arg3 == 0)
    return nullptr

void* result
void* var_78_1
void* var_78_2
int64_t var_70
int32_t var_64
int64_t arg_0
void* fp_2

if (arg2 == 0)
    for (int32_t i = 0; i != 0xffffffff; i += 1)
        int64_t* x0_9 = *(arg1 + 8)
        (*(*x0_9 + 0x18))(x0_9, arg4, arg5)
        int64_t* x0_10 = *(arg1 + 8)
        var_64 = _byteswap(i)
        (*(*x0_10 + 0x18))(x0_10, &var_64, 4)
        int64_t* x0_11 = *(arg1 + 8)
        (*(*x0_11 + 0x18))(x0_11, arg8, arg_0)
        int64_t* x0_12 = *(arg1 + 8)
        (*(*x0_12 + 0x18))(x0_12, arg6, arg7)
        int64_t* x27_1 = *(arg1 + 8)
        int64_t x0_14 = (**x27_1)(x27_1)
        void* x1_11 = var_80
        void* x8_33 = var_78_1 - x1_11
        
        if (x0_14 u> x8_33)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x1_11 = var_80
        else if (x0_14 u< x8_33)
            var_78_1 = x1_11 + x0_14
        
        (*(*x27_1 + 0x20))(x27_1, x1_11)
        fp_2 = var_80
        uint8_t* x8_39 = var_78_1 - fp_2
        uint8_t const* x8_40
        
        x8_40 = x8_39 u> arg3 ? arg3 : x8_39
        
        if (x8_40 != 0)
            goto label_d9418c
    
    result = nullptr
    
    if (fp_2 != 0)
        var_78_2 = fp_2
        Botan::deallocate_memory(fp_2, var_70 - fp_2, 1)
else
    int32_t x19_1 = 0
    result = nullptr
    bool cond:2_1
    
    do
        int64_t* x0 = *(arg1 + 8)
        (*(*x0 + 0x18))(x0, arg4, arg5)
        int64_t* x0_1 = *(arg1 + 8)
        var_64 = _byteswap(x19_1)
        (*(*x0_1 + 0x18))(x0_1, &var_64, 4)
        int64_t* x0_2 = *(arg1 + 8)
        (*(*x0_2 + 0x18))(x0_2, arg8, arg_0)
        int64_t* x0_3 = *(arg1 + 8)
        (*(*x0_3 + 0x18))(x0_3, arg6, arg7)
        int64_t* fp_1 = *(arg1 + 8)
        int64_t x0_5 = (**fp_1)(fp_1)
        void* x1_4 = var_80
        int64_t x8_13 = var_78_1 - x1_4
        
        if (x0_5 u> x8_13)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x1_4 = var_80
        else if (x0_5 u< x8_13)
            var_78_1 = x1_4 + x0_5
        
        (*(*fp_1 + 0x20))(fp_1, x1_4)
        fp_2 = var_80
        void* x9_1 = arg3 - result
        void* x8_19 = var_78_1 - fp_2
        void* x28_1
        
        x28_1 = x9_1 u< x8_19 ? x9_1 : x8_19
        
        if (x28_1 != 0)
            if (fp_2 == 0)
            label_d9418c:
                sub_c776cc(Botan::assertion_failure(
                    "n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                noreturn
            
            memmove(arg2 + result, fp_2, x28_1)
        
        result += x28_1
        
        if (result == arg3)
            break
        
        cond:2_1 = x19_1 != 0xfffffffe
        x19_1 += 1
    while (cond:2_1)
    
    if (fp_2 != 0)
        var_78_2 = fp_2
        Botan::deallocate_memory(fp_2, var_70 - fp_2, 1)
return result
