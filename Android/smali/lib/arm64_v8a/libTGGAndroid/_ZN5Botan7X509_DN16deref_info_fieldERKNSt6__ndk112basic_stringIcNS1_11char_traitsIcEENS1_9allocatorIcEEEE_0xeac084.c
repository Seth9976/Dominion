// 函数: _ZN5Botan7X509_DN16deref_info_fieldERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xeac084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*arg1)
uint64_t x9 = *(arg1 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_eac0e4

int64_t x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    arg1, 0, -ffffffffffffffff, "Name")
char* entry_x8

if (x0_1.d != 0)
    uint64_t x8 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_eac0e4:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0xa)
        goto label_eac124
    
    x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "CommonName")
    
    if (x0_1.d != 0)
        uint64_t x8_2 = zx.q(*arg1)
        x9 = *(arg1 + 8)
        x10 = x8_2.d & 1
        x11_1 = x8_2 u>> 1
    label_eac124:
        uint64_t x8_3
        
        if ((x10 & 0xff) == 0)
            x8_3 = x11_1
        else
            x8_3 = x9
        
        if (x8_3 != 2)
            goto label_eac164
        
        x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, 0x76e536)
        
        if (x0_1.d != 0)
            uint64_t x8_4 = zx.q(*arg1)
            x9 = *(arg1 + 8)
            x10 = x8_4.d & 1
            x11_1 = x8_4 u>> 1
        label_eac164:
            uint64_t x8_5
            
            if ((x10 & 0xff) == 0)
                x8_5 = x11_1
            else
                x8_5 = x9
            
            if (x8_5 != 0xc)
                goto label_eac1a4
            
            int64_t x0_5
            int128_t v0_1
            x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "SerialNumber")
            char x9_2
            
            if (x0_5.d == 0)
                v0_1 = (*"X520.SerialNumber")[0].o
                x9_2 = 0x72
            else
                uint64_t x8_6 = zx.q(*arg1)
                x9 = *(arg1 + 8)
                x10 = x8_6.d & 1
                x11_1 = x8_6 u>> 1
            label_eac1a4:
                uint64_t x8_7
                
                if ((x10 & 0xff) == 0)
                    x8_7 = x11_1
                else
                    x8_7 = x9
                
                if (x8_7 != 2)
                    goto label_eac1e4
                
                x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg1, 0, -ffffffffffffffff, 0x73dcf2)
                
                if (x0_5.d == 0)
                    v0_1 = (*"X520.SerialNumber")[0].o
                    x9_2 = 0x72
                else
                    uint64_t x8_8 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_8.d & 1
                    x11_1 = x8_8 u>> 1
                label_eac1e4:
                    uint64_t x8_9
                    
                    if ((x10 & 0xff) == 0)
                        x8_9 = x11_1
                    else
                        x8_9 = x9
                    
                    int64_t x0_8
                    
                    if (x8_9 == 7)
                        x0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, "Country")
                        
                        if (x0_8.d == 0)
                        label_eac584:
                            *entry_x8 = 0x18
                            __builtin_strncpy(&entry_x8[1], "X520.Country", 0xd)
                            return x0_8
                        
                        uint64_t x8_10 = zx.q(*arg1)
                        x9 = *(arg1 + 8)
                        x10 = x8_10.d & 1
                        x11_1 = x8_10 u>> 1
                    
                    uint64_t x8_11
                    
                    if ((x10 & 0xff) == 0)
                        x8_11 = x11_1
                    else
                        x8_11 = x9
                    
                    if (x8_11 == 1)
                        x0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, 0x739c3c)
                        
                        if (x0_8.d == 0)
                            goto label_eac584
                        
                        uint64_t x8_12 = zx.q(*arg1)
                        x9 = *(arg1 + 8)
                        x10 = x8_12.d & 1
                        x11_1 = x8_12 u>> 1
                    
                    uint64_t x8_13
                    
                    if ((x10 & 0xff) == 0)
                        x8_13 = x11_1
                    else
                        x8_13 = x9
                    
                    if (x8_13 != 0xc)
                        goto label_eac2a4
                    
                    x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "Organization")
                    
                    if (x0_5.d != 0)
                        uint64_t x8_14 = zx.q(*arg1)
                        x9 = *(arg1 + 8)
                        x10 = x8_14.d & 1
                        x11_1 = x8_14 u>> 1
                    label_eac2a4:
                        uint64_t x8_15
                        
                        if ((x10 & 0xff) == 0)
                            x8_15 = x11_1
                        else
                            x8_15 = x9
                        
                        if (x8_15 != 1)
                            goto label_eac2e4
                        
                        x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, 0x7861d8)
                        
                        if (x0_5.d != 0)
                            uint64_t x8_16 = zx.q(*arg1)
                            x9 = *(arg1 + 8)
                            x10 = x8_16.d & 1
                            x11_1 = x8_16 u>> 1
                        label_eac2e4:
                            uint64_t x8_17
                            
                            if ((x10 & 0xff) == 0)
                                x8_17 = x11_1
                            else
                                x8_17 = x9
                            
                            if (x8_17 != 0x13)
                                goto label_eac324
                            
                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    arg1, 0, -ffffffffffffffff, "Organizational Unit") != 0)
                                uint64_t x8_18 = zx.q(*arg1)
                                x9 = *(arg1 + 8)
                                x10 = x8_18.d & 1
                                x11_1 = x8_18 u>> 1
                            label_eac324:
                                uint64_t x8_19
                                
                                if ((x10 & 0xff) == 0)
                                    x8_19 = x11_1
                                else
                                    x8_19 = x9
                                
                                if (x8_19 != 7)
                                    goto label_eac364
                                
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        arg1, 0, -ffffffffffffffff, "OrgUnit") != 0)
                                    uint64_t x8_20 = zx.q(*arg1)
                                    x9 = *(arg1 + 8)
                                    x10 = x8_20.d & 1
                                    x11_1 = x8_20 u>> 1
                                label_eac364:
                                    uint64_t x8_21
                                    
                                    if ((x10 & 0xff) == 0)
                                        x8_21 = x11_1
                                    else
                                        x8_21 = x9
                                    
                                    if (x8_21 != 2)
                                        goto label_eac3a4
                                    
                                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            arg1, 0, -ffffffffffffffff, 0x75961c) != 0)
                                        uint64_t x8_22 = zx.q(*arg1)
                                        x9 = *(arg1 + 8)
                                        x10 = x8_22.d & 1
                                        x11_1 = x8_22 u>> 1
                                    label_eac3a4:
                                        uint64_t x8_23
                                        
                                        if ((x10 & 0xff) == 0)
                                            x8_23 = x11_1
                                        else
                                            x8_23 = x9
                                        
                                        if (x8_23 != 8)
                                            goto label_eac3e4
                                        
                                        int64_t x0_19 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            arg1, 0, -ffffffffffffffff, "Locality")
                                        
                                        if (x0_19.d != 0)
                                            uint64_t x8_24 = zx.q(*arg1)
                                            x9 = *(arg1 + 8)
                                            x10 = x8_24.d & 1
                                            x11_1 = x8_24 u>> 1
                                        label_eac3e4:
                                            uint64_t x8_25
                                            
                                            if ((x10 & 0xff) == 0)
                                                x8_25 = x11_1
                                            else
                                                x8_25 = x9
                                            
                                            if (x8_25 != 1)
                                                goto label_eac424
                                            
                                            x0_19 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                arg1, 0, -ffffffffffffffff, 0x797231)
                                            
                                            if (x0_19.d != 0)
                                                uint64_t x8_26 = zx.q(*arg1)
                                                x9 = *(arg1 + 8)
                                                x10 = x8_26.d & 1
                                                x11_1 = x8_26 u>> 1
                                            label_eac424:
                                                uint64_t x8_27
                                                
                                                if ((x10 & 0xff) == 0)
                                                    x8_27 = x11_1
                                                else
                                                    x8_27 = x9
                                                
                                                if (x8_27 != 5)
                                                    goto label_eac464
                                                
                                                int64_t x0_22 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                    arg1, 0, -ffffffffffffffff, "State")
                                                
                                                if (x0_22.d != 0)
                                                    uint64_t x8_28 = zx.q(*arg1)
                                                    x9 = *(arg1 + 8)
                                                    x10 = x8_28.d & 1
                                                    x11_1 = x8_28 u>> 1
                                                label_eac464:
                                                    uint64_t x8_29
                                                    
                                                    if ((x10 & 0xff) == 0)
                                                        x8_29 = x11_1
                                                    else
                                                        x8_29 = x9
                                                    
                                                    if (x8_29 != 8)
                                                        goto label_eac4a4
                                                    
                                                    x0_22 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                        arg1, 0, -ffffffffffffffff, "Province")
                                                    
                                                    if (x0_22.d != 0)
                                                        uint64_t x8_30 = zx.q(*arg1)
                                                        x9 = *(arg1 + 8)
                                                        x10 = x8_30.d & 1
                                                        x11_1 = x8_30 u>> 1
                                                    label_eac4a4:
                                                        uint64_t x8_31
                                                        
                                                        if ((x10 & 0xff) == 0)
                                                            x8_31 = x11_1
                                                        else
                                                            x8_31 = x9
                                                        
                                                        if (x8_31 != 2)
                                                            goto label_eac4e4
                                                        
                                                        x0_22 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                            arg1, 0, -ffffffffffffffff, 0x73dcfd)
                                                        
                                                        if (x0_22.d != 0)
                                                            uint64_t x8_32 = zx.q(*arg1)
                                                            x9 = *(arg1 + 8)
                                                            x10 = x8_32.d & 1
                                                            x11_1 = x8_32 u>> 1
                                                        label_eac4e4:
                                                            uint64_t x8_33
                                                            
                                                            if ((x10 & 0xff) == 0)
                                                                x8_33 = x11_1
                                                            else
                                                                x8_33 = x9
                                                            
                                                            if (x8_33 == 5)
                                                                int64_t x0_26 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                                    arg1, 0, -ffffffffffffffff, "Email")
                                                                
                                                                if (x0_26.d == 0)
                                                                    *entry_x8 = 0xc
                                                                    __builtin_strncpy(&entry_x8[1], 
                                                                        "RFC822", 7)
                                                                    return x0_26
                                                            
                                                            return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                                entry_x8) __tailcall
                                                
                                                *entry_x8 = 0x14
                                                __builtin_strncpy(&entry_x8[1], "X520.State", 0xb)
                                                return x0_22
                                        
                                        *entry_x8 = 0x1a
                                        __builtin_strncpy(&entry_x8[1], "X520.Locality", 0xe)
                                        return x0_19
                            
                            int64_t x0_29
                            int128_t v0_3
                            x0_29, v0_3 = operator new(0x20)
                            v0_3 = data_71c520
                            *(entry_x8 + 0x10) = x0_29
                            *entry_x8 = v0_3
                            __builtin_strncpy(x0_29, "X520.OrganizationalUnit", 0x18)
                            return x0_29
                    
                    v0_1 = (*"X520.Organization")[0].o
                    x9_2 = 0x6e
            
            *entry_x8 = 0x22
            entry_x8[0x11] = x9_2
            *(entry_x8 + 1) = v0_1
            entry_x8[0x12] = 0
            return x0_5

*entry_x8 = 0x1e
__builtin_strncpy(&entry_x8[1], "X520.CommonName", 0x10)
return x0_1
