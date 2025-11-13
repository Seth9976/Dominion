// 函数: _Z27DefXMLReadFileIntoParseTreePK6DefMapR11HalFilePath
// 地址: 0xc91f38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
XmlReader::XmlReader()
XmlReader var_180
DefParseTree* result

if ((XmlReadFile(&var_180, arg2) & 1) != 0)
    char* result_1 = DefParseTreeAlloc()
    *arg1
    result = result_1
    XString::operator=(result_1)
    
    if ((XmlReadKnownOpenBlock(&var_180, *arg1) & 1) == 0)
        DefParseTreeDelete(result)
    else
        int32_t x0_9
        
        do
            if ((XmlReadKnownCloseBlock(&var_180, XString::operator char const*()) & 1) != 0)
                goto label_c91ff4
            
            x0_9 = DefXMLReadField(result, &var_180)
        while ((x0_9 & 1) != 0)
        XString::operator char const*()
        DefXMLReadError(&var_180, "failed to read block '%s'")
        DefParseTreeDelete(result)

result = nullptr
label_c91ff4:
XmlReader::~XmlReader()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
