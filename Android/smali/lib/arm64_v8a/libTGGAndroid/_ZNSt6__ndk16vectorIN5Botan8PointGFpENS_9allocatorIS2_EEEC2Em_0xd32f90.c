// 函数: _ZNSt6__ndk16vectorIN5Botan8PointGFpENS_9allocatorIS2_EEEC2Em
// 地址: 0xd32f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)
int64_t entry_x1

if (entry_x1 == 0)
    return 

uint64_t x19_1 = arg1

if (entry_x1 u>= 0x1e1e1e1e1e1e1e2)
    int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x22 = *x19_1
    
    if (x22 != 0)
        int64_t x21_1 = *(x19_1 + 8)
        void* x0_3 = x22
        
        if (x21_1 != x22)
            do
                x21_1 -= 0x88
                Botan::PointGFp::~PointGFp()
            while (x22 != x21_1)
            
            x0_3 = *x19_1
        
        *(x19_1 + 8) = x22
        operator delete(x0_3)
    
    sub_1101e04(x0_2)
    noreturn

arg1 = operator new(entry_x1 * 0x88)
int64_t x8_2 = arg1 + entry_x1 * 0x88
*x19_1 = arg1
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = x8_2

do
    __builtin_memset(arg1 + 0x20, 0, 0x60)
    *(arg1 + 0x78) = -1
    *(arg1 + 0x80) = 0
    __builtin_memset(arg1, 0, 0x20)
    *(arg1 + 0x28) = -1
    *(arg1 + 0x30) = 1
    __builtin_memset(arg1 + 0x38, 0, 0x18)
    *(arg1 + 0x50) = -1
    *(arg1 + 0x58) = 1
    __builtin_memset(arg1 + 0x60, 0, 0x18)
    *(arg1 + 0x80) = 1
    arg1 += 0x88
while (arg1 != x8_2)

*(x19_1 + 8) = x8_2
