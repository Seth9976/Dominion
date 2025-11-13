// 函数: _Z26SyncedDataHandleMessageIntRK18SyncedDataResponse
// 地址: 0x9b6a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *(arg1 + 0x10)
int64_t x22 = *arg1
uint64_t x20 = *gSyncedData
int32_t x8 = *(arg1 + 8)
uint64_t x21 = (zx.q(x8) | zx.q(x8 s>> 4)) & zx.q(*(x20 + 0x18))

for (int32_t* i = *(*(x20 + 0x10) + (x21 << 3)); i != 0; i = *(i + 0x18))
    if (x8 == *i)
        *(i + 8) = x23
        *(i + 0x10) = x22
        return SaveProfiles() __tailcall

int32_t* x0 = XPooledMalloc(0x20)
int32_t x8_1 = *(arg1 + 8)
*(x0 + 8) = x23
*(x0 + 0x10) = x22
uint64_t x9_1 = x21 << 3
*x0 = x8_1
*(x0 + 0x18) = *(*(x20 + 0x10) + x9_1)
*(*(x20 + 0x10) + x9_1) = x0
*(x20 + 0x1c) += 1
return SaveProfiles() __tailcall
