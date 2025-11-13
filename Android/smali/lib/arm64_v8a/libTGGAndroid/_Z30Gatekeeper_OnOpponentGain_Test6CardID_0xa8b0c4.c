// 函数: _Z30Gatekeeper_OnOpponentGain_Test6CardID
// 地址: 0xa8b0c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((SnapshotIsType(4) & 1) == 0 && (SnapshotIsType(2) & 1) == 0)
    return 0

return zx.q(*(*(DomGetContext() + 0x80) + 0x10) s< 1 ? 1 : 0)
