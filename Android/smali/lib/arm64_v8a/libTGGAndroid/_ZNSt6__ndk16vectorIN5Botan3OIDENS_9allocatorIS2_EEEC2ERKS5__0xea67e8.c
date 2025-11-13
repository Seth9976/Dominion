// 函数: _ZNSt6__ndk16vectorIN5Botan3OIDENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xea67e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t x22 = x8 - x9

if (x8 == x9)
    return 

std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> > const& x19_1 = arg1

if ((x22 & 0xffffffff80000000) != 0)
label_ea68e0:
    int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x20_2 = *x19_1
    
    if (x20_2 != 0)
        void** x8_7 = *(x19_1 + 8)
        void* x0_6 = x20_2
        
        if (x8_7 != x20_2)
            void** x23_2 = x8_7
            
            do
                x23_2 = &x23_2[-4]
                *x23_2 = _vtable_for_Botan::OID + 0x10
                void* x0_7 = x23_2[1]
                
                if (x0_7 != 0)
                    x8_7[-2] = x0_7
                    operator delete(x0_7)
                
                x8_7 = x23_2
            while (x20_2 != x23_2)
            
            x0_6 = *x19_1
        
        *(x19_1 + 8) = x20_2
        operator delete(x0_6)
    
    sub_1101e04(x0_5)
    noreturn

arg1 = operator new(x22)
*x19_1 = arg1
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = arg1 + (x22 s>> 5 << 5)
void* x23_1 = *entry_x1
int64_t x24_1 = entry_x1[1]
std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> > const& x20_1 = arg1

if (x23_1 != x24_1)
    while (true)
        *(x20_1 + 0x10) = 0
        *(x20_1 + 0x18) = 0
        *x20_1 = _vtable_for_Botan::OID + 0x10
        *(x20_1 + 8) = 0
        int64_t x9_1 = *(x23_1 + 8)
        int64_t x8_3 = *(x23_1 + 0x10)
        uint64_t x22_1 = x8_3 - x9_1
        
        if (x8_3 != x9_1)
            if ((x22_1 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                break
            
            arg1 = operator new(x22_1)
            *(x20_1 + 8) = arg1
            *(x20_1 + 0x10) = arg1
            *(x20_1 + 0x18) = arg1 + (x22_1 s>> 2 << 2)
            int64_t x1 = *(x23_1 + 8)
            std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> > const& x21_2 = arg1
            size_t x22_2 = *(x23_1 + 0x10) - x1
            
            if (x22_2 s>= 1)
                memcpy(x21_2, x1, x22_2)
                x21_2 += x22_2
            
            *(x20_1 + 0x10) = x21_2
        
        x23_1 += 0x20
        x20_1 += 0x20
        
        if (x24_1 == x23_1)
            goto label_ea68bc
    
    goto label_ea68e0

label_ea68bc:
*(x19_1 + 8) = x20_1
