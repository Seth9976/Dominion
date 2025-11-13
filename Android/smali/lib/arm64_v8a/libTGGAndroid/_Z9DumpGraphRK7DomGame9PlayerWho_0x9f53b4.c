// 函数: _Z9DumpGraphRK7DomGame9PlayerWho
// 地址: 0x9f53b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

for (int64_t i = 0; i != 0x10000; i += 1)
    for (void* j = *(&data_12f9f30 + (i << 3)); j != 0; j = *(j + 0x18))
        *(*(j + 8) + 0xe5) = 0

sub_9f54c0(*((sx.q(x19) << 3) + 0x14a7240))
data_14a71b8 = 0
FILE* fp = fopen("debug.xdot", "w")
DomGame* x0_1 = fwrite("digraph A {\n", 0xc, 1, fp)

for (int64_t i_1 = 0; i_1 != 0x10000; i_1 += 1)
    void* j_1 = *(&data_12f9f30 + (i_1 << 3))
    
    if (j_1 != 0)
        do
            MCTSNode* x2_1 = *(j_1 + 8)
            
            if (x2_1 != 0 && *(x2_1 + 0xb4) == x19 && zx.d(*(x2_1 + 0xe5)) != 0)
                x0_1 = DumpGraphNode(x0_1, fp, x2_1)
            
            j_1 = *(j_1 + 0x18)
        while (j_1 != 0)

fwrite(0x75db2d, 2, 1, fp)
return fclose(fp) __tailcall
