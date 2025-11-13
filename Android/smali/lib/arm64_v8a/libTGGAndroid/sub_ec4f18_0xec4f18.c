// 函数: sub_ec4f18
// 地址: 0xec4f18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::X509_DN, 0x10) arg_88 = _vtable_for_Botan::X509_DN + 0x10

if (arg4 != 0)
    void* arg_b0 = arg4
    operator delete(arg4)

if (arg2 != 0)
    void* x23_1 = arg3
    void* x0_1 = arg2
    
    if (x23_1 != arg2)
        bool cond:0_1
        
        do
            uint32_t x8_1 = zx.d(*(x23_1 - 0x20))
            *(x23_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(*(x23_1 - 0x10))
            
            void* x0_3 = *(x23_1 - 0x38)
            
            if (x0_3 != 0)
                *(x23_1 - 0x30) = x0_3
                operator delete(x0_3)
            
            void* x0_4 = *(x23_1 - 0x58)
            *(x23_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_4 != 0)
                *(x23_1 - 0x50) = x0_4
                operator delete(x0_4)
            
            cond:0_1 = arg2 == x23_1 - 0x60
            x23_1 -= 0x60
        while (not(cond:0_1))
        x0_1 = arg2
    
    arg3 = arg2
    operator delete(x0_1)

void* __offset(vtable_for_Botan::Certificate_Store_In_Memory, 0x10) arg_d0 =
    _vtable_for_Botan::Certificate_Store_In_Memory + 0x10

if (arg7 != 0)
    void* x22_2 = arg8
    void* x0_5 = arg7
    
    if (x22_2 != arg7)
        do
            int64_t* x20_1 = *(x22_2 - 8)
            x22_2 -= 0x10
            
            if (x20_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x20_1[1])
                    i = __stlxr(x9_1 - 1, &x20_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x20_1 + 0x10))(x20_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_2 != arg7)
        
        x0_5 = arg7
    
    arg8 = arg7
    operator delete(x0_5)

if (arg5 != 0)
    void* x22_3 = arg6
    void* x0_8 = arg5
    
    if (x22_3 != arg5)
        do
            int64_t* x20_2 = *(x22_3 - 8)
            x22_3 -= 0x10
            
            if (x20_2 != 0)
                int64_t x9_2
                int32_t i_1
                
                do
                    x9_2 = __ldaxr(&x20_2[1])
                    i_1 = __stlxr(x9_2 - 1, &x20_2[1])
                while (i_1 != 0)
                
                if (x9_2 == 0)
                    (*(*x20_2 + 0x10))(x20_2)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_3 != arg5)
        
        x0_8 = arg5
    
    arg6 = arg5
    operator delete(x0_8)

void arg_108
std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    &arg_108)
sub_1101e04(arg1)
noreturn
