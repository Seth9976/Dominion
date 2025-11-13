// 函数: _Z8ReplaceNRK7XStringPKcS3_S3_
// 地址: 0xba5340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

strchr(arg2, 0x4e)
char var_68
XString::XString(&var_68, arg2)
char var_70
XString::XString(&var_70)
XString::XString()
char* haystack = XString::operator char const*()
char* x0_8 = strstr(haystack, XString::operator char const*())
char* entry_x8

if (x0_8 != 0)
    void* x28_1 = x0_8 - haystack
    
    while (x28_1.d != 0xffffffff)
        void* haystack_1 = &haystack[sx.q(x28_1.d)]
        char* x0_11 = strstr(haystack_1, XString::operator char const*())
        
        if (x0_11 == 0)
            break
        
        int32_t x27_1 = x0_11.d - haystack.d
        
        if (x27_1 == 0xffffffff)
            break
        
        char* x0_14
        
        if (x27_1 - x28_1.d s<= 4)
            void* x25_1 = haystack_1 + sx.q(XString::Length())
            XString::Length()
            char var_78
            XString::XString(&var_78, x25_1)
            int32_t x0_18 = XString::IsEmpty()
            int32_t x0_19
            
            if ((x0_18 & 1) == 0)
                x0_19 = XString::Length()
            
            char var_80
            
            if ((x0_18 & 1) != 0 || x0_19 s< 1)
            label_ba5510:
                XString::XString()
                
                if ((XString::IsEmpty() & 1) == 0)
                    StringReplace(arg3, "N", XString::operator char const*())
                    XString::operator=(&var_80)
                    XString::~XString()
                else
                    XString::operator=(&var_80)
                
                char var_90
                XString::XString(&var_90, haystack)
                XString::operator+(&var_90)
                XString::operator char const*()
                XString::operator+=(entry_x8)
                XString::~XString()
                XString::~XString()
            else
                int64_t x25_2 = 0
                
                while (true)
                    uint32_t x8_4 = zx.d(*(XString::operator char const*() + x25_2))
                    
                    if (x8_4 - 0x30 u>= 0xa && x8_4 != 0x2d && x8_4 != 0x2b)
                        XString::Length()
                        XString::XString(&var_80, haystack)
                        XString::operator char const*()
                        XString::operator+=(entry_x8)
                        break
                    
                    x25_2 += 1
                    
                    if (x25_2 s>= sx.q(XString::Length()))
                        goto label_ba5510
            XString::~XString()
            haystack = &haystack[sx.q(x27_1) + sx.q(XString::Length())]
            XString::~XString()
            x0_14 = strstr(haystack, XString::operator char const*())
            
            if (x0_14 == 0)
                break
        else
            x0_14 = strstr(&haystack[((x28_1 << 0x20) + 0x100000000) s>> 0x20], 
                XString::operator char const*())
            
            if (x0_14 == 0)
                break
        
        x28_1 = x0_14 - haystack

XString::operator+=(entry_x8)
XString::~XString()
return XString::~XString()
