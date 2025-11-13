// 函数: _ZN5Botan7X509_DNC2ERKS0_
// 地址: 0xe96e84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::X509_DN + 0x10
int64_t result = std::__ndk1::vector<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>, std::__ndk1::allocator<std::__ndk1::pair<Botan::OID, Botan::ASN1_String> > >::vector(
    arg1 + 8)
__builtin_memset(arg1 + 0x20, 0, 0x18)
void* entry_x1
int64_t x9 = *(entry_x1 + 0x20)
int64_t x8_1 = *(entry_x1 + 0x28)
uint64_t x24 = x8_1 - x9

if (x8_1 != x9)
    if ((x24 & 0xffffffff80000000) != 0)
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_4 = *(arg1 + 0x20)
        void* x22_2
        
        if (x8_4 != 0)
            *(arg1 + 0x28) = x8_4
            operator delete(x8_4)
            x22_2 = *(arg1 + 8)
            
            if (x22_2 == 0)
                sub_1101e04(x0_4)
                noreturn
        else
            x22_2 = *(arg1 + 8)
            
            if (x22_2 == 0)
                sub_1101e04(x0_4)
                noreturn
        
        void* x23_1 = *(arg1 + 0x10)
        void* x0_7 = x22_2
        
        if (x23_1 != x22_2)
            bool cond:0_1
            
            do
                uint32_t x8_5 = zx.d(*(x23_1 - 0x20))
                *(x23_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                
                if ((x8_5 & 1) != 0)
                    operator delete(*(x23_1 - 0x10))
                
                void* x0_9 = *(x23_1 - 0x38)
                
                if (x0_9 != 0)
                    *(x23_1 - 0x30) = x0_9
                    operator delete(x0_9)
                
                void* x0_10 = *(x23_1 - 0x58)
                *(x23_1 - 0x60) = _vtable_for_Botan::OID + 0x10
                
                if (x0_10 != 0)
                    *(x23_1 - 0x50) = x0_10
                    operator delete(x0_10)
                
                cond:0_1 = x22_2 == x23_1 - 0x60
                x23_1 -= 0x60
            while (not(cond:0_1))
            x0_7 = *(arg1 + 8)
        
        *(arg1 + 0x10) = x22_2
        operator delete(x0_7)
        sub_1101e04(x0_4)
        noreturn
    
    result = operator new(x24)
    *(arg1 + 0x20) = result
    *(arg1 + 0x28) = result
    *(arg1 + 0x30) = result + x24
    int64_t x1_1 = *(entry_x1 + 0x20)
    int64_t result_1 = result
    size_t x20_2 = *(entry_x1 + 0x28) - x1_1
    
    if (x20_2 s>= 1)
        result = memcpy(result_1, x1_1, x20_2)
        result_1 += x20_2
    
    *(arg1 + 0x28) = result_1

return result
