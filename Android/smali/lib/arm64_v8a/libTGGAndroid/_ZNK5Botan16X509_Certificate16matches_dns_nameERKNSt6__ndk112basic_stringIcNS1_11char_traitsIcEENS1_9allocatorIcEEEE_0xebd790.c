// 函数: _ZNK5Botan16X509_Certificate16matches_dns_nameERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xebd790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x8 = zx.q(*entry_x1)
uint64_t x8_1

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(entry_x1 + 8)

int32_t x19_1

if (x8_1 == 0)
    x19_1 = 0
else
    char var_60_1 = 6
    int32_t var_5f_1 = 0x534e44
    Botan::X509_Certificate::subject_info(arg1)
    void* var_48
    void* x21_1 = var_48
    void* var_40
    
    if (x21_1 == var_40)
        char var_78_1 = 8
        int32_t var_77
        __builtin_strncpy(&var_77, "Name", 5)
        Botan::X509_Certificate::subject_info(arg1)
        
        if (var_48 != 0)
            void* x8_7 = var_40
            void* x0_8
            
            if (x8_7 == var_48)
                x0_8 = var_48
            else
                void* x21_2 = x8_7
                
                do
                    x21_2 -= 0x18
                    
                    if ((zx.d(*x21_2) & 1) != 0)
                        operator delete(*(x8_7 - 8))
                    
                    x8_7 = x21_2
                while (var_48 != x21_2)
                
                x0_8 = var_48
            
            var_40 = var_48
            operator delete(x0_8)
        
        x21_1 = var_60_1.q
        __builtin_memset(&var_60_1, 0, 0x18)
        var_48 = x21_1
        int128_t var_58
        var_40.o = var_58
        
        if (var_58.q != x21_1)
            goto label_ebd808
        
        goto label_ebd844
    
    if (var_40 == x21_1)
    label_ebd844:
        x19_1 = 0
        
        if (x21_1 != 0)
        label_ebd8c8:
            void* x8_8 = var_40
            void* x0_6
            
            if (x8_8 == x21_1)
                x0_6 = x21_1
            else
                void* x20_4 = x8_8
                
                do
                    x20_4 -= 0x18
                    
                    if ((zx.d(*x20_4) & 1) != 0)
                        operator delete(*(x8_8 - 8))
                    
                    x8_8 = x20_4
                while (x21_1 != x20_4)
                
                x0_6 = var_48
            
            void* var_40_1 = x21_1
            operator delete(x0_6)
    else
    label_ebd808:
        int64_t x20_2 = 0
        int64_t x22_1 = 0
        
        while ((Botan::host_wildcard_match(x21_1 + x20_2, entry_x1) & 1) == 0)
            x21_1 = var_48
            x22_1 += 1
            x20_2 += 0x18
            
            if (x22_1 == ((var_40 - x21_1) s>> 3) * -0x5555555555555555)
                goto label_ebd844
        
        x21_1 = var_48
        x19_1 = 1
        
        if (x21_1 != 0)
            goto label_ebd8c8

return zx.q(x19_1)
