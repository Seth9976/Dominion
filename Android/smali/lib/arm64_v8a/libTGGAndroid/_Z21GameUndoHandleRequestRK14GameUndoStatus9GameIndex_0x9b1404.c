// 函数: _Z21GameUndoHandleRequestRK14GameUndoStatus9GameIndex
// 地址: 0x9b1404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
void* x0 = GetClient()
int32_t x8 = *(arg1 + 8)
uint64_t x9 = zx.q(x8 - 1)

if (x9.d u> 4)
    pthread_kill(pthread_self(), 6)
    return ReloadGame(XNoReturn()) __tailcall

int64_t x21 = *(x0 + 0x5080)
uint64_t x22 = zx.q(x20) & 0xffff

switch (x9)
    case 0
        void* x9_3 = x21 + x22 * 0x1338
        *(x9_3 + 0x131c) = *arg1
        *(x9_3 + 0x1318) = *(arg1 + 8)
        *(x9_3 + 0x1320) = *(arg1 + 0xc)
        *(x9_3 + 0x1324) = *(arg1 + 0x10)
        *(x9_3 + 0x1328) = *(arg1 + 0x14)
        return x0
    case 1
        void* x8_6 = x21 + x22 * 0x1338
        *(x8_6 + 0x1318) = 2
        *(x8_6 + 0x1324) = *(arg1 + 0x10)
        *(x8_6 + 0x1328) = *(arg1 + 0x14)
        return x0
    case 2
        GameUndoNetworkExecute(arg1, zx.q(x20))
        *(arg1 + 4)
        *(arg1 + 0xc)
        int64_t x0_2 = XTrace("undid to decision %d %d")
        *(x21 + x22 * 0x1338 + 0x1318) = 3
        return x0_2
    case 3, 4
        void* x9_1 = x21 + x22 * 0x1338
        
        if (*(x9_1 + 0x1318) - 1 u<= 1)
            *(x9_1 + 0x1318) = x8
        
        return x0
