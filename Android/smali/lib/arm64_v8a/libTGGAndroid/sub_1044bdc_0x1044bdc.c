// 函数: sub_1044bdc
// 地址: 0x1044bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = std::__ndk1::__sort4<bool (*&)(XString const&, XString const&), XString*>(arg1, arg2, 
    arg3, arg4, arg6)

if (((*arg6)(arg5, arg4) & 1) != 0)
    void var_48
    XString::XString(&var_48)
    XString::operator=(arg4)
    XString::operator=(arg5)
    XString::~XString()
    
    if (((*arg6)(arg4, arg3) & 1) == 0)
        x19 += 1
    else
        XString::XString(&var_48)
        XString::operator=(arg3)
        XString::operator=(arg4)
        XString::~XString()
        
        if (((*arg6)(arg3, arg2) & 1) == 0)
            x19 += 2
        else
            XString::XString(&var_48)
            XString::operator=(arg2)
            XString::operator=(arg3)
            XString::~XString()
            
            if (((*arg6)(arg2, arg1) & 1) == 0)
                x19 += 3
            else
                XString::XString(&var_48)
                XString::operator=(arg1)
                XString::operator=(arg2)
                XString::~XString()
                x19 += 4

return zx.q(x19)
