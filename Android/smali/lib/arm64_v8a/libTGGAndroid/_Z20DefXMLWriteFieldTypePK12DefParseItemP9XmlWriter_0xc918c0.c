// 函数: _Z20DefXMLWriteFieldTypePK12DefParseItemP9XmlWriter
// 地址: 0xc918c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XmlWriteOpenBlock(arg2, XString::operator char const*(), (zx.d(*(arg1 + 0x28)) == 0 ? 1 : 0).b)

if ((XString::IsEmpty() & 1) == 0)
    XmlWriteAttributeString(arg2, "label", XString::operator char const*())

void* x8_1 = *(arg1 + 0x18)
char x21_1

if (x8_1 == 0)
    if ((XString::IsEmpty() & 1) == 0)
        XmlWriteLiteralString(arg2, XString::operator char const*())
    
    x21_1 = 0
else
    DefParseItem** i_1 = *(x8_1 + 8)
    
    if (i_1 != 0)
        DefParseItem** i
        
        do
            i = i_1[1]
            DefXMLWriteFieldType(*i_1, arg2)
            i_1 = i
        while (i != 0)
    
    x21_1 = (zx.d(*(arg1 + 0x29)) == 0 ? 1 : 0).b

return XmlWriteCloseBlock(arg2, XString::operator char const*(), x21_1) __tailcall
