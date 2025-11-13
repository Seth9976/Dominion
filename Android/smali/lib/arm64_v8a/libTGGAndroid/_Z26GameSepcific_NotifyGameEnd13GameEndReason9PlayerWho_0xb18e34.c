// 函数: _Z26GameSepcific_NotifyGameEnd13GameEndReason9PlayerWho
// 地址: 0xb18e34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = 0
int32_t x19 = arg2
int32_t var_30 = 0
NotifyLog(gDomClient + 0x20728, 7, zx.q(x19), 0, nullptr, 0, 0, 0)
int32_t var_28_1 = 0
int32_t var_30_1 = 0
NotifyLog(gDomClient + 0x20728, 9, zx.q(x19), 0, nullptr, 0, zx.q(arg1), 0)
int64_t result = LocalWho()

if (result.d != x19)
    return result

return DomSoundGameMessage(0xffffffff, 5) __tailcall
