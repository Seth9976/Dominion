// 函数: _Z24HalDirectoryIteriateNextR20HalDirectoryIteratorR11HalFilePath
// 地址: 0x1064230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(HalDirectoryIterator, 0x8) x21

if (zx.d(*(arg1 + 0x18)) == 0)
    XGetSaveGameFolder(false)
    char var_28
    XString::XString(&var_28)
    uint64_t x0_4 = XString::operator char const*()
    XString::Length()
    char var_30
    XString::XString(&var_30, x0_4)
    XString::operator=(&var_28)
    XString::~XString()
    
    if ((XFindFileFirst(XString::operator char const*(), arg1 + 8) & 1) == 0)
        XString::~XString()
    else
        *(arg1 + 0x18) = 1
        XString::~XString()
    label_10642d4:
        x21 = arg1 + 8
        int32_t x0_13
        
        do
            if ((XFindFileIsDirectory(x21) & 1) == 0)
                *arg2 = *arg1
                XFindFileGetFileName(x21)
                XString::XString(&var_28)
                XString::operator=(arg2 + 8)
                XString::~XString()
                return 1
            
            x0_13 = XFindFileNext(x21)
        while ((x0_13 & 1) != 0)
        XFindFileClose(x21)
else
    x21 = arg1 + 8
    
    if ((XFindFileNext(x21) & 1) != 0)
        goto label_10642d4
    
    XFindFileClose(x21)
return 0
