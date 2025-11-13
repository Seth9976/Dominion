// 函数: _Z15FriendAddUpdate9UI2Handle
// 地址: 0x9be218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, FriendAddClick)
UI2SetHandler(zx.q(x19), FriendAddCommit)
UI2SetText(zx.q(x19), &data_11cf1e8, gFriendDlg + 0x10, 0xffffffff)
XString::XString()
void var_18

if ((UI2TextboxActive(zx.q(x19), &var_18) & 1) == 0)
    XString::operator=(&var_18)

char* x0_5 = XString::operator char const*()
char* x0_6 = stristr(x0_5, "@")

if (x0_6 == 0 || x0_6 == x0_5)
label_9be2cc:
    
    if ((IsValidCode(x0_5) & 1) == 0)
        UI2SetState(zx.q(x19), &data_11cf200, 0xffffffff, 0)
else
    char* x0_7 = stristr(x0_6, ".")
    
    if (x0_7 == 0)
        goto label_9be2cc
    
    if (strlen(x0_7) u<= 2)
        goto label_9be2cc

return XString::~XString()
