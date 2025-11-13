// 函数: sub_f3a920
// 地址: 0xf3a920
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
    Botan::PKCS8::PEM_encode(**(arg1 + 0x10))
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
        
        operator delete(var_28)
        return zx.q(x19_1)
    
    if (x8_4 == -1)
        x19_1 = 0
        
        if ((zx.d(var_38) & 1) == 0)
            return zx.q(x19_1)
        
        operator delete(var_28)
        return zx.q(x19_1)
    
    if (x1_2 != 0)
        memmove(x20_2, x1_2, x8_4 + 1)
        x19_1 = 0
        
        if ((zx.d(var_38) & 1) == 0)
            return zx.q(x19_1)
        
        operator delete(var_28)
        return zx.q(x19_1)
else
    if (x9 != 0)
        return -0x1e
    
    int64_t x21_1 = *(x8 + 8)
    int64_t* x19 = *(x8 + 0x10)
    Botan::Private_Key::private_key_info()
    void* x20_1 = var_38.q
    
    if (x19 == 0)
        x19_1 = -0x1f
        
        if (x20_1 == 0)
            return zx.q(x19_1)
        
        Botan::deallocate_memory(x20_1, var_28 - x20_1, 1)
        return zx.q(x19_1)
    
    size_t x2_1 = *x19
    size_t x8_2 = var_30 - x20_1
    *x19 = x8_2
    
    if (x21_1 == 0 || x2_1 u< x8_2)
        x19_1 = -0xa
        
        if (x2_1 != 0 && x21_1 != 0)
            memset(x21_1, 0, x2_1)
            x19_1 = -0xa
        
        if (x20_1 == 0)
            return zx.q(x19_1)
        
        Botan::deallocate_memory(x20_1, var_28 - x20_1, 1)
        return zx.q(x19_1)
    
    if (x8_2 == 0)
        x19_1 = 0
        
        if (x20_1 == 0)
            return zx.q(x19_1)
        
        Botan::deallocate_memory(x20_1, var_28 - x20_1, 1)
        return zx.q(x19_1)
    
    if (x20_1 != 0)
        memmove(x21_1, x20_1, x8_2)
        Botan::deallocate_memory(x20_1, var_28 - x20_1, 1)
        return 0
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
int64_t* x0_8 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

sub_1101e04(x0_8)
noreturn
