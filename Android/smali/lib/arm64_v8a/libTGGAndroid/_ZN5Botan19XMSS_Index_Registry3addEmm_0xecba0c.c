// 函数: _ZN5Botan19XMSS_Index_Registry3addEmm
// 地址: 0xecba0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
void* x22 = *arg1
uint64_t* x8 = *(arg1 + 8)
void* x25 = x8 - x22
int64_t x26 = x25 s>> 3
int64_t result
int64_t x27_1

if (x8 != x22)
    void* x10_1
    
    x10_1 = x25 s>= 0 ? x25 : -ffffffffffffffff
    
    void* x9_1 = x22 - x8
    void* x10_2
    
    x10_2 = x10_1 s< 1 ? x10_1 : 1
    
    void* x9_2
    
    x9_2 = x9_1 s> x25 ? x9_1 : x25
    
    int64_t x9_4 = x10_2 * (x9_2 u>> 3)
    x27_1 = 0
    result = 0
    int64_t x9_5
    
    x9_5 = x9_4 u> 1 ? x9_4 : 1
    
    while (*(x22 + (result << 3)) != arg2)
        result += 1
        x27_1 += 0x10
        
        if (x9_5 == result)
            goto label_ecbb30

int64_t entry_x2

if (x8 == x22 || result u>= x26)
label_ecbb30:
    
    if (x8 == *(arg1 + 0x10))
        if ((x26 + 1) u>> 0x3d != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            sub_ef2a0c()
            noreturn
        
        int64_t x9_11 = x25 s>> 2
        int64_t x8_12
        
        if (x9_11 u< x26 + 1)
            x8_12 = x26 + 1
        else
            x8_12 = x9_11
        
        int64_t x27_2
        
        x27_2 = x26 u< 0xfffffffffffffff ? x8_12 : 0x1fffffffffffffff
        
        int64_t x23_1
        
        if (x27_2 == 0)
            x23_1 = 0
        else
            if (x27_2 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            x23_1 = operator new(x27_2 << 3)
        
        uint64_t* x28_1 = x23_1 + (x26 << 3)
        *x28_1 = arg2
        
        if (x25 s>= 1)
            memcpy(x23_1, x22, x25)
        
        *arg1 = x23_1
        *(arg1 + 8) = &x28_1[1]
        *(arg1 + 0x10) = x23_1 + (x27_2 << 3)
        
        if (x22 != 0)
            operator delete(x22)
    else
        *x8 = arg2
        *(arg1 + 8) = &x8[1]
    
    void** x0_8 = operator new(0x20)
    x0_8[2] = 0
    *x0_8 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Atomic<uint64_t>, std::__ndk1::allocator<Botan::Atomic<uint64_t> > >
        + 0x10
    x0_8[1] = 0
    x0_8[3] = entry_x2
    void* var_70_1 = &x0_8[3]
    void** x9_13 = *(arg1 + 0x20)
    
    if (x9_13 u>= *(arg1 + 0x28))
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::Atomic<uint64_t> >, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::Atomic<uint64_t> > > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::Atomic<uint64_t> > >(
            arg1 + 0x18)
        
        if (x0_8 != 0)
            int64_t x9_14
            int32_t i
            
            do
                x9_14 = __ldaxr(&x0_8[1])
                i = __stlxr(x9_14 - 1, &x0_8[1])
            while (i != 0)
            
            if (x9_14 == 0)
                (*(*x0_8 + 0x10))(x0_8)
                std::__ndk1::__shared_weak_count::__release_weak()
    else
        *x9_13 = &x0_8[3]
        x9_13[1] = x0_8
        *(arg1 + 0x20) = &x9_13[2]
    
    result = ((*(arg1 + 8) - *arg1) s>> 3) - 1
else if (**(*(arg1 + 0x18) + x27_1) u< entry_x2)
    void** x0_1 = operator new(0x20)
    x0_1[2] = 0
    *x0_1 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Atomic<uint64_t>, std::__ndk1::allocator<Botan::Atomic<uint64_t> > >
        + 0x10
    x0_1[1] = 0
    x0_1[3] = entry_x2
    void* x8_6 = *(arg1 + 0x18) + x27_1
    int64_t* x20_1 = *(x8_6 + 8)
    *x8_6 = &x0_1[3]
    *(x8_6 + 8) = x0_1
    
    if (x20_1 != 0)
        int64_t x9_8
        int32_t i_1
        
        do
            x9_8 = __ldaxr(&x20_1[1])
            i_1 = __stlxr(x9_8 - 1, &x20_1[1])
        while (i_1 != 0)
        
        if (x9_8 == 0)
            (*(*x20_1 + 0x10))(x20_1)
            std::__ndk1::__shared_weak_count::__release_weak()
std::__ndk1::mutex::unlock()
return result
