// 函数: sub_f1ef68
// 地址: 0xf1ef68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = arg3 + arg4
void* x20 = *arg2

if (x20 != 0)
    void** x22 = arg2[1]
    void* x0 = x20
    
    if (x22 != x20)
        void** x25_1 = x22
        
        do
            x25_1 = &x25_1[-0xa]
            *x25_1 = _vtable_for_Botan::GeneralSubtree + 0x10
            uint32_t x8_1 = zx.d(x25_1[5].b)
            x25_1[1] = _vtable_for_Botan::GeneralName + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(x22[-3])
                
                if ((zx.d(x22[-8].b) & 1) != 0)
                    operator delete(x22[-6])
            else if ((zx.d(x22[-8].b) & 1) != 0)
                operator delete(x22[-6])
            
            x22 = x25_1
        while (x20 != x25_1)
        
        x0 = *arg2
    
    arg2[1] = x20
    operator delete(x0)

sub_1101e04(arg1)
noreturn
