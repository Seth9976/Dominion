// 函数: sub_ee7170
// 地址: 0xee7170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *arg3

if (x22 != 0)
    void** x23_1 = *(arg2 + 0x10)
    void* x0 = x22
    
    if (x23_1 != x22)
        void** x26_1 = x23_1
        
        do
            x26_1 = &x26_1[-0xa]
            *x26_1 = _vtable_for_Botan::GeneralSubtree + 0x10
            uint32_t x8_1 = zx.d(x26_1[5].b)
            x26_1[1] = _vtable_for_Botan::GeneralName + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(x23_1[-3])
                
                if ((zx.d(x23_1[-8].b) & 1) != 0)
                    operator delete(x23_1[-6])
            else if ((zx.d(x23_1[-8].b) & 1) != 0)
                operator delete(x23_1[-6])
            
            x23_1 = x26_1
        while (x22 != x26_1)
        
        x0 = *arg3
    
    *(arg2 + 0x10) = x22
    operator delete(x0)

operator delete(arg2)
sub_1101e04(arg1)
noreturn
