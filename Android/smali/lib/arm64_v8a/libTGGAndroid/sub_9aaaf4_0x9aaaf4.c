// 函数: sub_9aaaf4
// 地址: 0x9aaaf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gCardset = 0
*(gCardset + 8) = 0
*(gCardset + 0x10) = 0
*(gCardset + 0x18) = 1
*(gCardset + 0x20) = 0
data_11ca6f0 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("numCardsetCards")

if (x0 == 0)
    (*data_11ca6f0)(&data_11ca6f0, "numCardsetCards")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11ca6f0
    *UI2StateDeclI_counter = x10_1 + 1
    data_11ca6f8 = x11_1
else
    (*data_11ca6f0)(&data_11ca6f0, *(x0 + 0x10))

data_11ca6f0 = _vtable_for_UI2StateDeclInt + 0x10
data_11ca708 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("cardsetShowCounts")

if (x0_1 == 0)
    (*data_11ca708)(&data_11ca708, "cardsetShowCounts")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11ca708
    *UI2StateDeclI_counter = x10_3 + 1
    data_11ca710 = x11_2
else
    (*data_11ca708)(&data_11ca708, *(x0_1 + 0x10))

data_11ca720 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("cardsetCountText")

if (x0_2 == 0)
    (*data_11ca720)(&data_11ca720, "cardsetCountText")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_11ca720
    *UI2StateDeclI_counter = x10_5 + 1
    data_11ca728 = x11_3
else
    (*data_11ca720)(&data_11ca720, *(x0_2 + 0x10))

data_11ca720 = _vtable_for_UI2StateDeclText + 0x10
data_11ca738 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("jumbo")

if (x0_3 != 0)
    return (*data_11ca738)(&data_11ca738, *(x0_3 + 0x10))

int64_t result = (*data_11ca738)(&data_11ca738, "jumbo")
uint32_t x10_7 = *UI2StateDeclI_counter
uint64_t x11_4 = *UI2StateDeclI_head
*UI2StateDeclI_head = &data_11ca738
*UI2StateDeclI_counter = x10_7 + 1
data_11ca740 = x11_4
return result
