// 函数: sub_f2abd8
// 地址: 0xf2abd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::hex_decode(*(arg1 + 8), *(arg1 + 0x10), true)
int64_t* x9 = *(arg1 + 0x20)
int32_t x19_1
void* var_28
void* var_20_1

if (x9 == 0)
    x19_1 = -0x1f
    
    if (var_28 != 0)
        var_20_1 = var_28
        operator delete(var_28)
else
    int64_t x0_1 = *(arg1 + 0x18)
    size_t x2_1 = *x9
    int64_t var_20
    size_t x8_2 = var_20 - var_28
    *x9 = x8_2
    
    if (x0_1 == 0 || x2_1 u< x8_2)
        x19_1 = -0xa
        
        if (x2_1 != 0 && x0_1 != 0)
            memset(x0_1, 0, x2_1)
            x19_1 = -0xa
        
        if (var_28 != 0)
            var_20_1 = var_28
            operator delete(var_28)
    else if (x8_2 == 0)
        x19_1 = 0
        
        if (var_28 != 0)
            var_20_1 = var_28
            operator delete(var_28)
    else
        if (var_28 == 0)
            int64_t* x0_4 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if (var_28 != 0)
                void* var_20_2 = var_28
                operator delete(var_28)
            
            sub_1101e04(x0_4)
            noreturn
        
        memmove(x0_1, var_28, x8_2)
        x19_1 = 0
        
        if (var_28 != 0)
            var_20_1 = var_28
            operator delete(var_28)
return zx.q(x19_1)
