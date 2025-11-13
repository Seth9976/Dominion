// 函数: _ZN5Botan11SecureQueueaSERKS0_
// 地址: 0xd7da14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (arg1 != entry_x1)
    int64_t* i_2 = *(arg1 + 0x60)
    
    if (i_2 != 0)
        int64_t* i
        
        do
            i = *i_2
            void* x0_5 = i_2[1]
            *i_2 = 0
            i_2[4] = 0
            i_2[5] = 0
            
            if (x0_5 != 0)
                int64_t x8_3 = i_2[3]
                i_2[2] = x0_5
                Botan::deallocate_memory(x0_5, x8_3 - x0_5, 1)
            
            operator delete(i_2)
            i_2 = i
        while (i != 0)
    
    *(arg1 + 0x60) = 0
    *(arg1 + 0x68) = 0
    *(arg1 + 0x58) = *(entry_x1 + 0x58)
    int64_t* x0 = operator new(0x30)
    x0[1] = 0
    x0[2] = 0
    x0[3] = 0
    int64_t x0_1 = Botan::allocate_memory(0x400, 1)
    x0[1] = x0_1
    x0[3] = x0_1 + 0x400
    memset(x0_1, 0, 0x400)
    x0[2] = x0_1 + 0x400
    *x0 = 0
    x0[4] = 0
    x0[5] = 0
    *(arg1 + 0x60) = x0
    *(arg1 + 0x68) = x0
    
    for (void** i_1 = *(entry_x1 + 0x60); i_1 != 0; i_1 = *i_1)
        i_1[5]
        Botan::SecureQueue::write(arg1, i_1[1] + i_1[4])

return arg1
