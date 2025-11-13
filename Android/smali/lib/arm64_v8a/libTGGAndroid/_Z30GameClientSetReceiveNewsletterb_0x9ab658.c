// 函数: _Z30GameClientSetReceiveNewsletterb
// 地址: 0x9ab658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_8 = arg1 & 1
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42b4, 1, &var_8)
