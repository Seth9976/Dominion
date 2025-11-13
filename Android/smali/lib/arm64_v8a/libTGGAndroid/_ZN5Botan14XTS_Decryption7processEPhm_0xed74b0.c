// 函数: _ZN5Botan14XTS_Decryption7processEPhm
// 地址: 0xed74b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::throw_invalid_state("tweak_set()", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    int64_t x24_1 = *(arg1 + 0x30)
    int64_t entry_result
    uint64_t x25_1 = entry_result u/ x24_1
    
    if (entry_result u% x24_1 == 0)
        if (x24_1 u<= entry_result)
            uint64_t x21_1 = arg2
            uint64_t x26_1 = *(arg1 + 0x38) u/ x24_1
            
            while (true)
                int64_t* x0_1 = *(arg1 + 8)
                uint64_t x22_1
                
                x22_1 = x26_1 u< x25_1 ? x26_1 : x25_1
                
                (*(*x0_1 + 0x60))(x0_1, x21_1)
                uint64_t x0_3 = (*(**(arg1 + 0x10) + 0x30))()
                
                if (x22_1 != 0)
                    uint8_t* x0_4 = *(arg1 + 0x18)
                    Botan::poly_double_n_le(x0_4, x0_4 + x0_3 * (x22_1 - 1), x0_3)
                
                x25_1 -= x22_1
                uint64_t x27_1 = (*(*arg1 + 0x50))(arg1) u/ x0_3
                
                if (x27_1 u>= 2)
                    int64_t x28_1 = 0
                    int64_t fp_1 = 1
                    
                    do
                        void* x8_10 = *(arg1 + 0x18)
                        Botan::poly_double_n_le(x8_10 + x0_3 + x28_1, x8_10 + x28_1, x0_3)
                        fp_1 += 1
                        x28_1 += x0_3
                    while (fp_1 != x27_1)
                
                if (x25_1 == 0)
                    break
                
                x21_1 += x22_1 * x24_1
        
        return entry_result

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_8
uint64_t x1_3
x0_8, x1_3 = Botan::assertion_failure("sz % BS == 0", "Input is full blocks", "process", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x18df0)
return Botan::XTS_Decryption::finish(x0_8, x1_3) __tailcall
