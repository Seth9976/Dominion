// 函数: _ZN5Botan6BigInt6encodeEPhRKS0_NS0_4BaseE
// 地址: 0xcd6234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
Botan::BigInt::BigInt(&result_1)
Botan::BigInt::encode_locked(&result_1)
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_50
    result = Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)

void* var_38
int64_t var_30
int64_t var_28

if (var_30 != var_38)
    if (arg1 == 0 || var_38 == 0)
        int64_t* x0_4 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        
        if (var_38 != 0)
            void* var_30_2 = var_38
            Botan::deallocate_memory(var_38, var_28 - var_38, 1)
        
        sub_1101e04(x0_4)
        noreturn
    
    memmove(arg1, var_38, var_30 - var_38)
else if (var_38 == 0)
    return result

void* var_30_1 = var_38
return Botan::deallocate_memory(var_38, var_28 - var_38, 1)
