// 函数: sub_a236b8
// 地址: 0xa236b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_a1b9b4()
memset(&data_14f6580, 0, 0xc50)
data_14f6560 = "favor"
data_14f6568 = "Favor"
data_14f6570 = &data_793a18
data_14f6578 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("icon_favor")

if (x0 == 0)
    (*data_14f6578)(&data_14f6578, "icon_favor")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f6578
    *UI2StateDeclI_counter = x10_1 + 1
    data_14f6580 = x11_1
else
    (*data_14f6578)(&data_14f6578, *(x0 + 0x10))

data_14f6590 = 0x1000
data_14f6b98 = "garrison"
data_14f6ba0 = "Garrison token"
data_14f6ba8 = &data_793a18
data_14f6bb0 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("icon_garrison")
int64_t result

if (x0_1 == 0)
    result = (*data_14f6bb0)(&data_14f6bb0, "icon_garrison")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14f6bb0
    *UI2StateDeclI_counter = x10_3 + 1
    data_14f6bb8 = x11_2
else
    result = (*data_14f6bb0)(&data_14f6bb0, *(x0_1 + 0x10))

data_14f6bc8 = 0x1001
return result
