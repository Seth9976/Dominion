// 函数: _Z12FindNodeByIDi
// 地址: 0x9f4efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int64_t i = 0; i != 0x10000; i += 1)
    for (void* j = *(&data_12f9f30 + (i << 3)); j != 0; j = *(j + 0x18))
        if (*(j + 0x10) == arg1)
            return *(j + 8)

return 0
