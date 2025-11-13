// 函数: sub_f40824
// 地址: 0xf40824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
void* x0_1 = __dynamic_cast(**(arg1 + 0x10), _typeinfo_for_Botan::Public_Key, 
    _typeinfo_for_Botan::Curve25519_PublicKey, -1)
int32_t x20_1

if (x0_1 == 0)
    x20_1 = -0x20
else
    int128_t* var_48_1
    __builtin_memset(&var_48_1, 0, 0x18)
    int64_t x21_1 = *(x0_1 + 8)
    int64_t x8_1 = *(x0_1 + 0x10)
    uint64_t x20 = x8_1 - x21_1
    
    if (x8_1 == x21_1)
        x20_1 = -0xa
    else
        if ((x20 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_f40918:
            int64_t* x0_6 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            int128_t* x8_3 = var_48_1
            
            if (x8_3 != 0)
                operator delete(x8_3)
            
            sub_1101e04(x0_6)
            noreturn
        
        int128_t* x0_3 = operator new(x20)
        void* x23_1 = x0_3 + x20
        var_48_1 = x0_3
        void* var_38_1 = x23_1
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = memcpy(x0_3, x21_1, x20)
        void* var_40_1 = x23_1
        
        if (x20 != 0x20)
            x20_1 = -0xa
            operator delete(x0_3)
        else
            int128_t* x8_2 = *x22
            
            if (x8_2 == 0)
                goto label_f40918
            
            v0_1 = x0_3[1]
            x20_1 = 0
            *x8_2 = *x0_3
            x8_2[1] = v0_1
            operator delete(x0_3)

return zx.q(x20_1)
