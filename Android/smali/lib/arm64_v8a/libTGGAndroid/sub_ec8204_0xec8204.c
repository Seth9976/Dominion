// 函数: sub_ec8204
// 地址: 0xec8204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *arg4

if (x24 != 0)
    void* x25_1 = arg2[7]
    void* x0 = x24
    
    if (x25_1 != x24)
        do
            int64_t* x23_1 = *(x25_1 - 8)
            x25_1 -= 0x10
            
            if (x23_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x23_1[1])
                    i = __stlxr(x9_1 - 1, &x23_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x23_1 + 0x10))(x23_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x25_1 != x24)
        
        x0 = *arg4
    
    arg2[7] = x24
    operator delete(x0)

void* x23_2 = *arg3

if (x23_2 != 0)
    void* x22 = arg2[4]
    void* x0_3 = x23_2
    
    if (x22 != x23_2)
        do
            *(x22 - 0x10)
            x22 -= 0x18
            std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                x22)
        while (x23_2 != x22)
        
        x0_3 = *arg3
    
    arg2[4] = x23_2
    operator delete(x0_3)

void* x22_1 = *arg2

if (x22_1 != 0)
    void* x20 = arg2[1]
    void* x0_5 = x22_1
    
    if (x20 != x22_1)
        do
            *(x20 - 0x10)
            x20 -= 0x18
            std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                x20)
        while (x22_1 != x20)
        
        x0_5 = *arg2
    
    arg2[1] = x22_1
    operator delete(x0_5)

sub_1101e04(arg1)
noreturn
