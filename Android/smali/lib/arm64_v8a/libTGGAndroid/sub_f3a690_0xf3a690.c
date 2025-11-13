// 函数: sub_f3a690
// 地址: 0xf3a690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg1 + 8)
int32_t x9 = *x8
char var_38
void* var_28
uint64_t var_30
int32_t x19_1

if (x9 == 1)
    int64_t x20_2 = *(x8 + 8)
    size_t* x19_2 = *(x8 + 0x10)
    Botan::X509::PEM_encode(**(arg1 + 0x10))
    uint64_t x8_3 = zx.q(var_38)
    int32_t temp0_1 = x8_3.d & 1
    void* x1_2
    
    if (temp0_1 == 0)
        x1_2 = &var_38 | 1
    else
        x1_2 = var_28
    
    uint64_t x8_4
    
    if (temp0_1 == 0)
        x8_4 = x8_3 u>> 1
    else
        x8_4 = var_30
    
    if (x19_2 == 0)
        x19_1 = -0x1f
        
        if ((zx.d(var_38) & 1) == 0)
            return zx.q(x19_1)
        
    label_f3a7e8:
        operator delete(var_28)
        return zx.q(x19_1)
    
    uint64_t x2_3 = *x19_2
    *x19_2 = x8_4 + 1
    
    if (x20_2 == 0 || x2_3 u< x8_4 + 1)
        x19_1 = -0xa
        
        if (x2_3 != 0 && x20_2 != 0)
            memset(x20_2, 0, x2_3)
            x19_1 = -0xa
        
        if ((zx.d(var_38) & 1) == 0)
            return zx.q(x19_1)
        
        goto label_f3a7e8
    
    if (x8_4 == -1)
        x19_1 = 0
        
        if ((zx.d(var_38) & 1) != 0)
            goto label_f3a7e8
        
        return zx.q(x19_1)
    
    if (x1_2 != 0)
        memmove(x20_2, x1_2, x8_4 + 1)
        x19_1 = 0
        
        if ((zx.d(var_38) & 1) != 0)
            goto label_f3a7e8
        
        return zx.q(x19_1)
else
    if (x9 != 0)
        return -0x1e
    
    int64_t x20_1 = *(x8 + 8)
    int64_t* x19 = *(x8 + 0x10)
    Botan::Public_Key::subject_public_key()
    void* x0_2
    
    if (x19 == 0)
        x19_1 = -0x1f
        x0_2 = var_38.q
        
        if (x0_2 == 0)
            return zx.q(x19_1)
        
    label_f3a7bc:
        void* var_30_1 = x0_2
        operator delete(x0_2)
        return zx.q(x19_1)
    
    int64_t x1_1 = var_38.q
    size_t x2_1 = *x19
    size_t x8_2 = var_30 - x1_1
    *x19 = x8_2
    
    if (x20_1 == 0 || x2_1 u< x8_2)
        x19_1 = -0xa
        
        if (x2_1 != 0 && x20_1 != 0)
            memset(x20_1, 0, x2_1)
            x19_1 = -0xa
        
        x0_2 = var_38.q
        
        if (x0_2 == 0)
            return zx.q(x19_1)
        
        goto label_f3a7bc
    
    if (x8_2 == 0)
        x19_1 = 0
        x0_2 = var_38.q
        
        if (x0_2 != 0)
            goto label_f3a7bc
        
        return zx.q(x19_1)
    
    if (x1_1 != 0)
        memmove(x20_1, x1_1, x8_2)
        x19_1 = 0
        x0_2 = var_38.q
        
        if (x0_2 != 0)
            goto label_f3a7bc
        
        return zx.q(x19_1)
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
int64_t* x0_7 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

sub_1101e04(x0_7)
noreturn
