// 函数: _Z21GameDismissDlgStrings11ForfeitTypebPKcR7XStringS3_
// 地址: 0x9b2330
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 1)
    goto label_9b2364

if (arg1 != 0)
    pthread_kill(pthread_self(), 6)
    arg2 = XNoReturn()
label_9b2364:
    
    if ((arg2.d & 1) != 0)
        L("dom_msg_time_expired_header", nullptr)
        XString::operator=(arg4)
        L("dom_msg_time_expired_body", nullptr)
        return XString::operator=(arg5)

L("dom_msg_opponent_forfeit_header", nullptr)
XString::operator=(arg4)
L("dom_msg_opponent_forfeit_body", nullptr)
XString::operator=(arg5)
StringReplace(XString::operator char const*(), "[player]", arg3)
XString::operator=(arg5)
return XString::~XString()
