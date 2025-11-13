// 函数: _ZN5Botan6CTR_BE4seekEm
// 地址: 0xd0a0f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x58)
int64_t x9 = *(arg1 + 0x60)

if (x8 == x9)
label_d0a3c4:
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    int64_t x0 = *(arg1 + 0x28)
    int64_t x10_1 = *(arg1 + 0x30)
    int64_t x23_1 = *(arg1 + 0x20)
    size_t x21_1 = x10_1 - x0
    size_t x2_2
    
    if (x10_1 != x0)
        memset(x0, 0, x21_1)
        x0 = *(arg1 + 0x28)
        x8 = *(arg1 + 0x58)
        size_t x10_3 = *(arg1 + 0x30) - x0
        size_t x9_2 = *(arg1 + 0x60) - x8
        
        x2_2 = x10_3 u< x9_2 ? x10_3 : x9_2
        
        if (x2_2 == 0)
            goto label_d0a184
        
        goto label_d0a154
    
    size_t x9_3 = x9 - x8
    
    x2_2 = 0 u< x9_3 ? 0 : x9_3
    
    size_t x24_1
    
    if (x2_2 == 0)
    label_d0a184:
        x24_1 = *(arg1 + 0x10)
        int64_t i
        
        if (x24_1 u< 8 || *(arg1 + 0x18) != 4)
        label_d0a244:
            
            if (*(arg1 + 0x20) == 1)
            label_d0a2e4:
                i = 1
            label_d0a2f0:
                int64_t entry_x1
                
                if (entry_x1 u/ x21_1 * x23_1 != 0)
                    Botan::CTR_BE::add_counter(arg1)
                    i = *(arg1 + 0x20)
                
                int64_t* x0_4 = *(arg1 + 8)
                int64_t result = (*(*x0_4 + 0x48))(x0_4, *(arg1 + 0x28), *(arg1 + 0x40), i)
                *(arg1 + 0x70) = entry_x1 u% (*(arg1 + 0x30) - *(arg1 + 0x28))
                return result
            
            int64_t x25_2 = (x24_1 << 1) - 1
            i = 1
            
            do
                int64_t x8_8 = *(arg1 + 0x28)
                int64_t x9_6 = i * x24_1
                int64_t x10_7 = *(arg1 + 0x30) - x8_8
                size_t x10_8 = x10_7 - x9_6
                
                if (x10_7 u< x9_6)
                    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, 
                        "buffer_insert", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
                    goto label_d0a3c4
                
                size_t x2_4
                
                x2_4 = x10_8 u< x24_1 ? x10_8 : x24_1
                
                if (x2_4 != 0)
                    memmove(x8_8 + x9_6, x8_8 + (i - 1) * x24_1, x2_4)
                
                if (*(arg1 + 0x18) != 0)
                    int64_t j = 0
                    int64_t x9_7 = x25_2
                    
                    do
                        char* x10_10 = *(arg1 + 0x28)
                        int32_t x11_4 = zx.d(x10_10[x9_7]) + 1
                        x10_10[x9_7] = x11_4.b
                        
                        if ((x11_4 & 0x100) == 0)
                            break
                        
                        j += 1
                        x9_7 -= 1
                    while (j != *(arg1 + 0x18))
                
                i += 1
                x25_2 += x24_1
            while (i != *(arg1 + 0x20))
            
            goto label_d0a2f0
        
    label_d0a19c:
        int64_t i_1 = *(arg1 + 0x20)
        int32_t* x1_1 = *(arg1 + 0x28)
        int32_t x25_1 = *(x1_1 + x24_1 - 4)
        int128_t v0_1
        
        if (i_1 u>= 4)
            int128_t v0
            v0.q = float.d(i_1)
            v0_1.w = vaddlv_u8(vcnt_s8(v0))
        
        if (i_1 u< 4 || zx.q(v0_1.d) u> 1)
            if (i_1 == 1)
                goto label_d0a2e4
            
            memmove(x1_1 + x24_1, x1_1, x24_1 - 4)
            
            if (*(arg1 + 0x20) != 2)
                int64_t x27_1 = x24_1 << 1
                i_1 = 2
                
                do
                    int64_t x1_5 = *(arg1 + 0x28)
                    memmove(x1_5 + x27_1, x1_5, x24_1 - 4)
                    i_1 += 1
                    x27_1 += x24_1
                while (i_1 != *(arg1 + 0x20))
            else
                i_1 = 2
        else
            int64_t x22_2 = 1
            size_t x2_3 = x24_1
            
            if (x2_3 != 0)
                goto label_d0a1e8
            
            while (true)
                x22_2 <<= 1
                
                if (x22_2 u>= i_1)
                    break
                
                x1_1 = *(arg1 + 0x28)
                x2_3 = x22_2 * x24_1
                
                if (x2_3 != 0)
                label_d0a1e8:
                    memmove(x1_1 + x2_3, x1_1, x2_3)
                    i_1 = *(arg1 + 0x20)
        
        if (i_1 == 1)
            goto label_d0a2e4
        
        int32_t temp0_2 = _byteswap(x25_1)
        int64_t x8_4 = (x24_1 << 1) - 4
        i = 1
        
        do
            int32_t* x10_4 = *(arg1 + 0x28)
            int32_t temp0_3 = _byteswap(temp0_2 + i.d)
            i += 1
            *(x10_4 + x8_4) = temp0_3
            x8_4 += x24_1
        while (i != *(arg1 + 0x20))
        
        goto label_d0a2f0
    
label_d0a154:
    
    if (x8 != 0)
        memmove(x0, x8, x2_2)
        x24_1 = *(arg1 + 0x10)
        
        if (x24_1 u>= 8 && *(arg1 + 0x18) == 4)
            goto label_d0a19c
        
        goto label_d0a244

Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Curve25519_PublicKey::algorithm_identifier() __tailcall
