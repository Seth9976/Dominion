// 函数: _Z16DefXMLWriteBlockPK12DefParseTreeP9XmlWriter
// 地址: 0xc91994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseItem** i_1 = *(arg1 + 8)

if (i_1 == 0)
    return 

DefParseItem** i

do
    i = i_1[1]
    DefXMLWriteFieldType(*i_1, arg2)
    i_1 = i
while (i != 0)
