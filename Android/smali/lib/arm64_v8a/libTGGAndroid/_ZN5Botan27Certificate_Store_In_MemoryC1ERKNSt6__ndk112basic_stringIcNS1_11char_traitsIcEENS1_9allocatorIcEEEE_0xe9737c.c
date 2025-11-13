// 函数: _ZN5Botan27Certificate_Store_In_MemoryC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe9737c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*arg1 = _vtable_for_Botan::Certificate_Store_In_Memory + 0x10
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) x20_1 = arg1 + 8
*x20_1 = zx.o(0)
char* entry_x1
uint64_t x8_1 = zx.q(*entry_x1)
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = *(entry_x1 + 8)

if (x8_2 == 0)
    return 

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x19_1 = arg1
Botan::get_files_recursive(entry_x1)
void* var_78
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x22_1 = var_78
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_70
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) x25_1 = var_70

if (x22_1 != x25_1)
    goto label_e97414

int64_t var_68
void* x22_2

if (x22_1 == var_68)
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
        &var_78)
    x22_2 = var_78
    x25_1 = var_70
    
    if (x22_2 != x25_1)
        goto label_e97444
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x22_1)
    x25_1 = x22_1 + 0x18
    var_70 = x25_1
label_e97414:
    x22_2 = var_78
    
    if (x22_2 != x25_1)
    label_e97444:
        
        do
            void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) var_b0
            Botan::DataSource_Stream::DataSource_Stream(&var_b0, x22_2.b)
            int64_t* var_88
            
            while (*(var_88 + *(*var_88 - 0x18) + 0x20) == 0)
                void** x0_3 = operator new(0xa0)
                x0_3[1] = 0
                x0_3[2] = 0
                *x0_3 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >
                    + 0x10
                Botan::X509_Certificate::X509_Certificate(&x0_3[3])
                void* var_c0_1 = &x0_3[3]
                void** x8_7 = *(x19_1 + 0x10)
                
                if (x8_7 u< *(x19_1 + 0x18))
                    *x8_7 = &x0_3[3]
                    x8_7[1] = x0_3
                    *(x19_1 + 0x10) = &x8_7[2]
                else
                    std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
                        x20_1)
                    
                    if (x0_3 != 0)
                        int64_t x9_5
                        int32_t i
                        
                        do
                            x9_5 = __ldaxr(&x0_3[1])
                            i = __stlxr(x9_5 - 1, &x0_3[1])
                        while (i != 0)
                        
                        if (x9_5 == 0)
                            (*(*x0_3 + 0x10))(x0_3)
                            std::__ndk1::__shared_weak_count::__release_weak()
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * var_90
            arg1 = var_90
            var_b0 = _vtable_for_Botan::DataSource_Stream + 0x10
            var_90 = nullptr
            
            if (arg1 != 0)
                (*(*arg1 + 8))()
            
            char var_a8
            void* var_98
            
            if ((zx.d(var_a8) & 1) != 0)
                operator delete(var_98)
            x22_2 += 0x18
        while (x22_2 != x25_1)
        
        x25_1 = var_78

if (x25_1 == 0)
    return 

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) x8_15 = var_70
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) x0_10

if (x8_15 == x25_1)
    x0_10 = x25_1
else
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x18) x19_2 = x8_15
    
    do
        x19_2 -= 0x18
        
        if ((zx.d(*x19_2) & 1) != 0)
            operator delete(*(x8_15 - 8))
        
        x8_15 = x19_2
    while (x25_1 != x19_2)
    
    x0_10 = var_78

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_70_1 = x25_1
operator delete(x0_10)
