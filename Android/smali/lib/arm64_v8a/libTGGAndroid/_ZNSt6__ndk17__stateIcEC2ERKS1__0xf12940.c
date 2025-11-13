// 函数: _ZNSt6__ndk17__stateIcEC2ERKS1_
// 地址: 0xf12940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(std::__ndk1::__state<char>, 0x38) entry_x22
void* __offset(std::__ndk1::__state<char>, 0x38) var_20 = entry_x22
int128_t* entry_x1
int128_t v1 = *entry_x1
int128_t v0 = entry_x1[1]
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
*arg1 = v1
*(arg1 + 0x10) = v0
*(arg1 + 0x20) = 0
int64_t x9 = entry_x1[2].q
int64_t x8 = *(entry_x1 + 0x28)
uint64_t result = x8 - x9

if (x8 == x9)
label_f129ec:
    entry_x22 = arg1 + 0x38
    __builtin_memset(entry_x22, 0, 0x18)
    int64_t x9_1 = *(entry_x1 + 0x38)
    int64_t x8_5 = entry_x1[4].q
    uint64_t x24_1 = x8_5 - x9_1
    
    if (x8_5 == x9_1)
    label_f12a48:
        int64_t x9_2 = entry_x1[5].q
        *(arg1 + 0x55) = *(entry_x1 + 0x55)
        *(arg1 + 0x50) = x9_2
        return result
    
    if ((x24_1 & 0xffffffff80000000) == 0)
        result = operator new(x24_1)
        *(arg1 + 0x38) = result
        *(arg1 + 0x40) = result
        *(arg1 + 0x48) = result + (x24_1 s>> 4 << 4)
        int64_t x1_1 = *(entry_x1 + 0x38)
        uint64_t result_2 = result
        size_t x21_2 = entry_x1[4].q - x1_1
        
        if (x21_2 s>= 1)
            result = memcpy(result_2, x1_1, x21_2)
            result_2 += x21_2
        
        *(arg1 + 0x40) = result_2
        goto label_f12a48
else
    int64_t x23_1 = (result s>> 3) * -0x5555555555555555
    
    if (x23_1 u< 0xaaaaaaaaaaaaaab)
        result = operator new(result)
        *(arg1 + 0x20) = result
        *(arg1 + 0x28) = result
        *(arg1 + 0x30) = result + x23_1 * 0x18
        int64_t x1 = entry_x1[2].q
        uint64_t result_1 = result
        size_t x2_1 = *(entry_x1 + 0x28) - x1
        
        if (x2_1 s>= 1)
            result = memcpy(result_1, x1, x2_1)
            result_1 += x2_1 u/ 0x18 * 0x18
        
        *(arg1 + 0x28) = result_1
        goto label_f129ec
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_10 = *entry_x22

if (x8_10 != 0)
    *(arg1 + 0x40) = x8_10
    operator delete(x8_10)

void* x0_7 = *(arg1 + 0x20)

if (x0_7 != 0)
    *(arg1 + 0x28) = x0_7
    operator delete(x0_7)

sub_1101e04(x0_5)
noreturn
