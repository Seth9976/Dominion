// 函数: _ZN5BotanltERKNS_7X509_DNES2_
// 地址: 0xeaca8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_48 = 0
int64_t var_50
int64_t* i_6 = &var_50
var_50 = 0
Botan::OID* i = *(arg1 + 8)

for (int64_t x22 = *(arg1 + 0x10); i != x22; i += 0x60)
    Botan::multimap_insert<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        &i_6, i, i + 0x40)

int64_t var_68 = 0
int64_t var_60 = 0
int64_t* j_5 = &var_68
Botan::OID* x1_1 = *(arg2 + 8)
int64_t x20_2 = *(arg2 + 0x10)
int64_t x8
int64_t x9
uint32_t x19_3

if (x1_1 == x20_2)
    x8 = var_48
    x9 = 0
else
    do
        Botan::multimap_insert<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &j_5, x1_1, x1_1 + 0x40)
        x1_1 += 0x60
    while (x1_1 != x20_2)
    
    x9 = var_60
    x8 = var_48
    
    if (x8 u< x9)
        x19_3 = 1
        goto label_eacda4

if (x8 u> x9)
label_eacd98:
    x19_3 = 0
label_eacda4:
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
        &j_5)
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
        &i_6)
    return zx.q(x19_3)

int64_t* i_5 = i_6
int64_t* j_4 = j_5
int32_t x8_2 = (j_4 != &var_68 ? 1 : 0) & (i_5 != &var_50 ? 1 : 0)
int64_t* i_7 = j_4
int64_t* i_9 = i_5

if (x8_2 == 1)
    i_9 = i_5
    i_7 = j_4
    
    while (true)
        int32_t* x12_1 = i_9[5]
        int64_t x11_1 = i_9[6]
        int32_t* x14_1 = i_7[5]
        int64_t x13_1 = i_7[6]
        
        if (x11_1 - x12_1 == x13_1 - x14_1)
            if (x12_1 == x11_1)
            label_eacbb8:
                int64_t* i_1 = i_9[1]
                
                if (i_1 != 0)
                    do
                        i_9 = i_1
                        i_1 = *i_1
                    while (i_1 != 0)
                    
                    goto label_eacbfc
                
                void* x11_3 = &i_9[2]
                int64_t* i_10 = *x11_3
                int64_t* i_3
                
                if (*i_10 != i_9)
                    void* i_2
                    
                    do
                        i_2 = *x11_3
                        x11_3 = i_2 + 0x10
                        i_9 = *x11_3
                    while (*i_9 != i_2)
                label_eacbfc:
                    i_3 = i_7[1]
                    
                    if (i_3 == 0)
                        goto label_eacc24
                    
                    goto label_eacc0c
                
                i_9 = i_10
                i_3 = i_7[1]
                
                if (i_3 != 0)
                label_eacc0c:
                    
                    do
                        i_7 = i_3
                        i_3 = *i_3
                    while (i_3 != 0)
                    
                label_eacc4c:
                    
                    if (i_7 == &var_68)
                        goto label_eacc6c
                else
                label_eacc24:
                    void* x11_6 = &i_7[2]
                    int64_t* i_11 = *x11_6
                    
                    if (*i_11 != i_7)
                        void* i_4
                        
                        do
                            i_4 = *x11_6
                            x11_6 = i_4 + 0x10
                            i_7 = *x11_6
                        while (*i_7 != i_4)
                        goto label_eacc4c
                    
                    i_7 = i_11
                    
                    if (i_7 == &var_68)
                        goto label_eacc6c
                
                if (i_9 == &var_50)
                    goto label_eacc6c
                
                continue
            else
                int32_t* x15_2 = x12_1
                int32_t* x16_2 = x14_1
                
                while (*x15_2 == *x16_2)
                    x15_2 = &x15_2[1]
                    x16_2 = &x16_2[1]
                    
                    if (x11_1 == x15_2)
                        goto label_eacbb8
        
        if (x14_1 == x13_1)
            goto label_eacd98
        
        while (x11_1 != x12_1)
            int32_t x8_9 = *x12_1
            int32_t x9_2 = *x14_1
            
            if (x8_9 u< x9_2)
                break
            
            if (x9_2 u< x8_9)
                goto label_eacd98
            
            x14_1 = &x14_1[1]
            x19_3 = 0
            x12_1 = &x12_1[1]
            
            if (x13_1 == x14_1)
                goto label_eacda4
        
        break
    
    x19_3 = 1
    goto label_eacda4

