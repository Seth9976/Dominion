// 函数: _Z30GameClientAddFriendEmailOrCodePKc
// 地址: 0x9b4bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50[0x40]
SafeStrcpy(&var_50, arg1, 0x40)
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42a8, 0x40, &var_50)
