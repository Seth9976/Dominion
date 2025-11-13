// 函数: sub_f40ce4
// 地址: 0xf40ce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = Botan_FFI::safe_get<Botan::Public_Key, 740844825u>(*(arg1 + 8))
Botan::RandomNumberGenerator* x0_3 =
    Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(*(arg1 + 0x10))
Botan::McEliece_PublicKey* x0_5 = __dynamic_cast(x0_1, _typeinfo_for_Botan::Public_Key, 
    _typeinfo_for_Botan::McEliece_PublicKey, -1)
int32_t x19_1

if (x0_5 == 0)
    x19_1 = -0x20
else
    char* x27_1 = *(arg1 + 0x38)
    uint8_t* x22_1 = *(arg1 + 0x18)
    uint64_t x23_1 = *(arg1 + 0x20)
    uint8_t* x24_1 = *(arg1 + 0x28)
    uint64_t x25_1 = *(arg1 + 0x30)
    size_t x0_7 = strlen(x27_1)
    void* var_78
    int64_t var_68
    
    if (x0_7 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_f40ee0:
        int64_t* x0_16 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        
        if (var_78 != 0)
            void* var_70_2 = var_78
            Botan::deallocate_memory(var_78, var_68 - var_78, 1)
        
        sub_1101e04(x0_16)
        noreturn
    
    int64_t var_90
    void* var_80
    void* x28_1
    
    if (x0_7 u>= 0x17)
        uint64_t fp_1 = (x0_7 + 0x10) & 0xfffffffffffffff0
        void* x0_9 = operator new(fp_1)
        x28_1 = x0_9
        size_t var_88_1 = x0_7
        var_80 = x0_9
        var_90 = fp_1 | 1
        memcpy(x28_1, x27_1, x0_7)
    else
        x28_1 = &var_90 | 1
        var_90.b = (x0_7.d << 1).b
        
        if (x0_7 != 0)
            memcpy(x28_1, x27_1, x0_7)
    
    *(x28_1 + x0_7) = 0
    Botan::mceies_encrypt(x0_5, x22_1, x23_1, x24_1, x25_1, x0_3, &var_90)
    
    if ((zx.d(var_90.b) & 1) != 0)
        operator delete(var_80)
    
    int64_t* x9_1 = *(arg1 + 0x48)
    void* var_70_1
    
    if (x9_1 == 0)
        x19_1 = -0x1f
        
        if (var_78 != 0)
            var_70_1 = var_78
            Botan::deallocate_memory(var_78, var_68 - var_78, 1)
    else
        int64_t x0_13 = *(arg1 + 0x40)
        size_t x2_3 = *x9_1
        int64_t var_70
        size_t x8_6 = var_70 - var_78
        *x9_1 = x8_6
        
        if (x0_13 == 0 || x2_3 u< x8_6)
            x19_1 = -0xa
            
            if (x2_3 != 0 && x0_13 != 0)
                memset(x0_13, 0, x2_3)
                x19_1 = -0xa
            
            if (var_78 != 0)
                var_70_1 = var_78
                Botan::deallocate_memory(var_78, var_68 - var_78, 1)
        else if (x8_6 == 0)
            x19_1 = 0
            
            if (var_78 != 0)
                var_70_1 = var_78
                Botan::deallocate_memory(var_78, var_68 - var_78, 1)
        else
            if (var_78 == 0)
                goto label_f40ee0
            
            memmove(x0_13, var_78, x8_6)
            x19_1 = 0
            
            if (var_78 != 0)
                var_70_1 = var_78
                Botan::deallocate_memory(var_78, var_68 - var_78, 1)

return zx.q(x19_1)
