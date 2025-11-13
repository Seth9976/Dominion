// 函数: _ZN5Botan6Bucket5allocEv
// 地址: 0xdad1b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0

if (zx.d(entry_x0[8].b) != 0)
    return 0

int32_t* x8_1 = entry_x0[5]
int64_t x9 = entry_x0[6]

if (x9 != x8_1)
    int64_t x9_1 = 0
    int64_t i_1 = (x9 - x8_1) s>> 2
    int64_t i
    
    do
        int64_t x10_1
        
        x10_1 = i_1 == 1 ? 0x24 : 0x20
        
        int32_t x10_2 = *x8_1
        
        if ((*(entry_x0 + x10_1) & not.d(x10_2)) != 0)
            uint64_t x12_1 = zx.q((0xffff & not.d(x10_2)) == 0 ? 1 : 0) << 4
            uint32_t x11_2 = not.d(x10_2) u>> x12_1.d
            uint64_t x13 = zx.q((x11_2 & 0xff) == 0 ? 1 : 0)
            uint32_t x11_3 = x11_2 u>> (x13 << 3).d
            uint64_t x13_2 = zx.q((x11_3 & 0xf) == 0 ? 1 : 0)
            uint32_t x11_4 = x11_3 u>> (x13_2 << 2).d
            int32_t temp0 = x11_4 & 3
            int32_t x13_5
            
            x13_5 = temp0 == 0 ? 4 : 1
            
            int64_t x11_6 = (-3 & ((-5 & ((-9 & x12_1) | (1 & x13) << 3)) | (1 & x13_2) << 2))
                | (1 & zx.q(temp0 == 0 ? 1 : 0)) << 1 | zx.q((x13_5 & x11_4) == 0 ? 1 : 0)
            int32_t x12_5 = 1 << x11_6.d
            
            if ((x12_5 & x10_2) != 0)
                Botan::assertion_failure("(m_bits[i] & bmask) == 0", &data_793a18, "find_free", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc36c)
            else
                *x8_1 = x12_5 | x10_2
                int64_t x8_3 = *entry_x0 * (x11_6 | x9_1)
                
                if (x8_3 u< entry_x0[1])
                    return entry_x0[2] + x8_3
            
            uint8_t* x0_3
            uint8_t* x1
            uint64_t x2
            x0_3, x1, x2 = Botan::assertion_failure("offset * m_item_size < m_page_size", 
                "Offset is in range", "alloc", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc394)
            return Botan::MISTY1::encrypt_n(x0_3, x1, x2) __tailcall
        
        x8_1 = &x8_1[1]
        i = i_1
        i_1 -= 1
        x9_1 += 0x20
    while (i != 1)

entry_x0[8].b = 1
return 0
