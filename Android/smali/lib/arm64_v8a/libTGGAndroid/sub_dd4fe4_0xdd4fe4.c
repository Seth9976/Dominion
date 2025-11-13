// 函数: sub_dd4fe4
// 地址: 0xdd4fe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg1

if (x21 == 0)
    return 

void* x22 = arg1[1]
void* x0

if (x22 != x21)
    do
        void* x0_1 = *(x22 - 0x28)
        
        if (x0_1 != 0)
            int64_t x8_1 = *(x22 - 0x18)
            *(x22 - 0x20) = x0_1
            Botan::deallocate_memory(x0_1, (x8_1 - x0_1) s>> 2, 4)
        
        int64_t* x20_1 = *(x22 - 0x30)
        x22 -= 0x38
        
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
    while (x22 != x21)
    
    x0 = *arg1
else
    x0 = x21

arg1[1] = x21
return operator delete(x0) __tailcall
