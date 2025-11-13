// 函数: sub_ea8774
// 地址: 0xea8774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    void** x8_2 = arg3
    void** x0_2 = arg2
    
    if (x8_2 != arg2)
        void** x25_1 = x8_2
        
        do
            x25_1 = &x25_1[-4]
            *x25_1 = _vtable_for_Botan::OID + 0x10
            void* x0_3 = x25_1[1]
            
            if (x0_3 != 0)
                x8_2[-2] = x0_3
                operator delete(x0_3)
            
            x8_2 = x25_1
        while (arg2 != x25_1)
        
        x0_2 = arg2
    
    arg3 = arg2
    operator delete(x0_2)
    
    if ((arg1 & 1) == 0)
        return sub_ea8810() __tailcall
else if (arg1 == 0)
    return sub_ea8810() __tailcall

return sub_ea8804() __tailcall
