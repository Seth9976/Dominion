// 函数: _ZNSt6__ndk16vectorIN5Botan14Montgomery_IntENS_9allocatorIS2_EEE7reserveEm
// 地址: 0xdd4d90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg1
int64_t entry_x1

if (((*(arg1 + 0x10) - x19) s>> 3) * 0x6db6db6db6db6db7 u>= entry_x1)
    return 

if (entry_x1 u>= 0x492492492492493)
    sub_ef2a0c()
    noreturn

int64_t* x25_1 = *(arg1 + 8)
uint64_t x22_1 = entry_x1 * 0x38
uint64_t x21_1 = arg1
arg1 = operator new(x22_1)
void* x23_1 = arg1 + x25_1 - x19
uint64_t x24_1 = arg1 + x22_1

if (x25_1 == x19)
    *x21_1 = x23_1
    *(x21_1 + 8) = x23_1
    *(x21_1 + 0x10) = x24_1
    
    if (x19 != 0)
        return operator delete(x19) __tailcall
    
    return 

void* x22_2 = x23_1
int64_t* x26_1 = x25_1
void* x8_9

do
    x26_1 = &x26_1[-7]
    *(x22_2 - 0x38) = *x26_1
    int64_t x8_6 = x26_1[1]
    *(x22_2 - 0x30) = x8_6
    
    if (x8_6 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_6 + 8) + 1, x8_6 + 8)
        while (i != 0)
    
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(x22_2 - 0x28)
    *(x22_2 - 0x10) = x25_1[-2]
    int32_t x9_3 = x25_1[-1].d
    x8_9 = x22_2 - 0x38
    x25_1 = x26_1
    *(x22_2 - 8) = x9_3
    x22_2 = x8_9
while (x26_1 != x19)

x19 = *x21_1
void* x22_3 = *(x21_1 + 8)
*x21_1 = x8_9
*(x21_1 + 8) = x23_1
*(x21_1 + 0x10) = x24_1

if (x22_3 != x19)
    do
        arg1 = *(x22_3 - 0x28)
        
        if (arg1 != 0)
            int64_t x8_11 = *(x22_3 - 0x18)
            *(x22_3 - 0x20) = arg1
            Botan::deallocate_memory(arg1, (x8_11 - arg1) s>> 2, 4)
        
        int64_t* x20_2 = *(x22_3 - 0x30)
        x22_3 -= 0x38
        
        if (x20_2 != 0)
            int64_t x9_5
            int32_t i_1
            
            do
                x9_5 = __ldaxr(&x20_2[1])
                i_1 = __stlxr(x9_5 - 1, &x20_2[1])
            while (i_1 != 0)
            
            if (x9_5 == 0)
                (*(*x20_2 + 0x10))(x20_2)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x22_3 != x19)

if (x19 != 0)
    return operator delete(x19) __tailcall
