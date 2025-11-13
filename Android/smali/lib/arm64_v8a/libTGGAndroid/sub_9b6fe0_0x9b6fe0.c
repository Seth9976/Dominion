// 函数: sub_9b6fe0
// 地址: 0x9b6fe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

data_11cd5a0 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("showTimer")

if (x0 == 0)
    (*data_11cd5a0)(&data_11cd5a0, "showTimer")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11cd5a0
    *UI2StateDeclI_counter = x10_1 + 1
    data_11cd5a8 = x11_1
else
    (*data_11cd5a0)(&data_11cd5a0, *(x0 + 0x10))

data_11cd5b8 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("timerString")

if (x0_1 == 0)
    (*data_11cd5b8)(&data_11cd5b8, "timerString")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11cd5b8
    *UI2StateDeclI_counter = x10_3 + 1
    data_11cd5c0 = x11_2
else
    (*data_11cd5b8)(&data_11cd5b8, *(x0_1 + 0x10))

data_11cd5b8 = _vtable_for_UI2StateDeclText + 0x10
data_11cd5d0 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("showTimerOpp")

if (x0_2 == 0)
    (*data_11cd5d0)(&data_11cd5d0, "showTimerOpp")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11cd5d0
    *UI2StateDeclI_counter = x10_5 + 1
    data_11cd5d8 = x11_3
else
    (*data_11cd5d0)(&data_11cd5d0, *(x0_2 + 0x10))

data_11cd5e8 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("timerStringOpp")
int64_t result

if (x0_3 == 0)
    result = (*data_11cd5e8)(&data_11cd5e8, "timerStringOpp")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11cd5e8
    *UI2StateDeclI_counter = x10_7 + 1
    data_11cd5f0 = x11_4
else
    result = (*data_11cd5e8)(&data_11cd5e8, *(x0_3 + 0x10))

data_11cd5e8 = _vtable_for_UI2StateDeclText + 0x10
return result
