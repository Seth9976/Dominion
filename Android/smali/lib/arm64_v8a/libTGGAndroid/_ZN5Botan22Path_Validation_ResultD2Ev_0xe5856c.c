// 函数: _ZN5Botan22Path_Validation_ResultD2Ev
// 地址: 0xe5856c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x21 = entry_x0[6]

if (x21 != 0)
    void* x22_1 = entry_x0[7]
    void* x0
    
    if (x22_1 != x21)
        do
            int64_t* x20_1 = *(x22_1 - 8)
            x22_1 -= 0x10
            
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
        while (x22_1 != x21)
        
        x0 = entry_x0[6]
    else
        x0 = x21
    
    entry_x0[7] = x21
    operator delete(x0)

void* x21_1 = entry_x0[3]

if (x21_1 != 0)
    void* x20_2 = entry_x0[4]
    void* x0_4
    
    if (x20_2 == x21_1)
        x0_4 = x21_1
    else
        do
            *(x20_2 - 0x10)
            x20_2 -= 0x18
            std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                x20_2)
        while (x21_1 != x20_2)
        
        x0_4 = entry_x0[3]
    
    entry_x0[4] = x21_1
    operator delete(x0_4)

void* x21_2 = *entry_x0

if (x21_2 == 0)
    return 

void* x20_3 = entry_x0[1]
void* x0_6

if (x20_3 == x21_2)
    x0_6 = x21_2
else
    do
        *(x20_3 - 0x10)
        x20_3 -= 0x18
        std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
            x20_3)
    while (x21_2 != x20_3)
    
    x0_6 = *entry_x0

entry_x0[1] = x21_2
return operator delete(x0_6) __tailcall
