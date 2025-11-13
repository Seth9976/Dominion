// 函数: _ZN5BotaneqERKNS_7X509_DNES2_
// 地址: 0xcfa2cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_38 = 0
int64_t var_40
int64_t* i_2 = &var_40
var_40 = 0
Botan::OID* i = *(arg1 + 8)

for (int64_t x22 = *(arg1 + 0x10); i != x22; i += 0x60)
    Botan::multimap_insert<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        &i_2, i, i + 0x40)

int64_t var_58 = 0
int64_t var_50 = 0
int64_t* j_5 = &var_58
Botan::OID* x1_1 = *(arg2 + 8)
int64_t x22_1 = *(arg2 + 0x10)
int32_t x19_2

if (x1_1 != x22_1)
    do
        Botan::multimap_insert<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &j_5, x1_1, x1_1 + 0x40)
        x1_1 += 0x60
    while (x1_1 != x22_1)
    
    if (var_38 == var_50)
        goto label_cfa374
    
label_cfa47c:
    x19_2 = 0
else if (var_38 != 0)
label_cfa47c_1:
    x19_2 = 0
else
label_cfa374:
    int64_t* i_1 = i_2
    int64_t* j_4 = j_5
    
    while (i_1 != &var_40)
        if (j_4 == &var_58)
            goto label_cfa47c_1
        
        int32_t* x9_2 = i_1[5]
        int64_t x8_1 = i_1[6]
        int32_t* x10_1 = j_4[5]
        
        if (x8_1 - x9_2 != j_4[6] - x10_1)
            goto label_cfa47c_1
        
        if (x9_2 != x8_1)
            do
                if (*x9_2 != *x10_1)
                    goto label_cfa47c_1
                
                x9_2 = &x9_2[1]
                x10_1 = &x10_1[1]
            while (x8_1 != x9_2)
        
        if ((Botan::x500_name_cmp(&i_1[8], &j_4[8]) & 1) == 0)
            goto label_cfa47c_1
        
        int64_t* j = i_1[1]
        
        if (j != 0)
            do
                i_1 = j
                j = *j
            while (j != 0)
            
            goto label_cfa420
        
        void* x8_3 = &i_1[2]
        int64_t* i_3 = *x8_3
        int64_t* j_1
        
        if (*i_3 == i_1)
            i_1 = i_3
            j_1 = j_4[1]
            
            if (j_1 != 0)
            label_cfa430:
                
                do
                    j_4 = j_1
                    j_1 = *j_1
                while (j_1 != 0)
                
                continue
        else
            void* j_2
            
            do
                j_2 = *x8_3
                x8_3 = j_2 + 0x10
                i_1 = *x8_3
            while (*i_1 != j_2)
        label_cfa420:
            j_1 = j_4[1]
            
            if (j_1 != 0)
                goto label_cfa430
        void* x8_6 = &j_4[2]
        int64_t* j_6 = *x8_6
        
        if (*j_6 == j_4)
            j_4 = j_6
        else
            void* j_3
            
            do
                j_3 = *x8_6
                x8_6 = j_3 + 0x10
                j_4 = *x8_6
            while (*j_4 != j_3)
    
    x19_2 = j_4 == &var_58 ? 1 : 0

std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &j_5)
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &i_2)
return zx.q(x19_2)
