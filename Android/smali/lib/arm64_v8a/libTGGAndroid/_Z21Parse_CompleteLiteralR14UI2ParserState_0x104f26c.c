// 函数: _Z21Parse_CompleteLiteralR14UI2ParserState
// 地址: 0x104f26c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 8)
int64_t result = UI2Parse_NullLiteral(arg1)
int128_t* entry_x8

if (zx.d(**(arg1 + 8)) != 0)
    *(arg1 + 8) = x21
label_104f2b4:
    XString::~XString()
    int64_t x22_1 = *(arg1 + 8)
    result = parse_numeric_literal(arg1)
    
    if (zx.d(**(arg1 + 8)) != 0)
        *(arg1 + 8) = x22_1
    label_104f2f0:
        XString::~XString()
        int64_t x22_2 = *(arg1 + 8)
        result = parse_asset_literal(arg1)
        
        if (zx.d(**(arg1 + 8)) != 0)
            *(arg1 + 8) = x22_2
        label_104f32c:
            XString::~XString()
            int64_t x22_3 = *(arg1 + 8)
            result = parse_string_literal(arg1)
            
            if (zx.d(**(arg1 + 8)) != 0)
                *(arg1 + 8) = x22_3
            label_104f378:
                XString::~XString()
                *entry_x8 = data_24b6268
                return XString::XString(&entry_x8[1]) __tailcall
            
            if (*entry_x8 - 1 u>= 4)
                goto label_104f378
        else if (*entry_x8 - 1 u>= 4)
            goto label_104f32c
    else if (*entry_x8 - 1 u>= 4)
        goto label_104f2f0
else if (*entry_x8 - 1 u>= 4)
    goto label_104f2b4
return result
