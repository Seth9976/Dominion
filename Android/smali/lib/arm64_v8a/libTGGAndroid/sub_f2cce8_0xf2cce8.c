// 函数: sub_f2cce8
// 地址: 0xf2cce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)
**(arg1 + 0x10)
int64_t x20 = *x8
int64_t* x21 = x8[1]
Botan::X509_Certificate::data()
Botan::ASN1_Time::to_string()
char var_48
uint64_t x22 = zx.q(var_48)
int32_t temp0 = x22.d & 1
void* var_38
void* x1

if (temp0 == 0)
    x1 = &var_48 | 1
else
    x1 = var_38

uint64_t x8_2
uint64_t var_40

if (temp0 == 0)
    x8_2 = x22 u>> 1
else
    x8_2 = var_40
int32_t x21_1

if (x21 == 0)
    x21_1 = -0x1f
    
    if ((x22.d & 1) != 0)
        operator delete(var_38)
else
    size_t x2_1 = *x21
    *x21 = x8_2 + 1
    
    if (x20 == 0 || x2_1 u< x8_2 + 1)
        x21_1 = -0xa
        
        if (x2_1 != 0 && x20 != 0)
            memset(x20, 0, x2_1)
            x21_1 = -0xa
        
        if ((x22.d & 1) != 0)
            operator delete(var_38)
    else if (x8_2 == -1)
        x21_1 = 0
        
        if ((x22.d & 1) != 0)
            operator delete(var_38)
    else
        if (x1 == 0)
            int64_t* x0_7 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if ((zx.d(var_48) & 1) != 0)
                operator delete(var_38)
            
            sub_1101e04(x0_7)
            noreturn
        
        memmove(x20, x1, x8_2 + 1)
        x21_1 = 0
        
        if ((x22.d & 1) != 0)
            operator delete(var_38)

return zx.q(x21_1)
