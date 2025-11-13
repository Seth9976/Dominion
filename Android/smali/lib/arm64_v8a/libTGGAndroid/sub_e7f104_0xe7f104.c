// 函数: sub_e7f104
// 地址: 0xe7f104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x26 = 0
arg1[1] = 0
int64_t var_90
void* x28 = &var_90 | 1
arg1[2] = 0
*arg1 = &arg1[1]
void* var_78
int64_t* var_70
int64_t* x0_20

while (true)
    char* x22_1 = (&data_1176000)[x26]
    size_t x0_2 = strlen(x22_1)
    
    if (x0_2 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        void* var_80
        void* x24_1
        
        if (x0_2 u>= 0x17)
            uint64_t x25_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
            void* x0_4 = operator new(x25_1)
            x24_1 = x0_4
            size_t var_88_1 = x0_2
            var_80 = x0_4
            var_90 = x25_1 | 1
            memcpy(x24_1, x22_1, x0_2)
        else
            x24_1 = x28
            var_90.b = (x0_2.d << 1).b
            
            if (x0_2 != 0)
                memcpy(x24_1, x22_1, x0_2)
        
        *(x24_1 + x0_2) = 0
        char var_a8 = 0x14
        __builtin_strncpy(&var_a8 | 1, "tls-server", 0xa)
        char var_9d_1 = 0
        Botan::X509_Certificate* result =
            Botan::Credentials_Manager::cert_chain_single_type(arg3, &var_90, &var_a8)
        
        if ((zx.d(var_a8) & 1) == 0)
            if ((zx.d(var_90.b) & 1) != 0)
                goto label_e7f250
            
            goto label_e7f228
        
        void* var_98
        result = operator delete(var_98)
        int64_t* x23_2
        
        if ((zx.d(var_90.b) & 1) != 0)
        label_e7f250:
            result = operator delete(var_80)
            x23_2 = var_78
            
            if (x23_2 == var_70)
                goto label_e7f234
            
            goto label_e7f264
        
    label_e7f228:
        x23_2 = var_78
        
        if (x23_2 != var_70)
        label_e7f264:
            size_t x0_10 = strlen(x22_1)
            
            if (x0_10 u< -0x10)
                void* x24_2
                
                if (x0_10 u>= 0x17)
                    uint64_t x25_2 = (x0_10 + 0x10) & 0xfffffffffffffff0
                    void* x0_12 = operator new(x25_2)
                    x24_2 = x0_12
                    size_t var_88_2 = x0_10
                    var_80 = x0_12
                    var_90 = x25_2 | 1
                    memcpy(x24_2, x22_1, x0_10)
                else
                    x24_2 = x28
                    var_90.b = (x0_10.d << 1).b
                    
                    if (x0_10 != 0)
                        memcpy(x24_2, x22_1, x0_10)
                
                *(x24_2 + x0_10) = 0
                std::__ndk1::__tree_node_base<void*>** x0_15 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                    arg1, &var_a8)
                std::__ndk1::__tree_node_base<void*>* x22_2 = *x0_15
                
                if (x22_2 == 0)
                    std::__ndk1::__tree_node_base<void*>* x0_16
                    int128_t v0_1
                    x0_16, v0_1 = operator new(0x50)
                    v0_1 = var_90.o
                    int64_t x9_1 = var_a8.q
                    __builtin_memset(&var_90, 0, 0x18)
                    *x0_16 = 0
                    *(x0_16 + 8) = 0
                    *(x0_16 + 0x20) = v0_1
                    *(x0_16 + 0x30) = var_80
                    __builtin_memset(x0_16 + 0x38, 0, 0x18)
                    *(x0_16 + 0x10) = x9_1
                    *x0_15 = x0_16
                    int64_t* x8_15 = **arg1
                    std::__ndk1::__tree_node_base<void*>* x1_4
                    
                    if (x8_15 == 0)
                        x1_4 = x0_16
                    else
                        *arg1 = x8_15
                        x1_4 = *x0_15
                    
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                        arg1[1], x1_4)
                    arg1[2] += 1
                    result = x0_16 + 0x38
                    
                    if (result != &var_78)
                        result = std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::assign<Botan::X509_Certificate*>(
                            result, var_78)
                else
                    result = x22_2 + 0x38
                    
                    if (result != &var_78)
                        result = std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::assign<Botan::X509_Certificate*>(
                            result, var_78)
                
                if ((zx.d(var_90.b) & 1) != 0)
                    result = operator delete(var_80)
                
                x23_2 = var_78
                
                if (x23_2 == 0)
                    goto label_e7f164
                
                goto label_e7f38c
        else
        label_e7f234:
            
            if (x23_2 == 0)
            label_e7f164:
                x26 += 1
                
                if (x26 == 3)
                    return result
                
                continue
            
        label_e7f38c:
            int64_t* x22_4 = var_70
            void* x0
            
            if (x22_4 == x23_2)
                x0 = x23_2
            else
                do
                    x22_4 = &x22_4[-0x11]
                    (*(*x22_4 + 0x10))(x22_4)
                while (x23_2 != x22_4)
                
                x0 = var_78
            
            var_70 = x23_2
            result = operator delete(x0)
            goto label_e7f164
    
    x0_20 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    break

void* x22_5 = var_78

if (x22_5 != 0)
    int64_t* x21_1 = var_70
    void* x0_21 = x22_5
    
    if (x21_1 != x22_5)
        do
            x21_1 = &x21_1[-0x11]
            (*(*x21_1 + 0x10))(x21_1)
        while (x22_5 != x21_1)
        
        x0_21 = var_78
    
    void* var_70_1 = x22_5
    operator delete(x0_21)

arg1[1]
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
    arg1)
sub_1101e04(x0_20)
noreturn
