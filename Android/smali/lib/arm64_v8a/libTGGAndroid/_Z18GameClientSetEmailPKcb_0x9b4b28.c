// 函数: _Z18GameClientSetEmailPKcb
// 地址: 0x9b4b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58[0x40]
SafeStrcpy(&var_58, arg1, 0x40)
char var_18 = 1
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42a6, 0x41, &var_58)
