// 函数: vorbis_staticbook_destroy
// 地址: 0x108429c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x40) == 0)
    return 

int64_t x0 = *(arg1 + 0x38)

if (x0 != 0)
    free(x0)

int64_t x0_1 = *(arg1 + 0x10)

if (x0_1 != 0)
    free(x0_1)

return free(arg1) __tailcall
