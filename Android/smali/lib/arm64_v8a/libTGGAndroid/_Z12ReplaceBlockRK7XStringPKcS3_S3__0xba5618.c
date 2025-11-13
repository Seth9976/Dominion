// 函数: _Z12ReplaceBlockRK7XStringPKcS3_S3_
// 地址: 0xba5618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
char* haystack = XString::operator char const*()
int32_t x0_4 = strlen(arg2)
char* x0_6 = strstr(haystack, arg2)
char* entry_x8

if (x0_6 != 0)
    int32_t x26_1 = x0_6.d - haystack.d
    
    if (x26_1 != 0xffffffff)
        XString const& var_a0_1 = arg1
        
        while (true)
            char* x0_8 = strstr(&haystack[sx.q(x26_1 + x0_4)], arg2)
            
            if (x0_8 != 0)
                int32_t x28_1 = x0_8.d - haystack.d
                
                if (x28_1 != 0xffffffff)
                    void* fp_1 = &haystack[sx.q(x0_4)]
                    char var_68
                    XString::XString(&var_68, fp_1 + sx.q(x26_1))
                    char var_88
                    XString::XString(&var_88, haystack)
                    char var_90
                    XString::XString(&var_90)
                    XString::operator+(&var_88)
                    void var_80
                    XString::operator+(&var_80)
                    char var_98
                    XString::XString(&var_98)
                    void var_78
                    XString::operator+(&var_78)
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    haystack = fp_1 + sx.q(x28_1)
                    XString::~XString()
                    char* x0_19 = strstr(haystack, arg2)
                    
                    if (x0_19 == 0)
                        break
                    
                    x26_1 = x0_19.d - haystack.d
                    
                    if (x26_1 == 0xffffffff)
                        break
                    
                    continue
            
            XString::GetString()
            XTrace("mismatched block symbols %s in %s")
            break

return XString::operator+=(entry_x8)
