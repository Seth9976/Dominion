// 函数: _ZN5Botan14CBC_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcef878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::throw_invalid_state("state().empty() == false", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
label_cef994:
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4dc9)
    Botan::assertion_failure("m_padding is not null", &data_793a18, "padding", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x1d20)
    Botan::assertion_failure("buffer.size() % BS == offset % BS", "Padded to block boundary", 
        "finish", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4dd1)
else
    int64_t x8_2 = *(arg2 + 8) - *arg2
    int64_t entry_x2
    
    if (x8_2 u< entry_x2)
        goto label_cef994
    
    int64_t* x0 = *(arg1 + 0x10)
    
    if (x0 == 0)
        Botan::assertion_failure("m_padding is not null", &data_793a18, "padding", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x1d20)
        Botan::assertion_failure("buffer.size() % BS == offset % BS", "Padded to block boundary", 
            "finish", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4dd1)
    else
        int64_t x22_1 = *(arg1 + 0x30)
        (**x0)(x0, arg2, (x8_2 - entry_x2) u% x22_1, x22_1)
        int64_t x8_4 = *arg2
        int64_t x9_5 = *(arg2 + 8) - x8_4
        
        if (x9_5 u% x22_1 != entry_x2 u% x22_1)
            Botan::assertion_failure("buffer.size() % BS == offset % BS", 
                "Padded to block boundary", "finish", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4dd1)
        else if (x9_5 u>= entry_x2)
            int64_t result = (*(*arg1 + 0x38))(arg1, x8_4 + entry_x2, x9_5 - entry_x2)
            int64_t x8_5 = *arg2
            int64_t x9_8 = result + entry_x2
            int64_t x10_5 = *(arg2 + 8) - x8_5
            
            if (x9_8 u> x10_5)
                return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    arg2) __tailcall
            
            if (x9_8 u< x10_5)
                *(arg2 + 8) = x8_5 + x9_8
            
            return result

return Botan::CTS_Encryption::valid_nonce_length(Botan::assertion_failure(
    "buffer.size() >= offset", "Offset ok", "update", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)) __tailcall
