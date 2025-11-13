// 函数: sub_ac0c88
// 地址: 0xac0c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_abb614()
memset(&data_1724a20, 0, 0xc50)
data_1724a00 = "villager"
data_1724a08 = "Villagers"
data_1724a10 = &data_78781b
data_1724a18 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("icon_villagers")

if (x0 == 0)
    (*data_1724a18)(&data_1724a18, "icon_villagers")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1724a18
    *UI2StateDeclI_counter = x10_1 + 1
    data_1724a20 = x11_1
else
    (*data_1724a18)(&data_1724a18, *(x0 + 0x10))

data_1724a30 = 0xe00
data_1725038 = "project_cube"
data_1725040 = "Project Cube"
data_1725048 = &data_75ee31
data_1725050 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("token_project_cube")
int64_t result

if (x0_1 == 0)
    result = (*data_1725050)(&data_1725050, "token_project_cube")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1725050
    *UI2StateDeclI_counter = x10_3 + 1
    data_1725058 = x11_2
else
    result = (*data_1725050)(&data_1725050, *(x0_1 + 0x10))

data_1725068 = 0xe01
return result
