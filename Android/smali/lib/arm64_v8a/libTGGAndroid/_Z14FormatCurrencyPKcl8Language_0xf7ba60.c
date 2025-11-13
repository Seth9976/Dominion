// 函数: _Z14FormatCurrencyPKcl8Language
// 地址: 0xf7ba60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int64_t x23 = 0
int64_t x0_2
char* x1_1
int32_t x2
char const* x3

while (true)
    if (strcmp(x23 + 0x117f038, arg1) == 0)
        x1_1 = *(x23 + 0x117f048)
        
        if (x1_1 == 0)
            x2 = *(x23 + 0x117f034)
            x3 = *(x23 + &data_117f040)
            x1_1 = "$ ,."
        else
            int32_t x8_1 = *(&data_117f030 + x23)
            
            if (x21 != 3 || x8_1 != 0x7c)
                x2 = *(x23 + 0x117f034)
                
                if (x21 != 2 || x8_1 != 0x2f4)
                    x3 = *(x23 + &data_117f040)
                else
                    x3 = &data_7973a7
            else
                x2 = *(x23 + 0x117f034)
                x3 = *(x23 + &data_117f040)
                x1_1 = "., $"
        
        x0_2 = arg2
        break
    
    x23 += 0x20
    
    if (x23 == 0x7a0)
        if (x21 != 1)
            x1_1 = ",. $"
        else
            x1_1 = "$ ,."
        
        x2 = 2
        x0_2 = arg2
        x3 = arg1
        break

return FormatMicros(x0_2, x1_1, x2, x3) __tailcall
