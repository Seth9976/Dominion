// 函数: _ZN5Botan25key_constraints_to_stringENS_15Key_ConstraintsE
// 地址: 0xe99d38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_48
__builtin_memset(&var_48, 0, 0x18)
void* var_40
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
void* x19_1

if (arg1.d == 0)
    *entry_x8 = 0x1c
    __builtin_strncpy(entry_x8 + 1, "no_constraints", 0xf)
    x19_1 = var_48
    
    if (x19_1 != 0)
    label_e9a140:
        void* x8_19 = var_40
        void* x0_20
        
        if (x8_19 == x19_1)
            x0_20 = x19_1
        else
            void* x20_2 = x8_19
            
            do
                x20_2 -= 0x18
                
                if ((zx.d(*x20_2) & 1) != 0)
                    operator delete(*(x8_19 - 8))
                
                x8_19 = x20_2
            while (x19_1 != x20_2)
            
            x0_20 = var_48
        
        void* var_40_1 = x19_1
        operator delete(x0_20)
    
    return 

int32_t x20_1 = arg1.d
char var_60
int128_t var_5f

if ((arg1.d & 0x8000) != 0)
    var_60 = 0x22
    __builtin_strcpy(&var_5f, "digital_signature")
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        &var_48)
    
    if ((zx.d(var_60) & 1) != 0)
        operator delete(var_5f:0xf.q)

int64_t var_38

if ((x20_1 & 0x4000) != 0)
    int128_t* x8_1 = var_40
    var_60 = 0x1e
    __builtin_strncpy(&var_5f, "non_repudiation", 0x10)
    
    if (x8_1 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        x8_1[1].q = var_5f:0xf.q
        *x8_1 = var_60.o
        var_40 = x8_1 + 0x18

int128_t v0

if ((x20_1 & 0x2000) != 0)
    (*"key_encipherment")[0].o
    var_60 = 0x20
    __builtin_strcpy(&var_5f, "key_encipherment")
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

if ((x20_1 & 0x1000) != 0)
    (*"data_encipherment")[0].o
    var_60 = 0x22
    __builtin_strcpy(&var_5f, "data_encipherment")
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

if ((x20_1 & 0x800) != 0)
    var_60 = 0x1a
    __builtin_strncpy(&var_5f, "key_agreement", 0xe)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

if ((x20_1 & 0x400) != 0)
    var_60 = 0x1a
    __builtin_strncpy(&var_5f, "key_cert_sign", 0xe)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

if ((x20_1 & 0x200) != 0)
    var_60 = 0x10
    __builtin_strncpy(&var_5f, "crl_sign", 9)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

if ((x20_1 & 0x100) != 0)
    var_60 = 0x1a
    __builtin_strncpy(&var_5f, "encipher_only", 0xe)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

if ((x20_1 & 0x80) != 0)
    var_60 = 0x1a
    __builtin_strncpy(&var_5f, "decipher_only", 0xe)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_5f:0xf.q)
    else
        v0 = var_60.o
        *(var_40 + 0x10) = var_5f:0xf.q
        *var_40 = v0
        var_40 += 0x18

void* x1_1 = var_48

if (x1_1 == var_40)
    int128_t v0_1
    arg1, v0_1 = operator new(0x20)
    v0_1 = data_71aa40
    *(entry_x8 + 0x10) = arg1
    *entry_x8 = v0_1
    __builtin_strncpy(arg1, "other_unknown_constraints", 0x1a)
    x19_1 = var_48
    
    if (x19_1 != 0)
        goto label_e9a140
else if (var_40 - x1_1 != 0x18)
    int64_t x20_3 = 0
    int64_t i = 0
    var_60.q = 0
    var_5f:7.q = 0
    var_5f:0xf.q = 0
    
    do
        void* x8_20 = x1_1 + x20_3
        *(x8_20 + 8)
        void* x1_2
        
        if ((zx.d(*x8_20) & 1) != 0)
            x1_2 = *(x8_20 + 0x10)
        else
            x1_2 = x8_20 + 1
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_60, x1_2)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            &var_60)
        x1_1 = var_48
        i += 1
        x20_3 += 0x18
    while (i u< ((var_40 - x1_1) s>> 3) * -0x5555555555555555 - 1)
    
    char* x8_26 = x1_1 + (((var_40 - x1_1) s>> 3) * -0x5555555555555555 - 1) * 0x18
    *(x8_26 + 8)
    void* x1_4
    
    if ((zx.d(*x8_26) & 1) != 0)
        x1_4 = *(x8_26 + 0x10)
    else
        x1_4 = &x8_26[1]
    
    int128_t v0_2
    arg1, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_60, x1_4)
    v0_2 = var_60.o
    *(entry_x8 + 0x10) = var_5f:0xf.q
    *entry_x8 = v0_2
    x19_1 = var_48
    
    if (x19_1 != 0)
        goto label_e9a140
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8)
    x19_1 = var_48
    
    if (x19_1 != 0)
        goto label_e9a140
