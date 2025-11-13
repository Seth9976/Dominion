// 函数: sub_10fa9c0
// 地址: 0x10fa9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0xc))

if (x8.d u> 5)
    return 

int64_t x8_8
void* x8_11
char const* const x9_7
int64_t* x20_2
int128_t v0
int128_t v1
int128_t v2

switch (x8)
    case 0
        SystemHintOp_BTI()
        x20_2 = &arg2[1]
        int64_t x8_1 = *x20_2
        int64_t x10_2 = x20_2[1]
        
        if (x8_1 + 0xe u>= x10_2)
            void* oldmem = *arg2
            size_t bytes_6 = x10_2 << 1
            size_t bytes
            
            if (bytes_6 u< x8_1 + 0xe)
                bytes = x8_1 + 0xe
            else
                bytes = bytes_6
            
            arg2[2] = bytes
            arg1 = realloc(oldmem, bytes)
            *arg2 = arg1
            
            if (arg1 == 0)
                std::terminate()
                noreturn
            
            __builtin_strncpy(arg1 + *x20_2, "std::allocator", 0xe)
            x8_8 = 0xe
        else
            __builtin_strncpy(*arg2 + x8_1, "std::allocator", 0xe)
            x8_8 = 0xe
    case 1
        SystemHintOp_BTI()
        x20_2 = &arg2[1]
        int64_t x8_2 = *x20_2
        int64_t x10_3 = x20_2[1]
        
        if (x8_2 + 0x11 u>= x10_3)
            void* oldmem_1 = *arg2
            size_t bytes_7 = x10_3 << 1
            size_t bytes_1
            
            if (bytes_7 u< x8_2 + 0x11)
                bytes_1 = x8_2 + 0x11
            else
                bytes_1 = bytes_7
            
            arg2[2] = bytes_1
            arg1 = realloc(oldmem_1, bytes_1)
            *arg2 = arg1
            
            if (arg1 == 0)
                std::terminate()
                noreturn
            
            __builtin_strncpy(arg1 + *x20_2, "std::basic_string", 0x11)
            x8_8 = 0x11
        else
            __builtin_strncpy(*arg2 + x8_2, "std::basic_string", 0x11)
            x8_8 = 0x11
    case 2
        SystemHintOp_BTI()
        x20_2 = &arg2[1]
        int64_t x8_3 = *x20_2
        int64_t x10_4 = x20_2[1]
        
        if (x8_3 + 0x46 u>= x10_4)
            void* oldmem_2 = *arg2
            size_t bytes_8 = x10_4 << 1
            size_t bytes_2
            
            if (bytes_8 u< x8_3 + 0x46)
                bytes_2 = x8_3 + 0x46
            else
                bytes_2 = bytes_8
            
            arg2[2] = bytes_2
            arg1 = realloc(oldmem_2, bytes_2)
            *arg2 = arg1
            
            if (arg1 == 0)
                std::terminate()
                noreturn
            
            __builtin_strncpy(arg1 + *x20_2, 
                "std::basic_string<char, std::char_traits<char>, std::allocator<char> >", 0x46)
            x8_8 = 0x46
        else
            __builtin_strncpy(*arg2 + x8_3, 
                "std::basic_string<char, std::char_traits<char>, std::allocator<char> >", 0x46)
            x8_8 = 0x46
    case 3
        SystemHintOp_BTI()
        x20_2 = &arg2[1]
        int64_t x8_4 = *x20_2
        int64_t x10_5 = x20_2[1]
        
        if (x8_4 + 0x31 u>= x10_5)
            void* oldmem_3 = *arg2
            size_t bytes_9 = x10_5 << 1
            size_t bytes_3
            
            if (bytes_9 u< x8_4 + 0x31)
                bytes_3 = x8_4 + 0x31
            else
                bytes_3 = bytes_9
            
            arg2[2] = bytes_3
            arg1, v0, v1, v2 = realloc(oldmem_3, bytes_3)
            *arg2 = arg1
            
            if (arg1 == 0)
                std::terminate()
                noreturn
            
            x8_4 = *x20_2
        else
            arg1 = *arg2
        
        x8_11 = arg1 + x8_4
        x9_7 = "std::basic_istream<char, std::char_traits<char> >"
    label_10fac14:
        v2 = *(x9_7 + 0x10)
        v0 = *(x9_7 + 0x20)
        v1 = *x9_7
        *(x8_11 + 0x30) = 0x3e
        *(x8_11 + 0x10) = v2
        *(x8_11 + 0x20) = v0
        *x8_11 = v1
        x8_8 = 0x31
    case 4
        SystemHintOp_BTI()
        x20_2 = &arg2[1]
        int64_t x8_5 = *x20_2
        int64_t x10_6 = x20_2[1]
        
        if (x8_5 + 0x31 u>= x10_6)
            void* oldmem_4 = *arg2
            size_t bytes_10 = x10_6 << 1
            size_t bytes_4
            
            if (bytes_10 u< x8_5 + 0x31)
                bytes_4 = x8_5 + 0x31
            else
                bytes_4 = bytes_10
            
            arg2[2] = bytes_4
            arg1, v0, v1, v2 = realloc(oldmem_4, bytes_4)
            *arg2 = arg1
            
            if (arg1 == 0)
                std::terminate()
                noreturn
            
            x8_5 = *x20_2
        else
            arg1 = *arg2
        
        x8_11 = arg1 + x8_5
        x9_7 = "std::basic_ostream<char, std::char_traits<char> >"
        goto label_10fac14
    case 5
        SystemHintOp_BTI()
        x20_2 = &arg2[1]
        int64_t x8_6 = *x20_2
        int64_t x10_7 = x20_2[1]
        
        if (x8_6 + 0x32 u>= x10_7)
            void* oldmem_5 = *arg2
            size_t bytes_11 = x10_7 << 1
            size_t bytes_5
            
            if (bytes_11 u< x8_6 + 0x32)
                bytes_5 = x8_6 + 0x32
            else
                bytes_5 = bytes_11
            
            arg2[2] = bytes_5
            arg1 = realloc(oldmem_5, bytes_5)
            *arg2 = arg1
            
            if (arg1 == 0)
                std::terminate()
                noreturn
            
            __builtin_strncpy(arg1 + *x20_2, "std::basic_iostream<char, std::char_traits<char> >", 
                0x32)
            x8_8 = 0x32
        else
            __builtin_strncpy(*arg2 + x8_6, "std::basic_iostream<char, std::char_traits<char> >", 
                0x32)
            x8_8 = 0x32

*x20_2 += x8_8
