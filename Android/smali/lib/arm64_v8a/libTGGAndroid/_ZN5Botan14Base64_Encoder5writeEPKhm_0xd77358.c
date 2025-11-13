// 函数: _ZN5Botan14Base64_Encoder5writeEPKhm
// 地址: 0xd77358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* result = *(arg1 + 0x60)
int64_t x9 = *(arg1 + 0x68)
int64_t x8 = *(arg1 + 0x90)
uint64_t x24 = x9 - result
size_t x10 = x24 - x8

if (x24 u< x8)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    size_t entry_x2
    size_t x2
    
    x2 = x10 u< entry_x2 ? x10 : entry_x2
    
    if (x2 == 0)
        goto label_d773b0
    
    if (arg2 != 0)
        memmove(&result[x8], arg2, x2)
        result = *(arg1 + 0x60)
        x9 = *(arg1 + 0x68)
        x8 = *(arg1 + 0x90)
        x24 = x9 - result
    label_d773b0:
        int64_t x10_1 = x8 + entry_x2
        
        if (x10_1 u< x24)
            *(arg1 + 0x90) = x8 + entry_x2
            return result
        
        uint64_t var_38
        
        if (x24 != 0)
            uint8_t* result_1 = result
            
            while (true)
                var_38 = 0
                uint64_t x9_1 = x9 - result
                uint64_t x23_1
                
                x23_1 = x9_1 u< x24 ? x9_1 : x24
                
                Botan::base64_encode(*(arg1 + 0x78), result_1, x23_1, &var_38, false)
                Botan::Base64_Encoder::do_output(arg1, *(arg1 + 0x78))
                uint64_t temp1_1 = x24
                x24 -= x23_1
                
                if (temp1_1 == x23_1)
                    break
                
                result = *(arg1 + 0x60)
                x9 = *(arg1 + 0x68)
                result_1 = &result_1[x23_1]
            
            result = *(arg1 + 0x60)
            x9 = *(arg1 + 0x68)
            x8 = *(arg1 + 0x90)
            x24 = x9 - result
            x10_1 = x8 + entry_x2
        
        size_t x20_1 = x10_1 - x24
        uint8_t* x21_2 = arg2 + x24 - x8
        
        if (x20_1 u>= x24)
            do
                if (x24 != 0)
                    uint8_t* x22_1 = x21_2
                    
                    while (true)
                        var_38 = 0
                        uint64_t x9_2 = x9 - result
                        uint64_t x23_2
                        
                        x23_2 = x9_2 u< x24 ? x9_2 : x24
                        
                        Botan::base64_encode(*(arg1 + 0x78), x22_1, x23_2, &var_38, false)
                        Botan::Base64_Encoder::do_output(arg1, *(arg1 + 0x78))
                        uint64_t temp2_1 = x24
                        x24 -= x23_2
                        
                        if (temp2_1 == x23_2)
                            break
                        
                        result = *(arg1 + 0x60)
                        x9 = *(arg1 + 0x68)
                        x22_1 = &x22_1[x23_2]
                    
                    result = *(arg1 + 0x60)
                    x9 = *(arg1 + 0x68)
                
                x24 = x9 - result
                x20_1 -= x24
                x21_2 = &x21_2[x24]
            while (x20_1 u>= x24)
        
        if (x20_1 == 0)
            goto label_d77450
        
        if (x21_2 != 0 && result != 0)
            result = memmove(result, x21_2, x20_1)
        label_d77450:
            *(arg1 + 0x90) = x20_1
            return result

Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Base64_Encoder::end_msg() __tailcall
