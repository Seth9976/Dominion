// 函数: sub_a13f74
// 地址: 0xa13f74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_a0d1ec()
memset(&data_14c6798, 0, 0x4448)
data_14c6778 = "trash"
data_14c6780 = "Trashing token"
data_14c6788 = &data_7a3db8
data_14c6790 = _vtable_for_UI2StateDecl + 0x10
void* x0 = UI2StateDeclTryLookup("token_trash")

if (x0 == 0)
    (*data_14c6790)(&data_14c6790, "token_trash")
    uint32_t x10_1 = *UI2StateDeclI_counter
    uint64_t x11_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c6790
    *UI2StateDeclI_counter = x10_1 + 1
    data_14c6798 = x11_1
else
    (*data_14c6790)(&data_14c6790, *(x0 + 0x10))

data_14c67a8 = 0xb00
data_14c6868 = 0
data_14c6868.d = 1
data_14c6db0 = "journey"
data_14c6db8 = "Journey token"
data_14c6dc0 = &data_75db43
data_14c67b8 = zx.o(0)
__builtin_memset(&data_14c67c8, 0, 0xa0)
data_14c67b8:4.d = 0
data_14c67c8 = Trash_Token
data_14c6858 = 0
data_14c67b0 = 0x700000006
data_14c6dc8 = _vtable_for_UI2StateDecl + 0x10
void* x0_1 = UI2StateDeclTryLookup("token_journey")

if (x0_1 == 0)
    (*data_14c6dc8)(&data_14c6dc8, "token_journey")
    uint32_t x10_3 = *UI2StateDeclI_counter
    uint64_t x11_2 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c6dc8
    *UI2StateDeclI_counter = x10_3 + 1
    data_14c6dd0 = x11_2
else
    (*data_14c6dc8)(&data_14c6dc8, *(x0_1 + 0x10))

data_14c6de0 = 0xb01
data_14c73e8 = "estate"
data_14c73f0 = "Estate token"
data_14c73f8 = &data_79ba40
data_14c7400 = _vtable_for_UI2StateDecl + 0x10
void* x0_2 = UI2StateDeclTryLookup("token_estate")

if (x0_2 == 0)
    (*data_14c7400)(&data_14c7400, "token_estate")
    uint32_t x10_5 = *UI2StateDeclI_counter
    uint64_t x11_3 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c7400
    *UI2StateDeclI_counter = x10_5 + 1
    data_14c7408 = x11_3
else
    (*data_14c7400)(&data_14c7400, *(x0_2 + 0x10))

data_14c7418 = 0xb02
data_14c7a20 = "plus_coin"
data_14c7a28 = "+{coin_1} token"
data_14c7a30 = &data_77da24
data_14c7a38 = _vtable_for_UI2StateDecl + 0x10
void* x0_3 = UI2StateDeclTryLookup("token_1_coin")

if (x0_3 == 0)
    (*data_14c7a38)(&data_14c7a38, "token_1_coin")
    uint32_t x10_7 = *UI2StateDeclI_counter
    uint64_t x11_4 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c7a38
    *UI2StateDeclI_counter = x10_7 + 1
    data_14c7a40 = x11_4
else
    (*data_14c7a38)(&data_14c7a38, *(x0_3 + 0x10))

data_14c7a50 = 0xb03
data_14c7a60 = zx.o(0)
data_14c7a60:4.d = 2
__builtin_memset(&data_14c7a70, 0, 0x20)
data_14c7b10 = 0
data_14c7a70 = PlusCoin_Token
data_14c7b10.d = 1
data_14c8058 = "plus_card"
data_14c8060 = "+1 Card token"
data_14c8068 = &data_725f26
data_14c7b00 = zx.o(0)
__builtin_memset(&data_14c7a90, 0, 0x78)
data_14c7a58 = 0x700000006
data_14c8070 = _vtable_for_UI2StateDecl + 0x10
void* x0_4 = UI2StateDeclTryLookup("token_1_card")

if (x0_4 == 0)
    (*data_14c8070)(&data_14c8070, "token_1_card")
    uint32_t x10_9 = *UI2StateDeclI_counter
    uint64_t x11_5 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c8070
    *UI2StateDeclI_counter = x10_9 + 1
    data_14c8078 = x11_5
else
    (*data_14c8070)(&data_14c8070, *(x0_4 + 0x10))

data_14c8088 = 0xb04
data_14c8098 = zx.o(0)
data_14c8098:4.d = 2
__builtin_memset(&data_14c80a8, 0, 0x20)
data_14c8148 = 0
data_14c80a8 = PlusCard_Token
data_14c8148.d = 1
data_14c8690 = "plus_action"
data_14c8698 = "+1 Action token"
data_14c86a0 = &data_74ab58
data_14c8138 = zx.o(0)
__builtin_memset(&data_14c80c8, 0, 0x78)
data_14c8090 = 0x700000006
data_14c86a8 = _vtable_for_UI2StateDecl + 0x10
void* x0_5 = UI2StateDeclTryLookup("token_1_action")

if (x0_5 == 0)
    (*data_14c86a8)(&data_14c86a8, "token_1_action")
    uint32_t x10_11 = *UI2StateDeclI_counter
    uint64_t x11_6 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c86a8
    *UI2StateDeclI_counter = x10_11 + 1
    data_14c86b0 = x11_6
