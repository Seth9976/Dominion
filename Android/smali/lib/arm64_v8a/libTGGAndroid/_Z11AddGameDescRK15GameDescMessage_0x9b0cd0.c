// 函数: _Z11AddGameDescRK15GameDescMessage
// 地址: 0x9b0cd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x9 = zx.q(*(x0 + 0x5088))
void* i_1 = *(x0 + 0x5080)
int64_t var_1210
int128_t var_1208
int128_t var_11f8
int64_t var_11e8
void var_11c8
int64_t result

if (x9.d != 0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            if (i != 0xffffffff)
                int64_t x12_2 = i_1 + x9 * 0x1338
                
                do
                    if (*i == *arg1)
                        int128_t v0_2
                        int128_t v1_2
                        v0_2, v1_2 = GameMessageToGame(arg1)
                        *(i + 8) = var_1210
                        *(i + 0x30) = var_11e8
                        *(i + 0x10) = var_1208
                        *(i + 0x20) = var_11f8
                        XString::operator=(i + 0x38)
                        XString::operator=(i + 0x40)
                        XString::operator=(i + 0x48)
                        memcpy(i + 0x50, &var_11c8, 0x1168)
                        XString::~XString()
                        XString::~XString()
                        result = XString::~XString()
                        *(i + 0x1300) = *(arg1 + 4)
                        goto label_9b0f60
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x1338
                    
                    if (i u>= x12_2)
                        break
                    
                    while (zx.d(*(i + 0x1332)) == 0)
                        i += 0x1338
                        
                        if (i u>= x12_2)
                            goto label_9b0d90
                while (i != 0xffffffff)
            
            break
        
        i += 0x1338
    while (i u< i_1 + x9 * 0x1338)

label_9b0d90:

if (*(x0 + 0x5094) == 0x60)
    return XTrace("reached total network game count limit, dropping game desc") __tailcall

uint64_t x24_1 = zx.q(*(x0 + 0x5090))
int32_t x10_4

if (x24_1.d != x9.d)
    x10_4 = *(i_1 + x24_1 * 0x1338 + 0x1330)
    x9 = x24_1
else
    x10_4 = x9.d + 1
    *(x0 + 0x5088) = x10_4

*(x0 + 0x5090) = x10_4
int32_t* x20_1 = i_1 + x9 * 0x1338
memset(x20_1, 0, 0x1330)
XString::XString()
XString::XString()
XString::XString()
x20_1[0x4cc] = x24_1.d | *(x0 + 0x5098) << 0x10
int32_t x8_3 = *(x0 + 0x5098)
int32_t x8_4

if (x8_3 == 0xffff)
    x8_4 = 1
else
    x8_4 = x8_3 + 1

*(x0 + 0x5094) += 1
*(x0 + 0x5098) = x8_4
*x20_1 = *arg1
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = GameMessageToGame(arg1)
*(x20_1 + 8) = var_1210
*(x20_1 + 0x30) = var_11e8
*(x20_1 + 0x10) = var_1208
*(x20_1 + 0x20) = var_11f8
XString::operator=(&x20_1[0xe])
XString::operator=(&x20_1[0x10])
XString::operator=(&x20_1[0x12])
memcpy(&x20_1[0x14], &var_11c8, 0x1168)
XString::~XString()
XString::~XString()
XString::~XString()
result = CountMyNetworkGames()

if (result.d s> 0x3f || *(x0 + 0x5094) - result.d s>= 0x20)
    XTrace("reached specific network game count limit, dropping game desc %d %d")
    XString::~XString()
    XString::~XString()
    result = XString::~XString()
    int32_t x9_5 = *(x0 + 0x5090)
    *(x0 + 0x5090) = zx.d(x20_1[0x4cc].w)
    x20_1[0x4cc] = x9_5
    *(x0 + 0x5094) -= 1

label_9b0f60:
return result
