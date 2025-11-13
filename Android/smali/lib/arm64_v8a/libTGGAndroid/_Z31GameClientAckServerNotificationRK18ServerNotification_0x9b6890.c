// 函数: _Z31GameClientAckServerNotificationRK18ServerNotification
// 地址: 0x9b6890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_8 = *arg1
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42cf, 8, &var_8)
