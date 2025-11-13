// 函数: _ZN5Botan27Certificate_Store_In_MemoryD0Ev
// 地址: 0xeebba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x21 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Certificate_Store_In_Memory + 0x10

if (x21 != 0)
    void* x22_1 = entry_x0[5]
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
        
        x0 = entry_x0[4]
    else
        x0 = x21
    
    entry_x0[5] = x21
    operator delete(x0)

void* x21_1 = entry_x0[1]

if (x21_1 != 0)
    void* x22_2 = entry_x0[2]
    void* x0_3
    
    if (x22_2 != x21_1)
        do
            int64_t* x20_2 = *(x22_2 - 8)
            x22_2 -= 0x10
            
            if (x20_2 != 0)
                int64_t x9_2
                int32_t i_1
                
                do
                    x9_2 = __ldaxr(&x20_2[1])
                    i_1 = __stlxr(x9_2 - 1, &x20_2[1])
                while (i_1 != 0)
                
                if (x9_2 == 0)
                    (*(*x20_2 + 0x10))(x20_2)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_2 != x21_1)
        
        x0_3 = entry_x0[1]
    else
        x0_3 = x21_1
    
    entry_x0[2] = x21_1
    operator delete(x0_3)

return operator delete(entry_x0) __tailcall
