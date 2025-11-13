// 函数: _Z14TriTreeDisposeR7TriTree
// 地址: 0xfa4be8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = NodeDeleteRecursive(arg1)
void** i_1 = *(arg1 + 8)

if (i_1 != 0)
    void** i_2 = *gRTreeGlobals
    void** i
    
    do
        i_1[4] = i_1
        *(gRTreeGlobals + 0x14) -= 1
        *i_1 = i_2
        *gRTreeGlobals = i_1
        i = *(arg1 + 8)
        i_2 = i_1
        i_1 = i
    while (i != 0)

__builtin_memset(arg1, 0, 0x30)
return result
