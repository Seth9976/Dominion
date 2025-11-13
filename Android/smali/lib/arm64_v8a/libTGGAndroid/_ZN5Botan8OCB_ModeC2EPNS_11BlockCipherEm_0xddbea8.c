// 函数: _ZN5Botan8OCB_ModeC2EPNS_11BlockCipherEm
// 地址: 0xddbea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::OCB_Mode + 0x10
*(arg1 + 8) = arg2
*(arg1 + 0x10) = 0
int64_t x21_1 = ((*(*arg2 + 0x38))(arg2) * (*(*arg2 + 0x30))(arg2)) << 2
__builtin_memset(arg1 + 0x20, 0, 0x18)

if (x21_1 == 0)
    goto label_ddbf54

if ((x21_1 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x0_5 = Botan::allocate_memory(x21_1, 1)
    int64_t x23_1 = x0_5 + x21_1
    *(arg1 + 0x20) = x0_5
    *(arg1 + 0x30) = x23_1
    memset(x0_5, 0, x21_1)
    *(arg1 + 0x28) = x23_1
label_ddbf54:
    uint64_t x0_7 = (*(**(arg1 + 8) + 0x30))()
    __builtin_memset(arg1 + 0x38, 0, 0x18)
    
    if (x0_7 == 0)
        goto label_ddbf98
    
    if ((x0_7 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        int64_t x0_9 = Botan::allocate_memory(x0_7, 1)
        int64_t x25_1 = x0_9 + x0_7
        *(arg1 + 0x38) = x0_9
        *(arg1 + 0x48) = x25_1
        memset(x0_9, 0, x0_7)
        *(arg1 + 0x40) = x25_1
    label_ddbf98:
        int64_t* x0_10 = *(arg1 + 8)
        int64_t entry_x2
        *(arg1 + 0x50) = entry_x2
        int64_t x0_11 = (*(*x0_10 + 0x30))()
        int64_t* x22_1 = *(arg1 + 8)
        *(arg1 + 0x58) = x0_11
        int64_t x0_13 = (*(*x22_1 + 0x38))(x22_1)
        int64_t result = (*(*x22_1 + 0x30))(x22_1)
        __builtin_memset(arg1 + 0x68, 0, 0x50)
        int64_t x8_14 = *(arg1 + 0x58)
        *(arg1 + 0x60) = ((x0_13 * result) << 2) u/ x8_14
        int64_t x9_5 = ror.q(x8_14 - 0x10, 3)
        *(arg1 + 0xb8) = zx.o(0)
        
        if (x9_5 u< 3 || x9_5 == 6)
            int64_t x9_6 = *(arg1 + 0x50)
            
            if (x9_6 u<= 0x20 && x9_6 u<= x8_14 && x9_6 u>= 8 && (x9_6 & 3) == 0)
                return result
            
            Botan::throw_invalid_argument("Invalid OCB tag length", "OCB_Mode", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_17 = Botan::throw_invalid_argument("Invalid block size for OCB", "OCB_Mode", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
void* x0_18 = *(arg1 + 0x20)

if (x0_18 != 0)
    int64_t x8_16 = *(arg1 + 0x30)
    *(arg1 + 0x28) = x0_18
    Botan::deallocate_memory(x0_18, x8_16 - x0_18, 1)

void* x20_2 = *(arg1 + 0x10)
*(arg1 + 0x10) = 0
int64_t* x0_19

if (x20_2 != 0)
    Botan::L_computer::~L_computer()
    operator delete(x20_2)
    x0_19 = *(arg1 + 8)
    *(arg1 + 8) = 0
    
    if (x0_19 != 0)
    label_ddc210:
        (*(*x0_19 + 8))()
        sub_1101e04(x0_17)
        noreturn
else
    x0_19 = *(arg1 + 8)
    *(arg1 + 8) = 0
    
    if (x0_19 != 0)
        goto label_ddc210
sub_1101e04(x0_17)
noreturn
