// 函数: _Z15DefXMLReadFieldP12DefParseTreeP9XmlReader
// 地址: 0xc91b34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* x0 = DefParseItemAlloc()
int64_t* x0_1 = XPooledCalloc(0x18)
*x0_1 = x0
x0_1[1] = 0
x0_1[2] = *(arg1 + 0x10)
void* x8_1 = *(arg1 + 0x10)
int64_t** x8_2

if (x8_1 == 0)
    x8_2 = arg1 + 8
else
    x8_2 = x8_1 + 8

*x8_2 = x0_1
int32_t x8_3 = *(arg1 + 0x18)
*(arg1 + 0x10) = x0_1
*(arg1 + 0x18) = x8_3 + 1
XmlReader* x0_29
char* x1_3

if ((XmlReadOpenBlock(arg2, x0) & 1) == 0)
    XString::operator char const*()
    x1_3 = "failed to read open block '%s'"
    x0_29 = arg2
else
    int32_t x0_5
    
    while (true)
        x0_5 = XmlReadGetNextTokenType(arg2)
        
        if (x0_5 != 2)
            break
        
        XString::XString()
        void var_38
        
        if ((XmlReadPeekAttributeName(arg2, &var_38) & 1) == 0)
            XString::~XString()
            return 0
        
        XString::XString()
        void var_40
        int32_t x23_1
        
        if ((XmlReadAttributeValueString(arg2, XString::operator char const*(), &var_40) & 1) == 0)
            x23_1 = 1
        else
            if ((operator==(&var_38, "label") & 1) != 0)
                XString::operator=(x0 + 0x10)
            
            x23_1 = 2
        
        XString::~XString()
        XString::~XString()
        
        if (x23_1 != 2)
            return 0
    
    if (x0_5 == 4)
        if ((XmlReadKnownCloseBlock(arg2, XString::operator char const*()) & 1) != 0)
            return 1
        
    label_c91d68:
        XString::operator char const*()
        x1_3 = "failed to read close tag '%s'"
        x0_29 = arg2
    else if (x0_5 == 3)
        int32_t x0_35 = XmlReadLiteralString(arg2, x0 + 8)
        char* x0_37 = XString::operator char const*()
        
        if ((x0_35 & 1) != 0)
            if ((XmlReadKnownCloseBlock(arg2, x0_37) & 1) != 0)
                return 1
            
            goto label_c91d68
        
        x1_3 = "failed to read value '%s'"
        x0_29 = arg2
    else if (x0_5 != 1)
        XString::operator char const*()
        x1_3 = "bad block '%s'"
        x0_29 = arg2
    else
        XString* x0_17 = DefParseTreeAlloc()
        *(x0 + 0x18) = x0_17
        XString::operator=(x0_17)
        DefParseTree* x21_2 = *(x0 + 0x18)
        int32_t x0_23
        
        do
            if ((XmlReadKnownCloseBlock(arg2, XString::operator char const*()) & 1) != 0)
                return 1
            
            x0_23 = DefXMLReadField(x21_2, arg2)
        while ((x0_23 & 1) != 0)
        XString::operator char const*()
        DefXMLReadError(arg2, "failed to read block '%s'")
        XString::operator char const*()
        x0_29 = arg2
        x1_3 = "failed to read block '%s'"

DefXMLReadError(x0_29, x1_3)
return 0
