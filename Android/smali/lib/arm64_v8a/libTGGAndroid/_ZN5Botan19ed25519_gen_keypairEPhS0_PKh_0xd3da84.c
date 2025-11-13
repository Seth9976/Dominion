// 函数: _ZN5Botan19ed25519_gen_keypairEPhS0_PKh
// 地址: 0xd3da84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
Botan::SHA_512::SHA_512()
void* __offset(vtable_for_Botan::MDx_HashFunction, 0x10) var_c8
(*(var_c8 + 0x18))(&var_c8, arg3, 0x20)
uint8_t var_78[0x1f]
(*(var_c8 + 0x20))(&var_c8, &var_78)
var_78[0] &= 0xf8
char var_59
char var_59_1 = 0x40 | (zx.d(var_59) & 0x3f).b
int128_t v0
int128_t v1
v0, v1 = Botan::ge_scalarmult_base(arg1, &var_78)

if (arg2 == 0 || arg3 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    v0 = *(arg3 + 0x10)
    *arg2 = *arg3
    *(arg2 + 0x10) = v0
    
    if (arg1 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        v0 = *(arg1 + 0x10)
        *(arg2 + 0x20) = *arg1
        *(arg2 + 0x30) = v0
        var_c8 = _vtable_for_Botan::SHA_512 + 0x10
        void* var_90
        
        if (var_90 != 0)
            void* var_88_1 = var_90
            int64_t var_80
            Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 3, 8)
        
        void* result_1
        void* result = result_1
        var_c8 = _vtable_for_Botan::MDx_HashFunction + 0x10
        
        if (result != 0)
            void* result_2 = result
            int64_t var_a0
            result = Botan::deallocate_memory(result, var_a0 - result, 1)
        
        if (*(x22 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
