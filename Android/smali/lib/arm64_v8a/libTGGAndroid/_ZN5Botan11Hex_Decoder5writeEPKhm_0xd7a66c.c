// 函数: _ZN5Botan11Hex_Decoder5writeEPKhm
// 地址: 0xd7a66c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x80)
size_t x19_1 = entry_x2
uint64_t x20_1 = arg2

while (true)
    char* x1_1 = *(arg1 + 0x50)
    size_t x9_3 = *(arg1 + 0x58) - x1_1 - x8_1
    size_t x22_1
    
    x22_1 = x9_3 u< x19_1 ? x9_3 : x19_1
    
    if (x22_1 == 0)
        goto label_d7a6e0
    
    if (x20_1 != 0 && x1_1 != 0)
        memmove(&x1_1[x8_1], x20_1, x22_1)
        x8_1 = *(arg1 + 0x80)
        x1_1 = *(arg1 + 0x50)
    label_d7a6e0:
        uint64_t x2_1 = x8_1 + x22_1
        *(arg1 + 0x80) = x2_1
        uint64_t var_38 = 0
        int64_t x0_2 =
            Botan::hex_decode(*(arg1 + 0x68), x1_1, x2_1, &var_38, (*(arg1 + 0x4c) != 2 ? 1 : 0).b)
        int64_t x1_2 = *(arg1 + 0x68)
        
        if (*(arg1 + 0x70) - x1_2 u< x0_2)
            Botan::assertion_failure("length <= in.size()", &data_793a18, "send", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x2d93)
        else
            (*(*arg1 + 0x38))(arg1, x1_2, x0_2)
            uint64_t x23_1 = var_38
            int64_t x8_7 = *(arg1 + 0x80)
            
            if (x8_7 == x23_1 || x8_7 == x23_1)
                x8_1 = 0
                size_t temp0_1 = x19_1
                x19_1 -= x22_1
                x20_1 += x22_1
                *(arg1 + 0x80) = 0
                
                if (temp0_1 == x22_1)
                    break
                
                continue
            else
                int64_t x0_4 = *(arg1 + 0x50)
                
                if (x0_4 != 0)
                    memmove(x0_4, x0_4 + x23_1, x8_7 - x23_1)
                    x8_1 = *(arg1 + 0x80) - x23_1
                    size_t temp1_1 = x19_1
                    x19_1 -= x22_1
                    x20_1 += x22_1
                    *(arg1 + 0x80) = x8_1
                    
                    if (temp1_1 == x22_1)
                        break
                    
                    continue
    
    uint8_t* x0_5
    char* x1_4
    uint64_t x2_4
    uint64_t* x3_2
    bool x4_2
    x0_5, x1_4, x2_4, x3_2, x4_2 = Botan::assertion_failure(
        "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
        "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    return Botan::hex_decode(x0_5, x1_4, x2_4, x3_2, x4_2) __tailcall
