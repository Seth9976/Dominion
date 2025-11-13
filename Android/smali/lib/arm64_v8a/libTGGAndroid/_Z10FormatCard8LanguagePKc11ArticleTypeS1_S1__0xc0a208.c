// 函数: _Z10FormatCard8LanguagePKc11ArticleTypeS1_S1_
// 地址: 0xc0a208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 - 0x12 u>= 2)
    if (arg1 == 0x11)
        if (zx.d(*arg2) != 0)
            return XFormatString("[color_start]%s %s%s[color_end]") __tailcall
        
        return XFormatString("[color_start]%s[color_end]") __tailcall
    
    if (arg1 != 0x10)
        if (zx.d(*arg2) == 0)
            return XFormatString("[color_start]%s[color_end]") __tailcall
        
        if (arg1 != 8 || arg3 != 3)
            return XFormatString("[color_start]%s %s[color_end]") __tailcall

return XFormatString("[color_start]%s%s[color_end]") __tailcall
