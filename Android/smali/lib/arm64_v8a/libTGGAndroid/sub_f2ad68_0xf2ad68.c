// 函数: sub_f2ad68
// 地址: 0xf2ad68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::base64_encode(*(arg1 + 8), *(arg1 + 0x10))
char var_38
uint64_t x8 = zx.q(var_38)
int64_t* x9 = *(arg1 + 0x20)
int32_t temp0 = x8.d & 1
void* var_28
void* x1_1

if (temp0 == 0)
    x1_1 = &var_38 | 1
else
    x1_1 = var_28

uint64_t x8_1
uint64_t var_30

if (temp0 == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = var_30
int32_t x19_1

if (x9 == 0)
    x19_1 = -0x1f
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
else
    int64_t x0_1 = *(arg1 + 0x18)
    size_t x2_1 = *x9
    *x9 = x8_1 + 1
    
    if (x0_1 == 0 || x2_1 u< x8_1 + 1)
        x19_1 = -0xa
        
        if (x2_1 != 0 && x0_1 != 0)
            memset(x0_1, 0, x2_1)
            x19_1 = -0xa
        
        if ((zx.d(var_38) & 1) != 0)
            operator delete(var_28)
    else if (x8_1 == -1)
        x19_1 = 0
        
        if ((zx.d(var_38) & 1) != 0)
            operator delete(var_28)
    else
        if (x1_1 == 0)
            int64_t* x0_4 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if ((zx.d(var_38) & 1) != 0)
                operator delete(var_28)
            
            sub_1101e04(x0_4)
            noreturn
        
        memmove(x0_1, x1_1, x8_1 + 1)
        x19_1 = 0
        
        if ((zx.d(var_38) & 1) != 0)
            operator delete(var_28)

return zx.q(x19_1)
