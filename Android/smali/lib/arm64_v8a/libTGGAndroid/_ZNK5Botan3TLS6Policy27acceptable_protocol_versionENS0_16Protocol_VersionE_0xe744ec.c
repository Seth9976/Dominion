// 函数: _ZNK5Botan3TLS6Policy27acceptable_protocol_versionENS0_16Protocol_VersionE
// 地址: 0xe744ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t entry_x1
uint32_t x8 = zx.d(entry_x1)

if (x8 == 0xfefd)
    if (((*(*arg1 + 0xa8))() & 1) != 0)
        return 1
else if (x8 == 0x303 && ((*(*arg1 + 0x98))() & 1) != 0)
    return 1

return 0
