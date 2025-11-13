// 函数: _Z23SyncedDataHandleMessageRK18SyncedDataResponse
// 地址: 0x9b3f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *gSyncedData

if (x20 == 0)
    return 

int32_t x8_1 = *(arg1 + 8)
int64_t x23_1 = *arg1
uint64_t x21_1 = (zx.q(x8_1) | zx.q(x8_1 s>> 4)) & zx.q(*(x20 + 0x18))
int32_t* i = *(*(x20 + 0x10) + (x21_1 << 3))
int64_t x22_1 = *(arg1 + 0x10)
SyncedDataResponse const& x19_1 = arg1

for (; i != 0; i = *(i + 0x18))
    if (x8_1 == *i)
        *(i + 8) = x23_1
        *(i + 0x10) = x22_1
        return 

arg1 = XPooledMalloc(0x20)
int32_t x8_2 = *(x19_1 + 8)
*(arg1 + 8) = x23_1
*(arg1 + 0x10) = x22_1
uint64_t x9_2 = x21_1 << 3
*arg1 = x8_2
*(arg1 + 0x18) = *(*(x20 + 0x10) + x9_2)
*(*(x20 + 0x10) + x9_2) = arg1
*(x20 + 0x1c) += 1
