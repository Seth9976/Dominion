// 函数: _Z19SecondsToTimeStringi
// 地址: 0x9b9434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
char const* const x0_1

if (arg1 s> 0x15180)
    if (arg1 - 0xa8c0 u>= 0x15180)
        x0_1 = "%d days"
    else
        x0_1 = "%d day"
    
    XFormatString(x0_1)
else if (arg1 s< 0xe11)
    XFormatString("%02d:%02d")
else
    if (arg1 - 0xe10 u> 0xe0f)
        x0_1 = "%d hours"
    else
        x0_1 = "%d hour"
    
    XFormatString(x0_1)
XString* entry_x8
XString::operator=(entry_x8)
return XString::~XString()
