// 函数: _ZN5Botan27ChaCha20Poly1305_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xd0235c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t x8_1 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8_1
int64_t entry_x2

if (x9_1 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
else
    int64_t x0 = (*(*arg1 + 0x38))(arg1, x8_1 + entry_x2, x9_1 - entry_x2)
    int64_t x8_2 = *arg2
    int64_t x9_4 = x0 + entry_x2
    int64_t x10_2 = *(arg2 + 8) - x8_2
    
    if (x9_4 u> x10_2)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    else if (x9_4 u< x10_2)
        *(arg2 + 8) = x8_2 + x9_4
    
    int64_t x8_4 = *(arg1 + 0x30)
    int64_t var_48
    
    if (x8_4 == 0x18 || x8_4 == 0xc)
        int64_t x8_6 = *(arg1 + 0x38) & 0xf
        
        if (x8_6 != 0)
            var_48 = 0
            int64_t var_40_1 = 0
            int64_t* x0_2 = *(arg1 + 0x10)
            (*(*x0_2 + 0x18))(x0_2, &var_48, 0x10 - x8_6)
        
        var_48 = *(arg1 + 0x20) - *(arg1 + 0x18)
        int64_t* x0_3 = *(arg1 + 0x10)
        (*(*x0_3 + 0x18))(x0_3, &var_48, 8)
    
    var_48 = *(arg1 + 0x38)
    int64_t* x0_4 = *(arg1 + 0x10)
    (*(*x0_4 + 0x18))(x0_4, &var_48, 8)
    int64_t x8_14 = *arg2
    int64_t x9_9 = *(arg2 + 8) - x8_14
    int64_t x9_10
    
    if (x9_9 != -0x11 && x9_9 u>= -0x11)
        x9_10 = x9_9 + x8_14 + 0x10
        *(arg2 + 8) = x9_10
    else
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
        *arg2
        x9_10 = *(arg2 + 8)
    
    int64_t* x0_6 = *(arg1 + 0x10)
    int64_t result = (*(*x0_6 + 0x20))(x0_6, x9_10 - 0x10)
    *(arg1 + 0x30) = 0
    *(arg1 + 0x38) = 0
    
    if (*(x22 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
