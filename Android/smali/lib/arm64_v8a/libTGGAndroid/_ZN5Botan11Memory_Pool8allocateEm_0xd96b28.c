// 函数: _ZN5Botan11Memory_Pool8allocateEm
// 地址: 0xd96b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = 0
int64_t entry_x1

if (entry_x1 - 0x10 u<= 0xf0 && *arg1 u>= entry_x1)
    int64_t x9_1 = 0
    int64_t x10_1
    int64_t x24_1
    
    do
        x24_1 = *(&data_8519b8 + x9_1)
        x10_1 = x9_1 + 8
        
        if (x9_1 == 0x60)
            break
        
        x9_1 = x10_1
    while (x24_1 u< entry_x1)
    
    if (x10_1 == 0x68)
        return 0
    
    std::__ndk1::mutex::lock()
    int64_t* x22_2 = arg1 + 0x68
    int64_t* x23 = *x22_2
    int64_t* x20_1
    
    if (x23 != 0)
        x22_2 = arg1 + 0x68
        
        while (true)
            int64_t x8_2 = x23[4]
            
            if (x24_1 u>= x8_2)
                if (x8_2 u>= x24_1)
                    goto label_d96bec
                
                x22_2 = &x23[1]
                int64_t* x8_4 = *x22_2
                
                if (x8_4 == 0)
                    goto label_d96bec
                
                x23 = x8_4
            else
                int64_t* x8_3 = *x23
                
                if (x8_3 == 0)
                    x22_2 = x23
                    x20_1 = *x22_2
                    
                    if (x20_1 != 0)
                        goto label_d96c60
                    
                    break
                
                x22_2 = x23
                x23 = x8_3
        
        goto label_d96bf8
    
    x23 = x22_2
label_d96bec:
    x20_1 = *x22_2
    
    if (x20_1 == 0)
    label_d96bf8:
        int64_t* x0_1 = operator new(0x58)
        x0_1[4] = x24_1
        *x0_1 = 0
        x0_1[1] = 0
        x0_1[2] = x23
        __builtin_memset(&x0_1[5], 0, 0x30)
        *x22_2 = x0_1
        x20_1 = x0_1
        int64_t x8_6 = **(arg1 + 0x60)
        int64_t* x1
        
        if (x8_6 == 0)
            x1 = x20_1
        else
            *(arg1 + 0x60) = x8_6
            x1 = *x22_2
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(arg1 + 0x68), x1)
        *(arg1 + 0x70) += 1
    
label_d96c60:
    int64_t x10_2 = x20_1[9]
    int64_t x8_9 = x20_1[6]
    uint64_t x9_3 = x10_2 u/ 0x38
    
    if (x20_1[7] == x8_9)
    label_d96d10:
        int64_t x9_4 = *(arg1 + 0x58)
        
        if (x9_4 == 0)
            std::__ndk1::mutex::unlock()
            return 0
        
        int64_t x10_5 = *(arg1 + 0x50)
        int64_t* x8_12 = *(arg1 + 0x38)
        int64_t x22_5 = *(*(x8_12 + (x10_5 u>> 6 & 0x3fffffffffffff8)) + ((x10_5 & 0x1ff) << 3))
        *(arg1 + 0x50) = x10_5 + 1
        *(arg1 + 0x58) = x9_4 - 1
        
        if (x10_5 + 1 u>= 0x400)
            operator delete(*x8_12)
            int64_t x9_7 = *(arg1 + 0x50) - 0x200
            *(arg1 + 0x38) += 8
            *(arg1 + 0x50) = x9_7
        
        int64_t x8_15 = *arg1
        uint64_t x23_1 = x8_15 u/ x24_1
        int64_t var_90_1 = x8_15
        void* var_70
        __builtin_memset(&var_70, 0, 0x18)
        
        if ((x23_1 + 0x1f) u>> 5 != 0)
            std::__ndk1::vector<uint32_t, std::__ndk1::allocator<uint32_t> >::__append(&var_70)
        
        int32_t x9_9
        
        if ((x23_1 & 0x1f) == 0)
            x9_9 = -1
        else
            x9_9 = not.d(0xffffffff << x23_1.d)
        
        int32_t var_78_1 = 0xffffffff
        int32_t var_74_1 = x9_9
        char var_58_1 = 0
        int64_t x8_17 = x20_1[9]
        
        if (x8_17 == 0)
            std::__ndk1::deque<Botan::Bucket, std::__ndk1::allocator<Botan::Bucket> >::__add_front_capacity()
            x8_17 = x20_1[9]
        
        int64_t x10_7 = x20_1[6]
        int64_t* x9_11 = x10_7 + ((x8_17 u/ 0x38) << 3)
        int64_t x13_2 = *x9_11
        void* x8_20
        
        if (x20_1[7] == x10_7)
            x8_20 = nullptr
        else
            x8_20 = x13_2 + x8_17 u% 0x38 * 0x48
        
        if (x8_20 == x13_2)
            x8_20 = x9_11[-1] + 0xfc0
        
        *(x8_20 - 0x38) = x22_5
        *(x8_20 - 0x48) = x24_1.o
        __builtin_memset(x8_20 - 0x20, 0, 0x18)
        *(x8_20 - 0x30) = x23_1.o
        *(x8_20 - 0x20) = var_70
        __builtin_memset(x8_20 - 0x18, 0, 0x11)
        __builtin_memset(&var_70, 0, 0x18)
        int64_t x8_23 = x20_1[9] - 1
        int64_t x9_15 = x20_1[0xa] + 1
        x20_1[9] = x8_23
        x20_1[0xa] = x9_15
        void* x0_7 = var_70
        
        if (x0_7 != 0)
            void* var_68_1 = x0_7
            operator delete(x0_7)
            x8_23 = x20_1[9]
        
        *(x20_1[6] + ((x8_23 u/ 0x38) << 3))
        int64_t result_2 = Botan::Bucket::alloc()
        result = result_2
        
        if (result_2 == 0)
            int64_t* x0_12 = Botan::assertion_failure("p != nullptr", &data_793a18, "allocate", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc40c)
            void* x8_25 = var_70
            
            if (x8_25 != 0)
                void* var_68_2 = x8_25
                operator delete(x8_25)
            
            std::__ndk1::mutex::unlock()
            sub_1101e04(x0_12)
            noreturn
    else
        int64_t x10_3 = x20_1[0xa] + x10_2
        int64_t x22_4 = *(x8_9 + (x9_3 << 3)) + x10_2 u% 0x38 * 0x48
        int64_t x25_1 = *(x8_9 + ((x10_3 u/ 0x38) << 3)) + x10_3 u% 0x38 * 0x48
        
        if (x22_4 == x25_1)
            goto label_d96d10
        
        int64_t* x26_1 = x8_9 + (x9_3 << 3)
        
        while (true)
            int64_t result_1
            int128_t v0_1
            result_1, v0_1 = Botan::Bucket::alloc()
            result = result_1
            
            if (result_1 != 0)
                break
            
            x22_4 += 0x48
            
            if (x22_4 - *x26_1 == 0xfc0)
                x26_1 = &x26_1[1]
                x22_4 = *x26_1
            
            if (x22_4 == x25_1)
                goto label_d96d10
    
    std::__ndk1::mutex::unlock()

return result
