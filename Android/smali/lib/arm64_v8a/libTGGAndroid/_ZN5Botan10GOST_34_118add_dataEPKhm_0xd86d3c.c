// 函数: _ZN5Botan10GOST_34_118add_dataEPKhm
// 地址: 0xd86d3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x88)
size_t entry_x2
size_t x20 = entry_x2
uint64_t x21 = arg2
*(arg1 + 0x90) += entry_x2

if (x8 == 0)
    goto label_d86dd0

int64_t x9_2 = *(arg1 + 0x40)
int64_t x10_2 = *(arg1 + 0x48) - x9_2
size_t x10_3 = x10_2 - x8

if (x10_2 u< x8)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    size_t x2
    
    x2 = x10_3 u< x20 ? x10_3 : x20
    
    if (x2 == 0)
        goto label_d86d98
    
    if (x21 != 0)
        memmove(x9_2 + x8, x21, x2)
        x8 = *(arg1 + 0x88)
    label_d86d98:
        
        if (x8 + x20 u< 0x20)
            goto label_d86dd0
        
        Botan::GOST_34_11::compress_n(arg1, *(arg1 + 0x40))
        int64_t x9_4 = *(arg1 + 0x88)
        x8 = 0
        *(arg1 + 0x88) = 0
        x21 = x21 - x9_4 + 0x20
        x20 = x20 + x9_4 - 0x20
    label_d86dd0:
        
        if (x20 u>= 0x20)
            Botan::GOST_34_11::compress_n(arg1, x21)
            x8 = *(arg1 + 0x88)
        
        int64_t x9_6 = *(arg1 + 0x40)
        int64_t x10_6 = *(arg1 + 0x48) - x9_6
        size_t x10_7 = x10_6 - x8
        
        if (x10_6 u< x8)
            Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
        else
            size_t x22_1 = x20 & 0x1f
            size_t x2_3
            
            x2_3 = x10_7 u< x22_1 ? x10_7 : x22_1
            
            if (x2_3 == 0)
                *(arg1 + 0x88) = x8 + x22_1
                return 
            
            if (x21 != 0)
                memmove(x9_6 + x8, x21 + (x20 & 0xffffffffffffffe0), x2_3)
                *(arg1 + 0x88) += x22_1
                return 

Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::GOST_34_11::hash_block_size() __tailcall
