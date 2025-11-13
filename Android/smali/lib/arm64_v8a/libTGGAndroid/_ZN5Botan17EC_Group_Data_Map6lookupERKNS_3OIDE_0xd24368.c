// 函数: _ZN5Botan17EC_Group_Data_Map6lookupERKNS_3OIDE
// 地址: 0xd24368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
int64_t* x24 = *(arg1 + 0x28)
int64_t x25 = *(arg1 + 0x30)

while (true)
    Botan::OID* entry_x1
    int64_t* entry_x8
    
    if (x24 == x25)
        Botan::EC_Group::EC_group_info(entry_x1)
        int64_t var_50
        int64_t* var_48
        
        if (var_50 == 0)
            *entry_x8 = 0
            entry_x8[1] = 0
            
            if (var_48 != 0)
                int64_t x9_7
                int32_t i
                
                do
                    x9_7 = __ldaxr(&var_48[1])
                    i = __stlxr(x9_7 - 1, &var_48[1])
                while (i != 0)
                
                if (x9_7 == 0)
                    (*(*var_48 + 0x10))(var_48)
                    std::__ndk1::__shared_weak_count::__release_weak()
        else
            int64_t* x8_5 = *(arg1 + 0x30)
            
            if (x8_5 == *(arg1 + 0x38))
                std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::EC_Group_Data>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::EC_Group_Data> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::EC_Group_Data> const&>(
                    arg1 + 0x28)
            else
                *x8_5 = var_50
                x8_5[1] = var_48
                
                if (var_48 != 0)
                    int32_t i_1
                    
                    do
                        i_1 = __stxr(__ldxr(&var_48[1]) + 1, &var_48[1])
                    while (i_1 != 0)
                
                *(arg1 + 0x30) = &x8_5[2]
            
            *entry_x8 = var_50
            entry_x8[1] = var_48
        break
    
    void* x9_1 = *x24
    int64_t* x23_1 = x24[1]
    *entry_x8 = x9_1
    entry_x8[1] = x23_1
    
    if (x23_1 != 0)
        int32_t i_2
        
        do
            i_2 = __stxr(__ldxr(&x23_1[1]) + 1, &x23_1[1])
        while (i_2 != 0)
    
    int32_t* x9_2 = *(x9_1 + 0x1c8)
    int64_t x8_1 = *(x9_1 + 0x1d0)
    int32_t* x10_3 = *(entry_x1 + 8)
    
    if (x8_1 - x9_2 == *(entry_x1 + 0x10) - x10_3)
        if (x9_2 == x8_1)
            break
        
        while (*x9_2 == *x10_3)
            x9_2 = &x9_2[1]
            x10_3 = &x10_3[1]
            
            if (x8_1 == x9_2)
                return std::__ndk1::mutex::unlock()
    
    if (x23_1 != 0)
        int64_t x9_3
        int32_t i_3
        
        do
            x9_3 = __ldaxr(&x23_1[1])
            i_3 = __stlxr(x9_3 - 1, &x23_1[1])
        while (i_3 != 0)
        
        if (x9_3 == 0)
            (*(*x23_1 + 0x10))(x23_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    x24 = &x24[2]

return std::__ndk1::mutex::unlock()
