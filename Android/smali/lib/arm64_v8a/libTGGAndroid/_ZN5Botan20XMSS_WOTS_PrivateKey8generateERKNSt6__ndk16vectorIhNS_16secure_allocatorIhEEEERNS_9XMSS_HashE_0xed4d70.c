// 函数: _ZN5Botan20XMSS_WOTS_PrivateKey8generateERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERNS_9XMSS_HashE
// 地址: 0xed4d70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x1 = *(arg1 + 0x80)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
uint64_t entry_x8
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
    entry_x8, x1)
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_68
    result = Botan::deallocate_memory(result, var_68 - result, 1)

int64_t i_1 = 0

if (*(arg1 + 0x80) != 0)
    int64_t i = 0
    
    do
        void* result_3 = *entry_x8 + i * 0x18
        int64_t x9_2 = *result_3
        result_1.b = 0
        int64_t x10_3 = *(result_3 + 8) - x9_2
        
        if (x10_3 != -0x19 && x10_3 u>= -0x19)
            *(result_3 + 8) = x10_3 + x9_2 + 0x18
        else
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(result_3, 
                0x18)
        
        result_1 = result_3
        sub_f4a08c(&result_1, &i_1 | 7)
        sub_f4a08c(&result_1, &i_1 | 6)
        sub_f4a08c(&result_1, &i_1 | 5)
        sub_f4a08c(&result_1, &i_1 | 4)
        sub_f4a08c(&result_1, &i_1 | 3)
        sub_f4a08c(&result_1, &i_1 | 2)
        sub_f4a08c(&result_1, &i_1 | 1)
        sub_f4a08c(&result_1, &i_1)
        int64_t* entry_x2
        int64_t* x0_10 = *entry_x2
        int64_t i_2 = i_1
        int64_t x25_1 = *entry_x8
        int64_t x1_10 = entry_x2[2]
        (*(*x0_10 + 0x18))(x0_10, x1_10, entry_x2[3] - x1_10)
        int64_t* x0_11 = *entry_x2
        result_1.b = 3
        (*(*x0_11 + 0x18))(x0_11, &result_1, 1)
        int64_t* x0_12 = *entry_x2
        int64_t x1_12 = *arg2
        (*(*x0_12 + 0x18))(x0_12, x1_12, *(arg2 + 8) - x1_12)
        int64_t* x0_13 = *entry_x2
        int64_t* x23_1 = x25_1 + i_2 * 0x18
        int64_t x1_13 = *x23_1
        (*(*x0_13 + 0x18))(x0_13, x1_13, *(x25_1 + i_2 * 0x18 + 8) - x1_13)
        int64_t* x22_1 = *entry_x2
        int64_t x0_15 = (**x22_1)(x22_1)
        int64_t x1_14 = *x23_1
        int64_t x8_15 = *(x25_1 + i_2 * 0x18 + 8) - x1_14
        
        if (x0_15 u> x8_15)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x23_1)
            x1_14 = *x23_1
        else if (x0_15 u< x8_15)
            *(x25_1 + i_2 * 0x18 + 8) = x1_14 + x0_15
        
        result = (*(*x22_1 + 0x20))(x22_1, x1_14)
        i = i_1 + 1
        i_1 = i
    while (i u< *(arg1 + 0x80))

return result
