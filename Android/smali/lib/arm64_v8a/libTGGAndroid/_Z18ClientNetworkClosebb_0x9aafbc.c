// 函数: _Z18ClientNetworkClosebb
// 地址: 0x9aafbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int64_t result = NetworkCloseConnection(zx.q(*(x0 + 0x14)))
*(x0 + 0x18) = 0
uint64_t x8 = zx.q(*(x0 + 0x5088))

if (x8.d != 0)
    void* x23_1 = *(x0 + 0x5080)
    int64_t x8_1 = x23_1 + x8 * 0x1338
    
    while (true)
        if (zx.d(*(x23_1 + 0x1332)) != 0)
            XString::~XString()
            XString::~XString()
            result = XString::~XString()
            int32_t x9_2 = *(x0 + 0x5090)
            *(x0 + 0x5090) = zx.d(*(x23_1 + 0x1330))
            *(x23_1 + 0x1330) = x9_2
            uint64_t x9_3 = zx.q(*(x0 + 0x5088))
            x23_1 += 0x1338
            *(x0 + 0x5094) -= 1
            x8_1 = *(x0 + 0x5080) + x9_3 * 0x1338
            
            if (x8_1 u<= x23_1)
                break
        else
            x23_1 += 0x1338
            
            if (x23_1 u>= x8_1)
                break

*(x0 + 0x5088) = 0
*(x0 + 0x5090) = 0

if ((arg1.d & 1) == 0)
    return result

return DisconnectReturnToTitle(arg2 & 1) __tailcall
