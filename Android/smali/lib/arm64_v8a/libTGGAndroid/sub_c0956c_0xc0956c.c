// 函数: sub_c0956c
// 地址: 0xc0956c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

data_18c7338 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("RaceForTheGalaxy")

if (x0 == 0)
    (*data_18c7338)(&data_18c7338, "RaceForTheGalaxy")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_18c7338
    *UI2StateDeclI_counter = x10_1 + 1
    data_18c7340 = x11_1
else
    (*data_18c7338)(&data_18c7338, *(x0 + 0x10))

data_18c7350 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("RollForTheGalaxy")

if (x0_1 == 0)
    (*data_18c7350)(&data_18c7350, "RollForTheGalaxy")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_18c7350
    *UI2StateDeclI_counter = x10_3 + 1
    data_18c7358 = x11_2
else
    (*data_18c7350)(&data_18c7350, *(x0_1 + 0x10))

data_18c7368 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("ShardsOfInfinity")

if (x0_2 != 0)
    return (*data_18c7368)(&data_18c7368, *(x0_2 + 0x10))

int64_t result = (*data_18c7368)(&data_18c7368, "ShardsOfInfinity")
uint32_t x10_5 = *UI2StateDeclI_counter
uint64_t x11_3 = *UI2StateDeclI_head
*UI2StateDeclI_head = &data_18c7368
*UI2StateDeclI_counter = x10_5 + 1
data_18c7370 = x11_3
return result
