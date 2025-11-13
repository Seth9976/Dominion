// 函数: _Z12DomAIInitOneR5DomAIR8GameSaveR7DomGame9PlayerWho18DbGamePlayerTypeAIb
// 地址: 0x9f3f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = arg5
*(arg1 + 8) = arg2
int64_t var_a0 = 0x3f52617c46998800
int64_t var_94 = 0x1e
int32_t var_98 = 0x38d1b717
int64_t var_78 = 0x3f19999a00000000
int64_t var_8c = 0x4080000000000320
char var_7c = 0
int32_t var_84 = 0
int32_t var_80 = 0
int64_t var_64 = 0
int64_t var_6c = 0
int16_t var_a8 = 0
int32_t var_29 = 0
int32_t var_70 = 0x3f800000
int32_t var_a4 = 0x4b
int64_t var_5c = 0x3f19999a
int32_t var_2c = 0
int32_t var_54 = 0
int32_t x19 = arg4

if (*(arg3 + 0xd40) s>= 3)
    var_64.d = 0x3e800000
    var_5c.d = 0

XAsset* x20

if (arg5 == 0)
    int64_t var_8c_2 = 0x50
    var_84.q = 0x460000004b
    var_78.d = 0x3e800000
label_9f40f8:
    MCTS_Init(zx.q(x19), &var_a8)
    AssetPtrFromPath("res/net/dominion.net2", 0x24)
    x20 = AssetPtrFromPath("res/net/dominion_tiny.net2", 0x24)
else
    if (arg5 == 3)
        var_84.q = 0x5000000050
        int64_t var_8c_3 = 0x32
        var_29:1.b = 1
        var_78.d = 0x3e99999a
        int32_t var_2c_1 = 0x14
        goto label_9f40f8
    
    if (arg5 == 1)
        int64_t var_8c_1 = 0x64
        var_84.q = 0x320000003c
        var_78.d = 0x3e800000
    
    MCTS_Init(zx.q(x19), &var_a8)
    x20 = AssetPtrFromPath("res/net/dominion.net2", 0x24)
    AssetPtrFromPath("res/net/dominion_tiny.net2", 0x24)

return LoadWeightsTGG(zx.q(x19), x20)