else
    (*data_14c86a8)(&data_14c86a8, *(x0_5 + 0x10))

data_14c86c0 = 0xb05
data_14c86d0 = zx.o(0)
data_14c86d0:4.d = 2
__builtin_memset(&data_14c86e0, 0, 0x20)
data_14c8780 = 0
data_14c86e0 = PlusAction_Token
data_14c8780.d = 1
data_14c8cc8 = "plus_buy"
data_14c8cd0 = "+1 Buy token"
data_14c8cd8 = &data_78aff3
data_14c8770 = zx.o(0)
__builtin_memset(&data_14c8700, 0, 0x78)
data_14c86c8 = 0x700000006
data_14c8ce0 = _vtable_for_UI2StateDecl + 0x10
void* x0_6 = UI2StateDeclTryLookup("token_1_buy")

if (x0_6 == 0)
    (*data_14c8ce0)(&data_14c8ce0, "token_1_buy")
    uint32_t x10_13 = *UI2StateDeclI_counter
    uint64_t x11_7 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c8ce0
    *UI2StateDeclI_counter = x10_13 + 1
    data_14c8ce8 = x11_7
else
    (*data_14c8ce0)(&data_14c8ce0, *(x0_6 + 0x10))

data_14c8cf8 = 0xb06
data_14c8d08 = zx.o(0)
data_14c8d08:4.d = 2
__builtin_memset(&data_14c8d18, 0, 0x20)
data_14c8db8 = 0
data_14c8d18 = PlusBuy_Token
data_14c8db8.d = 1
data_14c9300 = "minus_cost"
data_14c9308 = "-2 Cost token"
data_14c9310 = &data_7364e2
data_14c8da8 = zx.o(0)
__builtin_memset(&data_14c8d38, 0, 0x78)
data_14c8d00 = 0x700000006
data_14c9318 = _vtable_for_UI2StateDecl + 0x10
void* x0_7 = UI2StateDeclTryLookup("token_minus_2_cost")

if (x0_7 == 0)
    (*data_14c9318)(&data_14c9318, "token_minus_2_cost")
    uint32_t x10_15 = *UI2StateDeclI_counter
    uint64_t x11_8 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c9318
    *UI2StateDeclI_counter = x10_15 + 1
    data_14c9320 = x11_8
else
    (*data_14c9318)(&data_14c9318, *(x0_7 + 0x10))

data_14c9330 = 0xb07
data_14c9938 = "minus_card"
data_14c9940 = "-1 Card token"
data_14c9948 = &data_76a9b3
data_14c9950 = _vtable_for_UI2StateDecl + 0x10
void* x0_8 = UI2StateDeclTryLookup("token_minus_1_card")

if (x0_8 == 0)
    (*data_14c9950)(&data_14c9950, "token_minus_1_card")
    uint32_t x10_17 = *UI2StateDeclI_counter
    uint64_t x11_9 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c9950
    *UI2StateDeclI_counter = x10_17 + 1
    data_14c9958 = x11_9
else
    (*data_14c9950)(&data_14c9950, *(x0_8 + 0x10))

data_14c9968 = 0xb08
data_14c9f70 = "minus_coin"
data_14c9f78 = "-{coin_1} token"
data_14c9f80 = &data_7364fc
data_14c9f88 = _vtable_for_UI2StateDecl + 0x10
void* x0_9 = UI2StateDeclTryLookup("token_minus_1_coin")

if (x0_9 == 0)
    (*data_14c9f88)(&data_14c9f88, "token_minus_1_coin")
    uint32_t x10_19 = *UI2StateDeclI_counter
    uint64_t x11_10 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14c9f88
    *UI2StateDeclI_counter = x10_19 + 1
    data_14c9f90 = x11_10
else
    (*data_14c9f88)(&data_14c9f88, *(x0_9 + 0x10))

data_14c9fa0 = 0xb09
data_14ca5a8 = "trash"
data_14ca5b0 = "Trashing token"
data_14ca5b8 = &data_7a3db8
data_14ca5c0 = _vtable_for_UI2StateDecl + 0x10
void* x0_10 = UI2StateDeclTryLookup("token_trash")
int64_t result

if (x0_10 == 0)
    result = (*data_14ca5c0)(&data_14ca5c0, "token_trash")
    uint32_t x10_22 = *UI2StateDeclI_counter
    uint64_t x11_11 = *UI2StateDeclI_head
    *UI2StateDeclI_head = &data_14ca5c0
    *UI2StateDeclI_counter = x10_22 + 1
    data_14ca5c8 = x11_11
else
    result = (*data_14ca5c0)(&data_14ca5c0, *(x0_10 + 0x10))

__builtin_memset(&data_14ca5e8, 0, 0x20)
data_14ca5f8 = Trash_Token
data_14ca5d8 = 0xb0a
__builtin_memset(&data_14ca688, 0, 0x18)
__builtin_memset(&data_14ca608, 0, 0x88)
data_14ca5e0 = 0x700000006
data_14ca5e8:4.d = 1
data_14ca698 = 1
return result
