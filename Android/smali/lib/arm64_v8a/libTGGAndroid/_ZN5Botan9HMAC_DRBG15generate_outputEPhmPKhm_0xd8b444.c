// 函数: _ZN5Botan9HMAC_DRBG15generate_outputEPhmPKhm
// 地址: 0xd8b444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x21 = arg3
uint64_t x23 = arg2
int64_t entry_x4

if (entry_x4 != 0)
    Botan::HMAC_DRBG::update(arg1, arg4)

if (x21 != 0)
    size_t x24_1
    uint8_t const* temp0_1
    
    do
        size_t x2_4 = *(arg1 + 0x68) - *(arg1 + 0x60)
        
        x24_1 = x2_4 u< x21 ? x2_4 : x21
        
        (*(**(arg1 + 0x58) + 0x18))()
        int64_t* x0_5 = *(arg1 + 0x58)
        (*(*x0_5 + 0x20))(x0_5, *(arg1 + 0x60))
        
        if (x24_1 != 0)
            int64_t x1_5
            
            if (x23 != 0)
                x1_5 = *(arg1 + 0x60)
            
            if (x23 == 0 || x1_5 == 0)
                uint8_t* x0_6
                uint64_t x1_6
                x0_6, x1_6 = Botan::assertion_failure(
                    "n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                return Botan::HMAC_DRBG::update(x0_6, x1_6) __tailcall
            
            memmove(x23, x1_5, x24_1)
        
        temp0_1 = x21
        x21 -= x24_1
        x23 += x24_1
    while (temp0_1 != x24_1)

return Botan::HMAC_DRBG::update(arg1, arg4) __tailcall
