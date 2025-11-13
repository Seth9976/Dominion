// 函数: _Z26Bell_ExoticStart_SplitPilev
// 地址: 0xa3661c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_220
int32_t x19

if ((CampaignHasExpansion(0xc) & 1) == 0)
    x19 = 0
    
    if ((CampaignHasExpansion(0x10) & 1) != 0)
    label_a3668c:
        void* x8_1 = &var_220 + (zx.q(x19) << 2)
        x19 |= 0x12
        __builtin_memcpy(x8_1, 
            "\x1b\x10\x00\x00\x1c\x10\x00\x00\x1d\x10\x00\x00\x34\x10\x00\x00\x35\x10\x00\x00\x36\x10\x"
        "00\x00\x2f\x10\x00\x00\x30\x10\x00\x00\x31\x10\x00\x00\x25\x10\x00\x00\x26\x10\x00\x00\x27"
        "10\x00\x00\x2a\x10\x00\x00\x2b\x10\x00\x00\x2c\x10\x00\x00\x20\x10\x00\x00\x21\x10\x00\x00"
        "22\x10\x00\x00", 
            0x48)
else
    x19 = 5
    __builtin_memcpy(&var_220, 
        "\x05\x0c\x00\x00\x11\x0c\x00\x00\x09\x0c\x00\x00\x0c\x0c\x00\x00\x07\x0c\x00\x00", 0x14)
    
    if ((CampaignHasExpansion(0x10) & 1) != 0)
        goto label_a3668c

return CampaignAddExtra(0xdb1, zx.q(*(&var_220 + (sx.q(RandomInt(gCampaignSetup, x19)) << 2))), 
    0xffffffff, 0, 0) __tailcall
