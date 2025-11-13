// 函数: _Z21NetworkProcessMessageR14NetworkMessage
// 地址: 0xf868b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(NetworkMessage, 0xed68) x20 = arg1 + 0xed68
*x20 = 1
int32_t x8 = *(arg1 + 4)
NetworkMessage& x19 = arg1
int64_t* x0

if (x8 s<= 0x7cf || x8 s<= 0xbb7)
    x0 = *gAppInterface
    (*(*x0 + 0x88))(x0, x19)
else if (x8 s<= 0xf9f)
    VoipProcessMessage(x19)
else if (x8 s<= 0x1387)
    HTTPProcessMessage(x19)
else if (x8 s<= 0xf4627)
    x0 = *gAppInterface
    (*(*x0 + 0x88))(x0, x19)

if (zx.d(*x20) == 0)
    return 

XString::operator=(x19 + 0xed40)
uint64_t x20_1 = *gNetwork
arg1 = XPooledCalloc(0x18)
*arg1 = x19
*(arg1 + 8) = 0
*(arg1 + 0x10) = *(x20_1 + 0x88)
void* x8_5 = *(x20_1 + 0x88)
NetworkMessage** x8_6

if (x8_5 == 0)
    x8_6 = x20_1 + 0x80
else
    x8_6 = x8_5 + 8

*x8_6 = arg1
int32_t x8_7 = *(x20_1 + 0x90)
*(x20_1 + 0x88) = arg1
*(x20_1 + 0x90) = x8_7 + 1
