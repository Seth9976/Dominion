// 函数: sub_f3d270
// 地址: 0xf3d270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = *(arg1 + 8)
int32_t x20_1

if (__dynamic_cast(**(arg1 + 0x10), _typeinfo_for_Botan::Private_Key, 
        _typeinfo_for_Botan::RSA_PrivateKey, 0) == 0)
    x20_1 = -0x20
else
    int32_t x8_1 = *x19
    char var_78
    char var_68
    int64_t var_50
    char var_48
    uint64_t var_40
    void* var_38
    void* x19_1
    
    if (x8_1 == 1)
        int64_t x21_2 = *(x19 + 8)
        size_t* x20_2 = *(x19 + 0x10)
        Botan::RSA_PrivateKey::private_key_bits()
        void* var_60
        x19_1 = var_60
        var_78 = 0x1e
        int64_t var_77
        __builtin_strncpy(&var_77, "RSA PRIVATE KEY", 0x10)
        int64_t var_58
        Botan::PEM_Code::encode(x19_1, var_58 - x19_1, &var_78, 0x40)
        uint64_t x8_4 = zx.q(var_48)
        int32_t temp0_1 = x8_4.d & 1
        void* x1_3
        
        if (temp0_1 == 0)
            x1_3 = &var_48 | 1
        else
            x1_3 = var_38
        
        uint64_t x8_5
        
        if (temp0_1 == 0)
            x8_5 = x8_4 u>> 1
        else
            x8_5 = var_40
        
        if (x20_2 == 0)
            x20_1 = -0x1f
            
            if ((zx.d(var_48) & 1) != 0)
            label_f3d464:
                operator delete(var_38)
                
                if ((zx.d(var_78) & 1) == 0)
                    goto label_f3d440
                
                goto label_f3d474
        else
            uint64_t x2_4 = *x20_2
            *x20_2 = x8_5 + 1
            
            if (x21_2 == 0 || x2_4 u< x8_5 + 1)
                x20_1 = -0xa
                
                if (x2_4 != 0 && x21_2 != 0)
                    memset(x21_2, 0, x2_4)
                    x20_1 = -0xa
                
                if ((zx.d(var_48) & 1) != 0)
                    goto label_f3d464
            else
                if (x8_5 == -1)
                    x20_1 = 0
                    
                    if ((zx.d(var_48) & 1) == 0)
                        goto label_f3d43c
                    
                    goto label_f3d464
                
                if (x1_3 == 0)
                    goto label_f3d4f4
                
                memmove(x21_2, x1_3, x8_5 + 1)
                x20_1 = 0
                
                if ((zx.d(var_48) & 1) != 0)
                    goto label_f3d464
        
    label_f3d43c:
        
        if ((zx.d(var_78) & 1) != 0)
        label_f3d474:
            operator delete(var_68.q)
            
            if (x19_1 != 0)
                Botan::deallocate_memory(x19_1, var_50 - x19_1, 1)
        else
        label_f3d440:
            
            if (x19_1 != 0)
                Botan::deallocate_memory(x19_1, var_50 - x19_1, 1)
    else if (x8_1 != 0)
        x20_1 = -0x1e
    else
        int64_t x21_1 = *(x19 + 8)
        int64_t* x20 = *(x19 + 0x10)
        Botan::RSA_PrivateKey::private_key_bits()
        x19_1 = var_48.q
        
        if (x20 == 0)
            x20_1 = -0x1f
            
            if (x19_1 != 0)
                Botan::deallocate_memory(x19_1, var_38 - x19_1, 1)
        else
            size_t x2_1 = *x20
            size_t x8_3 = var_40 - x19_1
            *x20 = x8_3
            
            if (x21_1 == 0 || x2_1 u< x8_3)
                x20_1 = -0xa
                
                if (x2_1 != 0 && x21_1 != 0)
                    memset(x21_1, 0, x2_1)
                    x20_1 = -0xa
                
                if (x19_1 != 0)
                    Botan::deallocate_memory(x19_1, var_38 - x19_1, 1)
            else if (x8_3 == 0)
                x20_1 = 0
                
                if (x19_1 != 0)
                    Botan::deallocate_memory(x19_1, var_38 - x19_1, 1)
            else
                if (x19_1 == 0)
                    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                label_f3d4f4:
                    int64_t* x0_12 = Botan::assertion_failure(
                        "n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                    
                    if ((zx.d(var_48) & 1) == 0)
                        if ((zx.d(var_78) & 1) != 0)
                            goto label_f3d540
                        
                        goto label_f3d50c
                    
                    operator delete(var_38)
                    
                    if ((zx.d(var_78) & 1) == 0)
                    label_f3d50c:
                        
                        if (x19_1 != 0)
                            Botan::deallocate_memory(x19_1, var_50 - x19_1, 1)
                    else
                    label_f3d540:
                        operator delete(var_68.q)
                        
                        if (x19_1 != 0)
                            Botan::deallocate_memory(x19_1, var_50 - x19_1, 1)
                    
                    sub_1101e04(x0_12)
                    noreturn
                
                memmove(x21_1, x19_1, x8_3)
                x20_1 = 0
                Botan::deallocate_memory(x19_1, var_38 - x19_1, 1)

return zx.q(x20_1)
