// 函数: sub_f3baa0
// 地址: 0xf3baa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21 = *(arg1 + 8)
size_t x0_1 = strlen(x21)
void* var_48

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t var_60
    void* var_50
    void* x22_1
    
    if (x0_1 u>= 0x17)
        uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x23_1)
        x22_1 = x0_3
        size_t var_58_1 = x0_1
        var_50 = x0_3
        var_60 = x23_1 | 1
        memcpy(x22_1, x21, x0_1)
    else
        x22_1 = &var_60 | 1
        var_60.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x22_1, x21, x0_1)
    
    *(x22_1 + x0_1) = 0
    Botan::pkcs_hash_id(&var_60)
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    
    int64_t* x9_1 = *(arg1 + 0x18)
    void* x0_8
    int32_t x19_1
    
    if (x9_1 == 0)
        x19_1 = -0x1f
        x0_8 = var_48
        
        if (x0_8 == 0)
            return zx.q(x19_1)
        
    label_f3bbb4:
        void* var_40_1 = x0_8
        operator delete(x0_8)
        return zx.q(x19_1)
    
    int64_t x0_7 = *(arg1 + 0x10)
    size_t x2_2 = *x9_1
    int64_t var_40
    size_t x8_6 = var_40 - var_48
    *x9_1 = x8_6
    
    if (x0_7 == 0 || x2_2 u< x8_6)
        x19_1 = -0xa
        
        if (x2_2 != 0 && x0_7 != 0)
            memset(x0_7, 0, x2_2)
            x19_1 = -0xa
        
        x0_8 = var_48
        
        if (x0_8 == 0)
            return zx.q(x19_1)
        
        goto label_f3bbb4
    
    if (x8_6 == 0)
        x19_1 = 0
        x0_8 = var_48
        
        if (x0_8 != 0)
            goto label_f3bbb4
        
        return zx.q(x19_1)
    
    if (var_48 != 0)
        memmove(x0_7, var_48, x8_6)
        x19_1 = 0
        x0_8 = var_48
        
        if (x0_8 != 0)
            goto label_f3bbb4
        
        return zx.q(x19_1)

int64_t* x0_10 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if (var_48 != 0)
    void* var_40_2 = var_48
    operator delete(var_48)

sub_1101e04(x0_10)
noreturn
