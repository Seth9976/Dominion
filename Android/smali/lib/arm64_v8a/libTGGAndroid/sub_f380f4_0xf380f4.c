// 函数: sub_f380f4
// 地址: 0xf380f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *(arg1 + 8)
x9[3]
int64_t x19 = *x9
int64_t* x20 = x9[1]
Botan::PK_Decryptor::decrypt(**(arg1 + 0x10), x9[2])
int32_t x20_1
void* var_38
void* var_30_1
int64_t var_28

if (x20 == 0)
    x20_1 = -0x1f
    
    if (var_38 != 0)
        var_30_1 = var_38
        Botan::deallocate_memory(var_38, var_28 - var_38, 1)
else
    size_t x2_1 = *x20
    int64_t var_30
    size_t x8_2 = var_30 - var_38
    *x20 = x8_2
    
    if (x19 == 0 || x2_1 u< x8_2)
        x20_1 = -0xa
        
        if (x2_1 != 0 && x19 != 0)
            memset(x19, 0, x2_1)
            x20_1 = -0xa
        
        if (var_38 != 0)
            var_30_1 = var_38
            Botan::deallocate_memory(var_38, var_28 - var_38, 1)
    else if (x8_2 == 0)
        x20_1 = 0
        
        if (var_38 != 0)
            var_30_1 = var_38
            Botan::deallocate_memory(var_38, var_28 - var_38, 1)
    else
        if (var_38 == 0)
            int64_t* x0_5 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if (var_38 != 0)
                void* var_30_2 = var_38
                Botan::deallocate_memory(var_38, var_28 - var_38, 1)
            
            sub_1101e04(x0_5)
            noreturn
        
        memmove(x19, var_38, x8_2)
        x20_1 = 0
        
        if (var_38 != 0)
            var_30_1 = var_38
            Botan::deallocate_memory(var_38, var_28 - var_38, 1)
return zx.q(x20_1)
