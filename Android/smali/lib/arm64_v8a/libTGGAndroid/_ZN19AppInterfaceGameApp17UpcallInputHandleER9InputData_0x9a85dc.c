// 函数: _ZN19AppInterfaceGameApp17UpcallInputHandleER9InputData
// 地址: 0x9a85dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gClient = gClientStorage
InputData* entry_x1
uint64_t result = zx.q(GameClientHandleInput(entry_x1)) & 1
*gClient = 0
return result
