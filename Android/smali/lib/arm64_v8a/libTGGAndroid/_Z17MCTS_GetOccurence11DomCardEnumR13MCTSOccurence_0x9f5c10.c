// 函数: _Z17MCTS_GetOccurence11DomCardEnumR13MCTSOccurence
// 地址: 0x9f5c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* i = *(&data_13db978 + (sx.q(arg1 s% 0x2717) << 3))
int32_t x8 = arg1

for (; i != 0; i = *(i + 0x1b8))
    if (*i == x8)
        goto label_9f5c84

printf("Couldn't lookup %d\n", zx.q(x8))
i = nullptr
label_9f5c84:
return memcpy(arg2, &i[9], 0x194) __tailcall
