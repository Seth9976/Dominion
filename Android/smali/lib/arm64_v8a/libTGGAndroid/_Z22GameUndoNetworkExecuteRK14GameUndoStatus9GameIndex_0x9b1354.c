// 函数: _Z22GameUndoNetworkExecuteRK14GameUndoStatus9GameIndex
// 地址: 0x9b1354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
GameSave* x20_1 = *(GetClient() + 0x5080) + mulu.dp.d(x19 & 0xffff, 0x1338)
int64_t result = GameUndo(x20_1, *(arg1 + 0xc))
int32_t var_50

if (var_50 == 1)
    return GameResumeHandleError(2, zx.q(x19))

int32_t var_44

if (var_44 == 0xffffffff)
    return result

int32_t var_38 = *x20_1
int64_t var_40
int64_t var_30 = var_40
int32_t var_48
int32_t var_28 = var_48
int32_t var_24 = var_44
return NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42b1, 0x18, &var_38)
