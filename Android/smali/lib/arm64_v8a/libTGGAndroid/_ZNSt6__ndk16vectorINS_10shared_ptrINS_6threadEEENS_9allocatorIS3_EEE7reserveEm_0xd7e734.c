// 函数: _ZNSt6__ndk16vectorINS_10shared_ptrINS_6threadEEENS_9allocatorIS3_EEE7reserveEm
// 地址: 0xd7e734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg1
int64_t entry_x1

if (entry_x1 u<= (*(arg1 + 0x10) - x19) s>> 4)
    return 

if (entry_x1 u>> 0x3c != 0)
    sub_ef2a0c()
    noreturn

void* x22_1 = *(arg1 + 8)
int64_t x21_1 = entry_x1 << 4
uint64_t x20_1 = arg1
arg1 = operator new(x21_1)
void* x11_1 = x22_1 - x19
void* x9_1 = arg1 + x11_1
int64_t x8_3 = arg1 + x21_1

if (x22_1 == x19)
    *x20_1 = x9_1
    *(x20_1 + 8) = x9_1
    *(x20_1 + 0x10) = x8_3
    
    if (x19 != 0)
        return operator delete(x19) __tailcall
    
    return 

void* x13_1

x13_1 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff

void* x12_1 = x19 - x22_1
void* x13_2

x13_2 = x13_1 s< 1 ? x13_1 : 1

void* x14_1

x14_1 = x12_1 s> x11_1 ? x12_1 : x11_1

int64_t x10_1 = 0

do
    void* x14_3 = x22_1 + x10_1
    void* x16_1 = arg1 + ((x13_2 * (x14_1 u>> 4)) << 4) + x10_1
    x10_1 -= 0x10
    *(x16_1 - 0x10) = *(x14_3 - 0x10)
    *(x16_1 - 8) = *(x14_3 - 8)
    *(x14_3 - 0x10) = 0
    *(x14_3 - 8) = 0
while (x12_1 != x10_1)

void* x13_5

x13_5 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff

void* x13_6

x13_6 = x13_5 s< 1 ? x13_5 : 1

x19 = *x20_1
void* x21_2 = *(x20_1 + 8)
void* x11_2

x11_2 = x12_1 s> x11_1 ? x12_1 : x11_1

*x20_1 = arg1 + ((x13_6 * (x11_2 u>> 4)) << 4) + x10_1
*(x20_1 + 8) = x9_1
*(x20_1 + 0x10) = x8_3

if (x21_2 != x19)
    do
        int64_t* x20_2 = *(x21_2 - 8)
        x21_2 -= 0x10
        
        if (x20_2 != 0)
            int64_t x9_3
            int32_t i
            
            do
                x9_3 = __ldaxr(&x20_2[1])
                i = __stlxr(x9_3 - 1, &x20_2[1])
            while (i != 0)
            
            if (x9_3 == 0)
                (*(*x20_2 + 0x10))(x20_2)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x21_2 != x19)

if (x19 != 0)
    return operator delete(x19) __tailcall
