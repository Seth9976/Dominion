// 函数: _Z27GameDialogAddFriendResponseRK29AddFriendEmailResponseMessage
// 地址: 0x9bde08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)

if (x8.d u> 4)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return FriendAddOk() __tailcall

char var_30
char const* const x0

switch (x8)
    case 1
        GetTranslation("dom_msg_add_friend_error_header")
        x0 = "dom_msg_add_friend_error_not_found_body"
    label_9bdf2c:
        GetTranslation(x0)
        StringReplace(XString::operator char const*(), "[username]", 
            XString::operator char const*())
        XString::~XString()
        char var_18
        XString::XString(&var_18)
        XString::XString(&var_30)
        *(gGameDlgManager + 0x118) = 0x20
        XString::operator=(gGameDlgManager + 0x1b8)
        XString::operator=(gGameDlgManager + 0x1c0)
        XString::operator=(gGameDlgManager + 0x1c8)
        XString::operator=(gGameDlgManager + 0x1d0)
        *(gGameDlgManager + 0x1d8) = 0
        *(gGameDlgManager + 0x1e0) = 0
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
    case 2
        GetTranslation("dom_msg_add_friend_error_header")
        GetTranslation("dom_msg_add_friend_error_self_body")
        char var_28
        XString::XString(&var_28)
        XString::XString(&var_30)
        *(gGameDlgManager + 0x118) = 0x20
        XString::operator=(gGameDlgManager + 0x1b8)
        XString::operator=(gGameDlgManager + 0x1c0)
        XString::operator=(gGameDlgManager + 0x1c8)
        XString::operator=(gGameDlgManager + 0x1d0)
        *(gGameDlgManager + 0x1d8) = 0
        *(gGameDlgManager + 0x1e0) = 0
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
    case 3
        GetTranslation("dom_msg_add_friend_error_header")
        x0 = "dom_msg_add_friend_error_blocked_body"
        goto label_9bdf2c
    case 4
        GetTranslation("dom_msg_add_friend_error_header")
        x0 = "dom_msg_add_friend_error_already_friends_body"
        goto label_9bdf2c
