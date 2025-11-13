// 函数: _ZN5Botan22Blinded_Point_MultiplyD1Ev
// 地址: 0xd321c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = entry_x0[4]
entry_x0[4] = 0

if (x20 != 0)
    void* x0 = *(x20 + 0x20)
    
    if (x0 != 0)
        int64_t x8_1 = *(x20 + 0x30)
        *(x20 + 0x28) = x0
        Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)
    
    int64_t* x21_1 = *(x20 + 8)
    
    if (x21_1 != 0)
        int64_t x9_1
        int32_t i
        
        do
            x9_1 = __ldaxr(&x21_1[1])
            i = __stlxr(x9_1 - 1, &x21_1[1])
        while (i != 0)
        
        if (x9_1 == 0)
            (*(*x21_1 + 0x10))(x21_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    operator delete(x20)

void* x20_1 = *entry_x0

if (x20_1 == 0)
    return 

int64_t* x8_6 = entry_x0[1]

if (x8_6 == x20_1)
    entry_x0[1] = x20_1
    return operator delete(x20_1) __tailcall

int64_t* x21_2 = x8_6

do
    x21_2 = &x21_2[-5]
    void* x0_4 = *x21_2
    
    if (x0_4 != 0)
        int64_t x9_2 = x8_6[-3]
        x8_6[-4] = x0_4
        Botan::deallocate_memory(x0_4, (x9_2 - x0_4) s>> 2, 4)
    
    x8_6 = x21_2
while (x20_1 != x21_2)

void* x0_5 = *entry_x0
entry_x0[1] = x20_1
return operator delete(x0_5) __tailcall
