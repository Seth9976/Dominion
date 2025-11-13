// 函数: _Z11FriendAddOkv
// 地址: 0x9be00c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_1 = XString::operator char const*()
char* x0_2 = stristr(x0_1, "@")

if (x0_2 == 0 || x0_2 == x0_1)
label_9be060:
    int64_t result = IsValidCode(x0_1)
    
    if ((result.d & 1) == 0)
        return result
else
    char* x0_3 = stristr(x0_2, ".")
    
    if (x0_3 == 0)
        goto label_9be060
    
    if (strlen(x0_3) u<= 2)
        goto label_9be060

GameClientAddFriendEmailOrCode(XString::operator char const*())
return GameDlgManagerDismiss(7, false) __tailcall
