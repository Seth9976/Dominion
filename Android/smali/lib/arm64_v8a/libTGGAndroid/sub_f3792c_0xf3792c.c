// 函数: sub_f3792c
// 地址: 0xf3792c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *(arg1 + 8)
int64_t* x20 = **(arg1 + 0x10)
int64_t x19 = *x9
int64_t* x23 = x9[1]
(*(*x20 + 0x20))(x20, x9[2], x9[3], 
    Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(x9[4]))
int32_t x20_1
void* var_48
void* var_40_1

if (x23 == 0)
    x20_1 = -0x1f
    
    if (var_48 != 0)
        var_40_1 = var_48
        operator delete(var_48)
else
    size_t x2_1 = *x23
    int64_t var_40
    size_t x8_3 = var_40 - var_48
    *x23 = x8_3
    
    if (x19 == 0 || x2_1 u< x8_3)
        x20_1 = -0xa
        
        if (x2_1 != 0 && x19 != 0)
            memset(x19, 0, x2_1)
            x20_1 = -0xa
        
        if (var_48 != 0)
            var_40_1 = var_48
            operator delete(var_48)
    else if (x8_3 == 0)
        x20_1 = 0
        
        if (var_48 != 0)
            var_40_1 = var_48
            operator delete(var_48)
    else
        if (var_48 == 0)
            int64_t* x0_7 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if (var_48 != 0)
                void* var_40_2 = var_48
                operator delete(var_48)
            
            sub_1101e04(x0_7)
            noreturn
        
        memmove(x19, var_48, x8_3)
        x20_1 = 0
        
        if (var_48 != 0)
            var_40_1 = var_48
            operator delete(var_48)
return zx.q(x20_1)
