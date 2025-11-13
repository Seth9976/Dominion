// 函数: _Z18GameAppInputHandleR9InputData
// 地址: 0x9a805c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gClient = gClientStorage
uint64_t result = zx.q(GameClientHandleInput(arg1)) & 1
*gClient = 0
return result
