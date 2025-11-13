// 函数: _ZN5Botan6ChaCha15write_keystreamEPhm
// 地址: 0xd00898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x28) != *(arg1 + 0x30))
    uint64_t x21_1 = arg2
    uint32_t* x1 = *(arg1 + 0x40)
    int64_t x8_1 = *(arg1 + 0x58)
    size_t entry_x2
    size_t x20_1 = entry_x2
    size_t x22_1 = *(arg1 + 0x48) - x1 - x8_1
    int64_t x9_3
    
    if (x22_1 u<= entry_x2)
        do
            if (x22_1 != 0)
                if (x21_1 == 0)
                    goto label_d00984
                
                memmove(x21_1, x1 + x8_1, x22_1)
                x1 = *(arg1 + 0x40)
            
            *(arg1 + 8)
            Botan::ChaCha::chacha_x8(arg1, x1, *(arg1 + 0x28))
            x1 = *(arg1 + 0x40)
            x20_1 -= x22_1
            x21_1 += x22_1
            x8_1 = 0
            x22_1 = *(arg1 + 0x48) - x1
            x9_3 = 0
            *(arg1 + 0x58) = 0
        while (x20_1 u>= x22_1)
    else
        x9_3 = x8_1
    
    if (x20_1 == 0)
        *(arg1 + 0x58) = x9_3 + x20_1
        return 
    
    if (x21_1 != 0)
        memmove(x21_1, x1 + x9_3, x20_1)
        *(arg1 + 0x58) += x20_1
        return 
    
label_d00984:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

Botan::SymmetricAlgorithm::throw_key_not_set_error()
return Botan::ChaCha::initialize_state() __tailcall
