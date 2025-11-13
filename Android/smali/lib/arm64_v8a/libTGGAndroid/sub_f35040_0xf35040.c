// 函数: sub_f35040
// 地址: 0xf35040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 8)
uint32_t x9 = zx.d(*x8)
char var_50
void* var_40
char var_38
uint64_t var_30
int32_t x20_1

if (x9 == 0)
label_f3506c:
    int64_t x19_1 = *(x8 + 8)
    int64_t* x20 = *(x8 + 0x10)
    Botan::BigInt::to_dec_string()
    uint64_t x8_1 = zx.q(var_38)
    int32_t temp0_1 = x8_1.d & 1
    void* var_28
    void* x1_1
    
    if (temp0_1 == 0)
        x1_1 = &var_38 | 1
    else
        x1_1 = var_28
    
    uint64_t x8_2
    
    if (temp0_1 == 0)
        x8_2 = x8_1 u>> 1
    else
        x8_2 = var_30
    
    if (x20 == 0)
        x20_1 = -0x1f
        
        if ((zx.d(var_38) & 1) == 0)
            return zx.q(x20_1)
        
    label_f351ac:
        operator delete(var_28)
        return zx.q(x20_1)
    
    size_t x2_1 = *x20
    *x20 = x8_2 + 1
    
    if (x19_1 == 0 || x2_1 u< x8_2 + 1)
        x20_1 = -0xa
        
        if (x2_1 != 0 && x19_1 != 0)
            memset(x19_1, 0, x2_1)
            x20_1 = -0xa
        
        if ((zx.d(var_38) & 1) == 0)
            return zx.q(x20_1)
        
        goto label_f351ac
    
    if (x8_2 == -1)
        x20_1 = 0
        
        if ((zx.d(var_38) & 1) != 0)
            goto label_f351ac
        
        return zx.q(x20_1)
    
    if (x1_1 != 0)
        memmove(x19_1, x1_1, x8_2 + 1)
        x20_1 = 0
        
        if ((zx.d(var_38) & 1) != 0)
            goto label_f351ac
        
        return zx.q(x20_1)
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    if (x9 != 0x10)
        if (x9 == 0xa)
            goto label_f3506c
        
        return -0x20
    
    int64_t x19_2 = *(x8 + 8)
    size_t* x20_2 = *(x8 + 0x10)
    Botan::BigInt::encode(**(arg1 + 0x10))
    uint8_t* x0_2 = var_38.q
    uint8_t* var_30_1
    
    if (x0_2 == var_30)
        var_50 = 4
        int16_t var_4f_1 = 0x3030
        char var_4d_1 = 0
        
        if (x0_2 != 0)
            var_30_1 = x0_2
            operator delete(x0_2)
    else
        Botan::hex_encode(x0_2, var_30 - x0_2, true)
        x0_2 = var_38.q
        
        if (x0_2 != 0)
            var_30_1 = x0_2
            operator delete(x0_2)
    uint64_t x8_6 = zx.q(var_50)
    int32_t temp1_1 = x8_6.d & 1
    void* x1_3
    
    if (temp1_1 == 0)
        x1_3 = &var_50 | 1
    else
        x1_3 = var_40
    
    uint64_t x8_7
    uint64_t var_48
    
    if (temp1_1 == 0)
        x8_7 = x8_6 u>> 1
    else
        x8_7 = var_48
    
    if (x20_2 == 0)
        x20_1 = -0x1f
        
        if ((zx.d(var_50) & 1) == 0)
            return zx.q(x20_1)
        
    label_f35204:
        operator delete(var_40)
        return zx.q(x20_1)
    
    uint64_t x2_3 = *x20_2
    *x20_2 = x8_7 + 1
    
    if (x19_2 == 0 || x2_3 u< x8_7 + 1)
        x20_1 = -0xa
        
        if (x2_3 != 0 && x19_2 != 0)
            memset(x19_2, 0, x2_3)
            x20_1 = -0xa
        
        if ((zx.d(var_50) & 1) == 0)
            return zx.q(x20_1)
        
        goto label_f35204
    
    if (x8_7 == -1)
        x20_1 = 0
        
        if ((zx.d(var_50) & 1) != 0)
            goto label_f35204
        
        return zx.q(x20_1)
    
    if (x1_3 != 0)
        memmove(x19_2, x1_3, x8_7 + 1)
        x20_1 = 0
        
        if ((zx.d(var_50) & 1) != 0)
            goto label_f35204
        
        return zx.q(x20_1)
int64_t* x0_8 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

sub_1101e04(x0_8)
noreturn
