// 函数: _Z15DefXMLReadBlockP12DefParseTreeP9XmlReader
// 地址: 0xc91dc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_3

while (true)
    x0_3 = XmlReadKnownCloseBlock(arg2, XString::operator char const*())
    
    if ((x0_3 & 1) != 0)
        break
    
    if ((DefXMLReadField(arg1, arg2) & 1) == 0)
        XString::operator char const*()
        DefXMLReadError(arg2, "failed to read block '%s'")
        break

return zx.q(x0_3) & 1
