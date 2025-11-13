// 函数: _ZN5Botan3TLS15TLS_Data_Reader9get_fixedIhEENSt6__ndk16vectorIT_NS3_9allocatorIS5_EEEEm
// 地址: 0xe493c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::TLS::TLS_Data_Reader::assert_at_least(arg1)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t entry_x1

if (entry_x1 != 0)
    if ((entry_x1 & 0xffffffff80000000) != 0)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_7 = *entry_x8
        
        if (x8_7 != 0)
            entry_x8[1] = x8_7
            operator delete(x8_7)
        
        sub_1101e04(x0_3)
        noreturn
    
    char* x0_1 = operator new(entry_x1)
    void* x23_1 = &x0_1[entry_x1]
    *entry_x8 = x0_1
    entry_x8[2] = x23_1
    result = memset(x0_1, 0, entry_x1)
    entry_x8[1] = x23_1
    int64_t* x8 = *(arg1 + 8)
    int64_t x9_1 = *(arg1 + 0x10)
    *x0_1 = (*x8)[x9_1]
    
    if (entry_x1 != 1)
        x0_1[1] = *(*x8 + x9_1 + 1)
        
        if (entry_x1 != 2)
            int64_t x8_4 = 2
            
            do
                (*entry_x8)[x8_4] = (**(arg1 + 8) + *(arg1 + 0x10))[x8_4]
                x8_4 += 1
            while (entry_x1 != x8_4)

*(arg1 + 0x10) += entry_x1
return result
