// 函数: _ZNSt6__ndk16vectorIN5Botan10polyn_gf2mENS_9allocatorIS2_EEE13__vdeallocateEv
// 地址: 0xf05594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x21 = *entry_x0

if (x21 == 0)
    return 

void* x22_1 = entry_x0[1]
void* x0

if (x22_1 != x21)
    do
        int64_t* x20_1 = *(x22_1 - 8)
        int64_t x9_1
        
        if (x20_1 != 0)
            int32_t i
            
            do
                x9_1 = __ldaxr(&x20_1[1])
                i = __stlxr(x9_1 - 1, &x20_1[1])
            while (i != 0)
        
        void* x0_1
        
        if (x20_1 != 0 && x9_1 == 0)
            (*(*x20_1 + 0x10))(x20_1)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_1 = *(x22_1 - 0x28)
            
            if (x0_1 != 0)
                goto label_f055f4
        else
            x0_1 = *(x22_1 - 0x28)
            
            if (x0_1 != 0)
            label_f055f4:
                int64_t x8_2 = *(x22_1 - 0x18)
                *(x22_1 - 0x20) = x0_1
                Botan::deallocate_memory(x0_1, (x8_2 - x0_1) s>> 1, 2)
        x22_1 -= 0x30
    while (x22_1 != x21)
    
    x0 = *entry_x0
else
    x0 = x21

entry_x0[1] = x21
operator delete(x0)
__builtin_memset(entry_x0, 0, 0x18)
