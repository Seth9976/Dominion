// 函数: _Z19CompleteNetworkGame9GameIndex
// 地址: 0x9bf50c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
GameClientDismissNetworkGame(arg1, 5)
int32_t* x8 = GetClient() + 0x5068

if (*x8 == 2 && x8[1] == x19)
    void* x0_1 = GetClient()
    *(x0_1 + 0x5040) = x19
    return x0_1

void* x19_1 = *(GetClient() + 0x5080) + mulu.dp.d(x19 & 0xffff, 0x1338)
*(x19_1 + 0x1308) = 1
int64_t x0_3 = Now()
*(x19_1 + 0x1310) = x0_3
return x0_3
