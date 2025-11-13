// 函数: _Z16XmlReadOpenBlockP9XmlReaderP7XString
// 地址: 0x1062984
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)

if (x8 != 3)
    goto label_10629b0

if ((sub_1062630(arg1) & 1) != 0)
    x8 = *(arg1 + 8)
label_10629b0:
    
    if (x8 == 1)
        XString::operator=(arg2)
        
        if (*(arg1 + 0x20) s>= 1)
            XString::AppendUTF8_size(arg2, (*(arg1 + 0x18)).d)
        
        return sub_1062630(arg1) __tailcall

return 0
