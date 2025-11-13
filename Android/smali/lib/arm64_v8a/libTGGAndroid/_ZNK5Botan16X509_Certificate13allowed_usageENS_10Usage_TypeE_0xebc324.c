// 函数: _ZNK5Botan16X509_Certificate13allowed_usageENS_10Usage_TypeE
// 地址: 0xebc324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
int32_t x20_1

if (entry_x1 u> 5)
    x20_1 = 0
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x19_1 = arg1
    x20_1 = 1
    char var_38_1
    int32_t x0_13
    
    switch (entry_x1)
        case 1
            if (*(Botan::X509_Certificate::data() + 0x438) == 0)
            label_ebc3d0:
                var_38_1 = 0x1e
                int64_t var_37
                __builtin_strncpy(&var_37, "PKIX.ServerAuth", 0x10)
                x0_13 = Botan::X509_Certificate::allowed_extended_usage(x19_1)
            label_ebc560:
                x20_1 = x0_13
                char var_28
                
                if ((zx.d(var_38_1) & 1) != 0)
                    operator delete(var_28.q)
            else
                if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 8) != 0)
                    goto label_ebc3d0
                
                if (*(Botan::X509_Certificate::data() + 0x438) == 0)
                    goto label_ebc3d0
                
                if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 0x20) != 0)
                    goto label_ebc3d0
                
                if (*(Botan::X509_Certificate::data() + 0x438) == 0)
                    goto label_ebc3d0
                
                if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 0x80) != 0)
                    goto label_ebc3d0
                
                x20_1 = 0
        case 2
            if (*(Botan::X509_Certificate::data() + 0x438) == 0)
            label_ebc444:
                var_38_1 = 0x1e
                int64_t var_37_1
                __builtin_strncpy(&var_37_1, "PKIX.ClientAuth", 0x10)
                x0_13 = Botan::X509_Certificate::allowed_extended_usage(x19_1)
                goto label_ebc560
            
            if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 0x80) != 0)
                goto label_ebc444
            
            if (*(Botan::X509_Certificate::data() + 0x438) == 0)
                goto label_ebc444
            
            if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 8) != 0)
                goto label_ebc444
            
            x20_1 = 0
        case 3
            int64_t x8_12 = *(Botan::X509_Certificate::data() + 0x428)
            uint32_t x8_13
            
            if (x8_12 u<= 2)
                x8_13 = zx.d(*(Botan::X509_Certificate::data() + 0x43c))
            
            if (x8_12 u<= 2 && x8_13 != 0)
                x20_1 = 1
            else
                x20_1 = zx.d(*(Botan::X509_Certificate::data() + 0x43d)) != 0 ? 1 : 0
        case 4
            if (*(Botan::X509_Certificate::data() + 0x438) == 0)
            label_ebc544:
                __builtin_strncpy(&var_38_1, " PKIX.OCSPSigning", 0x12)
                x0_13 = Botan::X509_Certificate::allowed_extended_usage(x19_1)
                goto label_ebc560
            
            if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 0x80) != 0)
                goto label_ebc544
            
            if (*(Botan::X509_Certificate::data() + 0x438) == 0)
                goto label_ebc544
            
            if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 0x40) != 0)
                goto label_ebc544
            
            x20_1 = 0
        case 5
            if (*(Botan::X509_Certificate::data() + 0x438) == 0)
                x20_1 = 1
            else if ((zx.d(*(Botan::X509_Certificate::data() + 0x439)) & 0x20) != 0)
                x20_1 = 1
            else if (*(Botan::X509_Certificate::data() + 0x438) == 0)
                x20_1 = 1
            else
                x20_1 = zx.d(*(Botan::X509_Certificate::data() + 0x439)) u>> 4 & 1

return zx.q(x20_1) & 1
