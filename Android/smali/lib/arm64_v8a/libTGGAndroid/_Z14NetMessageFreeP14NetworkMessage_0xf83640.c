// 函数: _Z14NetMessageFreeP14NetworkMessage
// 地址: 0xf83640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::operator=(arg1 + 0xed40)
uint64_t x20 = *gNetwork
NetworkMessage** result = XPooledCalloc(0x18)
*result = arg1
result[1] = 0
result[2] = *(x20 + 0x88)
void* x8_1 = *(x20 + 0x88)
NetworkMessage*** x8_2

if (x8_1 == 0)
    x8_2 = x20 + 0x80
else
    x8_2 = x8_1 + 8

*x8_2 = result
int32_t x8_3 = *(x20 + 0x90)
*(x20 + 0x88) = result
*(x20 + 0x90) = x8_3 + 1
return result
