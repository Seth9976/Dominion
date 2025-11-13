// 函数: _ZNK5Botan17DataSource_Stream4peekEPhmm
// 地址: 0xe8b994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x28)

if (*(x8 + *(*x8 - 0x18) + 0x20) != 0)
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x30)
    (*"when out of data")[0].o
    int64_t var_50_1 = x0_8
    v0 = data_71c860
    __builtin_strncpy(x0_8, "DataSource_Stream: Cannot peek when out of data", 0x30)
    int128_t var_60_1 = v0
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* var_80
char var_60
void* var_50
char* x0_4
uint64_t entry_x3
int64_t result

if (entry_x3 != 0)
    __builtin_memset(&var_80, 0, 0x18)
    
    if ((entry_x3 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        void* x0_1 = Botan::allocate_memory(entry_x3, 1)
        void* x24_1 = x0_1 + entry_x3
        var_80 = x0_1
        memset(x0_1, 0, entry_x3)
        void* var_78_1 = x24_1
        std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::read(*(arg1 + 0x28), 
            x0_1)
        int64_t* x8_3 = *(arg1 + 0x28)
        
        if ((zx.d(*(x8_3 + *(*x8_3 - 0x18) + 0x20)) & 1) == 0)
            void* x0_3 = var_80
            result = x8_3[1]
            
            if (x0_3 != 0)
                void* var_78_2 = x0_3
                Botan::deallocate_memory(x0_3, x24_1 - x0_3, 1)
            
            x0_4 = *(arg1 + 0x28)
            
            if (result != entry_x3)
                goto label_e8baa4
            
            goto label_e8ba68
    
    void** x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v0_1
    x0_13, v0_1 = operator new(0x30)
    int64_t var_90 = x0_13
    int128_t var_a0 = data_71c500
    __builtin_strncpy(x0_13, "DataSource_Stream::peek: Source failure", 0x28)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "I/O error: ", &var_a0)
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    
    if ((zx.d(var_60) & 1) != 0)
        operator delete(var_50)
    
    *x0_12 = _vtable_for_Botan::Stream_IO_Error + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
    noreturn

result = 0
x0_4 = *(arg1 + 0x28)
int64_t x8_6

if (0 == entry_x3)
label_e8ba68:
    std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::read(x0_4, arg2)
    x0_4 = *(arg1 + 0x28)
    x8_6 = *(*x0_4 - 0x18)
    int32_t x9_7 = *(x0_4 + x8_6 + 0x20)
    
    if ((x9_7 & 1) != 0)
        void** x0_18 = __cxa_allocate_exception(0x20)
        int64_t x0_19
        int128_t v0_2
        x0_19, v0_2 = operator new(0x30)
        int64_t var_70_2 = x0_19
        var_80.o = data_71c500
        __builtin_strncpy(x0_19, "DataSource_Stream::peek: Source failure", 0x28)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "I/O error: ", &var_80)
        *x0_18 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_18[1])
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_50)
        
        *x0_18 = _vtable_for_Botan::Stream_IO_Error + 0x10
        __cxa_throw(x0_18, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
        noreturn
    
    result = *(x0_4 + 8)
    
    if ((x9_7 & 2) == 0)
        std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(x0_4, 
            *(arg1 + 0x30))
        return result
else
label_e8baa4:
    x8_6 = *(*x0_4 - 0x18)
    
    if ((*(x0_4 + x8_6 + 0x20) & 2) == 0)
        std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(x0_4, 
            *(arg1 + 0x30))
        return result

std::__ndk1::ios_base::clear(x0_4.d + x8_6.d)
std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(*(arg1 + 0x28), 
    *(arg1 + 0x30))
return result
