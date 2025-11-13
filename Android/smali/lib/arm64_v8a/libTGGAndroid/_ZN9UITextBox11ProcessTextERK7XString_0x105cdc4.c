// 函数: _ZN9UITextBox11ProcessTextERK7XString
// 地址: 0x105cdc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = XString::GetString()
uint32_t i = zx.d(*result)

if (i != 0)
    char* result_1 = result
    
    do
        int32_t x1_2 = i & 0xff
        
        if ((i & 0x80) != 0)
            if ((x1_2 & 0xe0) == 0xc0)
                result_1 = &result_1[1]
                *result_1
            else if ((i & 0xf0) != 0xe0)
                int32_t x8_5 = x1_2 & 0xf8
                
                if (x8_5 == 0xf0)
                    result_1[3]
                    (0xfffff03f
                        & ((0xfffc0fff & (x1_2 & 7) << 0x12) | (0x3f & zx.d(result_1[1])) << 0xc))
                        | (0x3f & zx.d(result_1[2])) << 6
                
                if (x8_5 == 0xf0)
                    result_1 = &result_1[3]
            else
                result_1 = &result_1[2]
                *result_1
                result_1[-1]
        
        result = UITextBox::ProcessChar(arg1.d)
        result_1 = &result_1[1]
        i = zx.d(*result_1)
    while (i != 0)

return result
