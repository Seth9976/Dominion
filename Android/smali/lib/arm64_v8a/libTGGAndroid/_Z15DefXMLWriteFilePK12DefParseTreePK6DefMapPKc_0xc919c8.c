// 函数: _Z15DefXMLWriteFilePK12DefParseTreePK6DefMapPKc
// 地址: 0xc919c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XmlWriter::XmlWriter()
MakeDirectoriesInFullPath(arg3)
void var_40
int32_t x0_2 = XmlWriteOpenFile(&var_40, arg3)

if ((x0_2 & 1) == 0)
    XTrace("DefXMLWriteFile: failed to open file %s")
else
    XmlWriteOpenBlock(&var_40, *arg2, true)
    int64_t* i_1 = *(arg1 + 8)
    
    if (i_1 != 0)
        int64_t* i
        
        do
            i = i_1[1]
            DefXMLWriteFieldType(*i_1, &var_40)
            i_1 = i
        while (i != 0)
    
    XmlWriteCloseBlock(&var_40, *arg2, true)
    XmlWriteCloseFile(&var_40)

return zx.q(x0_2) & 1
