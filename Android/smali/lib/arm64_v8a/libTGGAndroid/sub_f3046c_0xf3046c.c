// 函数: sub_f3046c
// 地址: 0xf3046c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x28 = *(arg1 + 8)
int64_t x27 = *(arg1 + 0x10)
uint8_t* x23 = *(arg1 + 0x18)
int64_t x20 = *(arg1 + 0x20)
int64_t* x0_1 = Botan_FFI::safe_get<Botan::Cipher_Mode, 3030564764u>(*(arg1 + 0x28))
void* x26 = *(arg1 + 0x28)
int64_t x1_4
size_t x2_2

if ((zx.d(*(arg1 + 0x30)) & 1) != 0)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
        x26 + 0x18, x23)
    **(arg1 + 0x38) = x28
    **(arg1 + 0x40) = 0
    (*(*x0_1 + 0x40))(x0_1, x26 + 0x18, 0)
    **(arg1 + 0x40) = *(x26 + 0x20) - *(x26 + 0x18)
    x1_4 = *(x26 + 0x18)
    x2_2 = *(x26 + 0x20) - x1_4
    
    if (x2_2 u> x27)
        return 0xffffffff
    
    if (x2_2 == 0)
        goto label_f306dc
    
    if (x20 != 0 && x1_4 != 0)
    label_f306d4:
        memmove(x20, x1_4, x2_2)
        x1_4 = *(x26 + 0x18)
    label_f306dc:
        *(x26 + 0x20) = x1_4
        return 0
    
label_f30728:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else if (x28 == 0)
    **(arg1 + 0x40) = *(x26 + 0x20) - *(x26 + 0x18)
    x1_4 = *(x26 + 0x18)
    x2_2 = *(x26 + 0x20) - x1_4
    
    if (x27 u< x2_2)
        return 0xffffffff
    
    if (x2_2 == 0)
        goto label_f306dc
    
    if (x20 != 0 && x1_4 != 0)
        goto label_f306d4
    
label_f30728_1:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    size_t x0_3 = (*(*x0_1 + 0x50))(x0_1)
    
    if ((*(*x0_1 + 0x50))(x0_1) u> (*(*x0_1 + 0x58))(x0_1))
        int64_t x8_7 = *(x26 + 0x18)
        int64_t x9_2 = *(x26 + 0x20) - x8_7
        
        if (x0_3 u> x9_2)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x26 + 0x18)
        else if (x0_3 u< x9_2)
            *(x26 + 0x20) = x8_7 + x0_3
        
        int64_t x25_2 = 0
        
        if (x27 u>= x0_3 && x28 u>= x0_3)
            if (x0_3 == 0)
                while (true)
                    int64_t x1_9 = *(x26 + 0x18)
                    int64_t x0_19 = (*(*x0_1 + 0x38))(x0_1, x1_9, *(x26 + 0x20) - x1_9)
                    int64_t x8_32 = *(x26 + 0x18)
                    int64_t x9_8 = *(x26 + 0x20) - x8_32
                    
                    if (x0_19 u> x9_8)
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                            x26 + 0x18)
                    else if (x0_19 u< x9_8)
                        *(x26 + 0x20) = x8_32 + x0_19
            else
                int64_t fp_1 = 0
                x25_2 = 0
                bool cond:5_1
                
                do
                    if (x23 == fp_1)
                        goto label_f30728_1
                    
                    int64_t x0_11 = *(x26 + 0x18)
                    
                    if (x0_11 == 0)
                        goto label_f30728_1
                    
                    memmove(x0_11, &x23[x25_2], x0_3)
                    int64_t x1_6 = *(x26 + 0x18)
                    int64_t x0_13 = (*(*x0_1 + 0x38))(x0_1, x1_6, *(x26 + 0x20) - x1_6)
                    int64_t x1_7 = *(x26 + 0x18)
                    int64_t x8_23 = *(x26 + 0x20) - x1_7
                    
                    if (x0_13 u> x8_23)
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                            x26 + 0x18)
                        x1_7 = *(x26 + 0x18)
                    else if (x0_13 u< x8_23)
                        *(x26 + 0x20) = x1_7 + x0_13
                    
                    if (x20 == fp_1)
                        goto label_f30728_1
                    
                    if (x1_7 == 0)
                        goto label_f30728_1
                    
                    memmove(x20 + x25_2, x1_7, x0_3)
                    x25_2 += x0_3
                    
                    if (x28 - x0_3 + fp_1 u< x0_3)
                        break
                    
                    cond:5_1 = x27 - x0_3 + fp_1 u>= x0_3
                    fp_1 -= x0_3
                while (cond:5_1)
        
        **(arg1 + 0x40) = x25_2
        **(arg1 + 0x38) = x25_2
        return 0
void* x0_21
int32_t x1_11
x0_21, x1_11 = Botan::assertion_failure(
    "cipher.update_granularity() > cipher.minimum_final_size()", "logic error", "operator()", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x92d4)

if (x1_11 != 1)
    sub_1101e04(x0_21)
    noreturn

__cxa_begin_catch(x0_21)
__cxa_end_catch()
return 0xfffffffe
