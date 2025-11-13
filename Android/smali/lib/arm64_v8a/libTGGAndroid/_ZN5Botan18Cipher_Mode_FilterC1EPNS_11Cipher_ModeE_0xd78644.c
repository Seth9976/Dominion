// 函数: _ZN5Botan18Cipher_Mode_FilterC1EPNS_11Cipher_ModeE
// 地址: 0xd78644
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
*arg1 = _vtable_for_Botan::Keyed_Filter + 0x10
int64_t* entry_x1
uint64_t x0_2 = (*(*entry_x1 + 0x50))(entry_x1)
uint64_t x21_1 = x0_2

if (x0_2 u> 0x3ff)
label_d786f0:
    (*(*entry_x1 + 0x58))(entry_x1)
    Botan::Buffered_Filter::Buffered_Filter(arg1 + 0x50, x21_1)
    *(arg1 + 0x88) = entry_x1
    *arg1 = _vtable_for_Botan::Cipher_Mode_Filter + 0x10
    *(arg1 + 0x50) = _vtable_for_Botan::Cipher_Mode_Filter + 0x90
    uint64_t x0_7 = (*(*entry_x1 + 0x60))(entry_x1)
    x21_1 = arg1 + 0x90
    __builtin_memset(x21_1, 0, 0x18)
    
    if (x0_7 == 0)
        goto label_d78778
    
    if ((x0_7 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        int64_t x0_9 = operator new(x0_7)
        int64_t x22_2 = x0_9 + x0_7
        *(arg1 + 0x90) = x0_9
        *(arg1 + 0xa0) = x22_2
        memset(x0_9, 0, x0_7)
        *(arg1 + 0x98) = x22_2
    label_d78778:
        uint64_t result = (*(**(arg1 + 0x88) + 0x50))()
        __builtin_memset(arg1 + 0xa8, 0, 0x18)
        
        if (result == 0)
            return result
        
        if ((result & 0xffffffff80000000) == 0)
            int64_t x0_12 = Botan::allocate_memory(result, 1)
            int64_t x21_2 = x0_12 + result
            *(arg1 + 0xa8) = x0_12
            *(arg1 + 0xb8) = x21_2
            result = memset(x0_12, 0, result)
            *(arg1 + 0xb0) = x21_2
            return result
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else if (x21_1 != 0)
    int32_t x8_4 = x21_1.d & 0xffff
    uint64_t x8_5 = zx.q(0x400 u% x8_4)
    
    if (x8_5.d == 0)
        x21_1 = 0x400
    else
        x21_1 = x21_1 - x8_5 + 0x400
    
    goto label_d786f0

int64_t* x0_15 = Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
void* x0_16 = *x21_1

if (x0_16 != 0)
    *(arg1 + 0x98) = x0_16
    operator delete(x0_16)

int64_t* x0_17 = *(arg1 + 0x88)
*(arg1 + 0x88) = 0

if (x0_17 != 0)
    (*(*x0_17 + 8))()

void* x0_18 = *(arg1 + 0x68)
*(arg1 + 0x50) = _vtable_for_Botan::Buffered_Filter + 0x10

if (x0_18 != 0)
    int64_t x8_16 = *(arg1 + 0x78)
    *(arg1 + 0x70) = x0_18
    Botan::deallocate_memory(x0_18, x8_16 - x0_18, 1)

void* x0_19 = *(arg1 + 0x20)
*arg1 = _vtable_for_Botan::Filter + 0x10

if (x0_19 != 0)
    *(arg1 + 0x28) = x0_19
    operator delete(x0_19)

void* x0_20 = *(arg1 + 8)

if (x0_20 != 0)
    int64_t x8_18 = *(arg1 + 0x18)
    *(arg1 + 0x10) = x0_20
    Botan::deallocate_memory(x0_20, x8_18 - x0_20, 1)

sub_1101e04(x0_15)
noreturn
