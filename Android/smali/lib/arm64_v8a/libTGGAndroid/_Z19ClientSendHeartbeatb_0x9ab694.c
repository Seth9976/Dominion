// 函数: _Z19ClientSendHeartbeatb
// 地址: 0x9ab694
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_8 = arg1 & 1
void* x0 = GetClient()

if (*(x0 + 0x18) == 3)
    NetworkSendMessage(zx.q(*(x0 + 0x14)), 0xf42b2, 1, &var_8)

int64_t* result = GetClient()
int32_t x9 = *(result + 0x14)

if (x9 != result[0xeb7].d)
    result[0xeb7].d = x9
    result[0xeb8] = *result

result[0xeb9].d = 0x40a00000
return result
