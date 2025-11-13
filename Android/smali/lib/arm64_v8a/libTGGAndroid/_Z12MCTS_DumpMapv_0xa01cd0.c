// 函数: _Z12MCTS_DumpMapv
// 地址: 0xa01cd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* x0 = fopen("card_meta.tsv", "w")

for (int64_t i = 0; i != 0x2717; i += 1)
    for (int32_t* j = *(&data_13db978 + (i << 3)); j != 0; j = *(j + 0x1b8))
        int32_t x21_1 = *j
        fprintf(x0, "%d\t%s\t%lld\n", zx.q(x21_1), *(DomDefGet(zx.q(x21_1), 0x18) + 0xa0), *(j + 8))

fclose(x0)
return printf("MAX_DOMAI_HINT: %d, MAX_OPTION: %d, MW_MAX: %d\n", 0x3d, 0xe3, 0x1d) __tailcall
