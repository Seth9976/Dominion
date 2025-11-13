// 函数: sub_d32e68
// 地址: 0xd32e68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 != 0)
    void* x22_1 = arg5
    void* x0 = arg4
    
    if (x22_1 != arg4)
        do
            x22_1 -= 0x88
            Botan::PointGFp::~PointGFp()
        while (arg4 != x22_1)
        
        x0 = arg4
    
    arg5 = arg4
    operator delete(x0)

if (arg6 != 0)
    int64_t* x8_1 = arg7
    int64_t* x0_2 = arg6
    
    if (x8_1 != arg6)
        int64_t* x22_2 = x8_1
        
        do
            x22_2 = &x22_2[-5]
            void* x0_3 = *x22_2
            
            if (x0_3 != 0)
                int64_t x9_1 = x8_1[-3]
                x8_1[-4] = x0_3
                Botan::deallocate_memory(x0_3, (x9_1 - x0_3) s>> 2, 4)
            
            x8_1 = x22_2
        while (arg6 != x22_2)
        
        x0_2 = arg6
    
    arg7 = arg6
    operator delete(x0_2)

void* x0_4 = *arg3

if (x0_4 != 0)
    *(arg2 + 0x20) = x0_4
    operator delete(x0_4)

sub_1101e04(arg1)
noreturn
