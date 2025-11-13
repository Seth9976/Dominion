// 函数: _ZN5Botan3TLS15TLS_Data_Reader9get_rangeIhEENSt6__ndk16vectorIT_NS3_9allocatorIS5_EEEEmmm
// 地址: 0xe43948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = Botan::TLS::TLS_Data_Reader::get_num_elems(arg1, arg2, 1, arg3)
int64_t result = Botan::TLS::TLS_Data_Reader::assert_at_least(arg1)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (x0 != 0)
    if ((x0 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_7 = *entry_x8
        
        if (x8_7 != 0)
            entry_x8[1] = x8_7
            operator delete(x8_7)
        
        sub_1101e04(x0_5)
        noreturn
    
    char* x0_3 = operator new(x0)
    void* x23_1 = &x0_3[x0]
    *entry_x8 = x0_3
    entry_x8[2] = x23_1
    result = memset(x0_3, 0, x0)
    entry_x8[1] = x23_1
    int64_t* x8 = *(arg1 + 8)
    int64_t x9_1 = *(arg1 + 0x10)
    *x0_3 = (*x8)[x9_1]
    
    if (x0 != 1)
        x0_3[1] = *(*x8 + x9_1 + 1)
        
        if (x0 != 2)
            int64_t x8_4 = 2
            
            do
                (*entry_x8)[x8_4] = (**(arg1 + 8) + *(arg1 + 0x10))[x8_4]
                x8_4 += 1
            while (x0 != x8_4)

*(arg1 + 0x10) += x0
return result
