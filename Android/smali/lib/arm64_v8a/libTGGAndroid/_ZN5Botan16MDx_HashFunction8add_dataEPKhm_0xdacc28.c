// 函数: _ZN5Botan16MDx_HashFunction8add_dataEPKhm
// 地址: 0xdacc28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(arg1[0xa])
int64_t x8 = *(arg1 + 0x30)
size_t entry_x2
size_t x21 = entry_x2
uint64_t x20 = arg2
int64_t x24 = 1 << x23
*(arg1 + 0x10) += entry_x2

if (x8 == 0)
    goto label_daccd4

int64_t x9_2 = *(arg1 + 0x18)
int64_t x10_2 = *(arg1 + 0x20) - x9_2
size_t x10_3 = x10_2 - x8

if (x10_2 u< x8)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    size_t x2
    
    x2 = x10_3 u< x21 ? x10_3 : x21
    
    if (x2 == 0)
        goto label_dacc98
    
    if (x20 != 0)
        memmove(x9_2 + x8, x20, x2)
        x8 = *(arg1 + 0x30)
    label_dacc98:
        
        if (x8 + x21 u< x24)
            goto label_daccd4
        
        (*(*arg1 + 0x58))(arg1, *(arg1 + 0x18), 1)
        int64_t x9_4 = *(arg1 + 0x30)
        x8 = 0
        *(arg1 + 0x30) = 0
        int64_t x9_5 = x24 - x9_4
        x20 += x9_5
        x21 -= x9_5
    label_daccd4:
        uint64_t x22_1 = x21 u>> zx.q(arg1[0xa])
        
        if (x22_1 != 0)
            (*(*arg1 + 0x58))(arg1, x20, x22_1)
            x8 = *(arg1 + 0x30)
        
        int64_t x9_7 = *(arg1 + 0x18)
        int64_t x10_5 = *(arg1 + 0x20) - x9_7
        size_t x10_6 = x10_5 - x8
        
        if (x10_5 u< x8)
            Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
        else
            size_t x21_1 = x21 & (x24 - 1)
            size_t x2_2
            
            x2_2 = x10_6 u< x21_1 ? x10_6 : x21_1
            
            if (x2_2 == 0)
                *(arg1 + 0x30) = x8 + x21_1
                return 
            
            if (x20 != 0)
                memmove(x9_7 + x8, x20 + (x22_1 << x23), x2_2)
                *(arg1 + 0x30) += x21_1
                return 

return Botan::MDx_HashFunction::final_result(Botan::assertion_failure(
    "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall
