// 函数: _ZN5Botan10polyn_gf2m3gcdERKS0_S2_
// 地址: 0xda7858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_50 = *arg1
void* result_1
std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&result_1)
int64_t* x8_1 = *(arg1 + 0x28)
int64_t var_30 = *(arg1 + 0x20)

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x8_1[1]) + 1, &x8_1[1])
    while (i != 0)

int32_t var_80 = *arg2
void* var_78
std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&var_78)
int64_t* x8_4 = *(arg2 + 0x28)
int64_t var_60 = *(arg2 + 0x20)

if (x8_4 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x8_4[1]) + 1, &x8_4[1])
    while (i_1 != 0)

void* result_3 = result_1
int64_t var_40
int64_t x9_9 = var_40
void* x10_3 = x9_9 - result_3
uint32_t x11 = (x10_3 u>> 1).d
int64_t x10_4 = (x10_3 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x12 = (x11 & x11 s>> 0x1f) - 1

while (true)
    int64_t x11_2 = x10_4 - 1
    
    if (x10_4 s< 1)
        break
    
    uint32_t x13_1 = zx.d(*(result_3 + (x10_4 << 1) - 2))
    x10_4 = x11_2
    
    if (x13_1 != 0)
        x12 = x11_2.d
        break

void* x10_8 = var_78
int64_t var_70
int64_t x11_3 = var_70
var_50 = x12
void* x13_2 = x11_3 - x10_8
uint32_t x15 = (x13_2 u>> 1).d
int64_t x14 = (x13_2 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x13_4 = (x15 & x15 s>> 0x1f) - 1

while (true)
    int64_t x15_1 = x14 - 1
    
    if (x14 s< 1)
        break
    
    uint32_t x16_1 = zx.d(*(x10_8 + (x14 << 1) - 2))
    x14 = x15_1
    
    if (x16_1 != 0)
        x13_4 = x15_1.d
        break

var_80 = x13_4
int32_t* entry_x8

if (x12 s>= x13_4)
    int32_t* x21_2 = &var_80
    int32_t* x8_7 = &var_50
    int32_t* x20_2
    
    while (true)
        x20_2 = x8_7
        void* x8_8 = x11_3 - x10_8
        uint32_t x11_6 = (x8_8 u>> 1).d
        int64_t x9_10 = (x8_8 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x8_10 = (x11_6 & x11_6 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_7 = x9_10 - 1
            
            if (x9_10 s< 1)
                break
            
            uint32_t x12_2 = zx.d(*(x10_8 - 2 + (x9_10 << 1)))
            x9_10 = x11_7
            
            if (x12_2 != 0)
                x8_10 = x11_7.d
                break
        
        *x21_2 = x8_10
        
        if (x8_10 == 0xffffffff)
            break
        
        Botan::polyn_gf2m::remainder(x20_2, x21_2)
        x10_8 = *(x20_2 + 8)
        x11_3 = *(x20_2 + 0x10)
        x8_7 = x21_2
        x21_2 = x20_2
    
    *entry_x8 = *x20_2
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&entry_x8[2])
    int64_t x8_15 = *(x20_2 + 0x28)
    *(entry_x8 + 0x20) = *(x20_2 + 0x20)
    *(entry_x8 + 0x28) = x8_15
    
    if (x8_15 != 0)
        int32_t i_2
        
        do
            i_2 = __stxr(__ldxr(x8_15 + 8) + 1, x8_15 + 8)
        while (i_2 != 0)
else
    int32_t* x21_1 = &var_50
    int32_t* x10_6 = &var_80
    int32_t* x20_1
    
    while (true)
        void* x9_6 = x9_9 - result_3
        uint32_t x11_4 = (x9_6 u>> 1).d
        x20_1 = x10_6
        int64_t x10_7 = (x9_6 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x9_8 = (x11_4 & x11_4 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_5 = x10_7 - 1
            
            if (x10_7 s< 1)
                break
            
            uint32_t x12_1 = zx.d(*(result_3 - 2 + (x10_7 << 1)))
            x10_7 = x11_5
            
            if (x12_1 != 0)
                x9_8 = x11_5.d
                break
        
        *x21_1 = x9_8
        
        if (x9_8 == 0xffffffff)
            break
        
        Botan::polyn_gf2m::remainder(x20_1, x21_1)
        result_3 = *(x20_1 + 8)
        x9_9 = *(x20_1 + 0x10)
        x10_6 = x21_1
        x21_1 = x20_1
    
    *entry_x8 = *x20_1
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&entry_x8[2])
    int64_t x8_12 = *(x20_1 + 0x28)
    *(entry_x8 + 0x20) = *(x20_1 + 0x20)
    *(entry_x8 + 0x28) = x8_12
    
    if (x8_12 != 0)
        int32_t i_3
        
        do
            i_3 = __stxr(__ldxr(x8_12 + 8) + 1, x8_12 + 8)
        while (i_3 != 0)
int64_t x9_17

if (x8_4 != 0)
    int32_t i_4
    
    do
        x9_17 = __ldaxr(&x8_4[1])
        i_4 = __stlxr(x9_17 - 1, &x8_4[1])
    while (i_4 != 0)

void* var_70_1
int64_t var_68
void* x0_8

if (x8_4 != 0 && x9_17 == 0)
    (*(*x8_4 + 0x10))(x8_4)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_8 = var_78
    
    if (x0_8 != 0)
        var_70_1 = x0_8
        Botan::deallocate_memory(x0_8, (var_68 - x0_8) s>> 1, 2)
else
    x0_8 = var_78
    
    if (x0_8 != 0)
        var_70_1 = x0_8
        Botan::deallocate_memory(x0_8, (var_68 - x0_8) s>> 1, 2)
int64_t x9_18

if (x8_1 != 0)
    int32_t i_5
    
    do
        x9_18 = __ldaxr(&x8_1[1])
        i_5 = __stlxr(x9_18 - 1, &x8_1[1])
    while (i_5 != 0)

void* result
void* result_2
int64_t var_38

if (x8_1 != 0 && x9_18 == 0)
    (*(*x8_1 + 0x10))(x8_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_38 - result) s>> 1, 2)
else
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_38 - result) s>> 1, 2)
return result
