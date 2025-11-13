// 函数: sub_ea68ec
// 地址: 0xea68ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg3 + 8)

if (x0 != 0)
    *(arg3 + 0x10) = x0
    operator delete(x0)

arg2[1] = arg3
void* x20 = *arg2

if (x20 != 0)
    void** x8_1 = arg2[1]
    void* x0_1 = x20
    
    if (x8_1 != x20)
        void** x23_1 = x8_1
        
        do
            x23_1 = &x23_1[-4]
            *x23_1 = _vtable_for_Botan::OID + 0x10
            void* x0_2 = x23_1[1]
            
            if (x0_2 != 0)
                x8_1[-2] = x0_2
                operator delete(x0_2)
            
            x8_1 = x23_1
        while (x20 != x23_1)
        
        x0_1 = *arg2
    
    arg2[1] = x20
    operator delete(x0_1)

sub_1101e04(arg1)
noreturn
