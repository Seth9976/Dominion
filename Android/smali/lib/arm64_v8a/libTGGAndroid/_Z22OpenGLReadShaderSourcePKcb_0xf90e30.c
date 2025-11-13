// 函数: _Z22OpenGLReadShaderSourcePKcb
// 地址: 0xf90e30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2.d
char var_40
XString::XString(&var_40)
AssetPathNormalize(&var_40)
XString::~XString()
ReadFileIntoString(arg1)

if ((XString::IsEmpty() & 1) == 0)
    XString::XString()
    char* x20_1 = XString::operator char const*()
    char var_50
    
    if ((x21 & 1) != 0)
        XString::operator char const*()
        XFormatString("#line %d "%s"\n")
        XString::operator char const*()
        XString::operator+=(&var_50)
        XString::~XString()
    
    AssetPathFromFullPath(arg1)
    void var_68
    XString::XString(&var_68)
    DirectoryPathFromAssetPath(&var_68)
    XString::~XString()
    AssetSourceGetCurrentPath()
    void var_78
    XString::XString(&var_78)
    AssetSourceSetCurrentPath(&var_78)
    XString::~XString()
    uint32_t i = zx.d(*x20_1)
    
    if (i != 0)
        char var_b0
        void var_a8
        void var_98
        char var_80
        
        if ((x21 & 1) == 0)
            do
                int64_t x9_2 = 0
                char* x1_11 = x20_1
                
                while (true)
                    int32_t x8_3 = i & 0xff
                    
                    if (x8_3 == 0xd)
                        void* x10_2 = &x1_11[x9_2]
                        i = zx.d(*(x10_2 + 1))
                        
                        if (i == 0xa)
                            x20_1 = x10_2 + 2
                            break
                    else
                        if (x8_3 == 0)
                            x20_1 = &x1_11[x9_2]
                            break
                        
                        if (x8_3 == 0xa)
                            x20_1 = &x1_11[x9_2 + 1]
                            break
                        
                        i = zx.d(x1_11[x9_2 + 1])
                    
                    x9_2 += 1
                
                XString::XString(&var_80, x1_11)
                TryParseIncludeLine(XString::operator char const*())
                
                if ((XString::IsEmpty() & 1) == 0)
                    XString::XString(&var_98)
                    AssetSourceLocalPathToFullPath(&var_98)
                    XString::~XString()
                    OpenGLReadShaderSource(XString::operator char const*(), false)
                    XString::XString(&var_b0)
                    XString::operator+(&var_a8)
                    XString::operator char const*()
                    XString::operator+=(&var_50)
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                else
                    XString::operator char const*()
                    XString::operator+=(&var_50)
                    XString::operator+=(&var_50)
                
                XString::~XString()
                XString::~XString()
                i = zx.d(*x20_1)
            while (i != 0)
        else
            int32_t x21_1 = 1
            
            do
                int64_t x9_1 = 0
                char* x1_4 = x20_1
                
                while (true)
                    int32_t x8 = i & 0xff
                    
                    if (x8 == 0xd)
                        void* x10_1 = &x1_4[x9_1]
                        i = zx.d(*(x10_1 + 1))
                        
                        if (i == 0xa)
                            x20_1 = x10_1 + 2
                            break
                    else
                        if (x8 == 0)
                            x20_1 = &x1_4[x9_1]
                            break
                        
                        if (x8 == 0xa)
                            x20_1 = &x1_4[x9_1 + 1]
                            break
                        
                        i = zx.d(x1_4[x9_1 + 1])
                    
                    x9_1 += 1
                
                XString::XString(&var_80, x1_4)
                TryParseIncludeLine(XString::operator char const*())
                
                if ((XString::IsEmpty() & 1) == 0)
                    XString::XString(&var_98)
                    AssetSourceLocalPathToFullPath(&var_98)
                    XString::~XString()
                    OpenGLReadShaderSource(XString::operator char const*(), true)
                    XString::XString(&var_b0)
                    XString::operator+(&var_a8)
                    XString::operator char const*()
                    XString::operator+=(&var_50)
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::operator char const*()
                    XFormatString("#line %d "%s"\n")
                    XString::operator char const*()
                    XString::operator+=(&var_50)
                    XString::~XString()
                    XString::~XString()
                else
                    XString::operator char const*()
                    XString::operator+=(&var_50)
                    XString::operator+=(&var_50)
                
                x21_1 += 1
                XString::~XString()
                XString::~XString()
                i = zx.d(*x20_1)
            while (i != 0)
    
    void var_b8
    XString::XString(&var_b8)
    AssetSourceSetCurrentPath(&var_b8)
    XString::~XString()
    XString* entry_x8
    XString::XString(entry_x8)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
else
    XTrace("OpenGl shader failed to read file: %s")
    XString::XString()

XString::~XString()
return XString::~XString()
