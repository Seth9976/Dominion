// 函数: sub_aca584
// 地址: 0xaca584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_ac4bfc()
memset(&data_1742f10, 0, 0x618)
data_1742ef0 = &data_79be24
data_1742ef8 = &data_747713
data_1742f00 = &data_793a18
data_1742f08 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("token_sun")
int64_t result

if (x0 == 0)
    result = (*data_1742f08)(&data_1742f08, "token_sun")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1742f08
    *UI2StateDeclI_counter = x10_1 + 1
    data_1742f10 = x11_1
else
    result = (*data_1742f08)(&data_1742f08, *(x0 + 0x10))

data_1742f20 = 0x1200
return result
