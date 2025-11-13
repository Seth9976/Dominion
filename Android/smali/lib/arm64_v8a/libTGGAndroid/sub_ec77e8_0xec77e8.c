// 函数: sub_ec77e8
// 地址: 0xec77e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22_1 = *arg3
void* x22

if (x22_1 != 0)
    void* x21 = arg2[4]
    void* x0_1 = x22_1
    
    if (x21 != x22_1)
        do
            *(x21 - 0x10)
            x21 -= 0x18
            std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                x21)
        while (x22_1 != x21)
        
        x0_1 = *arg3
    
    arg2[4] = x22_1
    operator delete(x0_1)
    x22 = *arg2
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x22 = *arg2
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21_1 = arg2[1]
void* x0_3 = x22

if (x21_1 != x22)
    do
        *(x21_1 - 0x10)
        x21_1 -= 0x18
        std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
            x21_1)
    while (x22 != x21_1)
    
    x0_3 = *arg2

arg2[1] = x22
operator delete(x0_3)
sub_1101e04(arg1)
noreturn
