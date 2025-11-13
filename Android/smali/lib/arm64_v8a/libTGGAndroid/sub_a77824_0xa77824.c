// 函数: sub_a77824
// 地址: 0xa77824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_a6eb9c()
memset(&data_1657a38, 0, 0x618)
data_1657a18 = "debt"
data_1657a20 = "Debt"
data_1657a28 = &data_793a18
data_1657a30 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("token_debt")
int64_t result

if (x0 == 0)
    result = (*data_1657a30)(&data_1657a30, "token_debt")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_1657a30
    *UI2StateDeclI_counter = x10_1 + 1
    data_1657a38 = x11_1
else
    result = (*data_1657a30)(&data_1657a30, *(x0 + 0x10))

data_1657a48 = 0xc00
return result