label_eacc6c:

if (i_9 != &var_50)
    Botan::assertion_failure("p1 == attr1.end()", &data_793a18, "operator<", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x176ab)
else if (i_7 == &var_68)
    if (x8_2 == 0)
        goto label_eacd98
    
    do
        if ((Botan::x500_name_cmp(&i_5[8], &j_4[8]) & 1) == 0)
            uint64_t x8_10 = zx.q(j_4[8].b)
            uint64_t x9_3 = zx.q(i_5[8].b)
            uint64_t x21_1
            
            if ((x8_10.d & 1) == 0)
                x21_1 = x8_10 u>> 1
            else
                x21_1 = j_4[9]
            
            uint64_t x22_1
            
            if ((x9_3.d & 1) == 0)
                x22_1 = x9_3 u>> 1
            else
                x22_1 = i_5[9]
            
            uint64_t x2_3
            
            x2_3 = x21_1 u< x22_1 ? x21_1 : x22_1
            
            int32_t x0_9
            
            if (x2_3 != 0)
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x1) x0_8
                
                if ((x9_3.d & 1) != 0)
                    x0_8 = i_5[0xa]
                else
                    x0_8 = i_5 + 0x41
                
                void* x1_5
                
                if ((x8_10.d & 1) != 0)
                    x1_5 = j_4[0xa]
                else
                    x1_5 = j_4 + 0x41
                
                x0_9 = memcmp(x0_8, x1_5, x2_3)
            
            if (x2_3 == 0 || x0_9 == 0)
                if (x22_1 u>= x21_1)
                    x0_9 = x21_1 u< x22_1 ? 1 : 0
                else
                    x0_9 = -1
            
            x19_3 = x0_9 u>> 0x1f
            break
        
        int64_t* j = i_5[1]
        
        if (j != 0)
            do
                i_5 = j
                j = *j
            while (j != 0)
            
            goto label_eaccdc
        
        void* x8_4 = &i_5[2]
        int64_t* i_8 = *x8_4
        int64_t* j_2
        
        if (*i_8 != i_5)
            void* j_1
            
            do
                j_1 = *x8_4
                x8_4 = j_1 + 0x10
                i_5 = *x8_4
            while (*i_5 != j_1)
        label_eaccdc:
            j_2 = j_4[1]
            
            if (j_2 == 0)
                goto label_eacd04
            
            goto label_eaccec
        
        i_5 = i_8
        j_2 = j_4[1]
        
        if (j_2 != 0)
        label_eaccec:
            
            do
                j_4 = j_2
                j_2 = *j_2
            while (j_2 != 0)
            
        label_eacd30:
            x19_3 = 0
            
            if (j_4 == &var_68)
                break
        else
        label_eacd04:
            void* x8_7 = &j_4[2]
            int64_t* j_6 = *x8_7
            
            if (*j_6 != j_4)
                void* j_3
                
                do
                    j_3 = *x8_7
                    x8_7 = j_3 + 0x10
                    j_4 = *x8_7
                while (*j_4 != j_3)
                goto label_eacd30
            
            j_4 = j_6
            x19_3 = 0
            
            if (j_4 == &var_68)
                break
    while (i_5 != &var_50)
    
    goto label_eacda4

int64_t* x0_10 = Botan::assertion_failure("p2 == attr2.end()", &data_793a18, "operator<", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x176ac)
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &j_5)
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &i_6)
sub_1101e04(x0_10)
noreturn
