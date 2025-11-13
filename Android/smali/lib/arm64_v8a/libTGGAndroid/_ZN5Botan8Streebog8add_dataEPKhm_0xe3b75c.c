// 函数: _ZN5Botan8Streebog8add_dataEPKhm
// 地址: 0xe3b75c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x20)
int64_t x8 = *(arg1 + 0x18)
size_t entry_x2
size_t x21 = entry_x2
uint64_t x20 = arg2
uint8_t const* x19 = arg1
int64_t x22 = *(arg1 + 0x28) - x9

if (x8 == 0)
    goto label_e3b804

size_t x10_1 = x22 - x8

if (x22 u< x8)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    size_t x2
    
    x2 = x10_1 u< x21 ? x10_1 : x21
    
    if (x2 == 0)
        goto label_e3b7b8
    
    if (x20 != 0)
        int128_t v0
        int128_t v1
        int128_t v2
        int128_t v3
        arg1, v0, v1, v2, v3 = memmove(x9 + x8, x20, x2)
        x8 = *(x19 + 0x18)
    label_e3b7b8:
        
        if (x8 + x21 u< x22)
            goto label_e3b804
        
        int128_t* x8_1 = *(x19 + 0x20)
        v2 = x8_1[1]
        int128_t var_60_1 = x8_1[2]
        int128_t var_50_1 = x8_1[3]
        int128_t var_80 = *x8_1
        int128_t var_70_1 = v2
        arg1, v0, v1, v2, v3 = Botan::Streebog::compress_64(x19, &var_80)
        x8 = 0
        int64_t x10_3 = x22 - *(x19 + 0x18)
        x20 += x10_3
        x21 -= x10_3
        *(x19 + 0x10) += 0x200
        *(x19 + 0x18) = 0
    label_e3b804:
        uint64_t x23_1 = x21 u/ x22
        
        if (x22 u<= x21)
            int64_t x24_1 = 0
            uint64_t x25_1 = x20
            
            do
                v2 = *(x25_1 + 0x10)
                int128_t var_60_2 = *(x25_1 + 0x20)
                int128_t var_50_2 = *(x25_1 + 0x30)
                var_80 = *x25_1
                int128_t var_70_2 = v2
                arg1, v0, v1, v2, v3 = Botan::Streebog::compress_64(x19, &var_80)
                x24_1 += 1
                x25_1 += x22
                *(x19 + 0x10) += 0x200
            while (x24_1 != x23_1)
            
            x8 = *(x19 + 0x18)
        
        int64_t x9_4 = *(x19 + 0x20)
        int64_t x10_5 = *(x19 + 0x28) - x9_4
        size_t x10_6 = x10_5 - x8
        
        if (x10_5 u< x8)
            Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
        else
            size_t x21_1 = x21 u% x22
            size_t x2_3
            
            x2_3 = x10_6 u< x21_1 ? x10_6 : x21_1
            
            if (x2_3 == 0)
                *(x19 + 0x18) = x8 + x21_1
                return 
            
            if (x20 != 0)
                memmove(x9_4 + x8, x20 + x23_1 * x22, x2_3)
                *(x19 + 0x18) += x21_1
                return 

uint8_t* x0_4
bool x1_4
x0_4, x1_4 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Streebog::compress(x0_4, x1_4) __tailcall
