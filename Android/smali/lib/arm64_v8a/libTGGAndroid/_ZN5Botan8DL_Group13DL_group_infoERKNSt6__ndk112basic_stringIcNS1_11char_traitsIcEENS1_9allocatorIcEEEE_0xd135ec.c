// 函数: _ZN5Botan8DL_Group13DL_group_infoERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd135ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*arg1)
uint64_t x9 = *(arg1 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 0xf)
    goto label_d1364c

char const* const x0_22

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "ffdhe/ietf/2048").d == 0)
    x0_22 = "0xFFFFFFFFFFFFFFFFADF85458A2BB4A9AAFDC5620273D3CF1D8B9C583CE2D3695A9E13641146433FBCC939DCE249B3EF97D2FE363630C75D8F681B202AEC4617AD3DF1ED5D5FD65612433F51F5F066ED0856365553DED1AF3B557135E7F57C935984F0C70E0E"
else
    uint64_t x8 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d1364c:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0xf)
        goto label_d1368c
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "ffdhe/ietf/3072").d == 0)
        x0_22 = "0xFFFFFFFFFFFFFFFFADF85458A2BB4A9AAFDC5620273D3CF1D8B9C583CE2D3695A9E13641146433FBCC939DCE249B3EF97D2FE363630C75D8F681B202AEC4617AD3DF1ED5D5FD65612433F51F5F066ED0856365553DED1AF3B557135E7F57C935984F0C70E0E68B77E2A689DAF3EFE8721DF158A136ADE73530ACCA4F483A797ABC0AB182B324FB61D108A94BB2C8E3FBB96ADAB760D7F4681D4F42A3DE394DF4AE56EDE76372BB190B07A7C8EE0A6D"
    else
        uint64_t x8_2 = zx.q(*arg1)
        x9 = *(arg1 + 8)
        x10 = x8_2.d & 1
        x11_1 = x8_2 u>> 1
    label_d1368c:
        uint64_t x8_3
        
        if ((x10 & 0xff) == 0)
            x8_3 = x11_1
        else
            x8_3 = x9
        
        if (x8_3 != 0xf)
            goto label_d136cc
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "ffdhe/ietf/4096").d == 0)
            x0_22 = "0xFFFFFFFFFFFFFFFFADF85458A2BB4A9AAFDC5620273D3CF1D8B9C583CE2D3695A9E13641146433FBCC939DCE249B3EF97D2FE363630C75D8F681B202AEC4617AD3DF1ED5D5FD65612433F51F5F066ED0856365553DED1AF3B557135E7F57C935984F0C70E0E68B77E2A689DAF3EFE8721DF158A136ADE73530ACCA4F483A797ABC0AB182B324FB61D108A94BB2C8E3FBB96ADAB760D7F4681D4F42A3DE394DF4AE56EDE76372BB190B07A7C8EE0A6D709"
        else
            uint64_t x8_4 = zx.q(*arg1)
            x9 = *(arg1 + 8)
            x10 = x8_4.d & 1
            x11_1 = x8_4 u>> 1
        label_d136cc:
            uint64_t x8_5
            
            if ((x10 & 0xff) == 0)
                x8_5 = x11_1
            else
                x8_5 = x9
            
            if (x8_5 != 0xf)
                goto label_d1370c
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg1, 0, -ffffffffffffffff, "ffdhe/ietf/6144").d == 0)
                x0_22 = "0xFFFFFFFFFFFFFFFFADF85458A2BB4A9AAFDC5620273D3CF1D8B9C583CE2D3695A9E13641146433FBCC939DCE249B3EF97D2FE363630C75D8F681B202AEC4617AD3DF1ED5D5FD65612433F51F5F066ED0856365553DED1AF3B557135E7F57C935"
            else
                uint64_t x8_6 = zx.q(*arg1)
                x9 = *(arg1 + 8)
                x10 = x8_6.d & 1
                x11_1 = x8_6 u>> 1
            label_d1370c:
                uint64_t x8_7
                
                if ((x10 & 0xff) == 0)
                    x8_7 = x11_1
                else
                    x8_7 = x9
                
                if (x8_7 != 0xf)
                    goto label_d1374c
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "ffdhe/ietf/8192").d == 0)
                    x0_22 = "0xFFFFFFFFFFFFFFFFADF85458A2BB4A9AAFDC5620273D3CF1D8B9C583CE2D3695A9E13641146433FBCC939DCE249B3EF97D2FE363630C75D8F681B202AEC4617AD3DF1ED5D5FD65612433F51F5F066ED0856365553DED1AF3B557135E7F57C935984F0C70E0E68B77E2A689DAF3EFE8721DF158A136ADE73530ACCA4F483A797ABC0AB182B324FB61D108A94BB2C8E3FBB96ADAB760D7F4681D4F42A3DE394DF4AE56EDE76372BB190B07A7C8EE0A6D709E02F"
                else
                    uint64_t x8_8 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_8.d & 1
                    x11_1 = x8_8 u>> 1
                label_d1374c:
                    uint64_t x8_9
                    
                    if ((x10 & 0xff) == 0)
                        x8_9 = x11_1
                    else
                        x8_9 = x9
                    
                    if (x8_9 != 0xe)
                        goto label_d1378c
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, "modp/ietf/1024").d == 0)
                        x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F241"
                    else
                        uint64_t x8_10 = zx.q(*arg1)
                        x9 = *(arg1 + 8)
                        x10 = x8_10.d & 1
                        x11_1 = x8_10 u>> 1
                    label_d1378c:
                        uint64_t x8_11
                        
                        if ((x10 & 0xff) == 0)
                            x8_11 = x11_1
                        else
                            x8_11 = x9
                        
                        if (x8_11 != 0xe)
                            goto label_d137cc
                        
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg1, 0, -ffffffffffffffff, "modp/ietf/1536").d == 0)
                            x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3DC2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F83655D23DCA3AD961C62F356208552BB9ED52"
                        else
                            uint64_t x8_12 = zx.q(*arg1)
                            x9 = *(arg1 + 8)
                            x10 = x8_12.d & 1
                            x11_1 = x8_12 u>> 1
                        label_d137cc:
                            uint64_t x8_13
                            
                            if ((x10 & 0xff) == 0)
                                x8_13 = x11_1
                            else
                                x8_13 = x9
                            
                            if (x8_13 != 0xe)
                                goto label_d1380c
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    arg1, 0, -ffffffffffffffff, "modp/ietf/2048").d == 0)
                                x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3DC2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F83655D23DCA3AD961C62F356208552BB9ED529077096966D670C354E4ABC9804F1"
                            else
                                uint64_t x8_14 = zx.q(*arg1)
                                x9 = *(arg1 + 8)
                                x10 = x8_14.d & 1
                                x11_1 = x8_14 u>> 1
                            label_d1380c:
                                uint64_t x8_15
                                
                                if ((x10 & 0xff) == 0)
                                    x8_15 = x11_1
                                else
                                    x8_15 = x9
                                
                                if (x8_15 != 0xe)
                                    goto label_d1384c
                                
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        arg1, 0, -ffffffffffffffff, "modp/ietf/3072").d == 0)
                                    x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3DC2007CB8A163BF0598D"
                                else
                                    uint64_t x8_16 = zx.q(*arg1)
                                    x9 = *(arg1 + 8)
                                    x10 = x8_16.d & 1
                                    x11_1 = x8_16 u>> 1
                                label_d1384c:
                                    uint64_t x8_17
                                    
                                    if ((x10 & 0xff) == 0)
                                        x8_17 = x11_1
                                    else
                                        x8_17 = x9
                                    
                                    if (x8_17 != 0xe)
                                        goto label_d1388c
                                    
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            arg1, 0, -ffffffffffffffff, "modp/ietf/4096").d == 0)
                                        x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4"
                                    else
                                        uint64_t x8_18 = zx.q(*arg1)
                                        x9 = *(arg1 + 8)
                                        x10 = x8_18.d & 1
                                        x11_1 = x8_18 u>> 1
                                    label_d1388c:
                                        uint64_t x8_19
                                        
                                        if ((x10 & 0xff) == 0)
                                            x8_19 = x11_1
                                        else
                                            x8_19 = x9
                                        
                                        if (x8_19 != 0xe)
                                            goto label_d138cc
                                        
                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                arg1, 0, -ffffffffffffffff, "modp/ietf/6144").d == 0)
                                            x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3DC2007CB8A163BF0598DA48361C55D39A69163F"
                                        else
                                            uint64_t x8_20 = zx.q(*arg1)
                                            x9 = *(arg1 + 8)
                                            x10 = x8_20.d & 1
                                            x11_1 = x8_20 u>> 1
                                        label_d138cc:
                                            uint64_t x8_21
                                            
                                            if ((x10 & 0xff) == 0)
                                                x8_21 = x11_1
                                            else
                                                x8_21 = x9
                                            
                                            if (x8_21 != 0xe)
                                                goto label_d1390c
                                            
                                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                    arg1, 0, -ffffffffffffffff, "modp/ietf/8192").d != 0)
                                                uint64_t x8_22 = zx.q(*arg1)
                                                x9 = *(arg1 + 8)
                                                x10 = x8_22.d & 1
                                                x11_1 = x8_22 u>> 1
                                            label_d1390c:
                                                uint64_t x8_23
                                                
                                                if ((x10 & 0xff) == 0)
                                                    x8_23 = x11_1
                                                else
                                                    x8_23 = x9
                                                
                                                if (x8_23 != 0xd)
                                                    goto label_d1394c
                                                
                                                char const* const x0_24
                                                
                                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                        arg1, 0, -ffffffffffffffff, "modp/srp/1024").d == 0)
                                                    x0_24 = "0xEEAF0AB9ADB38DD69C33F80AFA8FC5E86072618775FF3C0B9EA2314C9C256576D674DF7496EA81D3383B4813D692C6E0E0D5D8E250B98BE48E495C1D6089DAD15DC7D7B46154D6B6CE8EF4AD69B15D4982559B297BCF1885C529F566660E57EC68EDBC3C05726CC02FD4CBF4976EAA9AFD5138FE8376435B9FC61D2FC0EB06E3"
                                                else
                                                    uint64_t x8_24 = zx.q(*arg1)
                                                    x9 = *(arg1 + 8)
                                                    x10 = x8_24.d & 1
                                                    x11_1 = x8_24 u>> 1
                                                label_d1394c:
                                                    uint64_t x8_25
                                                    
                                                    if ((x10 & 0xff) == 0)
                                                        x8_25 = x11_1
                                                    else
                                                        x8_25 = x9
                                                    
                                                    if (x8_25 != 0xd)
                                                        goto label_d1398c
                                                    
                                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                            arg1, 0, -ffffffffffffffff, 
                                                            "modp/srp/1536").d == 0)
                                                        x0_24 = "0x9DEF3CAFB939277AB1F12A8617A47BBBDBA51DF499AC4C80BEEEA9614B19CC4D5F4F5F556E27CBDE51C6A94BE4607A291558903BA0D0F84380B655BB9A22E8DCDF028A7CEC67F0D08134B1C8B97989149B609E0BE3BAB63D47548381DBC5B1FC764E3F4B53DD9DA1158BFD3E2B9C8CF56EDF019539349627DB2FD53D24B7C48665772E437D6C7F8CE442734AF7CCB7AE837C264AE3A9BEB87F8A2FE9B8B5292E5A021FFF5E91479E8CE7A28C2442C6F"
                                                    else
                                                        uint64_t x8_26 = zx.q(*arg1)
                                                        x9 = *(arg1 + 8)
                                                        x10 = x8_26.d & 1
                                                        x11_1 = x8_26 u>> 1
                                                    label_d1398c:
                                                        uint64_t x8_27
                                                        
                                                        if ((x10 & 0xff) == 0)
                                                            x8_27 = x11_1
                                                        else
                                                            x8_27 = x9
                                                        
                                                        if (x8_27 != 0xd)
                                                            goto label_d139cc
                                                        
                                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                arg1, 0, -ffffffffffffffff, 
                                                                "modp/srp/2048").d != 0)
                                                            uint64_t x8_28 = zx.q(*arg1)
                                                            x9 = *(arg1 + 8)
                                                            x10 = x8_28.d & 1
                                                            x11_1 = x8_28 u>> 1
                                                        label_d139cc:
                                                            uint64_t x8_29
                                                            
                                                            if ((x10 & 0xff) == 0)
                                                                x8_29 = x11_1
                                                            else
                                                                x8_29 = x9
                                                            
                                                            if (x8_29 != 0xd)
                                                                goto label_d13a0c
                                                            
                                                            char const* const x0_26
                                                            
                                                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                    arg1, 0, -ffffffffffffffff, 
                                                                    "modp/srp/3072").d == 0)
                                                                x0_26 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3DC2007CB8A163BF0598D"
                                                            else
                                                                uint64_t x8_30 = zx.q(*arg1)
                                                                x9 = *(arg1 + 8)
                                                                x10 = x8_30.d & 1
                                                                x11_1 = x8_30 u>> 1
                                                            label_d13a0c:
                                                                uint64_t x8_31
                                                                
                                                                if ((x10 & 0xff) == 0)
                                                                    x8_31 = x11_1
                                                                else
                                                                    x8_31 = x9
                                                                
                                                                if (x8_31 != 0xd)
                                                                    goto label_d13a4c
                                                                
                                                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                        arg1, 0, -ffffffffffffffff, 
                                                                        "modp/srp/4096").d == 0)
                                                                    x0_26 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4"
                                                                else
                                                                    uint64_t x8_32 = zx.q(*arg1)
                                                                    x9 = *(arg1 + 8)
                                                                    x10 = x8_32.d & 1
                                                                    x11_1 = x8_32 u>> 1
                                                                label_d13a4c:
                                                                    uint64_t x8_33
                                                                    
                                                                    if ((x10 & 0xff) == 0)
                                                                        x8_33 = x11_1
                                                                    else
                                                                        x8_33 = x9
                                                                    
                                                                    if (x8_33 != 0xd)
                                                                        goto label_d13a8c
                                                                    
                                                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                            arg1, 0, -ffffffffffffffff, 
                                                                            "modp/srp/6144").d != 0)
                                                                        uint64_t x8_34 = zx.q(*arg1)
                                                                        x9 = *(arg1 + 8)
                                                                        x10 = x8_34.d & 1
                                                                        x11_1 = x8_34 u>> 1
                                                                    label_d13a8c:
                                                                        uint64_t x8_35
                                                                        
                                                                        if ((x10 & 0xff) == 0)
                                                                            x8_35 = x11_1
                                                                        else
                                                                            x8_35 = x9
                                                                        
                                                                        if (x8_35 == 0xd)
                                                                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                                    arg1, 0, -ffffffffffffffff, 
                                                                                    "modp/srp/8192").d == 0)
                                                                                return
                                                                                    Botan::DL_Group::load_DL_group_info(
                                                                                    "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB", 
                                                                                    "0", "0x13") __tailcall
                                                                            
                                                                            uint64_t x8_36 = zx.q(*arg1)
                                                                            x9 = *(arg1 + 8)
                                                                            x10 = x8_36.d & 1
                                                                            x11_1 = x8_36 u>> 1
                                                                        
                                                                        uint64_t x8_37
                                                                        
                                                                        if ((x10 & 0xff) == 0)
                                                                            x8_37 = x11_1
                                                                        else
                                                                            x8_37 = x9
                                                                        
                                                                        if (x8_37 == 0xc)
                                                                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                                    arg1, 0, -ffffffffffffffff, 
                                                                                    "dsa/jce/1024").d == 0)
                                                                                return
                                                                                    Botan::DL_Group::load_DL_group_info(
                                                                                    "0xFD7F53811D75122952DF4A9C2EECE4E7F611B7523CEF4400C31E3F80B6512669455D402251FB593D8D58FABFC5F5BA30F6CB9B556CD7813B801D346FF26660B76B9950A5A49F9FE8047B1022C24FBBA9D7FEB7C61BF83B57E7C6A8A6150F04FB83F6D3C51EC3023554135A169132F675F3AE2B61D72AEFF22203199DD14801C7", 
                                                                                    "0x9760508F15230BCCB292B982A2EB840BF0581CF5", 
                                                                                    "0x469603512E30278CD3947595DB22EEC9826A6322ADC97344F41D740C325724C8F9EFBAA7D4D803FF8C609DCD100EBC5BDFCFAD7C6A425FAEA786EA2050EBE98351EA1FDA1FDF24D6947AA6B9AA23766953802F4D7D4A8ECBA06D19768A2491FFB16D0EF9C4")
                                                                                    __tailcall
                                                                            
                                                                            uint64_t x8_38 = zx.q(*arg1)
                                                                            x9 = *(arg1 + 8)
                                                                            x10 = x8_38.d & 1
                                                                            x11_1 = x8_38 u>> 1
                                                                        
                                                                        uint64_t x8_39
                                                                        
                                                                        if ((x10 & 0xff) == 0)
                                                                            x8_39 = x11_1
                                                                        else
                                                                            x8_39 = x9
                                                                        
                                                                        if (x8_39 == 0xe)
                                                                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                                    arg1, 0, -ffffffffffffffff, 
                                                                                    "dsa/botan/2048").d == 0)
                                                                                return
                                                                                    Botan::DL_Group::load_DL_group_info(
                                                                                    "0x91C48A4FDFBCF7C02AE95E7DA126122B5DD2864F559B87E8E74A286D52F59BD1DE68DFD645D0E00C60C080031891980374EEB594A532BFD67B9A09EAC4B8663A07910E68F39465FB7040D25DF13932EBAC4347A530ECBA61C854F9B880D3C0C3660080587C45566DADE26BD5A394BE093B4C0F24B5AFFEF8EC6C5B3E57FB89025A9BC16769932131E16D3C94EFCAB18D0DF061203CC53E6103BC72D5594BFD40CA65380F44A9A851DCB075495FC033", 
                                                                                    "0x8CD7D450F86F0AD94EEE4CE469A8756D1EBD1058241943EAFFB0B354585E924D", 
                                                                                    "0xD9F5E0761B4DBD1833D6AB1A961A0996C5F22303F72D84C140F67C431D94AB5715BEA81A0C98D39CE4BCF78D6B9EBC895D34FE89D94091D5848615EF15F5E86F11D96F6C969E20")
                                                                                    __tailcall
                                                                            
                                                                            uint64_t x8_40 = zx.q(*arg1)
                                                                            x9 = *(arg1 + 8)
                                                                            x10 = x8_40.d & 1
                                                                            x11_1 = x8_40 u>> 1
                                                                        
                                                                        uint64_t x8_41
                                                                        
                                                                        if ((x10 & 0xff) == 0)
                                                                            x8_41 = x11_1
                                                                        else
                                                                            x8_41 = x9
                                                                        
                                                                        if (x8_41 == 0xe && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                                arg1, 0, -ffffffffffffffff, 
                                                                                "dsa/botan/3072").d == 0)
                                                                            return
                                                                                Botan::DL_Group::load_DL_group_info(
                                                                                "0xE4B50880759663585E142460CA2D9DFF132F8AE4C840DDA3A2666889124FE5638B84E8A29B7AF3FA1209BE6BFC4B5072ED3B2B7387BAF3F857F478A80228EF3600B76B3DCFB61D20D34465B2506D2CAF87DF6E7DC0CE91BD2D167A46F6ADCC31C531E4F9C7ABBDB92ADDF35B0A806C66292A5F5E17E964DD099903733AC428AB35D80EA6F685BFBA8BE4068E5418AE5ECAD9E8FF073DE2B63E4E7EAD35C8A9B70B5BD47CFB88D373B66F37931939B0AB71B", 
                                                                                "0xB3EBD364EC69EF8CF3BAF643B75734B16339B2E49E5CDE1B59C1E9FB40EE0C5B", 
                                                                                "0x2BED21EEF83964A230AE89BBA71D9F7C39C52FC8229B4E3BC7E5944D329DA10F010EAC9E7BAF6C009FC4EB2960723E2B56DF4663E4C3AC800E9258DE2F7649D206782893F865EFCA498D2EEF30074EA5E8A7AB262712A4D94A2F3B0B9A92EE400FB38A3CC59A5DC7E436D5C004B22E35028381B51C93407EB32D4AE0FD42CB45E12D0ECEE8A26238EDE2082A7B1522113C66CEF8D745C6CF3CB945F84D2F4DE16D44A71DE198270E13F03553C88")
                                                                                __tailcall
                                                                        
                                                                        int64_t* entry_x8
                                                                        *entry_x8 = 0
                                                                        entry_x8[1] = 0
                                                                        return 
                                                                    
                                                                    x0_26 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3DC2007CB8A163BF0598DA48361C55D39A69163F"
                                                            
                                                            return
                                                                Botan::DL_Group::load_DL_group_info(
                                                                x0_26, "0", "0x5") __tailcall
                                                        
                                                        x0_24 = "0xAC6BDB41324A9A9BF166DE5E1389582FAF72B6651987EE07FC3192943DB56050A37329CBB4A099ED8193E0757767A13DD52312AB4B03310DCD7F48A9DA04FD50E8083969EDB767B0CF6095179A163AB3661A05FBD5FAAAE82918A9962F0B93B855F97993EC975EEAA80D740ADBF4"
                                                
                                                return Botan::DL_Group::load_DL_group_info(x0_24, 
                                                    "0", "0x2") __tailcall
                                            
                                            x0_22 = "0xFFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB"

return Botan::DL_Group::load_DL_group_info(x0_22, "0x2") __tailcall
