// 函数: sub_ec827c
// 地址: 0xec827c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *arg3

if (x23 != 0)
    void* x22_1 = arg2[4]
    void* x0 = x23
    
    if (x22_1 != x23)
        do
            *(x22_1 - 0x10)
            x22_1 -= 0x18
            std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                x22_1)
        while (x23 != x22_1)
        
        x0 = *arg3
    
    arg2[4] = x23
    operator delete(x0)

void* x22_2 = *arg2

if (x22_2 != 0)
    void* x20 = arg2[1]
    void* x0_2 = x22_2
    
    if (x20 != x22_2)
        do
            *(x20 - 0x10)
            x20 -= 0x18
            std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                x20)
        while (x22_2 != x20)
        
        x0_2 = *arg2
    
    arg2[1] = x22_2
    operator delete(x0_2)

sub_1101e04(arg1)
noreturn
