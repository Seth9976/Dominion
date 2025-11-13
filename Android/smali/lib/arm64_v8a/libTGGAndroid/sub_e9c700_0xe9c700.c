// 函数: sub_e9c700
// 地址: 0xe9c700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t arg_30 = arg3 + 0x10
void* x27

if (arg8 == 0)
    x27 = arg6
    
    if (x27 != 0)
        goto label_e9c760
    
    goto label_e9c734

void* arg_58 = arg8
operator delete(arg8)
x27 = arg6
int64_t arg_68
void* x0_5

if (x27 != 0)
label_e9c760:
    void* x28_1 = arg7
    void* x0_1 = x27
    
    if (x28_1 != x27)
        bool cond:0_1
        
        do
            uint32_t x8_2 = zx.d(*(x28_1 - 0x20))
            *(x28_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_2 & 1) != 0)
                operator delete(*(x28_1 - 0x10))
            
            void* x0_3 = *(x28_1 - 0x38)
            
            if (x0_3 != 0)
                *(x28_1 - 0x30) = x0_3
                operator delete(x0_3)
            
            void* x0_4 = *(x28_1 - 0x58)
            *(x28_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_4 != 0)
                *(x28_1 - 0x50) = x0_4
                operator delete(x0_4)
            
            cond:0_1 = x27 == x28_1 - 0x60
            x28_1 -= 0x60
        while (not(cond:0_1))
        x0_1 = arg6
    
    arg7 = x27
    operator delete(x0_1)
    x0_5 = arg11
    arg_68 = arg3 + 0x10
    
    if (x0_5 == 0)
        goto label_e9c744
    
    goto label_e9c7f4

label_e9c734:
x0_5 = arg11
arg_68 = arg3 + 0x10
void* x26

if (x0_5 != 0)
label_e9c7f4:
    void* arg_90 = x0_5
    operator delete(x0_5)
    x26 = arg9
    
    if (x26 != 0)
    label_e9c804:
        void* x27_1 = arg10
        void* x0_6 = x26
        
        if (x27_1 != x26)
            bool cond:1_1
            
            do
                uint32_t x8_4 = zx.d(*(x27_1 - 0x20))
                *(x27_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                
                if ((x8_4 & 1) != 0)
                    operator delete(*(x27_1 - 0x10))
                
                void* x0_8 = *(x27_1 - 0x38)
                
                if (x0_8 != 0)
                    *(x27_1 - 0x30) = x0_8
                    operator delete(x0_8)
                
                void* x0_9 = *(x27_1 - 0x58)
                *(x27_1 - 0x60) = _vtable_for_Botan::OID + 0x10
                
                if (x0_9 != 0)
                    *(x27_1 - 0x50) = x0_9
                    operator delete(x0_9)
                
                cond:1_1 = x26 == x27_1 - 0x60
                x27_1 -= 0x60
            while (not(cond:1_1))
            x0_6 = arg9
        
        arg10 = x26
        operator delete(x0_6)
else
label_e9c744:
    x26 = arg9
    
    if (x26 != 0)
        goto label_e9c804
int64_t arg_a0 = arg2 + 0x18
int64_t arg_b0 = arg2 + 0x40
int64_t arg_120 = arg2 + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) arg_b8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(arg12) & 1) != 0)
    operator delete(arg13)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
int64_t arg_1b8 = arg2 + 0x18
int64_t arg_1c8 = arg2 + 0x40
int64_t arg_238 = arg2 + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) arg_1d0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(arg14) & 1) != 0)
    operator delete(arg15)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
sub_1101e04(arg1)
noreturn
