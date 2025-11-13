// 函数: sub_f387b8
// 地址: 0xf387b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *(arg1 + 8)
Botan::RandomNumberGenerator* x20 = **(arg1 + 0x10)
int64_t x19 = *x9
int64_t* x21 = x9[1]
Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(x9[2])
Botan::PK_Signer::signature(x20)
int32_t x20_1
void* var_38
void* var_30_1

if (x21 == 0)
    x20_1 = -0x1f
    
    if (var_38 != 0)
        var_30_1 = var_38
        operator delete(var_38)
else
    size_t x2_1 = *x21
    int64_t var_30
    size_t x8_2 = var_30 - var_38
    *x21 = x8_2
    
    if (x19 == 0 || x2_1 u< x8_2)
        x20_1 = -0xa
        
        if (x2_1 != 0 && x19 != 0)
            memset(x19, 0, x2_1)
            x20_1 = -0xa
        
        if (var_38 != 0)
            var_30_1 = var_38
            operator delete(var_38)
    else if (x8_2 == 0)
        x20_1 = 0
        
        if (var_38 != 0)
            var_30_1 = var_38
            operator delete(var_38)
    else
        if (var_38 == 0)
            int64_t* x0_7 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if (var_38 != 0)
                void* var_30_2 = var_38
                operator delete(var_38)
            
            sub_1101e04(x0_7)
            noreturn
        
        memmove(x19, var_38, x8_2)
        x20_1 = 0
        
        if (var_38 != 0)
            var_30_1 = var_38
            operator delete(var_38)
return zx.q(x20_1)
