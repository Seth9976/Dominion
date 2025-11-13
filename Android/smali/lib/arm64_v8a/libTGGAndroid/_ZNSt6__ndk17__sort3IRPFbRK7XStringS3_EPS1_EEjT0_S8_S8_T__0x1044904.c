// 函数: _ZNSt6__ndk17__sort3IRPFbRK7XStringS3_EPS1_EEjT0_S8_S8_T_
// 地址: 0x1044904
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg4)(arg2, arg1)
int32_t x0_3 = (*arg4)(arg3, arg2)
void var_38

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        return 0
    
    XString::XString(&var_38)
    XString::operator=(arg2)
    XString::operator=(arg3)
    XString::~XString()
    
    if (((*arg4)(arg2, arg1) & 1) != 0)
        XString::XString(&var_38)
        XString::operator=(arg1)
        XString::operator=(arg2)
        XString::~XString()
        return 2
else if ((x0_3 & 1) == 0)
    XString::XString(&var_38)
    XString::operator=(arg1)
    XString::operator=(arg2)
    XString::~XString()
    
    if (((*arg4)(arg3, arg2) & 1) != 0)
        XString::XString(&var_38)
        XString::operator=(arg2)
        XString::operator=(arg3)
        XString::~XString()
        return 2
else
    XString::XString(&var_38)
    XString::operator=(arg1)
    XString::operator=(arg3)
    XString::~XString()
return 1
