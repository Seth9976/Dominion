// 函数: sub_f39498
// 地址: 0xf39498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
x22[4]
Botan::PK_Key_Agreement::derive_key(**(arg1 + 0x10), **x22, x22[1], x22[2], x22[3])
void* var_60
void* x20 = var_60
void* var_48_1
__builtin_memset(&var_48_1, 0, 0x18)
int64_t var_58
uint64_t x21 = var_58 - x20
void* var_38_1
void* var_40_1
void* x8_4
void* x19_1

if (var_58 == x20)
    x8_4 = nullptr
    x19_1 = nullptr
    int64_t* x9_2
    
    if (x20 != 0)
    label_f39584:
        void* var_58_1 = x20
        int64_t var_50
        Botan::deallocate_memory(x20, var_50 - x20, 1)
        x19_1 = var_48_1
        x8_4 = var_40_1
        x9_2 = *x22
        
        if (x9_2 != 0)
            goto label_f39534
        
        goto label_f395a4
    
label_f3952c:
    x9_2 = *x22
    void* x0_5
    int32_t x19_2
    
    if (x9_2 == 0)
    label_f395a4:
        x19_2 = -0x1f
        x0_5 = var_48_1
        
        if (x0_5 == 0)
            return zx.q(x19_2)
        
    label_f395d8:
        void* var_40_3 = x0_5
        Botan::deallocate_memory(x0_5, var_38_1 - x0_5, 1)
        return zx.q(x19_2)
    
label_f39534:
    int64_t x0_4 = x22[5]
    size_t x2_2 = *x9_2
    size_t x8_5 = x8_4 - x19_1
    *x9_2 = x8_5
    
    if (x0_4 == 0 || x2_2 u< x8_5)
        x19_2 = -0xa
        
        if (x2_2 != 0 && x0_4 != 0)
            memset(x0_4, 0, x2_2)
            x19_2 = -0xa
        
        x0_5 = var_48_1
        
        if (x0_5 == 0)
            return zx.q(x19_2)
        
        goto label_f395d8
    
    if (x8_5 == 0)
        x19_2 = 0
        x0_5 = var_48_1
        
        if (x0_5 != 0)
            goto label_f395d8
        
        return zx.q(x19_2)
    
    if (x19_1 != 0)
        memmove(x0_4, x19_1, x8_5)
        x19_2 = 0
        x0_5 = var_48_1
        
        if (x0_5 != 0)
            goto label_f395d8
        
        return zx.q(x19_2)
else
    if ((x21 & 0xffffffff80000000) == 0)
        void* x0_2 = Botan::allocate_memory(x21, 1)
        x20 = var_60
        x19_1 = x0_2
        var_48_1 = x0_2
        void* var_40_2 = x0_2
        size_t x21_1 = var_58 - x20
        x8_4 = x0_2
        var_38_1 = x0_2 + x21
        
        if (x21_1 s>= 1)
            memcpy(x19_1, x20, x21_1)
            x8_4 = x19_1 + x21_1
        
        var_40_1 = x8_4
        
        if (x20 != 0)
            goto label_f39584
        
        goto label_f3952c
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_8 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
void* x8_8 = var_48_1

if (x8_8 != 0)
    void* var_40_4 = x8_8
    Botan::deallocate_memory(x8_8, var_38_1 - x8_8, 1)

sub_1101e04(x0_8)
noreturn
